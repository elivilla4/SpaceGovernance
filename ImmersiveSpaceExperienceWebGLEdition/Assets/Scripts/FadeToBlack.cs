/// <summary>
/// Part of Immersive Space Governance Project
/// Controls fade to black at end of experience.
/// Not implemented in the scene as of 8/23/21
/// 
/// </summary>

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FadeToBlack : MonoBehaviour
{
    public Image blackImage;
    private Color imageColor;
    public GameObject text;

    public float fadeStartTime = 30f;
    public float fadeDuration = 5f;

    private bool fadingOut;
    private float startTime;
    private float endTime;
    

    // Start is called before the first frame update
    void Start()
    {
        imageColor = blackImage.color;
        imageColor.a = 0;
        blackImage.color = imageColor;
        text.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (fadingOut) {
            imageColor.a = (Time.time - startTime) / (endTime - startTime);
            if (imageColor.a > 1) {
                imageColor.a = 1;
                fadingOut = false;
            }
            blackImage.color = imageColor;
        }
    }

    public IEnumerator Fade(float timeToFade) {
        yield return new WaitForSeconds(timeToFade);
        StartFade();
        StartCoroutine(ShowText());
    }

    public IEnumerator ShowText() {
        yield return new WaitForSeconds(fadeDuration);
        text.SetActive(true);
    }

    void StartFade() {
        fadingOut = true;
        startTime = Time.time;
        endTime = startTime + fadeDuration;
    }
}

- One shot layer leverages &tog because &sl won't allow for shortcuts, i.e. CMD + n
- NUM_APP_LOWER_COPY exist because otherwise CMD/CTRL -> num app doesn't work because &mo takes layer position into consideration. The problem doesn't exist for sym layer because it is allowed to press i.e. CMD+ALT+V. It is used with tri layer combo, because NUM_APP keys toggles NUM_APP layer.
- For the ideal setup, change the following line in zmk behaviour (app/src/behaviors/behavior_caps_word.c):
```c
 //From
 if (!caps_word_is_alpha(ev->keycode) && !caps_word_is_numeric(ev->keycode) &&
 //To
 if (!caps_word_is_alpha(ev->keycode) &&
```
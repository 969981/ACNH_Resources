
void FUN_03f38cc8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x160));
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x160));
  *(undefined8 *)(param_1 + 0x110) = param_2;
  *(undefined1 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x118) = param_3;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = param_6;
  *(undefined4 *)(param_1 + 0x1a8) = param_7;
  *(undefined4 *)(param_1 + 0x1ac) = param_8;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x120) = param_4;
  *(undefined8 *)(param_1 + 0x128) = param_5;
  *(undefined8 *)(param_1 + 0x130) = 0x20000;
  *(undefined8 *)(param_1 + 0x138) = 0;
  return;
}



void FUN_015f08b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_049b0438;
  param_1[0xf509b] = &PTR_LAB_04ba92f0;
  if (*(int *)(param_1 + 0xf50a3) != 7) {
    if (param_1[0xf509f] != 0) {
      FUN_03f42ca4(param_1[0xf509f],param_1 + 0xf509b,1);
    }
    param_1[0xf509e] = 0;
    param_1[0xf509f] = 0;
    param_1[0xf50a1] = 0;
    param_1[0xf50a2] = 0;
    *(undefined4 *)(param_1 + 0xf50a3) = 7;
  }
  FUN_038e1c80(param_1 + 0xf50a6);
  param_1[0xf5096] = &PTR_FUN_049b4b10;
  if ((long *)param_1[0xf5097] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf5097] + 8))();
  }
  param_1[0xf5097] = 0;
  FUN_038e1a84(param_1 + 0xf4c8b);
  FUN_038e1a84(param_1 + 0xf4a81);
  FUN_038e1a84(param_1 + 0xf4877);
  FUN_038e1a84(param_1 + 0xf466d);
  FUN_038e1a84(param_1 + 0xf4463);
  FUN_038e1a84(param_1 + 0xf4259);
  FUN_038e1a84(param_1 + 7);
  *param_1 = &PTR_FUN_049ba290;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}


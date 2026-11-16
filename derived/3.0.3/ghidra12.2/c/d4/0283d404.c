
void FUN_0283d404(long param_1,ulong *param_2)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    nn::os::WaitLightEvent((LightEventType *)(*(long *)(param_1 + 8) + 0x20));
  }
  if ((DAT_055a1b78 == 0) ||
     (*(char *)(DAT_055a1b78 + 0x3c) == '\0' || *(char *)(DAT_055a1b78 + 0x3d) == '\0')) {
    if ((*param_2 & 0x1180) == 0x80) {
      *param_2 = *param_2 | 0x80000;
    }
    uVar1 = FUN_0283c2a8(param_2);
    if ((uVar1 & 1) != 0) {
      *(ulong **)(param_1 + 0x10) = param_2;
      FUN_0283d4c4(param_1);
      return;
    }
  }
  else {
    if ((int)param_2[1] == 0) {
      *(undefined4 *)(param_2 + 1) = 7;
    }
    *(uint *)((long)param_2 + 0x54) = *(uint *)((long)param_2 + 0x54) | 1;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(*(long *)(param_1 + 8) + 0x20));
  return;
}


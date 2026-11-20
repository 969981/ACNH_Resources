
void FUN_03d5b0d4(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if ((int)param_1[9] == 1) {
    *(undefined4 *)(param_1 + 9) = 2;
    lVar3 = nn::os::GetTlsValue(DAT_05ae7898);
    if (lVar3 == 0) {
      iVar2 = nn::os::GetCurrentCoreNumber();
      lVar3 = *param_1;
    }
    else {
      iVar2 = (int)lVar3 + -1;
      lVar3 = *param_1;
    }
    if (((lVar3 != 0) && (iVar2 != 0)) && (*(char *)(lVar3 + 0x104) != '\0')) {
      *(uint *)((long)param_1 + 0x854) = *(uint *)((long)param_1 + 0x854) | 1;
    }
    if (((param_1[1] != 0) && (iVar2 != 1)) && (*(char *)(param_1[1] + 0x104) != '\0')) {
      *(uint *)((long)param_1 + 0x854) = *(uint *)((long)param_1 + 0x854) | 2;
    }
    if (((param_1[2] != 0) && (iVar2 != 2)) && (*(char *)(param_1[2] + 0x104) != '\0')) {
      *(uint *)((long)param_1 + 0x854) = *(uint *)((long)param_1 + 0x854) | 4;
    }
    uVar1 = *(uint *)((long)param_1 + 0x854);
    *(uint *)(param_1 + 0x10b) = uVar1;
    DataMemoryBarrier(2,3);
    if ((uVar1 & 1) != 0) {
      nn::os::SignalLightEvent((LightEventType *)(*param_1 + 0x160));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      nn::os::SignalLightEvent((LightEventType *)(param_1[1] + 0x160));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      nn::os::SignalLightEvent((LightEventType *)(param_1[2] + 0x160));
      return;
    }
  }
  return;
}


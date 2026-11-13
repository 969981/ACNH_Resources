
bool FUN_00db1cd4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 local_34;
  
  lVar5 = *(long *)PTR_DAT_04bb46a8;
  if (lVar5 != 0) {
    local_34 = 0;
    uVar1 = FUN_00db2174(&local_34,param_1 + 0xd8);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_026839e0(local_34);
      nn::os::LockMutex((MutexType *)(lVar5 + 0x20));
      uVar4 = 7;
      if (*(int *)(lVar5 + 0x40) == 0 && *(char *)(lVar5 + 0x44) == '\0') {
        uVar1 = lVar2 + 0x3ffffffU & 0xfffffffffc000000;
        uVar1 = nn::fs::ExtendDeviceSaveData(uVar1,uVar1);
        uVar3 = 2;
        if (0xf < ((uint)(uVar1 >> 9) & 0x1ffe) - 0x1e || ((uint)uVar1 & 0x1ff) != 2) {
          uVar3 = 7;
        }
        uVar4 = 1;
        if ((uint)uVar1 != 0) {
          uVar4 = uVar3;
        }
      }
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
      goto LAB_00db1d90;
    }
  }
  uVar4 = 7;
LAB_00db1d90:
  *(undefined4 *)(param_1 + 0x1b4) = uVar4;
  *(undefined1 *)(param_1 + 0x188) = 1;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x178));
  return *(int *)(param_1 + 0x1b4) == 1;
}


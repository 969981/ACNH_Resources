
void FUN_01e24230(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_44;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa8));
  piVar1 = (int *)(param_1 + 0x78);
  uVar3 = nn::nfp::ListDevices(*(DeviceHandle **)(param_1 + 0x70),piVar1,*(int *)(param_1 + 0x68));
  *(undefined2 *)(param_1 + 0x17e) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (uVar3 == 0) {
    *(undefined1 *)(param_1 + 0x180) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x17f) = 1;
    if (*(char *)(param_1 + 0x180) == '\0') {
      uVar5 = nn::os::GetSystemTick();
      *(undefined8 *)(param_1 + 0x188) = uVar5;
      *(undefined1 *)(param_1 + 0x180) = 1;
    }
    if ((uVar3 & 0x3fffff) == 0xa073) {
      *(undefined1 *)(param_1 + 0x17e) = 1;
    }
  }
  if (0 < *piVar1) {
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      if (*(uint *)(param_1 + 0x68) <= uVar3) {
        uVar2 = 0;
      }
      iVar4 = nn::nfp::GetNpadId(&local_44,
                                 (DeviceHandle *)(*(long *)(param_1 + 0x70) + (ulong)uVar2 * 8));
      if (iVar4 == 0) {
        uVar2 = 0x100;
        if (local_44 != 0x20) {
          uVar2 = 1 << (ulong)(local_44 & 0x1f);
        }
        *(uint *)(param_1 + 0x7c) = uVar2 | *(uint *)(param_1 + 0x7c);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *piVar1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa8));
  return;
}



void FUN_0283e2d0(long param_1,ulong *param_2)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  
  if (*(long *)(param_1 + 8) != 0) {
    nn::os::WaitLightEvent((LightEventType *)(*(long *)(param_1 + 8) + 0x20));
  }
  if ((DAT_055a1b78 == 0) ||
     (*(char *)(DAT_055a1b78 + 0x3c) == '\0' || *(char *)(DAT_055a1b78 + 0x3d) == '\0')) {
    if ((*param_2 & 0x1180) == 0x80) {
      *param_2 = *param_2 | 0x80000;
    }
    uVar6 = FUN_0283c2a8(param_2);
    if ((uVar6 & 1) != 0) {
      *(ulong **)(param_1 + 0x10) = param_2;
      lVar5 = DAT_055a0ff0;
      if (DAT_055a0ff0 == 0) {
        return;
      }
      pMVar1 = (MutexType *)(DAT_055a0ff0 + 0x20);
      nn::os::LockMutex(pMVar1);
      iVar3 = *(int *)(lVar5 + 0x50);
      iVar4 = *(int *)(lVar5 + 0x48);
      if (iVar3 < iVar4) {
        *(int *)(lVar5 + 0x50) = iVar3 + 1;
        iVar3 = *(int *)(lVar5 + 0x4c) + iVar3;
        iVar2 = 0;
        if (iVar4 <= iVar3) {
          iVar2 = iVar4;
        }
        puVar7 = (undefined4 *)(*(long *)(lVar5 + 0x40) + (long)(iVar3 - iVar2) * 0x38);
        *puVar7 = 1;
        *(undefined8 *)(puVar7 + 6) = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
        *(long *)(puVar7 + 2) = param_1 + 0x18;
        *(undefined8 *)(puVar7 + 4) = 0;
        *(char **)(puVar7 + 0xc) = "SaveProc";
      }
      nn::os::UnlockMutex(pMVar1);
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


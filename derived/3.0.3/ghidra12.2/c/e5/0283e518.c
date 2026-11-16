
void FUN_0283e518(long param_1,long *param_2)

{
  MutexType *pMVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  
  *(long **)(param_1 + 0x60) = param_2;
  uVar5 = (**(code **)(*param_2 + 0x40))(param_2);
  if (((uVar5 & 1) != 0) && (*(long *)(param_1 + 8) != 0)) {
    nn::os::WaitLightEvent((LightEventType *)(*(long *)(param_1 + 8) + 0x20));
  }
  lVar7 = DAT_055a0ff0;
  if ((DAT_055a1b78 == 0) ||
     (*(char *)(DAT_055a1b78 + 0x3c) == '\0' || *(char *)(DAT_055a1b78 + 0x3d) == '\0')) {
    if (DAT_055a0ff0 != 0) {
      pMVar1 = (MutexType *)(DAT_055a0ff0 + 0x20);
      nn::os::LockMutex(pMVar1);
      iVar3 = *(int *)(lVar7 + 0x50);
      iVar4 = *(int *)(lVar7 + 0x48);
      if (iVar3 < iVar4) {
        *(int *)(lVar7 + 0x50) = iVar3 + 1;
        iVar3 = *(int *)(lVar7 + 0x4c) + iVar3;
        iVar2 = 0;
        if (iVar4 <= iVar3) {
          iVar2 = iVar4;
        }
        puVar6 = (undefined4 *)(*(long *)(lVar7 + 0x40) + (long)(iVar3 - iVar2) * 0x38);
        *puVar6 = 1;
        *(undefined8 *)(puVar6 + 6) = 0;
        *(undefined8 *)(puVar6 + 8) = 0;
        *(long *)(puVar6 + 2) = param_1 + 0x40;
        *(undefined8 *)(puVar6 + 4) = 0;
        *(char **)(puVar6 + 0xc) = "SaveProc";
      }
      nn::os::UnlockMutex(pMVar1);
      return;
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x60);
    if (*(int *)(lVar7 + 0xc) == 0) {
      *(undefined4 *)(lVar7 + 0xc) = 7;
    }
    *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | 1;
    if (((*(long **)(param_1 + 0x60) != (long *)0x0) &&
        (uVar5 = (**(code **)(**(long **)(param_1 + 0x60) + 0x40))(), (uVar5 & 1) != 0)) &&
       (*(long *)(param_1 + 8) != 0)) {
      nn::os::SignalLightEvent((LightEventType *)(*(long *)(param_1 + 8) + 0x20));
      return;
    }
  }
  return;
}



void FUN_0327f6b0(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  
  param_1[7] = 0;
  *param_1 = &PTR_FUN_04b172f0;
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  lVar6 = DAT_05ae78f0;
  puVar5 = PTR_DAT_04bb2698;
  pvVar8 = (void *)param_1[5];
  if (pvVar8 != (void *)0x0) {
    if (*(short *)((long)pvVar8 + 0xda) != -1) {
      pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
      nn::os::LockMutex(pMVar1);
      uVar4 = (int)*(short *)((long)pvVar8 + 0xda) - (uint)*(ushort *)(lVar6 + 0x5c0);
      if (*(uint *)(lVar6 + 0x5a0) <= uVar4) {
        uVar4 = 0;
      }
      lVar2 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar4 * 0x80;
      sVar3 = *(short *)(lVar2 + 0x76) + -1;
      *(short *)(lVar2 + 0x76) = sVar3;
      if (sVar3 == 0) {
        *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex(pMVar1);
      *(undefined2 *)((long)pvVar8 + 0xda) = 0xffff;
    }
    FUN_038fd0e0((long)pvVar8 + 0x50);
    lVar6 = *(long *)puVar5;
    if (lVar6 == 0) {
      free(pvVar8);
      pvVar8 = (void *)param_1[4];
      goto joined_r0x0327f7f0;
    }
    plVar7 = (long *)FUN_038cb610(lVar6,pvVar8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
    }
  }
  pvVar8 = (void *)param_1[4];
joined_r0x0327f7f0:
  if (pvVar8 != (void *)0x0) {
    FUN_038fd0e0((long)pvVar8 + 0x50);
    lVar6 = *(long *)puVar5;
    if (lVar6 == 0) {
      free(pvVar8);
      return;
    }
    plVar7 = (long *)FUN_038cb610(lVar6,pvVar8);
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0327f7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      return;
    }
  }
  return;
}


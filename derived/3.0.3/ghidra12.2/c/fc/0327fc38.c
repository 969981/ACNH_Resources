
/* WARNING: Removing unreachable block (ram,0x0327fc88) */
/* WARNING: Removing unreachable block (ram,0x0327fc68) */
/* WARNING: Removing unreachable block (ram,0x0327fca0) */

void FUN_0327fc38(long param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  plVar5 = (long *)(param_1 + 0x10);
  if (*plVar5 != 0) {
    if (*plVar5 != 0) {
      (**(code **)(*(long *)*plVar5 + 0x38))((long *)*plVar5,*(undefined8 *)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *plVar5 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  pvVar7 = *(void **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar6 = DAT_05ae78f0;
  if (pvVar7 != (void *)0x0) {
    if (*(short *)((long)pvVar7 + 0xda) != -1) {
      pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
      nn::os::LockMutex(pMVar1);
      uVar4 = (int)*(short *)((long)pvVar7 + 0xda) - (uint)*(ushort *)(lVar6 + 0x5c0);
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
      *(undefined2 *)((long)pvVar7 + 0xda) = 0xffff;
    }
    FUN_038fd0e0((long)pvVar7 + 0x50);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
  }
  pvVar7 = *(void **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_038fd0e0((long)pvVar7 + 0x50);
    if (DAT_05ae7600 == 0) {
      free(pvVar7);
      lVar6 = *(long *)(param_1 + 0x30);
      goto joined_r0x0327fdbc;
    }
    plVar5 = (long *)FUN_038cb610(DAT_05ae7600,pvVar7);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
    }
  }
  lVar6 = *(long *)(param_1 + 0x30);
joined_r0x0327fdbc:
  if (lVar6 != 0) {
    FUN_038f4ad0();
    plVar5 = *(long **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


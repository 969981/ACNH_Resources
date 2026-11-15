
/* WARNING: Removing unreachable block (ram,0x01dfcc10) */

void FUN_01dfc530(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined *local_50;
  char *pcStack_48;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x288) != 0) {
    if (0 < *(int *)(param_1 + 0x280)) {
      lVar4 = 0;
      puVar7 = *(undefined8 **)(param_1 + 0x290);
      do {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x288) + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *puVar5 = puVar7;
        *(undefined8 **)(param_1 + 0x290) = puVar5;
        puVar7 = puVar5;
      } while (lVar4 < *(int *)(param_1 + 0x280));
    }
    pvVar6 = *(void **)(param_1 + 0x298);
    *(undefined4 *)(param_1 + 0x280) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x29c) = 0;
    *(undefined8 *)(param_1 + 0x294) = 0;
    *(undefined8 *)(param_1 + 0x28c) = 0;
    *(undefined8 *)(param_1 + 0x284) = 0;
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    if (0 < *(int *)(param_1 + 0x140)) {
      lVar4 = 0;
      do {
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x148) + lVar4 * 8);
        FUN_01dfaf44(puVar7);
        lVar4 = lVar4 + 1;
        *puVar7 = *(undefined8 *)(param_1 + 0x150);
        *(undefined8 **)(param_1 + 0x150) = puVar7;
      } while (lVar4 < *(int *)(param_1 + 0x140));
      *(undefined4 *)(param_1 + 0x140) = 0;
      if (*(long *)(param_1 + 0x148) == 0) goto LAB_01dfc688;
    }
    pvVar6 = *(void **)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x140) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(undefined8 *)(param_1 + 0x154) = 0;
    *(undefined8 *)(param_1 + 0x14c) = 0;
    *(undefined8 *)(param_1 + 0x144) = 0;
  }
LAB_01dfc688:
  pvVar6 = *(void **)(param_1 + 0x178);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x188);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x198);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x1a8);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  *(undefined8 *)(param_1 + 0x164) = 0xffffffffffffffff;
  if (*(long *)(param_1 + 0x1b8) != 0) {
    if (0 < *(int *)(param_1 + 0x1b0)) {
      lVar4 = 0;
      do {
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x1b8) + lVar4 * 8);
        FUN_01dfaf44(puVar7);
        lVar4 = lVar4 + 1;
        *puVar7 = *(undefined8 *)(param_1 + 0x1c0);
        *(undefined8 **)(param_1 + 0x1c0) = puVar7;
      } while (lVar4 < *(int *)(param_1 + 0x1b0));
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_01dfc838;
    }
    pvVar6 = *(void **)(param_1 + 0x1c8);
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    *(undefined8 *)(param_1 + 0x1c4) = 0;
    *(undefined8 *)(param_1 + 0x1bc) = 0;
    *(undefined8 *)(param_1 + 0x1b4) = 0;
  }
LAB_01dfc838:
  *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
  if (*(long *)(param_1 + 0x1e0) != 0) {
    if (0 < *(int *)(param_1 + 0x1d8)) {
      lVar4 = 0;
      do {
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x1e0) + lVar4 * 8);
        FUN_01dfaf44(puVar7);
        lVar4 = lVar4 + 1;
        *puVar7 = *(undefined8 *)(param_1 + 0x1e8);
        *(undefined8 **)(param_1 + 0x1e8) = puVar7;
      } while (lVar4 < *(int *)(param_1 + 0x1d8));
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      if (*(long *)(param_1 + 0x1e0) == 0) goto LAB_01dfc8e8;
    }
    pvVar6 = *(void **)(param_1 + 0x1f0);
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined8 *)(param_1 + 0x1ec) = 0;
    *(undefined8 *)(param_1 + 0x1e4) = 0;
    *(undefined8 *)(param_1 + 0x1dc) = 0;
  }
LAB_01dfc8e8:
  pvVar6 = *(void **)(param_1 + 0x208);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
  }
  puVar2 = PTR_DAT_04bb2df8;
  pvVar6 = *(void **)(param_1 + 0x210);
  if (pvVar6 != (void *)0x0) {
    lVar4 = *(long *)puVar1;
    *(undefined **)((long)pvVar6 + 8) = PTR_DAT_04bb2df8 + 0x10;
    if (lVar4 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
  if (*(long *)(param_1 + 0x228) != 0) {
    if (0 < *(int *)(param_1 + 0x220)) {
      lVar4 = 0;
      do {
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x228) + lVar4 * 8);
        FUN_01dfaf44(puVar7);
        lVar4 = lVar4 + 1;
        *puVar7 = *(undefined8 *)(param_1 + 0x230);
        *(undefined8 **)(param_1 + 0x230) = puVar7;
      } while (lVar4 < *(int *)(param_1 + 0x220));
      *(undefined4 *)(param_1 + 0x220) = 0;
      if (*(long *)(param_1 + 0x228) == 0) goto LAB_01dfca18;
    }
    pvVar6 = *(void **)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x220) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined8 *)(param_1 + 0x234) = 0;
    *(undefined8 *)(param_1 + 0x22c) = 0;
    *(undefined8 *)(param_1 + 0x224) = 0;
  }
LAB_01dfca18:
  pvVar6 = *(void **)(param_1 + 0x250);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x248) = 0;
  }
  pvVar6 = *(void **)(param_1 + 600);
  if (pvVar6 != (void *)0x0) {
    lVar4 = *(long *)puVar1;
    *(undefined **)((long)pvVar6 + 8) = puVar2 + 0x10;
    if (lVar4 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  pvVar6 = *(void **)(param_1 + 0x270);
  *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x610) = 0xffffffff;
  *(undefined8 *)(param_1 + 600) = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_006e7cd0(pvVar6);
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  pvVar6 = *(void **)(param_1 + 0x6c8);
  *(undefined8 *)(param_1 + 0x270) = 0;
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  puVar7 = *(undefined8 **)PTR_DAT_04bc13c0;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined8 *)PTR_DAT_04bc13c0 = 0;
    (**(code **)*puVar7)();
    puVar2 = PTR_DAT_04bb7bc8;
    pvVar6 = *(void **)PTR_DAT_04bb7bc8;
    if (pvVar6 != (void *)0x0) {
      FUN_01d772f0(pvVar6);
      if (*(long *)puVar1 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    *(undefined8 *)puVar2 = 0;
  }
  (**(code **)(**(long **)(param_1 + 0x70) + 0x20))();
  *(undefined8 *)(param_1 + 0x70) = 0;
  (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
  *(undefined8 *)(param_1 + 0x78) = 0;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x20))();
  *(undefined8 *)(param_1 + 0x68) = 0;
  (**(code **)(**(long **)(param_1 + 0x80) + 0x20))();
  *(undefined8 *)(param_1 + 0x80) = 0;
  local_50 = (undefined *)CONCAT44(local_50._4_4_,3);
  lVar4 = *(long *)PTR_DAT_04bb2110;
  plVar3 = (long *)**(undefined8 **)(lVar4 + 0x10);
  nn::os::LockMutex((MutexType *)(plVar3 + 0x4d));
  (**(code **)(*plVar3 + 0x38))(plVar3,lVar4 + 0x8f0);
  nn::os::UnlockMutex((MutexType *)(plVar3 + 0x4d));
  plVar3 = *(long **)PTR_DAT_04bc10a8;
  if (*plVar3 == 0) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "NetTransportMgr";
    lVar4 = FUN_038c6d48(0x258000,&local_50,*(undefined8 *)(*(long *)PTR_DAT_04bb47c8 + 8),8,
                         0xffffffff,0);
    *plVar3 = lVar4;
  }
  *(undefined1 *)(param_1 + 0x108) = 0;
  return;
}


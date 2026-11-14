
void FUN_01935740(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)(param_1 + 0x100) = &PTR_LAB_049dec88;
  *(undefined ***)(param_1 + 0x120) = &PTR_LAB_049ded10;
  plVar2 = *(long **)(param_1 + 0x148);
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = *(long **)(param_1 + 0x148);
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(long *)(param_1 + 0x160) != 0) {
    if (0 < *(int *)(param_1 + 0x158)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x160) + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = *(undefined8 *)(param_1 + 0x168);
        *(undefined8 **)(param_1 + 0x168) = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x158));
    }
    pvVar5 = *(void **)(param_1 + 0x170);
    *(undefined4 *)(param_1 + 0x158) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined8 *)(param_1 + 0x16c) = 0;
    *(undefined8 *)(param_1 + 0x164) = 0;
    *(undefined8 *)(param_1 + 0x15c) = 0;
  }
  lVar6 = *(long *)(param_1 + 0x108);
  *(undefined **)(param_1 + 0x100) = PTR_DAT_04bd0d40 + 0x10;
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_019358b8;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar6 + 0x84) + param_1 + 0x100);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  *(undefined8 *)(param_1 + 0x108) = 1;
LAB_019358b8:
  puVar1 = PTR_DAT_04bb3058;
  *(undefined **)(param_1 + 200) = PTR_DAT_04bb2fe8 + 0x10;
  uVar3 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),*(undefined8 *)(param_1 + 0xf8));
  if (((uVar3 & 1) != 0) && (pvVar5 = *(void **)(param_1 + 0xf8), pvVar5 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}


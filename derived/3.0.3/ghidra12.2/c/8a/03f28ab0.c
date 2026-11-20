
void FUN_03f28ab0(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  
  pvVar5 = (void *)param_1[6];
  *param_1 = &PTR_FUN_04ba8778;
  puVar3 = PTR_DAT_04bb2698;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  pvVar5 = (void *)param_1[8];
  if (pvVar5 != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 7);
    if (iVar2 != 0) {
      uVar6 = 0;
      do {
        plVar4 = *(long **)((long)pvVar5 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3));
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        uVar1 = uVar6 + 1;
        uVar6 = uVar1 & 0xffffffff;
      } while (iVar2 != (int)uVar1);
      pvVar5 = (void *)param_1[8];
      if (pvVar5 == (void *)0x0) {
        return;
      }
    }
    if (*(long *)puVar3 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  return;
}


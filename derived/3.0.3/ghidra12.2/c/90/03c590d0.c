
void FUN_03c590d0(long *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  
  puVar2 = PTR_DAT_04bb2698;
  pvVar6 = (void *)param_1[2];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[1] = 0;
    param_1[2] = 0;
  }
  pvVar6 = (void *)param_1[4];
  if (pvVar6 != (void *)0x0) {
    puVar1 = (uint *)(param_1 + 3);
    uVar5 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      uVar7 = 0;
      do {
        if ((uVar7 < uVar5) && (plVar3 = *(long **)(param_1[4] + uVar7 * 8), plVar3 != (long *)0x0))
        {
          (**(code **)(*plVar3 + 0x18))();
          uVar5 = (ulong)*puVar1;
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)uVar5);
      pvVar6 = (void *)param_1[4];
      if (pvVar6 == (void *)0x0) goto LAB_03c591c0;
    }
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[4] = 0;
  }
LAB_03c591c0:
  pvVar6 = (void *)param_1[6];
  if (pvVar6 != (void *)0x0) {
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x03c59218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1);
  return;
}


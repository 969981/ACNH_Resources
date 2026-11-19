
void FUN_03835c70(long *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  
  puVar2 = PTR_DAT_04bb2698;
  pvVar5 = (void *)param_1[2];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_1[4] != 0) {
    puVar1 = (uint *)(param_1 + 3);
    if (param_1[8] != 0) {
      pvVar5 = (void *)(param_1[8] + -8);
      if (*(long *)puVar2 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
      param_1[8] = 0;
      *(undefined4 *)(param_1 + 7) = 0;
    }
    uVar4 = (ulong)*puVar1;
    if (0 < (int)*puVar1) {
      uVar6 = 0;
      do {
        if ((uVar6 < uVar4) && (plVar3 = *(long **)(param_1[4] + uVar6 * 8), plVar3 != (long *)0x0))
        {
          (**(code **)(*plVar3 + 0x18))();
          uVar4 = (ulong)*puVar1;
        }
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar4);
    }
    pvVar5 = (void *)param_1[4];
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
      puVar1[0] = 0;
      puVar1[1] = 0;
      param_1[4] = 0;
    }
  }
  pvVar5 = (void *)param_1[6];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x03835df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1);
  return;
}


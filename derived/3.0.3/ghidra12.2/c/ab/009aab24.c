
void FUN_009aab24(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  *param_1 = (long)(PTR_DAT_04bb6040 + 0x10);
  puVar2 = PTR_DAT_04bb6048;
  param_1[0x1f] = 0;
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  param_1[0x19] = 0;
  param_1[0x1a] = (long)(puVar2 + 0x10);
  param_1[0x14] = (long)puVar1;
  puVar3 = PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb2fe8 + 0x10;
  lVar6 = *(long *)PTR_DAT_04bb3058;
  param_1[0xd] = (long)puVar1;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x13]);
  puVar2 = PTR_DAT_04bb2698;
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x13], pvVar7 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
  }
  lVar6 = *(long *)puVar3;
  param_1[0x13] = 0;
  param_1[6] = (long)puVar1;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0xc]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0xc], pvVar7 != (void *)0x0)) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
      lVar6 = *(long *)puVar2;
      goto joined_r0x009aac88;
    }
    plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
    }
  }
  lVar6 = *(long *)puVar2;
joined_r0x009aac88:
  if (lVar6 == 0) {
    free(param_1);
    return;
  }
  plVar5 = (long *)FUN_038cb610(lVar6,param_1);
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009aac64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
  return;
}



undefined2 * FUN_01a5190c(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  long *plVar7;
  long lVar6;
  
  uVar4 = FUN_01a4f798(param_1,param_2);
  if ((uVar4 & 1) == 0) goto LAB_01a519f0;
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 == 0) {
LAB_01a5198c:
    plVar7 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_01a51990:
    lVar6 = *plVar7;
  }
  else {
    if (uVar3 != 0) {
      if (uVar3 == 0) goto LAB_01a5198c;
      plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar7 = plVar1 + uVar3;
      if (0x38 < uVar3) {
        plVar7 = plVar1;
      }
      goto LAB_01a51990;
    }
    lVar6 = 0;
  }
  lVar2 = lVar6 + 200 + (ulong)param_2 * 0x10;
  if (7 < param_2) {
    lVar2 = lVar6 + 200;
  }
  lVar6 = *(long *)(lVar2 + 8);
  if (lVar6 != 0) {
    lVar2 = lVar6 + 0x130 + (ulong)*(uint *)(lVar6 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar6 + 0x198)) {
      lVar2 = lVar6 + 0x130;
    }
    puVar5 = (undefined2 *)FUN_012eb21c(lVar2,param_3,param_4);
    return puVar5;
  }
LAB_01a519f0:
  return &DAT_05586008;
}


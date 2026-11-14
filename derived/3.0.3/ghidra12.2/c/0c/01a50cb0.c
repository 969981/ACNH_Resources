
uint FUN_01a50cb0(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long *plVar6;
  long lVar5;
  
  uVar4 = FUN_01a4f798(param_1,param_2);
  if ((uVar4 & 1) == 0) goto LAB_01a50d68;
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 == 0) {
LAB_01a50d30:
    plVar6 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_01a50d34:
    lVar5 = *plVar6;
  }
  else {
    if (uVar3 != 0) {
      if (uVar3 == 0) goto LAB_01a50d30;
      plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar6 = plVar1 + uVar3;
      if (0x38 < uVar3) {
        plVar6 = plVar1;
      }
      goto LAB_01a50d34;
    }
    lVar5 = 0;
  }
  lVar2 = lVar5 + 200 + (ulong)param_2 * 0x10;
  if (7 < param_2) {
    lVar2 = lVar5 + 200;
  }
  if (*(long *)(lVar2 + 8) != 0) {
    FUN_012e5af4(*(long *)(lVar2 + 8),param_3);
  }
LAB_01a50d68:
  return uVar4 & 1;
}



/* WARNING: Removing unreachable block (ram,0x01a51a68) */
/* WARNING: Removing unreachable block (ram,0x01a51a78) */
/* WARNING: Removing unreachable block (ram,0x01a51a84) */

void FUN_01a51a0c(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  lVar2 = *(long *)PTR_DAT_04bb27a8;
  if (uVar1 == 0) {
    if (*(long *)(lVar2 + 0x1f8) == 0) {
      return;
    }
LAB_01a51aac:
    plVar3 = (long *)(lVar2 + 0x1f8);
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 == 0) {
      lVar4 = *(long *)(lVar2 + 0x1f8);
    }
    else {
      plVar3 = (long *)(lVar2 + 0x30) + uVar1;
      if (0x38 < uVar1) {
        plVar3 = (long *)(lVar2 + 0x30);
      }
      lVar4 = *plVar3;
    }
    if (lVar4 == 0) {
      return;
    }
    if (uVar1 == 0) {
      lVar2 = 0;
      goto LAB_01a51af4;
    }
    if (uVar1 == 0) goto LAB_01a51aac;
    plVar3 = (long *)(lVar2 + 0x30) + uVar1;
    if (0x38 < uVar1) {
      plVar3 = (long *)(lVar2 + 0x30);
    }
  }
  lVar2 = *plVar3;
LAB_01a51af4:
  lVar4 = lVar2 + 200 + (ulong)param_2 * 0x10;
  if (7 < param_2) {
    lVar4 = lVar2 + 200;
  }
  FUN_012e7510(lVar4,param_4);
  return;
}



/* WARNING: Removing unreachable block (ram,0x014fd718) */
/* WARNING: Removing unreachable block (ram,0x014fd728) */
/* WARNING: Removing unreachable block (ram,0x014fd734) */

bool FUN_014fd6bc(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  lVar2 = *(long *)PTR_DAT_04bb27a8;
  if (uVar1 == 0) {
    if (*(long *)(lVar2 + 0x1f8) == 0) {
      return false;
    }
LAB_014fd75c:
    plVar3 = (long *)(lVar2 + 0x1f8);
  }
  else {
    if (uVar1 == 0) {
      return false;
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
      return false;
    }
    if (uVar1 == 0) {
      lVar2 = 0;
      goto LAB_014fd7a8;
    }
    if (uVar1 == 0) goto LAB_014fd75c;
    plVar3 = (long *)(lVar2 + 0x30) + uVar1;
    if (0x38 < uVar1) {
      plVar3 = (long *)(lVar2 + 0x30);
    }
  }
  lVar2 = *plVar3;
LAB_014fd7a8:
  plVar3 = (long *)(lVar2 + 0x60) + param_2;
  if (7 < param_2) {
    plVar3 = (long *)(lVar2 + 0x60);
  }
  return *plVar3 != 0;
}


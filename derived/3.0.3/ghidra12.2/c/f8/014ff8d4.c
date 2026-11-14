
/* WARNING: Removing unreachable block (ram,0x014ffa08) */
/* WARNING: Removing unreachable block (ram,0x014ff9f8) */
/* WARNING: Removing unreachable block (ram,0x014ffa14) */
/* WARNING: Removing unreachable block (ram,0x014ff9b4) */
/* WARNING: Removing unreachable block (ram,0x014ff940) */
/* WARNING: Removing unreachable block (ram,0x014ffa34) */
/* WARNING: Removing unreachable block (ram,0x014ff930) */
/* WARNING: Removing unreachable block (ram,0x014ff94c) */
/* WARNING: Removing unreachable block (ram,0x014ff9a4) */
/* WARNING: Removing unreachable block (ram,0x014ff9e0) */
/* WARNING: Removing unreachable block (ram,0x014ffaec) */

undefined8 FUN_014ff8d4(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  lVar2 = *(long *)PTR_DAT_04bb27a8;
  if (uVar1 == 0) {
    if (*(long *)(lVar2 + 0x1f8) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar2 + 0x1f8) + 0x60) == 0) {
      return 0;
    }
    if (*(long *)(lVar2 + 0x1f8) == 0) {
      return 0;
    }
LAB_014ffacc:
    plVar3 = (long *)(lVar2 + 0x1f8);
  }
  else {
    if (uVar1 == 0) {
      return 0;
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
      return 0;
    }
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar1 == 0) {
        plVar3 = (long *)(lVar2 + 0x1f8);
      }
      else {
        plVar3 = (long *)(lVar2 + 0x30) + uVar1;
        if (0x38 < uVar1) {
          plVar3 = (long *)(lVar2 + 0x30);
        }
      }
      lVar4 = *plVar3;
    }
    if (*(long *)(lVar4 + 0x60) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
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
      return 0;
    }
    if (uVar1 == 0) {
      lVar2 = 0;
      goto LAB_014ffad4;
    }
    if (uVar1 == 0) goto LAB_014ffacc;
    plVar3 = (long *)(lVar2 + 0x30) + uVar1;
    if (0x38 < uVar1) {
      plVar3 = (long *)(lVar2 + 0x30);
    }
  }
  lVar2 = *plVar3;
LAB_014ffad4:
  if (*(long *)(lVar2 + 0x68) == 0) {
    return 0;
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x01500130) */
/* WARNING: Removing unreachable block (ram,0x01500120) */
/* WARNING: Removing unreachable block (ram,0x0150013c) */
/* WARNING: Removing unreachable block (ram,0x015001c8) */

bool FUN_015000c4(long param_1)

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
LAB_01500164:
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
      goto LAB_015001b0;
    }
    if (uVar1 == 0) goto LAB_01500164;
    plVar3 = (long *)(lVar2 + 0x30) + uVar1;
    if (0x38 < uVar1) {
      plVar3 = (long *)(lVar2 + 0x30);
    }
  }
  lVar2 = *plVar3;
LAB_015001b0:
  return *(long *)(lVar2 + 0x98) != 0;
}



/* WARNING: Removing unreachable block (ram,0x01a50df4) */
/* WARNING: Removing unreachable block (ram,0x01a50e04) */
/* WARNING: Removing unreachable block (ram,0x01a50e10) */

undefined4 * FUN_01a50d80(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (((DAT_053003b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_053003b8), iVar2 != 0)) {
    DAT_053003b0 = 0;
    __cxa_guard_release(&DAT_053003b8);
  }
  uVar1 = *(uint *)(param_1 + 8);
  lVar3 = *(long *)PTR_DAT_04bb27a8;
  if (uVar1 == 0) {
    if (*(long *)(lVar3 + 0x1f8) == 0) goto LAB_01a50e78;
LAB_01a50e38:
    plVar4 = (long *)(lVar3 + 0x1f8);
  }
  else {
    if (uVar1 == 0) {
LAB_01a50e78:
      return &DAT_053003b0;
    }
    if (uVar1 == 0) {
      lVar5 = *(long *)(lVar3 + 0x1f8);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x30) + uVar1;
      if (0x38 < uVar1) {
        plVar4 = (long *)(lVar3 + 0x30);
      }
      lVar5 = *plVar4;
    }
    if (lVar5 == 0) goto LAB_01a50e78;
    if (uVar1 == 0) {
      lVar3 = 0;
      goto LAB_01a50e70;
    }
    if (uVar1 == 0) goto LAB_01a50e38;
    plVar4 = (long *)(lVar3 + 0x30) + uVar1;
    if (0x38 < uVar1) {
      plVar4 = (long *)(lVar3 + 0x30);
    }
  }
  lVar3 = *plVar4;
LAB_01a50e70:
  return (undefined4 *)(lVar3 + 0x184);
}


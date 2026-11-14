
/* WARNING: Removing unreachable block (ram,0x0150023c) */
/* WARNING: Removing unreachable block (ram,0x0150024c) */
/* WARNING: Removing unreachable block (ram,0x01500258) */

undefined8 * FUN_015001e0(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  lVar2 = *(long *)PTR_DAT_04bb27a8;
  if (uVar1 == 0) {
    if (*(long *)(lVar2 + 0x1f8) == 0) goto LAB_015002bc;
LAB_01500280:
    plVar3 = (long *)(lVar2 + 0x1f8);
  }
  else {
    if (uVar1 == 0) {
LAB_015002bc:
      return &DAT_05300388;
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
    if (lVar4 == 0) goto LAB_015002bc;
    if (uVar1 == 0) {
      lVar2 = 0;
      goto LAB_015002d0;
    }
    if (uVar1 == 0) goto LAB_01500280;
    plVar3 = (long *)(lVar2 + 0x30) + uVar1;
    if (0x38 < uVar1) {
      plVar3 = (long *)(lVar2 + 0x30);
    }
  }
  lVar2 = *plVar3;
LAB_015002d0:
  return (undefined8 *)(lVar2 + 0x10);
}


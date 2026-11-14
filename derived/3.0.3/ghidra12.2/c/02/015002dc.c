
/* WARNING: Removing unreachable block (ram,0x01500338) */
/* WARNING: Removing unreachable block (ram,0x01500348) */
/* WARNING: Removing unreachable block (ram,0x01500354) */

undefined8 * FUN_015002dc(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 8);
  lVar3 = *(long *)PTR_DAT_04bb27a8;
  if (uVar2 == 0) {
    if (*(long *)(lVar3 + 0x1f8) == 0) goto LAB_015003b8;
LAB_0150037c:
    plVar4 = (long *)(lVar3 + 0x1f8);
  }
  else {
    if (uVar2 == 0) {
LAB_015003b8:
      return &DAT_0517afc8;
    }
    if (uVar2 == 0) {
      lVar5 = *(long *)(lVar3 + 0x1f8);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x30) + uVar2;
      if (0x38 < uVar2) {
        plVar4 = (long *)(lVar3 + 0x30);
      }
      lVar5 = *plVar4;
    }
    if (lVar5 == 0) goto LAB_015003b8;
    if (uVar2 == 0) {
      lVar3 = 0;
      goto LAB_015003cc;
    }
    if (uVar2 == 0) goto LAB_0150037c;
    plVar4 = (long *)(lVar3 + 0x30) + uVar2;
    if (0x38 < uVar2) {
      plVar4 = (long *)(lVar3 + 0x30);
    }
  }
  lVar3 = *plVar4;
LAB_015003cc:
  lVar5 = lVar3 + 200 + (ulong)param_2 * 0x10;
  if (7 < param_2) {
    lVar5 = lVar3 + 200;
  }
  puVar1 = &DAT_0517d4e8;
  if (*(long *)(lVar5 + 8) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 8) + 8);
  }
  return puVar1;
}



uint FUN_02f85584(void)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  uint uVar11;
  
  lVar8 = DAT_05574040;
  if ((((DAT_05574040 == 0) || (uVar6 = FUN_026f4a88(DAT_05574040), (uVar6 & 1) == 0)) ||
      (*(long *)(lVar8 + 0x10) == 0)) ||
     ((plVar7 = *(long **)(*(long *)(lVar8 + 0x10) + 0xe8), plVar7 == (long *)0x0 ||
      (lVar8 = (**(code **)(*plVar7 + 0x38))(), lVar8 == 0)))) {
    return 0xffffffff;
  }
  if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar9)();
    uVar4 = uVar4 ^ 1;
  }
  lVar1 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8);
  bVar3 = *(byte *)(lVar1 + 0x69170);
  if (bVar3 < 3) {
    lVar1 = lVar1 + 0x110;
    uVar11 = (uint)bVar3;
    if (0xfffdcfff < *(int *)(lVar1 + (ulong)bVar3 * 0x23020 + 0x10) - 0x23001U) {
      piVar10 = (int *)(lVar1 + (ulong)uVar11 * 0x23020);
      iVar2 = *piVar10;
      iVar5 = FUN_006f6900(piVar10 + 1,0x2301c,0);
      if (iVar2 != iVar5) {
        uVar11 = 0xffffffff;
      }
      goto joined_r0x02f85660;
    }
  }
  uVar11 = 0xffffffff;
joined_r0x02f85660:
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return uVar11;
}



undefined8 FUN_01b42cbc(long param_1,undefined1 *param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  
  puVar4 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar7 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*(undefined4 *)(param_1 + 8)), lVar7 == 0)) {
    return 0;
  }
  lVar11 = lVar7 + 0x194b0;
  if (*(long *)(lVar7 + 0x194b8) == 0) {
    lVar11 = *(long *)(*(long *)puVar4 + 0x20);
  }
  plVar1 = (long *)(lVar11 + 0x8508);
  if ((*(long **)(lVar11 + 0x8528) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar11 + 0x8528), puVar8 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar8)();
    uVar6 = uVar6 ^ 1;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 5) {
    uVar3 = *(uint *)(param_1 + 0x24);
    if (uVar3 < 8) {
      lVar7 = *(long *)(lVar11 + 0x8510) + *plVar1 + 0xb79c;
      uVar9 = FUN_0282a5c0(lVar7 + (ulong)uVar3 * 700);
joined_r0x01b42dc8:
      if (((uVar9 & 1) != 0) && (*(char *)(lVar7 + (ulong)uVar3 * 700 + 0x2b5) == '\0')) {
        lVar7 = lVar7 + (ulong)uVar3 * 700;
        uVar5 = *(undefined1 *)(lVar7 + 0x2b6);
        lVar10 = lVar7 + 0x2b6;
        puVar12 = (undefined1 *)(lVar7 + 0x2b7);
        goto LAB_01b42e48;
      }
    }
  }
  else if (iVar2 == 2) {
    uVar3 = *(uint *)(param_1 + 0x24);
    if (uVar3 < 8) {
      lVar7 = *(long *)(lVar11 + 0x8510) + *plVar1 + 0x92d0;
      uVar9 = FUN_02828f30(lVar7 + (ulong)uVar3 * 700);
      goto joined_r0x01b42dc8;
    }
  }
  else if ((((iVar2 == 0) && (uVar3 = *(uint *)(param_1 + 0x24), uVar3 < 0x1e)) &&
           (lVar7 = *(long *)(lVar11 + 0x8510) + *plVar1, lVar7 != 0)) &&
          (uVar9 = FUN_02828794(lVar7 + (ulong)uVar3 * 0x2b8), (uVar9 & 1) != 0)) {
    lVar7 = lVar7 + (ulong)uVar3 * 0x2b8;
    uVar5 = *(undefined1 *)(lVar7 + 0x2b4);
    lVar10 = lVar7 + 0x2b4;
    puVar12 = (undefined1 *)(lVar7 + 0x2b5);
LAB_01b42e48:
    *param_2 = uVar5;
    param_2[1] = *puVar12;
    uVar5 = FUN_020fd7d8(lVar10);
    uVar13 = 1;
    param_2[2] = uVar5;
    goto joined_r0x01b42e10;
  }
  uVar13 = 0;
joined_r0x01b42e10:
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar11 + 0x8528) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x8528) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return uVar13;
}


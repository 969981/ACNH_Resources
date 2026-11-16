
void FUN_0266eca0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  int local_80 [8];
  
  FUN_0266b370(local_80);
  puVar4 = PTR_DAT_04bb46b0;
  uVar13 = 0;
  uVar14 = 0;
  do {
    if (((*(int *)((long)local_80 + (-(uVar14 >> 0x1f) & 0xfffffffc00000000 | uVar14 << 2)) != -1)
        && (*(long *)puVar4 != 0)) && (lVar5 = FUN_026eec4c(), lVar5 != 0)) {
      if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)*puVar6)();
        uVar7 = uVar7 & 0xffffffff;
      }
      lVar15 = lVar5 + 0x194b0;
      if (*(long *)(lVar5 + 0x194b8) == 0) {
        lVar15 = *(long *)(*(long *)puVar4 + 0x20);
        plVar9 = *(long **)(lVar15 + 0x28);
        if (plVar9 != (long *)0x0) goto LAB_0266ed6c;
LAB_0266ee68:
        uVar8 = 0;
      }
      else {
        plVar9 = *(long **)(lVar5 + 0x194d8);
        if (plVar9 == (long *)0x0) goto LAB_0266ee68;
LAB_0266ed6c:
        uVar8 = 0;
        if ((undefined8 *)*plVar9 != (undefined8 *)0x0) {
          uVar8 = (*(code *)**(undefined8 **)*plVar9)();
        }
      }
      if (uVar13 < 8) {
        puVar6 = (undefined8 *)(param_1 + 0x40 + (ulong)uVar13 * 0x80);
        lVar2 = *(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8);
        lVar3 = *(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8);
        uVar10 = *(undefined8 *)(lVar2 + 0xc154);
        uVar11 = *(undefined8 *)(lVar2 + 0xc15c);
        uVar12 = *(undefined8 *)(lVar2 + 0xc164);
        *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(lVar2 + 0xc16c);
        puVar6[1] = uVar11;
        puVar6[2] = uVar12;
        *puVar6 = uVar10;
        uVar11 = *(undefined8 *)(lVar3 + 0x2eae0);
        uVar10 = *(undefined8 *)(lVar3 + 0x2eac8);
        uVar12 = *(undefined8 *)(lVar3 + 0x2ead0);
        puVar6[9] = *(undefined8 *)(lVar3 + 0x2ead8);
        puVar6[10] = uVar11;
        puVar6[7] = uVar10;
        puVar6[8] = uVar12;
        uVar11 = *(undefined8 *)(lVar3 + 0x2eb00);
        uVar10 = *(undefined8 *)(lVar3 + 0x2eae8);
        uVar12 = *(undefined8 *)(lVar3 + 0x2eaf0);
        puVar6[0xd] = *(undefined8 *)(lVar3 + 0x2eaf8);
        puVar6[0xe] = uVar11;
        puVar6[0xb] = uVar10;
        puVar6[0xc] = uVar12;
        uVar10 = *(undefined8 *)(lVar3 + 0x2eab0);
        uVar11 = *(undefined8 *)(lVar3 + 0x2eac0);
        puVar6[5] = *(undefined8 *)(lVar3 + 0x2eab8);
        puVar6[6] = uVar11;
        puVar6[4] = uVar10;
        *(undefined2 *)(puVar6 + 0xf) = *(undefined2 *)(lVar2 + 0x1341c);
      }
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      uVar13 = uVar13 + 1;
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
    uVar1 = (int)uVar14 + 1;
    uVar14 = (ulong)uVar1;
    if (uVar1 == 8) {
      return;
    }
  } while( true );
}


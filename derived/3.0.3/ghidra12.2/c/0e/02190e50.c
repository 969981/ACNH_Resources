
void FUN_02190e50(long param_1,ushort *param_2)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ushort uVar5;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  undefined1 auStack_66a [2];
  undefined8 *local_668;
  undefined8 local_660;
  int local_658;
  int iStack_654;
  undefined4 local_650;
  uint local_644;
  float local_640 [384];
  
  puVar7 = DAT_04cca100;
  if ((*param_2 != *(ushort *)PTR_DAT_04bb3170) && (DAT_04cca100 != (uint *)0x0)) {
    uVar17 = (ulong)*param_2 & 0x7f;
    piVar1 = (int *)(param_1 + 8);
    uVar8 = (uint)uVar17;
    piVar2 = piVar1 + uVar17;
    uVar12 = uVar17;
    if (7 < uVar8) {
      uVar12 = 0;
      piVar2 = piVar1;
    }
    if (*piVar2 == 1) {
      FUN_007ef010(local_640);
      puVar6 = PTR_DAT_04bb5d40;
      uVar9 = *puVar7;
      uVar12 = (ulong)uVar9;
      if (0 < (int)uVar9) {
        puVar11 = *(undefined8 **)(puVar7 + 2);
        do {
          if ((uint)*(ushort *)*puVar11 == ((uint)local_640[0] & 0xffff)) {
            return;
          }
          uVar12 = uVar12 - 1;
          puVar11 = puVar11 + 1;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined1 *)(param_1 + 0x28) + uVar17;
      if (7 < uVar8) {
        puVar4 = (undefined1 *)(param_1 + 0x28);
      }
      *piVar2 = 0;
      *puVar4 = 0;
      uVar5 = *param_2;
      local_650 = 0;
      local_658 = *(int *)(puVar6 + 8);
      iStack_654 = *(int *)(puVar6 + 0xc);
      local_660 = &DAT_048f9750;
      FUN_007ef010(auStack_66a,param_2);
      FUN_00805ba8(local_640,auStack_66a);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar10 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
        lVar15 = 0;
        if (lVar10 != 0) {
          lVar15 = lVar10 + 0x70;
        }
      }
      else {
        lVar15 = (**(code **)(*(long *)(*(undefined8 **)(DAT_05574040 + 0x10))[0x26] + 0x38))();
      }
      plVar14 = *(long **)(lVar15 + 0x1a0da0);
      if ((plVar14 == (long *)0x0) ||
         (puVar11 = (undefined8 *)*plVar14, puVar11 == (undefined8 *)0x0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = (**(code **)*puVar11)();
        uVar8 = uVar8 ^ 1;
      }
      local_644 = 0;
      uVar12 = FUN_0291e130(local_640,&local_644,1);
      if (((uVar12 & 1) == 0) || (uVar9 = uVar5 & 0x7f, local_644 <= uVar9)) {
        local_658 = *(int *)(puVar6 + 8);
        iStack_654 = *(int *)(puVar6 + 0xc);
      }
      else {
        iStack_654 = (int)(((30.0 - local_640[(ulong)uVar9 * 3 + 1]) + 2.5) / 5.0) + 1;
        local_658 = (int)((local_640[(ulong)uVar9 * 3] + 2.5) / 5.0) + -1;
      }
      if ((((uVar8 & 1) == 0) && (lVar15 = *(long *)(lVar15 + 0x1a0da0), lVar15 != 0)) &&
         (puVar11 = *(undefined8 **)(lVar15 + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
      FUN_0151fedc(&local_668);
    }
    else if (*piVar2 == 0) {
      pcVar3 = (char *)(param_1 + 0x28) + uVar17;
      if (7 < uVar8) {
        pcVar3 = (char *)(param_1 + 0x28);
      }
      if (*pcVar3 != '\0') {
        piVar1[uVar12] = 1;
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar10 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
          lVar15 = 0;
          if (lVar10 != 0) {
            lVar15 = lVar10 + 0x70;
          }
        }
        else {
          lVar15 = (**(code **)(*(long *)(*(undefined8 **)(DAT_05574040 + 0x10))[0x26] + 0x38))();
        }
        plVar14 = *(long **)(lVar15 + 0x1a0da0);
        if ((plVar14 == (long *)0x0) ||
           (puVar11 = (undefined8 *)*plVar14, puVar11 == (undefined8 *)0x0)) {
          uVar9 = 1;
        }
        else {
          uVar9 = (**(code **)*puVar11)();
          uVar9 = uVar9 ^ 1;
        }
        local_644 = 0;
        uVar12 = FUN_0291e130(local_640,&local_644,1);
        if (((uVar12 & 1) == 0) || (local_644 <= uVar8)) {
          iVar16 = DAT_0517afd4;
          iVar13 = DAT_0517afd0;
        }
        else {
          iVar16 = (int)(((30.0 - local_640[uVar17 * 3 + 1]) + 2.5) / 5.0) + 1;
          iVar13 = (int)((local_640[uVar17 * 3] + 2.5) / 5.0) + -1;
        }
        local_660 = (undefined8 *)CONCAT44(iVar16,iVar13);
        local_668 = &DAT_048f9750;
        if ((((uVar9 & 1) == 0) && (lVar15 = *(long *)(lVar15 + 0x1a0da0), lVar15 != 0)) &&
           (puVar11 = *(undefined8 **)(lVar15 + 8), puVar11 != (undefined8 *)0x0)) {
          (**(code **)*puVar11)();
        }
        FUN_01513b9c(&local_668,2,1);
      }
    }
  }
  return;
}


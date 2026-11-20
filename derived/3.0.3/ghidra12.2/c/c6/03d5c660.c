
void FUN_03d5c660(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  
  if (param_2 == 0) {
    param_2 = *(long *)(*(long *)PTR_DAT_04bb2718 + 0x448);
  }
  lVar1 = param_2 + 0x110;
  FUN_038e2f80();
  puVar12 = PTR_DAT_04bd2cd0;
  puVar11 = PTR_DAT_04bd2cc8;
  puVar10 = PTR_DAT_04bc4cb0;
  puVar9 = PTR_DAT_04bc4ca8;
  lVar2 = param_2 + 0x60;
  if (*(long *)(param_2 + 0x68) != lVar2) {
    iVar6 = *(int *)(param_1 + 0x218);
    iVar7 = *(int *)(param_1 + 0x3ec);
    iVar8 = *(int *)(param_1 + 1000);
    lVar19 = (long)*(int *)(param_2 + 0x74);
    puVar20 = (undefined8 *)(*(long *)(param_2 + 0x68) - lVar19);
    puVar3 = PTR_DAT_04bc4cd0 + 0x10;
    puVar4 = PTR_DAT_04bc4cb8 + 0x10;
    do {
      if (((*puVar12 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar12), iVar16 != 0)) {
        *(undefined **)puVar11 = puVar3;
        __cxa_guard_release(puVar12);
      }
      uVar17 = (**(code **)*puVar20)(puVar20,puVar11);
      if ((uVar17 & 1) != 0) {
        iVar16 = *(int *)(puVar20 + 0x3a);
        bVar13 = SBORROW4(iVar16,iVar6);
        bVar14 = iVar16 - iVar6 < 0;
        bVar15 = false;
        if (iVar16 == iVar6) {
          iVar16 = *(int *)((long)puVar20 + 0x1cc);
          bVar13 = SBORROW4(iVar16,iVar7);
          bVar14 = iVar16 - iVar7 < 0;
          bVar15 = false;
          if (iVar16 == iVar7) {
            iVar16 = *(int *)(puVar20 + 0x39);
            bVar13 = SBORROW4(iVar16,iVar8);
            bVar14 = iVar16 - iVar8 < 0;
            bVar15 = iVar16 == iVar8;
          }
        }
        if (bVar15 || bVar14 != bVar13) goto LAB_03d5c78c;
LAB_03d5c88c:
        if (*(int *)(param_1 + 0x48) - 7U < 2) goto LAB_03d5c8c4;
        if (*(int *)(param_1 + 0x48) == 5) goto LAB_03d5c8ac;
        FUN_038e2f80(lVar1);
        plVar5 = (long *)((long)*(int *)(param_2 + 0x74) + (long)puVar20);
        plVar18 = (long *)(*(int *)(param_2 + 0x74) + param_1);
        lVar19 = *plVar5;
        *plVar5 = (long)plVar18;
        *plVar18 = lVar19;
        plVar18[1] = (long)plVar5;
        if (lVar19 == 0) goto LAB_03d5c85c;
        goto LAB_03d5c858;
      }
LAB_03d5c78c:
      if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar10), iVar16 != 0)) {
        *(undefined **)puVar9 = puVar4;
        __cxa_guard_release(puVar10);
      }
      uVar17 = (**(code **)*puVar20)(puVar20,puVar9);
      if ((uVar17 & 1) != 0) {
        iVar16 = *(int *)(puVar20 + 0x43);
        bVar13 = SBORROW4(iVar16,iVar6);
        bVar14 = iVar16 - iVar6 < 0;
        bVar15 = false;
        if (iVar16 == iVar6) {
          iVar16 = *(int *)((long)puVar20 + 0x3ec);
          bVar13 = SBORROW4(iVar16,iVar7);
          bVar14 = iVar16 - iVar7 < 0;
          bVar15 = false;
          if (iVar16 == iVar7) {
            iVar16 = *(int *)(puVar20 + 0x7d);
            bVar13 = SBORROW4(iVar16,iVar8);
            bVar14 = iVar16 - iVar8 < 0;
            bVar15 = iVar16 == iVar8;
          }
        }
        if (!bVar15 && bVar14 == bVar13) goto LAB_03d5c88c;
      }
      puVar20 = (undefined8 *)(*(long *)((long)puVar20 + lVar19 + 8) - lVar19);
    } while (puVar20 != (undefined8 *)(lVar2 - *(int *)(param_2 + 0x74)));
  }
  if (1 < *(int *)(param_1 + 0x48) - 7U) {
    if (*(int *)(param_1 + 0x48) == 5) {
LAB_03d5c8ac:
      if ((*(uint *)(param_1 + 0x48) & 0xfffffffe) == 4) {
        *(undefined4 *)(param_1 + 0x48) = 6;
      }
    }
    else {
      FUN_038e2f80(lVar1);
      plVar18 = (long *)(*(int *)(param_2 + 0x74) + param_1);
      lVar19 = *(long *)(param_2 + 0x60);
      *(long **)(param_2 + 0x60) = plVar18;
      *plVar18 = lVar19;
      plVar18[1] = lVar2;
      if (lVar19 != 0) {
LAB_03d5c858:
        *(long **)(lVar19 + 8) = plVar18;
      }
LAB_03d5c85c:
      *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
      FUN_038e3040(lVar1);
      *(long *)(param_1 + 0x58) = param_2;
      *(undefined1 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x48) = 3;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    }
  }
LAB_03d5c8c4:
  FUN_038e3040(lVar1);
  return;
}


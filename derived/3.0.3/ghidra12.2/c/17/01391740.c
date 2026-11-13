
undefined8 FUN_01391740(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  lVar9 = *(long *)(DAT_0537d558 + 0x10);
  iVar1 = *(int *)(lVar9 + 0x380);
  if ((1 < iVar1 - 0x25U) && (iVar1 != 0x23)) {
    if (iVar1 == 0x24) {
      if (*(long *)(lVar9 + 0x3c8) == 0) {
        return 1;
      }
      if (-1 < (int)*(uint *)(lVar9 + 0x3d8)) {
        plVar6 = (long *)(*(long *)(lVar9 + 0x3c8) + 8);
        lVar9 = (ulong)*(uint *)(lVar9 + 0x3d8) + 1;
        do {
          if ((undefined1 *)plVar6[-1] == &LAB_01d5dae0 && *plVar6 == 0) goto LAB_013917d4;
          plVar6 = plVar6 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
    else {
LAB_013917d4:
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 != 0) {
        lVar9 = *(long *)(param_1 + 0x18);
        iVar10 = 0;
        do {
          lVar7 = lVar9 + (long)iVar10 * 0x18;
          uVar2 = *(uint *)(lVar7 + 8);
          if ((-1 < (int)uVar2) && (uVar3 = **(uint **)(lVar7 + 0x10), 0 < (int)uVar3)) {
            lVar7 = lVar9 + (long)iVar10 * 0x18;
            uVar11 = 0;
            do {
              uVar13 = 0;
              lVar12 = 0x2c;
              do {
                if ((((((uVar11 < *(uint *)(lVar7 + 8)) &&
                       (lVar8 = *(long *)(lVar7 + 0x10), uVar13 < *(uint *)(lVar8 + uVar11 * 0x10)))
                      && (lVar8 = *(long *)(lVar8 + uVar11 * 0x10 + 8), lVar8 != 0)) &&
                     ((*(int *)(lVar8 + lVar12) != 0 &&
                      (plVar6 = *(long **)(lVar8 + lVar12 + 0x2c), plVar6 != (long *)0x0)))) &&
                    (lVar8 = (**(code **)(*plVar6 + 0x28))(), lVar8 != 0)) &&
                   ((7 < *(byte *)(lVar8 + 0x17) ||
                    ((((*(byte *)(lVar8 + 8) >> 1 & 1) == 0 &&
                      (uVar5 = FUN_02582d8c((byte *)(lVar8 + 0x17),1), uVar5 < 8)) &&
                     ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0'
                      && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) !=
                          '\0')))))))) {
                  return 0;
                }
                uVar13 = uVar13 + 1;
                lVar12 = lVar12 + 0x518;
              } while (uVar3 != uVar13);
              bVar4 = uVar11 != uVar2;
              uVar11 = uVar11 + 1;
            } while (bVar4);
          }
          iVar10 = iVar10 + 1;
          if (iVar1 == iVar10) {
            return 1;
          }
        } while( true );
      }
    }
  }
  return 1;
}


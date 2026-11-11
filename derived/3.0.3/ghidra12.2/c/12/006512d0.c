
long FUN_006512d0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  
  FUN_0043c080(param_1 + 0x18,param_2 + 0x18);
  if (param_2 != param_1) {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    iVar9 = *(int *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < iVar9) {
      uVar4 = FUN_004267f0(PTR_DAT_048607b8,iVar9,2,uVar4,*(undefined4 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x20) = uVar4;
    }
    FUN_0043aa30(uVar4,uVar5,(long)iVar9 << 1);
    *(int *)(param_1 + 0x28) = iVar9;
    uVar1 = *(uint *)(param_2 + 0x38);
    lVar11 = *(long *)(param_2 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < (int)uVar1) {
      uVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar1,0x10,*(undefined8 *)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x30) = uVar4;
    }
    uVar13 = *(uint *)(param_1 + 0x38);
    iVar9 = uVar13 - uVar1;
    if (0 < iVar9) {
      lVar6 = *(long *)(param_1 + 0x30) + (long)(int)uVar13 * 0x10;
      do {
        lVar6 = lVar6 + -0x10;
        FUN_0043be10(lVar6);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      uVar13 = *(uint *)(param_1 + 0x38);
    }
    lVar6 = *(long *)(param_1 + 0x30);
    uVar3 = uVar13;
    if ((int)uVar1 <= (int)uVar13) {
      uVar3 = uVar1;
    }
    if ((lVar6 != lVar11) && (0 < (int)uVar3)) {
      uVar15 = (ulong)uVar3;
      lVar8 = lVar11;
      do {
        FUN_0043c080(lVar6,lVar8);
        *(undefined1 *)(lVar6 + 8) = *(undefined1 *)(lVar8 + 8);
        uVar15 = uVar15 - 1;
        lVar8 = lVar8 + 0x10;
        lVar6 = lVar6 + 0x10;
      } while (uVar15 != 0);
      lVar6 = *(long *)(param_1 + 0x30);
    }
    if (0 < (int)(uVar1 - uVar3)) {
      uVar2 = ~uVar1;
      if ((int)uVar2 < (int)~uVar13) {
        uVar2 = ~uVar13;
      }
      iVar9 = uVar1 + uVar2 + 1;
      puVar10 = (undefined8 *)(lVar11 + (long)(int)uVar3 * 0x10);
      puVar14 = (undefined8 *)(lVar6 + (long)(int)uVar3 * 0x10);
      do {
        *puVar14 = 0;
        if (puVar14 != puVar10) {
          FUN_0043c080(puVar14,puVar10);
          *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar10 + 1);
        }
        iVar9 = iVar9 + -1;
        puVar10 = puVar10 + 2;
        puVar14 = puVar14 + 2;
      } while (iVar9 != 0);
    }
    *(uint *)(param_1 + 0x38) = uVar1;
    if (param_2 != param_1) {
      uVar5 = *(undefined8 *)(param_2 + 0x40);
      iVar9 = *(int *)(param_2 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < iVar9) {
        uVar4 = FUN_004267f0(PTR_DAT_048607b8,iVar9,0x30,uVar4,*(undefined4 *)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 0x40) = uVar4;
      }
      FUN_0043aa30(uVar4,uVar5,(long)iVar9 * 0x30);
      *(int *)(param_1 + 0x48) = iVar9;
      iVar9 = *(int *)(param_2 + 0x58);
      uVar5 = *(undefined8 *)(param_2 + 0x50);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) < iVar9) {
        uVar4 = FUN_004267f0(PTR_DAT_048607b8,iVar9,4,uVar4,*(undefined4 *)(param_1 + 0x58));
        *(undefined8 *)(param_1 + 0x50) = uVar4;
      }
      FUN_0043aa30(uVar4,uVar5,(long)iVar9 << 2);
      *(int *)(param_1 + 0x58) = iVar9;
      uVar1 = *(uint *)(param_2 + 0x68);
      lVar11 = *(long *)(param_2 + 0x60);
      if ((int)(*(uint *)(param_1 + 0x6c) & 0x3fffffff) < (int)uVar1) {
        uVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar1,8,*(undefined8 *)(param_1 + 0x60),
                             *(undefined4 *)(param_1 + 0x68));
        *(undefined8 *)(param_1 + 0x60) = uVar4;
      }
      uVar13 = *(uint *)(param_1 + 0x68);
      iVar9 = uVar13 - uVar1;
      if (0 < iVar9) {
        lVar6 = *(long *)(param_1 + 0x60) + (long)(int)uVar13 * 8;
        do {
          lVar6 = lVar6 + -8;
          FUN_0043be10(lVar6);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        uVar13 = *(uint *)(param_1 + 0x68);
      }
      lVar6 = *(long *)(param_1 + 0x60);
      uVar3 = uVar13;
      if ((int)uVar1 <= (int)uVar13) {
        uVar3 = uVar1;
      }
      if ((lVar6 != lVar11) && (0 < (int)uVar3)) {
        uVar15 = (ulong)uVar3;
        lVar8 = lVar11;
        do {
          FUN_0043c080(lVar6,lVar8);
          uVar15 = uVar15 - 1;
          lVar6 = lVar6 + 8;
          lVar8 = lVar8 + 8;
        } while (uVar15 != 0);
        lVar6 = *(long *)(param_1 + 0x60);
      }
      if (0 < (int)(uVar1 - uVar3)) {
        uVar2 = ~uVar1;
        if ((int)uVar2 < (int)~uVar13) {
          uVar2 = ~uVar13;
        }
        iVar9 = uVar1 + uVar2 + 1;
        lVar6 = lVar6 + (long)(int)uVar3 * 8;
        lVar11 = lVar11 + (long)(int)uVar3 * 8;
        do {
          FUN_0043bd50(lVar6,lVar11);
          iVar9 = iVar9 + -1;
          lVar6 = lVar6 + 8;
          lVar11 = lVar11 + 8;
        } while (iVar9 != 0);
      }
      *(uint *)(param_1 + 0x68) = uVar1;
      if (param_2 != param_1) {
        uVar1 = *(uint *)(param_2 + 0x78);
        plVar7 = *(long **)(param_2 + 0x70);
        if ((int)(*(uint *)(param_1 + 0x7c) & 0x3fffffff) < (int)uVar1) {
          uVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar1,0x10,*(undefined8 *)(param_1 + 0x70),
                               *(undefined4 *)(param_1 + 0x78));
          *(undefined8 *)(param_1 + 0x70) = uVar4;
        }
        uVar13 = *(uint *)(param_1 + 0x78);
        iVar9 = uVar13 - uVar1;
        if (0 < iVar9) {
          plVar12 = (long *)(*(long *)(param_1 + 0x70) + (long)(int)uVar13 * 0x10);
          do {
            plVar12 = plVar12 + -2;
            if (*plVar12 != 0) {
              FUN_004435c0();
            }
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          uVar13 = *(uint *)(param_1 + 0x78);
        }
        plVar12 = *(long **)(param_1 + 0x70);
        uVar3 = uVar13;
        if ((int)uVar1 <= (int)uVar13) {
          uVar3 = uVar1;
        }
        if ((plVar12 != plVar7) && (0 < (int)uVar3)) {
          uVar15 = (ulong)uVar3;
          plVar16 = plVar7;
          do {
            if (*plVar16 == 0) {
              lVar11 = *plVar12;
              *plVar12 = 0;
            }
            else {
              FUN_004435a0();
              lVar11 = *plVar12;
              *plVar12 = *plVar16;
            }
            if (lVar11 != 0) {
              FUN_004435c0();
            }
            *(short *)(plVar12 + 1) = (short)plVar16[1];
            uVar15 = uVar15 - 1;
            plVar12 = plVar12 + 2;
            plVar16 = plVar16 + 2;
          } while (uVar15 != 0);
          plVar12 = *(long **)(param_1 + 0x70);
        }
        if (0 < (int)(uVar1 - uVar3)) {
          plVar7 = plVar7 + (long)(int)uVar3 * 2;
          plVar12 = plVar12 + (long)(int)uVar3 * 2;
          uVar3 = ~uVar1;
          if ((int)uVar3 < (int)~uVar13) {
            uVar3 = ~uVar13;
          }
          iVar9 = uVar1 + uVar3 + 1;
          do {
            lVar11 = *plVar7;
            *plVar12 = lVar11;
            if (lVar11 != 0) {
              FUN_004435a0();
            }
            *(short *)(plVar12 + 1) = (short)plVar7[1];
            iVar9 = iVar9 + -1;
            plVar7 = plVar7 + 2;
            plVar12 = plVar12 + 2;
          } while (iVar9 != 0);
        }
        *(uint *)(param_1 + 0x78) = uVar1;
        if (param_2 != param_1) {
          lVar11 = *(long *)(param_2 + 0x80);
          uVar1 = *(uint *)(param_2 + 0x88);
          if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) < (int)uVar1) {
            uVar4 = FUN_004267f0(PTR_DAT_048607b8,uVar1,0x10,*(undefined8 *)(param_1 + 0x80),
                                 *(undefined4 *)(param_1 + 0x88));
            *(undefined8 *)(param_1 + 0x80) = uVar4;
          }
          uVar13 = *(uint *)(param_1 + 0x88);
          iVar9 = uVar13 - uVar1;
          if (0 < iVar9) {
            lVar6 = *(long *)(param_1 + 0x80) + (long)(int)uVar13 * 0x10;
            do {
              lVar6 = lVar6 + -0x10;
              FUN_0043be10(lVar6);
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            uVar13 = *(uint *)(param_1 + 0x88);
          }
          lVar6 = *(long *)(param_1 + 0x80);
          uVar3 = uVar13;
          if ((int)uVar1 <= (int)uVar13) {
            uVar3 = uVar1;
          }
          if ((lVar6 != lVar11) && (0 < (int)uVar3)) {
            uVar15 = (ulong)uVar3;
            lVar8 = lVar11;
            do {
              FUN_0043c080(lVar6,lVar8);
              *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(lVar8 + 8);
              uVar15 = uVar15 - 1;
              lVar8 = lVar8 + 0x10;
              lVar6 = lVar6 + 0x10;
            } while (uVar15 != 0);
            lVar6 = *(long *)(param_1 + 0x80);
          }
          if (0 < (int)(uVar1 - uVar3)) {
            lVar11 = lVar11 + (long)(int)uVar3 * 0x10;
            lVar6 = lVar6 + (long)(int)uVar3 * 0x10;
            uVar3 = ~uVar1;
            if ((int)uVar3 < (int)~uVar13) {
              uVar3 = ~uVar13;
            }
            iVar9 = uVar1 + uVar3 + 1;
            do {
              FUN_0043bd50(lVar6,lVar11);
              *(undefined2 *)(lVar6 + 8) = *(undefined2 *)(lVar11 + 8);
              *(undefined2 *)(lVar6 + 10) = *(undefined2 *)(lVar11 + 10);
              iVar9 = iVar9 + -1;
              lVar6 = lVar6 + 0x10;
              lVar11 = lVar11 + 0x10;
            } while (iVar9 != 0);
          }
          *(uint *)(param_1 + 0x88) = uVar1;
        }
      }
    }
  }
  return param_1;
}


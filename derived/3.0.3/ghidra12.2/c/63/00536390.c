
long FUN_00536390(long param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  uint *puVar15;
  int iVar16;
  undefined4 *puVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint *puVar21;
  long *plVar22;
  uint local_68;
  uint local_64;
  
  puVar5 = PTR_DAT_048607b8;
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 0x20);
    lVar19 = *(long *)(param_2 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < (int)uVar2) {
      uVar6 = FUN_004267f0(PTR_DAT_048607b8,uVar2,0x38,*(undefined8 *)(param_1 + 0x18),
                           *(undefined4 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x18) = uVar6;
    }
    uVar20 = *(uint *)(param_1 + 0x20);
    iVar12 = uVar20 - uVar2;
    if (0 < iVar12) {
      puVar17 = (undefined4 *)(*(long *)(param_1 + 0x18) + (long)(int)uVar20 * 0x38 + -0x18);
      do {
        puVar17[4] = 0;
        if ((-1 < (int)puVar17[5]) && (*(long *)(puVar17 + 2) != 0)) {
          FUN_00421f90(puVar5,*(long *)(puVar17 + 2),4,puVar17[5] & 0x3fffffff);
        }
        *(undefined8 *)(puVar17 + 2) = 0;
        puVar17[5] = 0x80000000;
        *puVar17 = 0;
        if ((-1 < (int)puVar17[1]) && (*(long *)(puVar17 + -2) != 0)) {
          FUN_00421f90(puVar5,*(long *)(puVar17 + -2),4,puVar17[1] & 0x3fffffff);
        }
        *(undefined8 *)(puVar17 + -2) = 0;
        puVar17[1] = 0x80000000;
        puVar17[-4] = 0;
        if ((-1 < (int)puVar17[-3]) && (*(long *)(puVar17 + -6) != 0)) {
          FUN_00421f90(puVar5,*(long *)(puVar17 + -6),4,puVar17[-3] & 0x3fffffff);
        }
        *(undefined8 *)(puVar17 + -6) = 0;
        iVar12 = iVar12 + -1;
        puVar17[-3] = 0x80000000;
        puVar17 = puVar17 + -0xe;
      } while (iVar12 != 0);
      uVar20 = *(uint *)(param_1 + 0x20);
    }
    lVar13 = *(long *)(param_1 + 0x18);
    uVar3 = uVar20;
    if ((int)uVar2 <= (int)uVar20) {
      uVar3 = uVar2;
    }
    if ((lVar13 != lVar19) && (0 < (int)uVar3)) {
      uVar10 = (ulong)uVar3;
      lVar18 = lVar19;
      do {
        FUN_00536a90(lVar13,lVar18);
        uVar10 = uVar10 - 1;
        lVar13 = lVar13 + 0x38;
        lVar18 = lVar18 + 0x38;
      } while (uVar10 != 0);
      lVar13 = *(long *)(param_1 + 0x18);
    }
    if (0 < (int)(uVar2 - uVar3)) {
      uVar4 = ~uVar2;
      if ((int)uVar4 < (int)~uVar20) {
        uVar4 = ~uVar20;
      }
      iVar12 = uVar2 + uVar4 + 1;
      lVar13 = lVar13 + (long)(int)uVar3 * 0x38;
      lVar19 = lVar19 + (long)(int)uVar3 * 0x38;
      do {
        FUN_00536140(lVar13,lVar19);
        iVar12 = iVar12 + -1;
        lVar13 = lVar13 + 0x38;
        lVar19 = lVar19 + 0x38;
      } while (iVar12 != 0);
    }
    *(uint *)(param_1 + 0x20) = uVar2;
    if (param_2 != param_1) {
      uVar14 = *(undefined8 *)(param_2 + 0x28);
      iVar12 = *(int *)(param_2 + 0x30);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar12) {
        uVar6 = FUN_004267f0(puVar5,iVar12,4,uVar6,*(undefined4 *)(param_1 + 0x30));
        *(undefined8 *)(param_1 + 0x28) = uVar6;
      }
      FUN_0043aa30(uVar6,uVar14,(long)iVar12 << 2);
      *(int *)(param_1 + 0x30) = iVar12;
      uVar2 = *(uint *)(param_2 + 0x40);
      lVar19 = *(long *)(param_2 + 0x38);
      if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) < (int)uVar2) {
        uVar6 = FUN_004267f0(puVar5,uVar2,0x10,*(undefined8 *)(param_1 + 0x38),
                             *(undefined4 *)(param_1 + 0x40));
        *(undefined8 *)(param_1 + 0x38) = uVar6;
      }
      uVar20 = *(uint *)(param_1 + 0x40);
      iVar12 = uVar20 - uVar2;
      if (0 < iVar12) {
        plVar11 = (long *)(*(long *)(param_1 + 0x38) + (long)(int)uVar20 * 0x10);
        do {
          plVar22 = plVar11 + -2;
          *(undefined4 *)(plVar11 + -1) = 0;
          if ((-1 < (int)*(uint *)((long)plVar11 + -4)) && (*plVar22 != 0)) {
            FUN_00421f90(puVar5,*plVar22,4,*(uint *)((long)plVar11 + -4) & 0x3fffffff);
          }
          *plVar22 = 0;
          iVar12 = iVar12 + -1;
          *(undefined4 *)((long)plVar11 + -4) = 0x80000000;
          plVar11 = plVar22;
        } while (iVar12 != 0);
        uVar20 = *(uint *)(param_1 + 0x40);
      }
      if ((int)uVar2 <= (int)uVar20) {
        uVar20 = uVar2;
      }
      if ((*(long *)(param_1 + 0x38) != lVar19) && (0 < (int)uVar20)) {
        uVar10 = (ulong)uVar20;
        puVar15 = (uint *)(*(long *)(param_1 + 0x38) + 0xc);
        puVar21 = (uint *)(lVar19 + 8);
        do {
          uVar3 = *puVar21;
          uVar14 = *(undefined8 *)(puVar21 + -2);
          uVar6 = *(undefined8 *)(puVar15 + -3);
          if ((int)(*puVar15 & 0x3fffffff) < (int)uVar3) {
            uVar6 = FUN_004267f0(puVar5,uVar3,4,uVar6,puVar15[-1],puVar15);
            *(undefined8 *)(puVar15 + -3) = uVar6;
          }
          FUN_0043aa30(uVar6,uVar14,(long)(int)uVar3 << 2);
          puVar15[-1] = uVar3;
          puVar15 = puVar15 + 4;
          uVar10 = uVar10 - 1;
          puVar21 = puVar21 + 4;
        } while (uVar10 != 0);
      }
      iVar12 = uVar2 - uVar20;
      if (0 < iVar12) {
        iVar16 = 0;
        plVar11 = (long *)(lVar19 + (long)(int)uVar20 * 0x10);
        plVar22 = (long *)(*(long *)(param_1 + 0x38) + (long)(int)uVar20 * 0x10);
        do {
          while( true ) {
            *plVar22 = 0;
            plVar22[1] = -0x8000000000000000;
            uVar20 = *(uint *)(plVar11 + 1);
            puVar17 = (undefined4 *)*plVar11;
            local_64 = uVar20;
            if ((int)uVar20 < 1) break;
            puVar7 = (undefined4 *)FUN_00421ed0(puVar5,4,&local_64);
            *(uint *)(plVar22 + 1) = uVar20;
            *(uint *)((long)plVar22 + 0xc) = local_64;
            uVar3 = uVar20 & 7;
            *plVar22 = (long)puVar7;
            if (6 < uVar20 - 1) {
              iVar9 = uVar3 - uVar20;
              puVar8 = puVar7;
              do {
                *puVar8 = *puVar17;
                puVar8[1] = puVar17[1];
                puVar8[2] = puVar17[2];
                puVar8[3] = puVar17[3];
                puVar8[4] = puVar17[4];
                puVar8[5] = puVar17[5];
                puVar8[6] = puVar17[6];
                puVar1 = puVar17 + 7;
                puVar7 = puVar8 + 8;
                puVar17 = puVar17 + 8;
                puVar8[7] = *puVar1;
                iVar9 = iVar9 + 8;
                puVar8 = puVar7;
              } while (iVar9 != 0);
            }
            if (uVar3 != 0) {
              iVar9 = -uVar3;
              do {
                iVar9 = iVar9 + 1;
                *puVar7 = *puVar17;
                puVar7 = puVar7 + 1;
                puVar17 = puVar17 + 1;
              } while (iVar9 != 0);
            }
            iVar16 = iVar16 + 1;
            plVar11 = plVar11 + 2;
            plVar22 = plVar22 + 2;
            if (iVar16 == iVar12) goto LAB_00536800;
          }
          *plVar22 = 0;
          plVar22[1] = -0x8000000000000000;
          iVar16 = iVar16 + 1;
          plVar11 = plVar11 + 2;
          plVar22 = plVar22 + 2;
        } while (iVar16 != iVar12);
      }
LAB_00536800:
      *(uint *)(param_1 + 0x40) = uVar2;
      if (param_2 != param_1) {
        uVar2 = *(uint *)(param_2 + 0x50);
        lVar19 = *(long *)(param_2 + 0x48);
        if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) < (int)uVar2) {
          uVar6 = FUN_004267f0(puVar5,uVar2,0x10,*(undefined8 *)(param_1 + 0x48),
                               *(undefined4 *)(param_1 + 0x50));
          *(undefined8 *)(param_1 + 0x48) = uVar6;
        }
        uVar20 = *(uint *)(param_1 + 0x50);
        iVar12 = uVar20 - uVar2;
        if (0 < iVar12) {
          plVar11 = (long *)(*(long *)(param_1 + 0x48) + (long)(int)uVar20 * 0x10);
          do {
            plVar22 = plVar11 + -2;
            *(undefined4 *)(plVar11 + -1) = 0;
            if ((-1 < (int)*(uint *)((long)plVar11 + -4)) && (*plVar22 != 0)) {
              FUN_00421f90(puVar5,*plVar22,4,*(uint *)((long)plVar11 + -4) & 0x3fffffff);
            }
            *plVar22 = 0;
            iVar12 = iVar12 + -1;
            *(undefined4 *)((long)plVar11 + -4) = 0x80000000;
            plVar11 = plVar22;
          } while (iVar12 != 0);
          uVar20 = *(uint *)(param_1 + 0x50);
        }
        if ((int)uVar2 <= (int)uVar20) {
          uVar20 = uVar2;
        }
        if ((*(long *)(param_1 + 0x48) != lVar19) && (0 < (int)uVar20)) {
          uVar10 = (ulong)uVar20;
          puVar15 = (uint *)(*(long *)(param_1 + 0x48) + 0xc);
          puVar21 = (uint *)(lVar19 + 8);
          do {
            uVar3 = *puVar21;
            uVar14 = *(undefined8 *)(puVar21 + -2);
            uVar6 = *(undefined8 *)(puVar15 + -3);
            if ((int)(*puVar15 & 0x3fffffff) < (int)uVar3) {
              uVar6 = FUN_004267f0(puVar5,uVar3,4,uVar6,puVar15[-1],puVar15);
              *(undefined8 *)(puVar15 + -3) = uVar6;
            }
            FUN_0043aa30(uVar6,uVar14,(long)(int)uVar3 << 2);
            puVar15[-1] = uVar3;
            puVar15 = puVar15 + 4;
            uVar10 = uVar10 - 1;
            puVar21 = puVar21 + 4;
          } while (uVar10 != 0);
        }
        iVar12 = uVar2 - uVar20;
        if (0 < iVar12) {
          iVar16 = 0;
          plVar11 = (long *)(*(long *)(param_1 + 0x48) + (long)(int)uVar20 * 0x10);
          plVar22 = (long *)(lVar19 + (long)(int)uVar20 * 0x10);
          do {
            while( true ) {
              *plVar11 = 0;
              plVar11[1] = -0x8000000000000000;
              uVar20 = *(uint *)(plVar22 + 1);
              puVar17 = (undefined4 *)*plVar22;
              if ((int)uVar20 < 1) break;
              local_68 = uVar20;
              puVar7 = (undefined4 *)FUN_00421ed0(puVar5,4,&local_68);
              *(uint *)(plVar11 + 1) = uVar20;
              *(uint *)((long)plVar11 + 0xc) = local_68;
              uVar3 = uVar20 & 7;
              *plVar11 = (long)puVar7;
              if (6 < uVar20 - 1) {
                iVar9 = uVar3 - uVar20;
                puVar8 = puVar7;
                do {
                  *puVar8 = *puVar17;
                  puVar8[1] = puVar17[1];
                  puVar8[2] = puVar17[2];
                  puVar8[3] = puVar17[3];
                  puVar8[4] = puVar17[4];
                  puVar8[5] = puVar17[5];
                  puVar8[6] = puVar17[6];
                  puVar1 = puVar17 + 7;
                  puVar7 = puVar8 + 8;
                  puVar17 = puVar17 + 8;
                  puVar8[7] = *puVar1;
                  iVar9 = iVar9 + 8;
                  puVar8 = puVar7;
                } while (iVar9 != 0);
              }
              if (uVar3 != 0) {
                iVar9 = -uVar3;
                do {
                  iVar9 = iVar9 + 1;
                  *puVar7 = *puVar17;
                  puVar7 = puVar7 + 1;
                  puVar17 = puVar17 + 1;
                } while (iVar9 != 0);
              }
              iVar16 = iVar16 + 1;
              plVar11 = plVar11 + 2;
              plVar22 = plVar22 + 2;
              if (iVar16 == iVar12) goto LAB_00536a58;
            }
            *plVar11 = 0;
            plVar11[1] = -0x8000000000000000;
            iVar16 = iVar16 + 1;
            plVar11 = plVar11 + 2;
            plVar22 = plVar22 + 2;
          } while (iVar16 != iVar12);
        }
LAB_00536a58:
        *(uint *)(param_1 + 0x50) = uVar2;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  return param_1;
}


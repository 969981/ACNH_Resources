
void FUN_00434220(long param_1,long *param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  uint local_64;
  
  puVar6 = PTR_DAT_048607b8;
  plVar2 = (long *)(param_1 + 0x98);
  if (plVar2 != param_2) {
    uVar4 = *(uint *)(param_2 + 1);
    lVar19 = *param_2;
    if ((int)(*(uint *)(param_1 + 0xa4) & 0x3fffffff) < (int)uVar4) {
      uVar7 = FUN_004267f0(PTR_DAT_048607b8,uVar4,0x48,*(undefined8 *)(param_1 + 0x98),
                           *(undefined4 *)(param_1 + 0xa0));
      *(undefined8 *)(param_1 + 0x98) = uVar7;
    }
    uVar10 = *(uint *)(param_1 + 0xa0);
    iVar15 = uVar10 - uVar4;
    if (0 < iVar15) {
      plVar14 = (long *)(*plVar2 + (long)(int)uVar10 * 0x48 + -0x28);
      do {
        FUN_00466570(plVar14 + 2);
        *(undefined4 *)(plVar14 + 1) = 0;
        if ((-1 < (int)*(uint *)((long)plVar14 + 0xc)) && (*plVar14 != 0)) {
          FUN_00421f90(puVar6,*plVar14,4,*(uint *)((long)plVar14 + 0xc) & 0x3fffffff);
        }
        *plVar14 = 0;
        iVar15 = iVar15 + -1;
        *(undefined4 *)((long)plVar14 + 0xc) = 0x80000000;
        plVar14 = plVar14 + -9;
      } while (iVar15 != 0);
      uVar10 = *(uint *)(param_1 + 0xa0);
    }
    lVar16 = *plVar2;
    if ((int)uVar4 <= (int)uVar10) {
      uVar10 = uVar4;
    }
    uVar11 = (ulong)uVar10;
    if ((lVar16 != lVar19) && (0 < (int)uVar10)) {
      lVar22 = 0;
      do {
        puVar20 = (undefined8 *)(lVar19 + lVar22);
        uVar7 = *puVar20;
        uVar18 = puVar20[1];
        uVar13 = puVar20[2];
        puVar21 = (undefined8 *)(lVar16 + lVar22);
        *(undefined4 *)(puVar21 + 3) = *(undefined4 *)(puVar20 + 3);
        puVar21[1] = uVar18;
        puVar21[2] = uVar13;
        *puVar21 = uVar7;
        iVar15 = *(int *)(puVar20 + 5);
        uVar18 = puVar20[4];
        uVar7 = puVar21[4];
        if ((int)(*(uint *)((long)puVar21 + 0x2c) & 0x3fffffff) < iVar15) {
          uVar7 = FUN_004267f0(puVar6,iVar15,4,uVar7,*(undefined4 *)(puVar21 + 5));
          puVar21[4] = uVar7;
        }
        FUN_0043aa30(uVar7,uVar18,(long)iVar15 << 2);
        *(int *)(puVar21 + 5) = iVar15;
        FUN_004664b0(puVar21 + 6,puVar20 + 6);
        lVar22 = lVar22 + 0x48;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (0 < (int)(uVar4 - uVar10)) {
      iVar15 = 0;
      puVar20 = (undefined8 *)(lVar19 + (long)(int)uVar10 * 0x48);
      puVar21 = (undefined8 *)(*plVar2 + (long)(int)uVar10 * 0x48);
      do {
        uVar7 = *puVar20;
        uVar18 = puVar20[1];
        uVar13 = puVar20[2];
        *(undefined4 *)(puVar21 + 3) = *(undefined4 *)(puVar20 + 3);
        *puVar21 = uVar7;
        puVar21[1] = uVar18;
        puVar21[2] = uVar13;
        puVar21[4] = 0;
        puVar21[5] = 0x8000000000000000;
        uVar5 = *(uint *)(puVar20 + 5);
        puVar17 = (undefined4 *)puVar20[4];
        local_64 = uVar5;
        if ((int)uVar5 < 1) {
          puVar21[4] = 0;
          puVar21[5] = 0x8000000000000000;
        }
        else {
          puVar8 = (undefined4 *)FUN_00421ed0(puVar6,4,&local_64);
          *(uint *)(puVar21 + 5) = uVar5;
          *(uint *)((long)puVar21 + 0x2c) = local_64;
          uVar3 = uVar5 & 7;
          puVar21[4] = puVar8;
          if (6 < uVar5 - 1) {
            iVar12 = uVar3 - uVar5;
            puVar9 = puVar8;
            do {
              *puVar9 = *puVar17;
              puVar9[1] = puVar17[1];
              puVar9[2] = puVar17[2];
              puVar9[3] = puVar17[3];
              puVar9[4] = puVar17[4];
              puVar9[5] = puVar17[5];
              puVar9[6] = puVar17[6];
              puVar1 = puVar17 + 7;
              puVar8 = puVar9 + 8;
              puVar17 = puVar17 + 8;
              puVar9[7] = *puVar1;
              iVar12 = iVar12 + 8;
              puVar9 = puVar8;
            } while (iVar12 != 0);
          }
          if (uVar3 != 0) {
            iVar12 = -uVar3;
            do {
              iVar12 = iVar12 + 1;
              *puVar8 = *puVar17;
              puVar8 = puVar8 + 1;
              puVar17 = puVar17 + 1;
            } while (iVar12 != 0);
          }
        }
        FUN_004664a0(puVar21 + 6,puVar20 + 6);
        iVar15 = iVar15 + 1;
        puVar20 = puVar20 + 9;
        puVar21 = puVar21 + 9;
      } while (iVar15 != uVar4 - uVar10);
    }
    *(uint *)(param_1 + 0xa0) = uVar4;
  }
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  return;
}


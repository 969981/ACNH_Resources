
long * FUN_00537800(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  long *plVar22;
  undefined1 *puVar23;
  long *plVar24;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  puVar7 = PTR_DAT_048607b8;
  if (param_2 != param_1) {
    uVar5 = *(uint *)(param_2 + 1);
    lVar19 = *param_2;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < (int)uVar5) {
      lVar8 = FUN_004267f0(PTR_DAT_048607b8,uVar5,0x20,*param_1,(int)param_1[1]);
      *param_1 = lVar8;
    }
    uVar12 = *(uint *)(param_1 + 1);
    iVar16 = uVar12 - uVar5;
    if (0 < iVar16) {
      puVar15 = (uint *)(*param_1 + (long)(int)uVar12 * 0x20 + -0xc);
      do {
        puVar15[-1] = 0;
        if ((-1 < (int)*puVar15) && (*(long *)(puVar15 + -3) != 0)) {
          FUN_00421f90(puVar7,*(long *)(puVar15 + -3),4,*puVar15 & 0x3fffffff);
        }
        puVar15[-3] = 0;
        puVar15[-2] = 0;
        iVar16 = iVar16 + -1;
        *puVar15 = 0x80000000;
        puVar15 = puVar15 + -8;
      } while (iVar16 != 0);
      uVar12 = *(uint *)(param_1 + 1);
    }
    if ((int)uVar5 <= (int)uVar12) {
      uVar12 = uVar5;
    }
    uVar13 = (ulong)uVar12;
    lVar8 = *param_1;
    if ((lVar8 != lVar19) && (0 < (int)uVar12)) {
      lVar21 = 0;
      do {
        puVar20 = (undefined1 *)(lVar19 + lVar21);
        puVar23 = (undefined1 *)(lVar8 + lVar21);
        *puVar23 = *puVar20;
        iVar16 = *(int *)(puVar20 + 0x10);
        uVar18 = *(undefined8 *)(puVar20 + 8);
        uVar11 = *(undefined8 *)(puVar23 + 8);
        if ((int)(*(uint *)(puVar23 + 0x14) & 0x3fffffff) < iVar16) {
          uVar11 = FUN_004267f0(puVar7,iVar16,4,uVar11,*(undefined4 *)(puVar23 + 0x10));
          *(undefined8 *)(puVar23 + 8) = uVar11;
        }
        FUN_0043aa30(uVar11,uVar18,(long)iVar16 << 2);
        *(int *)(puVar23 + 0x10) = iVar16;
        lVar21 = lVar21 + 0x20;
        uVar13 = uVar13 - 1;
        *(undefined4 *)(puVar23 + 0x18) = *(undefined4 *)(puVar20 + 0x18);
      } while (uVar13 != 0);
    }
    if (0 < (int)(uVar5 - uVar12)) {
      iVar16 = 0;
      puVar20 = (undefined1 *)(lVar19 + (long)(int)uVar12 * 0x20);
      puVar23 = (undefined1 *)(*param_1 + (long)(int)uVar12 * 0x20);
      do {
        *puVar23 = *puVar20;
        *(undefined8 *)(puVar23 + 8) = 0;
        *(undefined8 *)(puVar23 + 0x10) = 0x8000000000000000;
        uVar6 = *(uint *)(puVar20 + 0x10);
        puVar17 = *(undefined4 **)(puVar20 + 8);
        local_6c = uVar6;
        if ((int)uVar6 < 1) {
          *(undefined8 *)(puVar23 + 8) = 0;
          *(undefined8 *)(puVar23 + 0x10) = 0x8000000000000000;
        }
        else {
          puVar9 = (undefined4 *)FUN_00421ed0(puVar7,4,&local_6c);
          *(uint *)(puVar23 + 0x10) = uVar6;
          *(uint *)(puVar23 + 0x14) = local_6c;
          uVar4 = uVar6 & 7;
          *(undefined4 **)(puVar23 + 8) = puVar9;
          if (6 < uVar6 - 1) {
            iVar14 = uVar4 - uVar6;
            puVar10 = puVar9;
            do {
              *puVar10 = *puVar17;
              puVar10[1] = puVar17[1];
              puVar10[2] = puVar17[2];
              puVar10[3] = puVar17[3];
              puVar10[4] = puVar17[4];
              puVar10[5] = puVar17[5];
              puVar10[6] = puVar17[6];
              puVar1 = puVar17 + 7;
              puVar9 = puVar10 + 8;
              puVar17 = puVar17 + 8;
              puVar10[7] = *puVar1;
              iVar14 = iVar14 + 8;
              puVar10 = puVar9;
            } while (iVar14 != 0);
          }
          if (uVar4 != 0) {
            iVar14 = -uVar4;
            do {
              iVar14 = iVar14 + 1;
              *puVar9 = *puVar17;
              puVar9 = puVar9 + 1;
              puVar17 = puVar17 + 1;
            } while (iVar14 != 0);
          }
        }
        iVar16 = iVar16 + 1;
        *(undefined4 *)(puVar23 + 0x18) = *(undefined4 *)(puVar20 + 0x18);
        puVar20 = puVar20 + 0x20;
        puVar23 = puVar23 + 0x20;
      } while (iVar16 != uVar5 - uVar12);
    }
    *(uint *)(param_1 + 1) = uVar5;
    if (param_2 != param_1) {
      lVar19 = param_2[2];
      uVar5 = *(uint *)(param_2 + 3);
      if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) < (int)uVar5) {
        lVar8 = FUN_004267f0(puVar7,uVar5,0x30,param_1[2],(int)param_1[3]);
        param_1[2] = lVar8;
      }
      uVar12 = *(uint *)(param_1 + 3);
      iVar16 = uVar12 - uVar5;
      if (0 < iVar16) {
        puVar17 = (undefined4 *)(param_1[2] + (long)(int)uVar12 * 0x30 + -0x18);
        do {
          *puVar17 = 0;
          if ((-1 < (int)puVar17[1]) && (*(long *)(puVar17 + -2) != 0)) {
            FUN_00421f90(puVar7,*(long *)(puVar17 + -2),4,puVar17[1] & 0x3fffffff);
          }
          *(undefined8 *)(puVar17 + -2) = 0;
          puVar17[1] = 0x80000000;
          puVar17[-4] = 0;
          if ((-1 < (int)puVar17[-3]) && (*(long *)(puVar17 + -6) != 0)) {
            FUN_00421f90(puVar7,*(long *)(puVar17 + -6),4,puVar17[-3] & 0x3fffffff);
          }
          *(undefined8 *)(puVar17 + -6) = 0;
          iVar16 = iVar16 + -1;
          puVar17[-3] = 0x80000000;
          puVar17 = puVar17 + -0xc;
        } while (iVar16 != 0);
        uVar12 = *(uint *)(param_1 + 3);
      }
      lVar8 = param_1[2];
      if ((int)uVar5 <= (int)uVar12) {
        uVar12 = uVar5;
      }
      uVar13 = (ulong)uVar12;
      if ((lVar8 != lVar19) && (0 < (int)uVar12)) {
        lVar21 = 0;
        do {
          puVar2 = (undefined8 *)(lVar19 + lVar21);
          puVar3 = (undefined8 *)(lVar8 + lVar21);
          iVar16 = *(int *)(puVar2 + 1);
          uVar18 = *puVar2;
          uVar11 = *puVar3;
          if ((int)(*(uint *)((long)puVar3 + 0xc) & 0x3fffffff) < iVar16) {
            uVar11 = FUN_004267f0(puVar7,iVar16,4,uVar11,*(undefined4 *)(puVar3 + 1));
            *puVar3 = uVar11;
          }
          FUN_0043aa30(uVar11,uVar18,(long)iVar16 << 2);
          *(int *)(puVar3 + 1) = iVar16;
          iVar16 = *(int *)(puVar2 + 3);
          uVar18 = puVar2[2];
          uVar11 = puVar3[2];
          if ((int)(*(uint *)((long)puVar3 + 0x1c) & 0x3fffffff) < iVar16) {
            uVar11 = FUN_004267f0(puVar7,iVar16,4,uVar11,*(undefined4 *)(puVar3 + 3));
            puVar3[2] = uVar11;
          }
          FUN_0043aa30(uVar11,uVar18,(long)iVar16 << 2);
          *(int *)(puVar3 + 3) = iVar16;
          uVar11 = puVar2[4];
          lVar21 = lVar21 + 0x30;
          uVar13 = uVar13 - 1;
          *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(puVar2 + 5);
          puVar3[4] = uVar11;
        } while (uVar13 != 0);
      }
      if (0 < (int)(uVar5 - uVar12)) {
        iVar16 = 0;
        plVar22 = (long *)(lVar19 + (long)(int)uVar12 * 0x30);
        plVar24 = (long *)(param_1[2] + (long)(int)uVar12 * 0x30);
        do {
          *plVar24 = 0;
          plVar24[1] = -0x8000000000000000;
          uVar6 = *(uint *)(plVar22 + 1);
          puVar17 = (undefined4 *)*plVar22;
          local_68 = uVar6;
          if ((int)uVar6 < 1) {
            *plVar24 = 0;
            plVar24[1] = -0x8000000000000000;
          }
          else {
            puVar9 = (undefined4 *)FUN_00421ed0(puVar7,4,&local_68);
            *(uint *)(plVar24 + 1) = uVar6;
            *(uint *)((long)plVar24 + 0xc) = local_68;
            uVar4 = uVar6 & 7;
            *plVar24 = (long)puVar9;
            if (6 < uVar6 - 1) {
              iVar14 = uVar4 - uVar6;
              puVar10 = puVar9;
              do {
                *puVar10 = *puVar17;
                puVar10[1] = puVar17[1];
                puVar10[2] = puVar17[2];
                puVar10[3] = puVar17[3];
                puVar10[4] = puVar17[4];
                puVar10[5] = puVar17[5];
                puVar10[6] = puVar17[6];
                puVar1 = puVar17 + 7;
                puVar9 = puVar10 + 8;
                puVar17 = puVar17 + 8;
                puVar10[7] = *puVar1;
                iVar14 = iVar14 + 8;
                puVar10 = puVar9;
              } while (iVar14 != 0);
            }
            if (uVar4 != 0) {
              iVar14 = -uVar4;
              do {
                iVar14 = iVar14 + 1;
                *puVar9 = *puVar17;
                puVar9 = puVar9 + 1;
                puVar17 = puVar17 + 1;
              } while (iVar14 != 0);
            }
          }
          plVar24[2] = 0;
          plVar24[3] = -0x8000000000000000;
          uVar6 = *(uint *)(plVar22 + 3);
          puVar17 = (undefined4 *)plVar22[2];
          local_64 = uVar6;
          if ((int)uVar6 < 1) {
            plVar24[2] = 0;
            plVar24[3] = -0x8000000000000000;
          }
          else {
            puVar9 = (undefined4 *)FUN_00421ed0(puVar7,4,&local_64);
            *(uint *)(plVar24 + 3) = uVar6;
            *(uint *)((long)plVar24 + 0x1c) = local_64;
            uVar4 = uVar6 & 7;
            plVar24[2] = (long)puVar9;
            if (6 < uVar6 - 1) {
              iVar14 = uVar4 - uVar6;
              puVar10 = puVar9;
              do {
                *puVar10 = *puVar17;
                puVar10[1] = puVar17[1];
                puVar10[2] = puVar17[2];
                puVar10[3] = puVar17[3];
                puVar10[4] = puVar17[4];
                puVar10[5] = puVar17[5];
                puVar10[6] = puVar17[6];
                puVar1 = puVar17 + 7;
                puVar9 = puVar10 + 8;
                puVar17 = puVar17 + 8;
                puVar10[7] = *puVar1;
                iVar14 = iVar14 + 8;
                puVar10 = puVar9;
              } while (iVar14 != 0);
            }
            if (uVar4 != 0) {
              iVar14 = -uVar4;
              do {
                iVar14 = iVar14 + 1;
                *puVar9 = *puVar17;
                puVar9 = puVar9 + 1;
                puVar17 = puVar17 + 1;
              } while (iVar14 != 0);
            }
          }
          lVar19 = plVar22[5];
          iVar16 = iVar16 + 1;
          plVar24[4] = plVar22[4];
          *(int *)(plVar24 + 5) = (int)lVar19;
          plVar22 = plVar22 + 6;
          plVar24 = plVar24 + 6;
        } while (iVar16 != uVar5 - uVar12);
      }
      *(uint *)(param_1 + 3) = uVar5;
    }
  }
  *(short *)(param_1 + 4) = (short)param_2[4];
  return param_1;
}


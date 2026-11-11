
void FUN_004e4960(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  uint local_2f8 [44];
  code *local_248;
  undefined1 *local_240;
  undefined1 *local_1c8;
  undefined1 *local_1b0;
  undefined1 *local_180;
  undefined1 *local_170;
  long local_70;
  
  puVar5 = PTR_DAT_048607b8;
  uVar4 = *(uint *)(param_2 + 1);
  uVar21 = (ulong)uVar4;
  if (0 < (int)uVar4) {
    local_2f8[0] = uVar4;
    puVar10 = (ulong *)FUN_00421ed0(PTR_DAT_048607b8,0x40,local_2f8);
    uVar6 = local_2f8[0];
    puVar16 = puVar10;
    if (uVar4 != 1) {
      iVar7 = (uVar4 & 1) - uVar4;
      puVar19 = puVar10;
      do {
        puVar16 = puVar19 + 0x10;
        puVar19[2] = 0;
        puVar19[3] = 0x8000000000000000;
        puVar19[4] = 0;
        puVar19[5] = 0;
        iVar7 = iVar7 + 2;
        puVar19[6] = 0;
        puVar19[7] = 0x8000000000000000;
        puVar19[10] = 0;
        puVar19[0xb] = 0x8000000000000000;
        puVar19[0xc] = 0;
        puVar19[0xd] = 0;
        puVar19[0xe] = 0;
        puVar19[0xf] = 0x8000000000000000;
        puVar19 = puVar16;
      } while (iVar7 != 0);
    }
    if ((uVar4 & 1) != 0) {
      puVar16[2] = 0;
      puVar16[3] = 0x8000000000000000;
      puVar16[4] = 0;
      puVar16[5] = 0;
      puVar16[6] = 0;
      puVar16[7] = 0x8000000000000000;
    }
    if (0 < (int)param_2[1]) {
      lVar22 = 0;
      lVar23 = 0;
      puVar16 = puVar10 + 1;
      do {
        lVar13 = *param_2;
        uVar24 = *(ulong *)(lVar13 + lVar22 + 0x18);
        puVar16[-1] = uVar24;
        iVar7 = FUN_00426fc0(*(undefined8 *)(lVar13 + lVar22 + 0x20));
        lVar23 = lVar23 + 1;
        *puVar16 = (uVar24 + (long)iVar7) - 1;
        lVar22 = lVar22 + 0x30;
        puVar16 = puVar16 + 8;
      } while (lVar23 < (int)param_2[1]);
    }
    if (1 < (int)uVar4) {
      uVar24 = 1;
LAB_004e4a74:
      do {
        puVar16 = puVar10 + uVar24 * 8;
        puVar19 = puVar10;
        do {
          while (puVar15 = puVar19, puVar16[1] < *puVar15) {
            puVar19 = (ulong *)puVar15[4];
            if ((ulong *)puVar15[4] == (ulong *)0x0) {
              puVar15[4] = (ulong)puVar16;
joined_r0x004e4ad4:
              uVar24 = uVar24 + 1;
              if (uVar21 <= uVar24) goto LAB_004e4b1c;
              goto LAB_004e4a74;
            }
          }
          if (*puVar16 <= puVar15[1]) {
            uVar12 = (uint)puVar15[7];
            if (uVar12 == (*(uint *)((long)puVar15 + 0x3c) & 0x3fffffff)) {
              FUN_00426990(puVar5,puVar15 + 6,8);
              uVar12 = (uint)puVar15[7];
            }
            *(ulong **)(puVar15[6] + (long)(int)uVar12 * 8) = puVar16;
            *(uint *)(puVar15 + 7) = uVar12 + 1;
            goto joined_r0x004e4ad4;
          }
          puVar19 = (ulong *)puVar15[5];
        } while ((ulong *)puVar15[5] != (ulong *)0x0);
        puVar15[5] = (ulong)puVar16;
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar21);
    }
LAB_004e4b1c:
    if (0 < (int)uVar4) {
      lVar23 = 0;
      uVar24 = 0;
      do {
        FUN_004e4da0(puVar10,*(undefined8 *)(*param_2 + lVar23),uVar24 & 0xffffffff);
        uVar24 = uVar24 + 1;
        lVar23 = lVar23 + 0x30;
      } while (uVar24 < uVar21);
      if (0 < (int)uVar4) {
        iVar7 = 0;
        do {
          while( true ) {
            puVar16 = puVar10 + (long)iVar7 * 8;
            if ((*puVar16 != 0) && ((int)puVar16[3] == 0)) break;
            iVar7 = iVar7 + 1;
            if ((int)uVar4 <= iVar7) goto LAB_004e4cd8;
          }
          puVar14 = (undefined8 *)(*param_2 + (long)iVar7 * 0x30);
          uVar1 = puVar14[3];
          uVar11 = puVar14[4];
          uVar2 = *puVar14;
          uVar3 = puVar14[1];
          uVar8 = FUN_00426fc0(uVar11);
          uVar9 = FUN_00426fc0(uVar3);
          uVar11 = FUN_00461bf0(param_1 + 0x2d8,uVar11,uVar3);
          FUN_00466aa0(local_2f8);
          local_240 = &LAB_00466dc0;
          local_248 = FUN_00466d40;
          local_1b0 = &LAB_00466eb0;
          local_1c8 = &LAB_00466e30;
          local_170 = &LAB_00467090;
          local_180 = &LAB_00467010;
          local_70 = param_1;
          FUN_004dcdd0(local_2f8,uVar11,uVar2,uVar9,uVar1,uVar8,uVar8,uVar9,1);
          uVar24 = 0;
          *puVar16 = 0;
          do {
            puVar16 = puVar10 + uVar24 * 8 + 3;
            uVar17 = (ulong)(uint)*puVar16;
            if (0 < (int)(uint)*puVar16) {
              uVar18 = 0;
              do {
                uVar20 = puVar10[uVar24 * 8 + 2];
                if (*(int *)(uVar20 + uVar18 * 4) == iVar7) {
                  uVar12 = (int)uVar17 - 1;
                  uVar17 = (ulong)uVar12;
                  *(uint *)puVar16 = uVar12;
                  if (uVar18 != uVar17) {
                    *(undefined4 *)(uVar20 + uVar18 * 4) =
                         *(undefined4 *)(uVar20 + (long)(int)uVar12 * 4);
                    uVar17 = (ulong)(uint)*puVar16;
                  }
                }
                uVar18 = uVar18 + 1;
              } while ((long)uVar18 < (long)(int)uVar17);
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 < uVar21);
          iVar7 = 1;
        } while (1 < (int)uVar4);
LAB_004e4cd8:
        if (0 < (int)uVar4) {
          puVar16 = puVar10 + (long)(int)uVar4 * 8 + -6;
          do {
            *(undefined4 *)(puVar16 + 5) = 0;
            if ((-1 < (int)*(uint *)((long)puVar16 + 0x2c)) && (puVar16[4] != 0)) {
              FUN_00421f90(puVar5,puVar16[4],8,*(uint *)((long)puVar16 + 0x2c) & 0x3fffffff);
            }
            puVar16[4] = 0;
            *(undefined4 *)((long)puVar16 + 0x2c) = 0x80000000;
            *(undefined4 *)(puVar16 + 1) = 0;
            if ((-1 < (int)*(uint *)((long)puVar16 + 0xc)) && (*puVar16 != 0)) {
              FUN_00421f90(puVar5,*puVar16,4,*(uint *)((long)puVar16 + 0xc) & 0x3fffffff);
            }
            *puVar16 = 0;
            uVar4 = (int)uVar21 - 1;
            uVar21 = (ulong)uVar4;
            *(undefined4 *)((long)puVar16 + 0xc) = 0x80000000;
            puVar16 = puVar16 + -8;
          } while (uVar4 != 0);
        }
      }
    }
    if ((puVar10 != (ulong *)0x0) && (-1 < (int)uVar6)) {
      FUN_00421f90(puVar5,puVar10,0x40,uVar6 & 0x3fffffff);
    }
  }
  return;
}



void FUN_00434550(long param_1,long *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  uint *puVar16;
  long *plVar17;
  undefined4 *puVar18;
  ulong uVar19;
  long *plVar20;
  uint local_64;
  
  puVar4 = PTR_DAT_048607b8;
  plVar20 = (long *)(param_1 + 0xb0);
  if (plVar20 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    lVar15 = *param_2;
    if ((int)(*(uint *)(param_1 + 0xbc) & 0x3fffffff) < (int)uVar2) {
      uVar5 = FUN_004267f0(PTR_DAT_048607b8,uVar2,0x10,*(undefined8 *)(param_1 + 0xb0),
                           *(undefined4 *)(param_1 + 0xb8));
      *(undefined8 *)(param_1 + 0xb0) = uVar5;
    }
    uVar8 = *(uint *)(param_1 + 0xb8);
    iVar10 = uVar8 - uVar2;
    if (0 < iVar10) {
      plVar17 = (long *)(*plVar20 + (long)(int)uVar8 * 0x10);
      do {
        plVar13 = plVar17 + -2;
        *(undefined4 *)(plVar17 + -1) = 0;
        if ((-1 < (int)*(uint *)((long)plVar17 + -4)) && (*plVar13 != 0)) {
          FUN_00421f90(puVar4,*plVar13,4,*(uint *)((long)plVar17 + -4) & 0x3fffffff);
        }
        *plVar13 = 0;
        iVar10 = iVar10 + -1;
        *(undefined4 *)((long)plVar17 + -4) = 0x80000000;
        plVar17 = plVar13;
      } while (iVar10 != 0);
      uVar8 = *(uint *)(param_1 + 0xb8);
    }
    if ((int)uVar2 <= (int)uVar8) {
      uVar8 = uVar2;
    }
    if ((*plVar20 != lVar15) && (0 < (int)uVar8)) {
      puVar11 = (uint *)(*plVar20 + 0xc);
      uVar19 = (ulong)uVar8;
      puVar16 = (uint *)(lVar15 + 8);
      do {
        uVar3 = *puVar16;
        uVar14 = *(undefined8 *)(puVar16 + -2);
        uVar5 = *(undefined8 *)(puVar11 + -3);
        if ((int)(*puVar11 & 0x3fffffff) < (int)uVar3) {
          uVar5 = FUN_004267f0(puVar4,uVar3,4,uVar5,puVar11[-1],puVar11);
          *(undefined8 *)(puVar11 + -3) = uVar5;
        }
        FUN_0043aa30(uVar5,uVar14,(long)(int)uVar3 << 2);
        puVar11[-1] = uVar3;
        puVar11 = puVar11 + 4;
        uVar19 = uVar19 - 1;
        puVar16 = puVar16 + 4;
      } while (uVar19 != 0);
    }
    iVar10 = uVar2 - uVar8;
    if (0 < iVar10) {
      iVar12 = 0;
      plVar17 = (long *)(lVar15 + (long)(int)uVar8 * 0x10);
      plVar20 = (long *)(*plVar20 + (long)(int)uVar8 * 0x10);
      do {
        while( true ) {
          *plVar20 = 0;
          plVar20[1] = -0x8000000000000000;
          uVar8 = *(uint *)(plVar17 + 1);
          puVar18 = (undefined4 *)*plVar17;
          if ((int)uVar8 < 1) break;
          local_64 = uVar8;
          puVar6 = (undefined4 *)FUN_00421ed0(puVar4,4,&local_64);
          *(uint *)(plVar20 + 1) = uVar8;
          *(uint *)((long)plVar20 + 0xc) = local_64;
          uVar3 = uVar8 & 7;
          *plVar20 = (long)puVar6;
          if (6 < uVar8 - 1) {
            iVar9 = uVar3 - uVar8;
            puVar7 = puVar6;
            do {
              *puVar7 = *puVar18;
              puVar7[1] = puVar18[1];
              puVar7[2] = puVar18[2];
              puVar7[3] = puVar18[3];
              puVar7[4] = puVar18[4];
              puVar7[5] = puVar18[5];
              puVar7[6] = puVar18[6];
              puVar1 = puVar18 + 7;
              puVar6 = puVar7 + 8;
              puVar18 = puVar18 + 8;
              puVar7[7] = *puVar1;
              iVar9 = iVar9 + 8;
              puVar7 = puVar6;
            } while (iVar9 != 0);
          }
          if (uVar3 != 0) {
            iVar9 = -uVar3;
            do {
              iVar9 = iVar9 + 1;
              *puVar6 = *puVar18;
              puVar6 = puVar6 + 1;
              puVar18 = puVar18 + 1;
            } while (iVar9 != 0);
          }
          iVar12 = iVar12 + 1;
          plVar17 = plVar17 + 2;
          plVar20 = plVar20 + 2;
          if (iVar12 == iVar10) goto LAB_004347d8;
        }
        *plVar20 = 0;
        plVar20[1] = -0x8000000000000000;
        iVar12 = iVar12 + 1;
        plVar17 = plVar17 + 2;
        plVar20 = plVar20 + 2;
      } while (iVar12 != iVar10);
    }
LAB_004347d8:
    *(uint *)(param_1 + 0xb8) = uVar2;
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  return;
}


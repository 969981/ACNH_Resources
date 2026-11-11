
long FUN_00537260(long param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  undefined4 *puVar20;
  uint *puVar21;
  long *plVar22;
  uint local_64;
  
  FUN_0043c080(param_1 + 0x18,param_2 + 0x18);
  if (param_2 != param_1) {
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    iVar13 = *(int *)(param_2 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < iVar13) {
      uVar8 = FUN_004267f0(PTR_DAT_048607b8,iVar13,4,uVar8,*(undefined4 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x20) = uVar8;
    }
    FUN_0043aa30(uVar8,uVar11,(long)iVar13 << 2);
    *(int *)(param_1 + 0x28) = iVar13;
    uVar2 = *(uint *)(param_2 + 0x38);
    lVar16 = *(long *)(param_2 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < (int)uVar2) {
      uVar8 = FUN_004267f0(PTR_DAT_048607b8,uVar2,0x28,*(undefined8 *)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x30) = uVar8;
    }
    uVar17 = *(uint *)(param_1 + 0x38);
    iVar13 = uVar17 - uVar2;
    if (0 < iVar13) {
      lVar9 = *(long *)(param_1 + 0x30) + (long)(int)uVar17 * 0x28;
      do {
        lVar9 = lVar9 + -0x28;
        FUN_00537690(lVar9);
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      uVar17 = *(uint *)(param_1 + 0x38);
    }
    lVar9 = *(long *)(param_1 + 0x30);
    uVar3 = uVar17;
    if ((int)uVar2 <= (int)uVar17) {
      uVar3 = uVar2;
    }
    if ((lVar9 != lVar16) && (0 < (int)uVar3)) {
      uVar19 = (ulong)uVar3;
      lVar15 = lVar16;
      do {
        FUN_00537800(lVar9,lVar15);
        uVar19 = uVar19 - 1;
        lVar9 = lVar9 + 0x28;
        lVar15 = lVar15 + 0x28;
      } while (uVar19 != 0);
      lVar9 = *(long *)(param_1 + 0x30);
    }
    if (0 < (int)(uVar2 - uVar3)) {
      uVar4 = ~uVar2;
      if ((int)uVar4 < (int)~uVar17) {
        uVar4 = ~uVar17;
      }
      iVar13 = uVar2 + uVar4 + 1;
      lVar9 = lVar9 + (long)(int)uVar3 * 0x28;
      lVar16 = lVar16 + (long)(int)uVar3 * 0x28;
      do {
        FUN_00536eb0(lVar9,lVar16);
        iVar13 = iVar13 + -1;
        lVar9 = lVar9 + 0x28;
        lVar16 = lVar16 + 0x28;
      } while (iVar13 != 0);
    }
    *(uint *)(param_1 + 0x38) = uVar2;
    puVar5 = PTR_DAT_048607b8;
    if (param_2 != param_1) {
      lVar16 = *(long *)(param_2 + 0x40);
      uVar2 = *(uint *)(param_2 + 0x48);
      if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < (int)uVar2) {
        uVar8 = FUN_004267f0(PTR_DAT_048607b8,uVar2,0x10,*(undefined8 *)(param_1 + 0x40),
                             *(undefined4 *)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 0x40) = uVar8;
      }
      uVar17 = *(uint *)(param_1 + 0x48);
      iVar13 = uVar17 - uVar2;
      if (0 < iVar13) {
        plVar18 = (long *)(*(long *)(param_1 + 0x40) + (long)(int)uVar17 * 0x10);
        do {
          plVar22 = plVar18 + -2;
          *(undefined4 *)(plVar18 + -1) = 0;
          if ((-1 < (int)*(uint *)((long)plVar18 + -4)) && (*plVar22 != 0)) {
            FUN_00421f90(puVar5,*plVar22,4,*(uint *)((long)plVar18 + -4) & 0x3fffffff);
          }
          *plVar22 = 0;
          iVar13 = iVar13 + -1;
          *(undefined4 *)((long)plVar18 + -4) = 0x80000000;
          plVar18 = plVar22;
        } while (iVar13 != 0);
        uVar17 = *(uint *)(param_1 + 0x48);
      }
      if ((int)uVar2 <= (int)uVar17) {
        uVar17 = uVar2;
      }
      if ((*(long *)(param_1 + 0x40) != lVar16) && (0 < (int)uVar17)) {
        uVar19 = (ulong)uVar17;
        puVar12 = (uint *)(*(long *)(param_1 + 0x40) + 0xc);
        puVar21 = (uint *)(lVar16 + 8);
        do {
          uVar3 = *puVar21;
          uVar11 = *(undefined8 *)(puVar21 + -2);
          uVar8 = *(undefined8 *)(puVar12 + -3);
          if ((int)(*puVar12 & 0x3fffffff) < (int)uVar3) {
            uVar8 = FUN_004267f0(puVar5,uVar3,4,uVar8,puVar12[-1],puVar12);
            *(undefined8 *)(puVar12 + -3) = uVar8;
          }
          FUN_0043aa30(uVar8,uVar11,(long)(int)uVar3 << 2);
          puVar12[-1] = uVar3;
          puVar12 = puVar12 + 4;
          uVar19 = uVar19 - 1;
          puVar21 = puVar21 + 4;
        } while (uVar19 != 0);
      }
      iVar13 = uVar2 - uVar17;
      if (0 < iVar13) {
        iVar14 = 0;
        plVar18 = (long *)(lVar16 + (long)(int)uVar17 * 0x10);
        plVar22 = (long *)(*(long *)(param_1 + 0x40) + (long)(int)uVar17 * 0x10);
        do {
          while( true ) {
            *plVar22 = 0;
            plVar22[1] = -0x8000000000000000;
            uVar17 = *(uint *)(plVar18 + 1);
            puVar20 = (undefined4 *)*plVar18;
            if ((int)uVar17 < 1) break;
            local_64 = uVar17;
            puVar6 = (undefined4 *)FUN_00421ed0(puVar5,4,&local_64);
            *(uint *)(plVar22 + 1) = uVar17;
            *(uint *)((long)plVar22 + 0xc) = local_64;
            uVar3 = uVar17 & 7;
            *plVar22 = (long)puVar6;
            if (6 < uVar17 - 1) {
              iVar10 = uVar3 - uVar17;
              puVar7 = puVar6;
              do {
                *puVar7 = *puVar20;
                puVar7[1] = puVar20[1];
                puVar7[2] = puVar20[2];
                puVar7[3] = puVar20[3];
                puVar7[4] = puVar20[4];
                puVar7[5] = puVar20[5];
                puVar7[6] = puVar20[6];
                puVar1 = puVar20 + 7;
                puVar6 = puVar7 + 8;
                puVar20 = puVar20 + 8;
                puVar7[7] = *puVar1;
                iVar10 = iVar10 + 8;
                puVar7 = puVar6;
              } while (iVar10 != 0);
            }
            if (uVar3 != 0) {
              iVar10 = -uVar3;
              do {
                iVar10 = iVar10 + 1;
                *puVar6 = *puVar20;
                puVar6 = puVar6 + 1;
                puVar20 = puVar20 + 1;
              } while (iVar10 != 0);
            }
            iVar14 = iVar14 + 1;
            plVar18 = plVar18 + 2;
            plVar22 = plVar22 + 2;
            if (iVar14 == iVar13) goto LAB_00537664;
          }
          *plVar22 = 0;
          plVar22[1] = -0x8000000000000000;
          iVar14 = iVar14 + 1;
          plVar18 = plVar18 + 2;
          plVar22 = plVar22 + 2;
        } while (iVar14 != iVar13);
      }
LAB_00537664:
      *(uint *)(param_1 + 0x48) = uVar2;
    }
  }
  return param_1;
}


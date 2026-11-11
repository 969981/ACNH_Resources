
long FUN_0066fe30(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  uint *puVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  uint *puVar17;
  long lVar18;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    lVar8 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    FUN_004435a0();
    lVar8 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  if (lVar8 != 0) {
    FUN_004435c0();
  }
  FUN_0043c080(param_1 + 0x20,param_2 + 0x20);
  FUN_0043c080(param_1 + 0x28,param_2 + 0x28);
  if (*(long *)(param_2 + 0x30) == 0) {
    lVar8 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    FUN_004435a0();
    lVar8 = *(long *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  }
  if (lVar8 != 0) {
    FUN_004435c0();
  }
  puVar7 = PTR_DAT_048607b8;
  if (param_2 != param_1) {
    lVar8 = *(long *)(param_2 + 0x38);
    uVar3 = *(uint *)(param_2 + 0x40);
    if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) < (int)uVar3) {
      uVar9 = FUN_004267f0(PTR_DAT_048607b8,uVar3,0x10,*(undefined8 *)(param_1 + 0x38),
                           *(undefined4 *)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x38) = uVar9;
    }
    uVar16 = *(uint *)(param_1 + 0x40);
    iVar11 = uVar16 - uVar3;
    if (0 < iVar11) {
      plVar6 = (long *)(*(long *)(param_1 + 0x38) + (long)(int)uVar16 * 0x10);
      do {
        plVar12 = plVar6 + -2;
        *(undefined4 *)(plVar6 + -1) = 0;
        if ((-1 < (int)*(uint *)((long)plVar6 + -4)) && (*plVar12 != 0)) {
          FUN_00421f90(puVar7,*plVar12,2,*(uint *)((long)plVar6 + -4) & 0x3fffffff);
        }
        *plVar12 = 0;
        iVar11 = iVar11 + -1;
        *(undefined4 *)((long)plVar6 + -4) = 0x80000000;
        plVar6 = plVar12;
      } while (iVar11 != 0);
      uVar16 = *(uint *)(param_1 + 0x40);
    }
    uVar2 = uVar16;
    if ((int)uVar3 <= (int)uVar16) {
      uVar2 = uVar3;
    }
    uVar10 = (ulong)uVar2;
    if ((*(long *)(param_1 + 0x38) != lVar8) && (0 < (int)uVar2)) {
      puVar13 = (uint *)(*(long *)(param_1 + 0x38) + 0xc);
      puVar17 = (uint *)(lVar8 + 8);
      do {
        uVar4 = *puVar17;
        uVar14 = *(undefined8 *)(puVar17 + -2);
        uVar9 = *(undefined8 *)(puVar13 + -3);
        if ((int)(*puVar13 & 0x3fffffff) < (int)uVar4) {
          uVar9 = FUN_004267f0(puVar7,uVar4,2,uVar9,puVar13[-1],puVar13);
          *(undefined8 *)(puVar13 + -3) = uVar9;
        }
        FUN_0043aa30(uVar9,uVar14,(long)(int)uVar4 << 1);
        puVar13[-1] = uVar4;
        puVar13 = puVar13 + 4;
        uVar10 = uVar10 - 1;
        puVar17 = puVar17 + 4;
      } while (uVar10 != 0);
    }
    if (0 < (int)(uVar3 - uVar2)) {
      uVar4 = ~uVar3;
      lVar15 = *(long *)(param_1 + 0x38);
      if ((int)uVar4 < (int)~uVar16) {
        uVar4 = ~uVar16;
      }
      iVar11 = uVar3 + uVar4 + 1;
      lVar18 = (long)(int)uVar2 * 0x10;
      do {
        puVar1 = (undefined8 *)(lVar15 + lVar18);
        *puVar1 = 0;
        puVar1[1] = 0x8000000000000000;
        if (lVar15 != lVar8) {
          iVar5 = *(int *)((undefined8 *)(lVar8 + lVar18) + 1);
          uVar9 = *(undefined8 *)(lVar8 + lVar18);
          if (iVar5 < 1) {
            uVar14 = 0;
          }
          else {
            uVar14 = FUN_004267f0(puVar7,iVar5,2,0,0,(long)puVar1 + 0xc);
            *(undefined8 *)(lVar15 + lVar18) = uVar14;
          }
          FUN_0043aa30(uVar14,uVar9,(long)iVar5 << 1);
          *(int *)(puVar1 + 1) = iVar5;
        }
        iVar11 = iVar11 + -1;
        lVar8 = lVar8 + 0x10;
        lVar15 = lVar15 + 0x10;
      } while (iVar11 != 0);
    }
    *(uint *)(param_1 + 0x40) = uVar3;
    if (param_2 != param_1) {
      uVar14 = *(undefined8 *)(param_2 + 0x48);
      iVar11 = *(int *)(param_2 + 0x50);
      uVar9 = *(undefined8 *)(param_1 + 0x48);
      if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) < iVar11) {
        uVar9 = FUN_004267f0(puVar7,iVar11,0x40,uVar9,*(undefined4 *)(param_1 + 0x50));
        *(undefined8 *)(param_1 + 0x48) = uVar9;
      }
      FUN_0043aa30(uVar9,uVar14,(long)iVar11 << 6);
      *(int *)(param_1 + 0x50) = iVar11;
    }
  }
  return param_1;
}


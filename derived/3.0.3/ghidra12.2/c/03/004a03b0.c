
undefined8 FUN_004a03b0(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined8 *local_260;
  undefined8 local_258;
  undefined8 local_250 [64];
  
  piVar6 = *(int **)(param_1 + 8);
  local_260 = local_250;
  local_258 = -0x7fffffe000000000;
  uVar7 = FUN_004a07b0(piVar6,param_2,&local_260);
  if (*piVar6 < 0) {
    uVar7 = 0;
    *piVar6 = 0;
  }
  else {
    iVar14 = (int)local_258;
    if (0 < (int)local_258) {
      lVar13 = 0;
      lVar15 = 0;
      do {
        FUN_00454890(*(undefined8 *)((long)local_260 + lVar13),piVar6 + 2);
        lVar15 = lVar15 + 1;
        lVar13 = lVar13 + 0x10;
        iVar14 = (int)local_258;
      } while (lVar15 < (int)local_258);
    }
    puVar5 = local_260;
    if (param_3 != (long *)0x0) {
      iVar4 = (int)param_3[1];
      iVar2 = iVar4 + iVar14;
      if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) < iVar2) {
        lVar13 = FUN_00426720(PTR_DAT_048607b8,iVar2,0x10,*param_3,iVar4);
        *param_3 = lVar13;
        lVar15 = local_258;
      }
      else {
        lVar13 = *param_3;
        lVar15 = local_258;
      }
      if (iVar14 != 0) {
        uVar11 = (long)iVar14 * 0x10 - 0x10;
        puVar10 = (undefined8 *)(lVar13 + (long)iVar4 * 0x10);
        uVar1 = ((uint)(uVar11 >> 4) & 0xfffffff) + 1;
        puVar9 = puVar5;
        if ((uVar1 & 7) != 0) {
          lVar13 = -((ulong)uVar1 & 7);
          puVar8 = puVar5;
          puVar12 = puVar10;
          do {
            puVar9 = puVar8 + 2;
            uVar3 = puVar8[1];
            puVar10 = puVar12 + 2;
            lVar13 = lVar13 + 1;
            *puVar12 = *puVar8;
            puVar12[1] = uVar3;
            puVar8 = puVar9;
            puVar12 = puVar10;
          } while (lVar13 != 0);
        }
        if (0x6f < uVar11) {
          do {
            uVar3 = puVar9[1];
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            uVar3 = puVar9[3];
            puVar10[2] = puVar9[2];
            puVar10[3] = uVar3;
            uVar3 = puVar9[5];
            puVar10[4] = puVar9[4];
            puVar10[5] = uVar3;
            uVar3 = puVar9[7];
            puVar10[6] = puVar9[6];
            puVar10[7] = uVar3;
            uVar3 = puVar9[9];
            puVar10[8] = puVar9[8];
            puVar10[9] = uVar3;
            uVar3 = puVar9[0xb];
            puVar10[10] = puVar9[10];
            puVar10[0xb] = uVar3;
            uVar3 = puVar9[0xd];
            puVar10[0xc] = puVar9[0xc];
            puVar10[0xd] = uVar3;
            puVar8 = puVar9 + 0xe;
            uVar3 = puVar9[0xf];
            puVar9 = puVar9 + 0x10;
            puVar10[0xe] = *puVar8;
            puVar10[0xf] = uVar3;
            puVar10 = puVar10 + 0x10;
          } while (puVar9 != puVar5 + (long)iVar14 * 2);
        }
      }
      *(int *)(param_3 + 1) = iVar2;
      local_258._4_4_ = (uint)((ulong)lVar15 >> 0x20);
      uVar1 = local_258._4_4_;
      goto joined_r0x004a04a8;
    }
  }
  uVar1 = local_258._4_4_;
  lVar15 = local_258;
joined_r0x004a04a8:
  if ((-1 < lVar15) && (local_258 = (ulong)uVar1 << 0x20, local_260 != (undefined8 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_260,0x10,uVar1 & 0x3fffffff);
  }
  return uVar7;
}


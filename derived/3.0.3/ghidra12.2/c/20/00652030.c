
void FUN_00652030(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  
  *param_1 = &PTR_LAB_048e3888;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = param_2;
  if (param_2 != 0) {
    FUN_004435a0(param_2);
  }
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  if ((int)param_5 < 1) {
    iVar9 = 0;
    *(uint *)(param_1 + 5) = param_5;
    uVar11 = param_5;
    if ((int)param_5 < 1) goto LAB_0065222c;
  }
  else {
    puVar6 = (undefined8 *)FUN_00426720(PTR_DAT_048607b8,param_5,0x40,0,0,(long)param_1 + 0x2c);
    param_1[4] = puVar6;
    if (2 < param_5 - 1) {
      iVar9 = (param_5 & 3) - param_5;
      puVar7 = puVar6;
      puVar12 = param_3;
      do {
        uVar10 = puVar12[2];
        puVar7[3] = puVar12[3];
        uVar2 = puVar12[1];
        *puVar7 = *puVar12;
        puVar7[1] = uVar2;
        puVar7[2] = uVar10;
        iVar9 = iVar9 + 4;
        uVar10 = puVar12[6];
        puVar7[7] = puVar12[7];
        uVar2 = puVar12[5];
        puVar7[4] = puVar12[4];
        puVar7[5] = uVar2;
        puVar7[6] = uVar10;
        uVar2 = puVar12[0xd];
        uVar10 = puVar12[0xe];
        uVar3 = puVar12[0xf];
        puVar7[0xc] = puVar12[0xc];
        puVar7[0xd] = uVar2;
        puVar6 = puVar7 + 0x20;
        uVar2 = puVar12[8];
        uVar4 = puVar12[9];
        uVar1 = puVar12[10];
        uVar5 = puVar12[0xb];
        puVar7[0xe] = uVar10;
        puVar7[0xf] = uVar3;
        param_3 = puVar12 + 0x20;
        puVar7[10] = uVar1;
        puVar7[0xb] = uVar5;
        puVar7[8] = uVar2;
        puVar7[9] = uVar4;
        uVar10 = puVar12[0x10];
        uVar2 = puVar12[0x11];
        uVar1 = puVar12[0x13];
        puVar7[0x12] = puVar12[0x12];
        puVar7[0x13] = uVar1;
        puVar7[0x10] = uVar10;
        puVar7[0x11] = uVar2;
        uVar10 = puVar12[0x14];
        uVar2 = puVar12[0x15];
        uVar1 = puVar12[0x17];
        puVar7[0x16] = puVar12[0x16];
        puVar7[0x17] = uVar1;
        puVar7[0x14] = uVar10;
        puVar7[0x15] = uVar2;
        uVar10 = puVar12[0x18];
        uVar2 = puVar12[0x19];
        uVar1 = puVar12[0x1b];
        puVar7[0x1a] = puVar12[0x1a];
        puVar7[0x1b] = uVar1;
        puVar7[0x18] = uVar10;
        puVar7[0x19] = uVar2;
        uVar10 = puVar12[0x1c];
        uVar2 = puVar12[0x1d];
        uVar1 = puVar12[0x1f];
        puVar7[0x1e] = puVar12[0x1e];
        puVar7[0x1f] = uVar1;
        puVar7[0x1c] = uVar10;
        puVar7[0x1d] = uVar2;
        puVar7 = puVar6;
        puVar12 = param_3;
      } while (iVar9 != 0);
    }
    if ((param_5 & 3) != 0) {
      iVar9 = -(param_5 & 3);
      do {
        uVar10 = param_3[1];
        puVar6[3] = param_3[3];
        puVar6[1] = uVar10;
        uVar10 = param_3[5];
        puVar6[7] = param_3[7];
        puVar6[5] = uVar10;
        uVar10 = *param_3;
        puVar6[2] = param_3[2];
        *puVar6 = uVar10;
        uVar10 = param_3[4];
        puVar6[6] = param_3[6];
        puVar6[4] = uVar10;
        puVar6 = puVar6 + 8;
        param_3 = param_3 + 8;
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0);
    }
    iVar9 = *(int *)(param_1 + 7);
    uVar11 = iVar9 + param_5;
    *(uint *)(param_1 + 5) = param_5;
    if ((int)uVar11 <= (int)(*(uint *)((long)param_1 + 0x3c) & 0x3fffffff)) {
LAB_0065222c:
      lVar8 = param_1[6];
      goto joined_r0x0065220c;
    }
  }
  lVar8 = FUN_00426720(PTR_DAT_048607b8,uVar11,8,param_1[6],iVar9,(long)param_1 + 0x3c);
  param_1[6] = lVar8;
joined_r0x0065220c:
  if (0 < (int)param_5) {
    lVar8 = lVar8 + (long)iVar9 * 8;
    do {
      FUN_0043bd50(lVar8,param_4);
      param_5 = param_5 - 1;
      lVar8 = lVar8 + 8;
      param_4 = param_4 + 8;
    } while (param_5 != 0);
  }
  *(uint *)(param_1 + 7) = uVar11;
  return;
}


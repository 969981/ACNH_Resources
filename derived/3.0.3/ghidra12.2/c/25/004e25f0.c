
void FUN_004e25f0(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  uint local_48;
  
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x228) + (long)param_2 * 0x18);
  uVar3 = *puVar6;
  lVar8 = puVar6[1];
  if (lVar8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00428370(lVar8);
    if ((uVar2 & 1) != 0) {
      FUN_0043dd30(uVar2 & 0xfffffffffffffffe);
    }
  }
  uVar5 = *(uint *)(param_1 + 0x3b8);
  if (uVar5 == (*(uint *)(param_1 + 0x3bc) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 0x3b0,0x18);
    uVar5 = *(uint *)(param_1 + 0x3b8);
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 0x3b0) + (long)(int)uVar5 * 0x18);
  puVar6[2] = uVar2;
  *puVar6 = uVar3;
  puVar6[1] = lVar8;
  *(uint *)(param_1 + 0x3b8) = uVar5 + 1;
  *(uint *)(*(long *)(param_1 + 0x2a0) + (long)param_2 * 4) = ~uVar5;
  local_48 = local_48 & 0xffffff00;
  uVar4 = *(uint *)(param_1 + 0x230);
  uVar5 = uVar4;
  if ((int)uVar4 < param_2 + 1) {
    uVar5 = param_2 + 1;
  }
  if ((int)(*(uint *)(param_1 + 0x234) & 0x3fffffff) < (int)uVar5) {
    uVar3 = FUN_00426720(PTR_DAT_048607b8,uVar5,0x18,*(undefined8 *)(param_1 + 0x228),uVar4,
                         param_1 + 0x234);
    uVar4 = *(uint *)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x228) = uVar3;
  }
  if (uVar5 - uVar4 == 0 || (int)uVar5 < (int)uVar4) {
    if ((int)uVar5 < (int)uVar4) {
      *(uint *)(param_1 + 0x230) = uVar5;
    }
  }
  else {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x228) + (long)(int)uVar4 * 0x18);
    uVar1 = uVar5 - uVar4 & 3;
    *(uint *)(param_1 + 0x230) = uVar5;
    if (2 < uVar5 + ~uVar4) {
      iVar9 = (uVar4 + uVar1) - uVar5;
      puVar7 = puVar6;
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        *(uint *)(puVar7 + 2) = local_48;
        *(undefined4 *)((long)puVar7 + 0x14) = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        *(uint *)(puVar7 + 5) = local_48;
        *(undefined4 *)((long)puVar7 + 0x2c) = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        *(uint *)(puVar7 + 8) = local_48;
        *(undefined4 *)((long)puVar7 + 0x44) = 0;
        puVar6 = puVar7 + 0xc;
        puVar7[9] = 0;
        puVar7[10] = 0;
        *(uint *)(puVar7 + 0xb) = local_48;
        *(undefined4 *)((long)puVar7 + 0x5c) = 0;
        iVar9 = iVar9 + 4;
        puVar7 = puVar6;
      } while (iVar9 != 0);
    }
    if (uVar1 != 0) {
      iVar9 = -uVar1;
      do {
        *puVar6 = 0;
        puVar6[1] = 0;
        *(uint *)(puVar6 + 2) = local_48;
        *(undefined4 *)((long)puVar6 + 0x14) = 0;
        iVar9 = iVar9 + 1;
        puVar6 = puVar6 + 3;
      } while (iVar9 != 0);
    }
  }
  lVar8 = (long)param_2 * 0x18;
  *(undefined8 *)(*(long *)(param_1 + 0x228) + lVar8) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x228) + lVar8 + 8) = 0;
  return;
}


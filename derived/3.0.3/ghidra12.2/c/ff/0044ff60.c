
undefined8 FUN_0044ff60(long *param_1,undefined8 *param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  long *plVar13;
  uint local_54;
  
  uVar5 = FUN_00450180();
  puVar4 = PTR_DAT_048607b8;
  uVar8 = (uint)uVar5;
  if (*(uint *)(param_1 + 1) == uVar8) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar8) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x18);
      uVar8 = *(uint *)(param_1 + 1);
    }
    puVar11 = (undefined8 *)(*param_1 + (long)(int)uVar8 * 0x18);
    *puVar11 = *param_2;
    plVar13 = puVar11 + 1;
    *plVar13 = 0;
    puVar12 = (uint *)(puVar11 + 2);
    puVar12[0] = 0;
    puVar12[1] = 0x80000000;
    uVar3 = *(uint *)(param_3 + 1);
    puVar9 = (undefined8 *)*param_3;
    if ((int)uVar3 < 1) {
      *plVar13 = 0;
      *puVar12 = 0;
      *(uint *)((long)puVar11 + 0x14) = 0x80000000;
    }
    else {
      local_54 = uVar3;
      puVar6 = (undefined8 *)FUN_00421ed0(puVar4,0x10,&local_54);
      *plVar13 = (long)puVar6;
      *puVar12 = uVar3;
      *(uint *)((long)puVar11 + 0x14) = local_54;
      uVar1 = uVar3 & 3;
      if (2 < uVar3 - 1) {
        iVar7 = uVar1 - uVar3;
        puVar11 = puVar6;
        puVar10 = puVar9;
        do {
          uVar2 = puVar10[1];
          puVar6 = puVar11 + 8;
          *puVar11 = *puVar10;
          puVar11[1] = uVar2;
          puVar9 = puVar10 + 8;
          uVar2 = puVar10[3];
          iVar7 = iVar7 + 4;
          puVar11[2] = puVar10[2];
          puVar11[3] = uVar2;
          uVar2 = puVar10[5];
          puVar11[4] = puVar10[4];
          puVar11[5] = uVar2;
          uVar2 = puVar10[7];
          puVar11[6] = puVar10[6];
          puVar11[7] = uVar2;
          puVar11 = puVar6;
          puVar10 = puVar9;
        } while (iVar7 != 0);
      }
      if (uVar1 != 0) {
        iVar7 = -uVar1;
        do {
          uVar2 = puVar9[1];
          *puVar6 = *puVar9;
          puVar6[1] = uVar2;
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 2;
          puVar9 = puVar9 + 2;
        } while (iVar7 != 0);
      }
    }
    *(uint *)(param_1 + 1) = uVar8 + 1;
  }
  return uVar5;
}


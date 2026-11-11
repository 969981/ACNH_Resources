
undefined8 FUN_0047ba00(long *param_1,undefined4 *param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  long *plVar13;
  uint local_54;
  
  uVar5 = FUN_0047d920();
  puVar4 = PTR_DAT_048607b8;
  uVar9 = (uint)uVar5;
  if (*(uint *)(param_1 + 1) == uVar9) {
    if ((*(uint *)((long)param_1 + 0xc) & 0x3fffffff) == uVar9) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x18);
      uVar9 = *(uint *)(param_1 + 1);
    }
    puVar11 = (undefined4 *)(*param_1 + (long)(int)uVar9 * 0x18);
    *puVar11 = *param_2;
    plVar13 = (long *)(puVar11 + 2);
    *plVar13 = 0;
    puVar12 = puVar11 + 4;
    puVar12[0] = 0;
    puVar12[1] = 0x80000000;
    uVar3 = *(uint *)(param_3 + 1);
    puVar10 = (undefined8 *)*param_3;
    if ((int)uVar3 < 1) {
      *plVar13 = 0;
      *puVar12 = 0;
      puVar11[5] = 0x80000000;
    }
    else {
      local_54 = uVar3;
      puVar6 = (undefined8 *)FUN_00421ed0(puVar4,8,&local_54);
      *plVar13 = (long)puVar6;
      *puVar12 = uVar3;
      puVar11[5] = local_54;
      uVar2 = uVar3 & 3;
      if (2 < uVar3 - 1) {
        iVar8 = uVar2 - uVar3;
        puVar7 = puVar6;
        do {
          *puVar7 = *puVar10;
          puVar7[1] = puVar10[1];
          puVar7[2] = puVar10[2];
          puVar1 = puVar10 + 3;
          puVar6 = puVar7 + 4;
          puVar10 = puVar10 + 4;
          puVar7[3] = *puVar1;
          iVar8 = iVar8 + 4;
          puVar7 = puVar6;
        } while (iVar8 != 0);
      }
      if (uVar2 != 0) {
        iVar8 = -uVar2;
        do {
          iVar8 = iVar8 + 1;
          *puVar6 = *puVar10;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar8 != 0);
      }
    }
    *(uint *)(param_1 + 1) = uVar9 + 1;
  }
  return uVar5;
}


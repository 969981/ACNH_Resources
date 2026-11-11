
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003ae520(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar8 = _UNK_04102888;
  uVar7 = _DAT_04102880;
  uVar6 = _UNK_041023d8;
  uVar5 = _DAT_041023d0;
  uVar4 = _UNK_04102208;
  uVar3 = _DAT_04102200;
  bVar1 = *(byte *)((long)param_1 + 0xe);
  if (bVar1 != 0) {
    uVar12 = 0;
    bVar2 = *(byte *)(*param_1 + 0x5a);
    uVar11 = (uint)*(byte *)((long)param_1 + 0xf);
    do {
      if (uVar11 != 0) {
        uVar14 = 0;
        do {
          local_70 = 0;
          uStack_68 = 0;
          FUN_0034fb50(&local_70);
          local_70 = 0x1000000100;
          lVar13 = param_1[4] + (ulong)(uVar14 + uVar12 * uVar11) * 0x48;
          FUN_00347b80(lVar13);
          FUN_00347b9c(lVar13,param_2,&local_70,param_3,param_4,0x100);
          FUN_003b4940(lVar13,"g3d_ShapeUniformBlock");
          lVar9 = FUN_00347a58(param_2,&local_70);
          param_4 = (lVar9 + 0xffU & -lVar9) + param_4;
          puVar10 = (undefined8 *)FUN_00347cc4(lVar13);
          *(uint *)(puVar10 + 6) = (uint)bVar2;
          puVar10[1] = uVar4;
          *puVar10 = uVar3;
          puVar10[3] = uVar8;
          puVar10[2] = uVar7;
          puVar10[5] = uVar6;
          puVar10[4] = uVar5;
          FUN_00347cdc(lVar13,0,0x100);
          FUN_00347cd8(lVar13);
          uVar11 = (uint)*(byte *)((long)param_1 + 0xf);
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(byte *)((long)param_1 + 0xf));
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != bVar1);
  }
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 1;
  return;
}


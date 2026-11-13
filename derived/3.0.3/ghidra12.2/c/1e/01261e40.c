
byte FUN_01261e40(float param_1,long param_2,float *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined *local_68;
  undefined *puStack_60;
  int local_58;
  int iStack_54;
  undefined *local_50;
  int local_48;
  int iStack_44;
  
  fVar7 = -param_1;
  if (0.0 <= param_1) {
    fVar7 = param_1;
  }
  if (1.1920929e-07 <= fVar7) {
    FUN_01261e40(0,param_2,param_3,param_4 & 1,0);
    FUN_016e026c(0,param_3,0,0);
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    local_68 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_60 = PTR_DAT_04bb2010 + 0x10;
    fVar8 = *param_3 - param_1;
    fVar7 = param_1 + *param_3;
    fVar9 = param_3[2] - param_1;
    param_1 = param_1 + param_3[2];
    local_48 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iStack_44 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iVar4 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    iVar5 = (int)((float)(int)param_1 / 5.0) - (uint)(param_1 < 0.0);
    local_58 = local_48;
    if (iVar4 <= local_48) {
      local_58 = iVar4;
    }
    if (local_48 <= iVar4) {
      local_48 = iVar4;
    }
    iStack_54 = iStack_44;
    if (iVar5 <= iStack_44) {
      iStack_54 = iVar5;
    }
    if (iStack_44 <= iVar5) {
      iStack_44 = iVar5;
    }
    local_50 = puStack_60;
    bVar6 = FUN_01261c40(param_2,&local_68,0,param_5 & 1);
  }
  else {
    bVar6 = 0;
    uVar2 = (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0);
    if ((uVar2 < 0x120) &&
       (uVar3 = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0), uVar3 < 0x100)) {
      uVar1 = 1 << (ulong)(uVar2 & 0x1f);
      param_2 = param_2 + (ulong)(uVar2 + uVar3 * 0x120 >> 5) * 4;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | uVar1;
      bVar6 = (*(uint *)(param_2 + 0x2410) & uVar1) == 0;
    }
  }
  return bVar6 & 1;
}


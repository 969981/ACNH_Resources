
undefined8 FUN_03ee71c8(float param_1,undefined4 param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  
  uVar2 = *(uint *)(param_3 + 0x18);
  if ((uVar2 >> 7 & 1) != 0) {
    fVar9 = 1.0;
    if (DAT_05b05338 <= 1.0) {
      fVar9 = DAT_05b05338;
    }
    param_1 = 0.0;
    if (0.0 <= DAT_05b05338) {
      param_1 = fVar9;
    }
  }
  if ((param_4 == 0) || (((uVar2 & 0x300) == 0 && (param_1 == 0.0)))) {
    uVar2 = uVar2 & 0xfffff8ff | 0x400;
    param_4 = param_3;
LAB_03ee7234:
    *(uint *)(param_3 + 0x18) = uVar2;
    uVar6 = FUN_03ee6a80(param_2,param_4,1);
    return uVar6;
  }
  if (((uVar2 & 0x500) == 0) && (param_1 == 1.0)) {
    uVar2 = uVar2 & 0xfffff8ff | 0x200;
    goto LAB_03ee7234;
  }
  uVar7 = FUN_03ee6a80(param_2,param_3,0);
  uVar8 = FUN_03ee6a80(param_2,param_4,0);
  if (((uVar7 & 1) == 0) && ((uVar8 & 1) == 0)) {
    return 0;
  }
  if ((uVar7 & 1) != 0) {
    if ((uVar8 & 1) != 0) {
      fVar9 = 1.0;
      if (param_1 <= 1.0) {
        fVar9 = param_1;
      }
      bVar3 = 0.0 <= param_1;
      param_1 = 0.0;
      if (bVar3) {
        param_1 = fVar9;
      }
      FUN_03ee7450(param_1,param_3,param_4);
      FUN_03ee7450(1.0 - param_1,param_4,param_3);
      goto LAB_03ee7300;
    }
    param_4 = param_3;
  }
  FUN_03ee7340(param_4);
LAB_03ee7300:
  uVar2 = *(uint *)(param_3 + 0x18) & 0xfffff8ff;
  bVar3 = false;
  bVar4 = true;
  bVar5 = false;
  if (param_1 < 1.0) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(param_1)) {
      bVar3 = param_1 < 0.0;
      bVar4 = param_1 == 0.0;
      bVar5 = false;
    }
  }
  uVar1 = uVar2 | 0x100;
  if (bVar4 || bVar3 != bVar5) {
    uVar1 = uVar2;
  }
  *(uint *)(param_3 + 0x18) = uVar1;
  return 1;
}


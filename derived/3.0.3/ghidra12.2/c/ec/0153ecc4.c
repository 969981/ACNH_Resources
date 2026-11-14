
void FUN_0153ecc4(float *param_1,int param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_48 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_40 = PTR_DAT_04bb2010 + 0x10;
  local_28 = 0;
  local_30 = puStack_40;
  uVar1 = FUN_017ba710(param_3,&local_48);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar2 == 0) {
      local_28._4_4_ = 0;
      local_28._0_4_ = 0;
      iVar3 = 0x10;
      iVar4 = 0x10;
    }
    else {
      local_28._0_4_ = *(int *)(lVar2 + 0xd88);
      local_28._4_4_ = *(int *)(lVar2 + 0xd8c);
      iVar3 = *(int *)(lVar2 + 0xd98);
      iVar4 = *(int *)(lVar2 + 0xd9c);
    }
    local_38._0_4_ = (int)local_28;
    if (iVar3 <= (int)local_28) {
      local_38._0_4_ = iVar3;
    }
    if ((int)local_28 <= iVar3) {
      local_28._0_4_ = iVar3;
    }
    local_38._4_4_ = local_28._4_4_;
    if (iVar4 <= local_28._4_4_) {
      local_38._4_4_ = iVar4;
    }
    if (local_28._4_4_ <= iVar4) {
      local_28._4_4_ = iVar4;
    }
  }
  else {
  }
  if (param_2 - 2U < 4) {
    fVar5 = (float)(int)local_38 * 5.0;
    fVar6 = (float)(int)local_28 * 5.0 + 5.0;
    fVar7 = (float)local_28._4_4_ * 5.0 + 5.0;
    switch(param_2) {
    case 3:
      fVar6 = fVar5;
      break;
    case 4:
      fVar5 = 40.0;
      fVar7 = fVar7 + -0.01;
      goto LAB_0153ee30;
    case 5:
      fVar5 = fVar6 + -0.01;
    case 2:
      fVar7 = (float)local_38._4_4_ * 5.0;
      fVar6 = fVar5;
    }
    fVar5 = 40.0;
  }
  else {
    fVar7 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
LAB_0153ee30:
  *param_1 = fVar6;
  param_1[1] = fVar5;
  param_1[2] = fVar7;
  return;
}


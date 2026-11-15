
uint FUN_0245bbd8(float *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float local_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  uVar7 = FUN_0245be94(param_1,1);
  uVar8 = FUN_0245be94(param_1,0);
  uVar5 = uVar8 >> 2 & 1;
  uVar1 = (uVar7 >> 1 & 1) + (uVar7 & 1) + (uVar7 >> 2 & 1) + (uVar7 >> 3 & 1);
  if (2 < uVar1) {
    return 1;
  }
  if (1 < uVar1 && (uVar8 >> 1 & 1) + (uVar8 & 1) + uVar5 + (uVar8 >> 3 & 1) < 4) {
    return 1;
  }
  if ((uVar8 & 5) == 0) {
    return 1;
  }
  if ((uVar8 & 10) == 0) {
    return 1;
  }
  local_68 = 0;
  uVar3 = uVar8 & 6;
  local_70 = 0x773f800000;
  uVar1 = uVar8 & 9;
  local_78 = 0;
  if ((uVar3 == 0) && (uVar1 != 0)) {
    _local_80 = CONCAT44(param_1[1] + 0.0,*param_1 + 5.0);
    local_78 = (ulong)(uint)(param_1[2] + -5.0);
    iVar9 = FUN_016ed290(&local_80,0,0,0);
    if (iVar9 != 0) {
      return 1;
    }
  }
  uVar2 = uVar8 & 3;
  if ((uVar8 & 0xc) == 0) {
    if (uVar2 != 0) {
      _local_80 = CONCAT44(param_1[1] + 0.0,*param_1 + -5.0);
      local_78 = CONCAT44(local_78._4_4_,param_1[2] + -5.0);
      iVar9 = FUN_016ed290(&local_80,0,0,0);
      if (iVar9 != 0) {
        return 1;
      }
    }
    bVar6 = uVar2 != 0;
  }
  else {
    if (uVar2 == 0) {
      _local_80 = CONCAT44(param_1[1] + 0.0,*param_1 + 5.0);
      local_78 = CONCAT44(local_78._4_4_,param_1[2] + 5.0);
      iVar9 = FUN_016ed290(&local_80,0,0,0);
      if (iVar9 != 0) {
        return 1;
      }
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    local_78._4_4_ = (undefined4)(local_78 >> 0x20);
  }
  if (uVar1 == 0) {
    if (uVar3 == 0) {
      if ((uVar7 & 9) != 0) {
        return 1;
      }
    }
    else {
      _local_80 = CONCAT44(param_1[1] + 0.0,*param_1 + -5.0);
      local_78 = CONCAT44(local_78._4_4_,param_1[2] + 5.0);
      iVar9 = FUN_016ed290(&local_80,0,0,0);
      if (iVar9 != 0) {
        return 1;
      }
    }
  }
  else if (((uVar7 & 9) != 0) && (uVar3 == 0)) {
    return 1;
  }
  if (((uVar7 & 3) == 0) || ((uVar8 & 0xc) != 0)) {
    bVar4 = false;
    if ((uVar7 & 0xc) != 0) {
      bVar4 = (bool)(bVar6 ^ 1);
    }
    if (!bVar4) {
      if ((uVar7 & 1) == 0) {
        uVar5 = 1;
      }
      if (uVar1 == 0 && (uVar7 & 6) != 0) {
        return 1;
      }
      if (uVar5 == 0) {
        return 1;
      }
      if (((uVar7 >> 2 & 1) != 0) && ((uVar8 & 1) == 0)) {
        return 1;
      }
      if (((uVar7 >> 1 & 1) == 0) || ((uVar8 >> 3 & 1) != 0)) {
        return (uint)((uVar8 & 2) == 0) & uVar7 >> 3;
      }
      return 1;
    }
  }
  return 1;
}


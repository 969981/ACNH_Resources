
void FUN_039d332c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  undefined8 local_3c;
  
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(long *)(param_1 + 0x4c0) = param_1 + 0x1138;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  if ((*(byte *)(param_1 + 0x498) >> 2 & 1) != 0) {
    FUN_039d0fe0(param_1,param_2,0,param_3,param_4);
    return;
  }
  plVar1 = (long *)(param_1 + 0x4a0);
  (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  local_48 = 0xff7fffffff7fffff;
  local_58 = PTR_DAT_04bd0f08 + 0x10;
  local_50 = 0x7f7fffff7f7fffff;
  local_40 = *(uint *)PTR_DAT_04bd0ea8;
  local_3c = 0x3f80000000000000;
  if (local_40 < 6) {
    if ((1 << (ulong)(local_40 & 0x1f) & 0x39U) == 0) {
      fVar3 = *(float *)(param_1 + 0x4ac);
      fVar4 = *(float *)(param_1 + 0x4a8);
    }
    else {
      fVar3 = *(float *)(param_1 + 0x4a8);
      fVar4 = *(float *)(param_1 + 0x4ac);
    }
    fVar6 = fVar3;
    fVar2 = 0.0;
    if (fVar3 <= 0.0) {
      fVar6 = 0.0;
      fVar2 = fVar3;
    }
    fVar5 = fVar4;
    fVar3 = 0.0;
    if (fVar4 <= 0.0) {
      fVar5 = 0.0;
      fVar3 = fVar4;
    }
    local_50 = CONCAT44(fVar3,fVar2);
    local_48 = CONCAT44(fVar5,fVar6);
  }
  FUN_038e77e4(&local_58,param_2,plVar1);
  return;
}


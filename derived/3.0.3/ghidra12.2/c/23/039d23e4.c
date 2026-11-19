
void FUN_039d23e4(long param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  undefined8 local_3c;
  
  FUN_039d24e8();
  if (*(long *)(param_1 + 0x13d8) != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    *(undefined8 *)(param_1 + 0x13d8) = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x4a0) + 0x38))(param_1 + 0x4a0,param_2);
  local_48 = 0xff7fffffff7fffff;
  local_58 = PTR_DAT_04bd0f08 + 0x10;
  local_50 = 0x7f7fffff7f7fffff;
  local_40 = *(uint *)PTR_DAT_04bd0ea8;
  local_3c = 0x3f80000000000000;
  if (local_40 < 6) {
    if ((1 << (ulong)(local_40 & 0x1f) & 0x39U) == 0) {
      fVar2 = *(float *)(param_1 + 0x4ac);
      fVar3 = *(float *)(param_1 + 0x4a8);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x4a8);
      fVar3 = *(float *)(param_1 + 0x4ac);
    }
    fVar5 = fVar2;
    fVar1 = 0.0;
    if (fVar2 <= 0.0) {
      fVar5 = 0.0;
      fVar1 = fVar2;
    }
    fVar4 = fVar3;
    fVar2 = 0.0;
    if (fVar3 <= 0.0) {
      fVar4 = 0.0;
      fVar2 = fVar3;
    }
    local_50 = CONCAT44(fVar2,fVar1);
    local_48 = CONCAT44(fVar4,fVar5);
  }
  FUN_038e77e4(&local_58,param_2,param_1 + 0x4a0);
  return;
}


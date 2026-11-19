
void FUN_03a67ffc(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,long *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort local_ec [2];
  uint local_e8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  undefined8 local_5c;
  
  local_68 = 0xff7fffffff7fffff;
  local_78 = PTR_DAT_04bd0f08 + 0x10;
  local_70 = 0x7f7fffff7f7fffff;
  local_60 = *(uint *)PTR_DAT_04bd0ea8;
  local_5c = 0x3f80000000000000;
  if (local_60 < 6) {
    if ((1 << (ulong)(local_60 & 0x1f) & 0x39U) == 0) {
      fVar3 = *(float *)(param_5 + 1);
      fVar2 = *(float *)((long)param_5 + 0xc);
    }
    else {
      fVar2 = *(float *)(param_5 + 1);
      fVar3 = *(float *)((long)param_5 + 0xc);
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
    local_70 = CONCAT44(fVar2,fVar1);
    local_68 = CONCAT44(fVar4,fVar5);
  }
  if ((*(uint *)(param_4 + 0x20) >> (ulong)(param_3 & 0x1f) & 1) != 0) {
    FUN_038e4cec(local_ec);
    local_ec[0] = 0;
    local_e8 = local_e8 & 0xfffffffe;
    FUN_038e4d90(local_ec,param_2);
    FUN_03a68310(param_1,param_2);
    FUN_038e77e4(&local_78,param_2,param_5);
    (**(code **)(*param_5 + 0x38))(param_5,param_2);
    FUN_038e4cec(local_ec);
    local_c4 = *(undefined1 *)(param_4 + 0x84);
    local_c2 = *(undefined1 *)(param_4 + 0x88);
    local_c0 = *(undefined1 *)(param_4 + 0x8c);
    local_e8 = local_e8 & 0xfffffffe | (uint)*(byte *)(param_4 + 0x80);
    local_ec[0] = (ushort)*(byte *)(param_4 + 0x78);
    local_c3 = local_c4;
    local_c1 = local_c2;
    local_bf = local_c0;
    FUN_038e4d90(local_ec,param_2);
    FUN_03a68b80(param_1,param_2);
  }
  return;
}



void FUN_0329e490(long *param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_6c = 0.0;
  local_68 = 0;
  local_60 = 0;
  FUN_0329e56c(param_1,&local_68,&local_6c,param_3);
  lVar1 = param_1[5];
  if (lVar1 == 0) {
    lVar1 = param_1[3];
    uVar3 = *(undefined8 *)(param_1[4] + 0xb8);
    (**(code **)(*param_1 + 0x80))(auStack_58,param_1);
    local_48 = PTR_DAT_04bc8e68 + 0x10;
    uStack_38 = *(undefined8 *)(*(long *)(lVar1 + 0xf0) + 0x18);
    local_40 = local_50;
    uVar2 = FUN_032d32b0(&uStack_38,&local_48);
    lVar1 = FUN_032d3cb0(uVar2,uVar3);
    param_1[5] = lVar1;
  }
  *(undefined1 *)(lVar1 + 0xe0) = 1;
  *(float *)(lVar1 + 0xf4) = local_68._4_4_;
  *(float *)(lVar1 + 0xfc) = local_60._4_4_;
  *(float *)(lVar1 + 0xf0) = (float)local_68;
  *(float *)(lVar1 + 0xf8) = (float)local_60;
  *param_2 = (float)local_60 - (float)local_68;
  param_2[1] = (local_60._4_4_ - local_68._4_4_) + local_6c;
  return;
}


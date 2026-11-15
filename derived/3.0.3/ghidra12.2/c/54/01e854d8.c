
void FUN_01e854d8(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 local_60 [2];
  long local_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_24;
  
  uVar1 = **(uint **)PTR_DAT_04bb3448;
  local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar1);
  if (uVar1 < 0x10) {
    lVar2 = *(long *)(&DAT_04178f50 + (long)(int)uVar1 * 8);
  }
  else {
    lVar2 = 1;
  }
  local_58 = param_1 + lVar2 * 0x2c;
  local_60[0] = 0x16;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
    local_38 = 0;
    uStack_30 = 0;
    local_40 = 0;
    local_28 = 1;
    local_24 = 0;
    local_50 = PTR_DAT_04bc0cd8 + 0x10;
    uStack_48 = 0;
    FUN_02906b00(&local_50,param_2,local_60);
  }
  return;
}


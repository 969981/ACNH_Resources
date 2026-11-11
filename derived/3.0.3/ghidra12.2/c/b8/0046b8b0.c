
undefined4 FUN_0046b8b0(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  undefined8 local_38;
  long local_28;
  
  local_40 = 0;
  local_38 = -0x8000000000000000;
  uVar3 = (ulong)((long)param_3 - (long)param_2) >> 3;
  local_50 = local_40;
  if (0 < (int)uVar3) {
    local_50 = FUN_00426720(PTR_DAT_048607c0,uVar3,8,0,0,(long)&local_38 + 4);
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    if (*param_2 != 0) {
      *(long *)(local_50 + (long)(int)local_38 * 8) = *param_2;
      local_38._4_4_ = (uint)((ulong)local_38 >> 0x20);
      local_38 = CONCAT44(local_38._4_4_,(int)local_38 + 1);
    }
  }
  lStack_48 = local_50 + (long)(int)local_38 * 8;
  local_60 = param_1 + 0x20;
  if (*(long *)(param_1 + 0x30) == 1) {
    *(undefined1 **)(param_1 + 0x30) = &LAB_0046e4f0;
    *(long **)(param_1 + 0x38) = &local_60;
  }
  lStack_58 = param_1;
  local_40 = local_50;
  local_28 = local_60;
  uVar2 = FUN_0046ba20(&local_28,local_50,lStack_48,param_1);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar1 = local_38._4_4_;
  if (*(undefined1 **)(local_60 + 0x10) == &LAB_0046e4f0) {
    *(undefined8 *)(local_60 + 0x10) = 1;
    *(undefined8 *)(local_60 + 0x18) = 0;
  }
  if ((-1 < local_38) && (local_38 = (ulong)local_38._4_4_ << 0x20, local_40 != 0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_40,8,uVar1 & 0x3fffffff);
  }
  return uVar2;
}


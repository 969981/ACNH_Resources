
void FUN_0035cd68(long param_1,code *param_2,undefined8 param_3)

{
  uint6 uVar1;
  uint6 local_50;
  undefined2 uStack_4a;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  _local_50 = 0;
  uStack_48 = 0;
  FUN_0034fbc0(&local_50);
  uVar1 = (uint6)_local_50;
  _local_50 = CONCAT26(0x29,uVar1 & 0xffffffff0000);
  (*param_2)(param_1 + 0x408,&local_50,param_3);
  *(undefined8 *)(param_1 + 0x408) = 0xffffffffffffffff;
  return;
}


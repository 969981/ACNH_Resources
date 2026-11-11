
long FUN_0054d870(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_70 [48];
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_0043a3b0(param_3,param_1,0xb0);
  FUN_004385f0(auStack_70,param_3 + 0x60);
  local_38 = *(undefined8 *)(param_3 + 0x98);
  local_40 = *(undefined8 *)(param_3 + 0x90);
  FUN_00482640(param_3 + 0x60,auStack_70,param_2);
  FUN_004385e0(auStack_70);
  return param_3;
}


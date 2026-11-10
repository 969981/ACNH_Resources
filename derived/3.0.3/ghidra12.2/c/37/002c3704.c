
uint FUN_002c3704(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 auStack_a0 [128];
  
  FUN_002b3fa8(auStack_a0);
  uVar1 = FUN_002c92a0(*(undefined8 *)(param_1 + 0x18),param_2,auStack_a0);
  if ((uVar1 & 1) != 0) {
    local_a4 = 0;
    local_ac = 0x40000;
    (**(code **)(*param_2 + 0x20))(param_2,&local_ac);
    FUN_002b415c(param_2,auStack_a0);
    local_a4 = 0;
    local_ac = 0x40000;
    (**(code **)(*param_2 + 0x20))(param_2,&local_ac);
  }
  FUN_002b4104(auStack_a0);
  return uVar1 & 1;
}



uint FUN_007285ac(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2);
  uVar1 = (**(code **)(*param_1 + 0x118))(param_1,uVar2);
  return (uVar1 ^ 0xffffffff) & 1;
}



uint FUN_0215c534(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined2 local_8;
  undefined2 local_6;
  undefined4 local_4;
  
  if (**(char **)(param_1 + 0x798) == '\0') {
    return 0;
  }
  local_8 = FUN_01ad5de0(param_1 + 0x790);
  local_6 = 0;
  local_4 = 0;
  FUN_0277d4ac(&local_8);
  uVar2 = FUN_01e57b44(*(undefined8 *)(*(long *)(param_1 + 8) + 0x3b0));
  uVar1 = FUN_0277d7b4(uVar2,&local_8);
  return uVar1 & 1;
}


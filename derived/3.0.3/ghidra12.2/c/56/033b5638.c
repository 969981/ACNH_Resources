
uint FUN_033b5638(long param_1,long *param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0xe8))(param_2);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return (uVar1 ^ 0xffffffff) & 1;
}


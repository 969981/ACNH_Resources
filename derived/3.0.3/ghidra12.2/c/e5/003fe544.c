
void FUN_003fe544(long param_1,long param_2)

{
  undefined1 uVar1;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = *(undefined1 *)(param_2 + 0xc);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined1 *)(param_1 + 0xc) = uVar1;
  return;
}


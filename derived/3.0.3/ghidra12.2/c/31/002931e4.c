
void FUN_002931e4(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  uVar2 = *(undefined2 *)(param_2 + 0xc);
  uVar1 = *(undefined1 *)(param_2 + 0xe);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined2 *)(param_1 + 0xc) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  return;
}


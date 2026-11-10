
void FUN_00167540(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00168534(param_2);
  *param_1 = uVar2 >> 8 & 0xffffff;
  *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0xd) = *(undefined1 *)(param_2 + 4);
  uVar1 = FUN_00168534(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *(uint *)(param_1 + 1) = uVar1 & 0x7fffffff;
  return;
}


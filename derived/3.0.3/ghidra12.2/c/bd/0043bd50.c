
void FUN_0043bd50(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  *param_1 = 0;
  if ((*param_2 & 0xfffffffffffffffe) != 0) {
    uVar1 = FUN_0043a3e0(*param_2 & 0xfffffffffffffffe);
    *param_1 = uVar1 | 1;
  }
  return;
}


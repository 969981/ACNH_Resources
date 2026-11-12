
void FUN_007d40d4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_013ec620(param_1 + 0xc);
  if ((uVar1 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x1c) = 0;
  }
  return;
}


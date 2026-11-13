
void FUN_0124f928(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 8;
  iVar2 = FUN_0277d6c4(lVar1);
  if (((iVar2 == 0xeb78) || (iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xeb77)) ||
     (iVar2 = FUN_0277d6c4(lVar1), iVar2 == 0xeb76)) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x1000000;
  }
  return;
}


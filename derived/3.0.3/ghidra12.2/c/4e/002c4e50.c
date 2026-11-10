
bool FUN_002c4e50(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  do {
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar1 == 0) break;
    uVar2 = FUN_002c4e88(param_1);
  } while ((uVar2 & 1) != 0);
  return iVar1 == 0;
}


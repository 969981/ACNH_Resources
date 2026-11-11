
void FUN_003c0a10(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 0x1c4)) {
    lVar2 = 0;
    lVar1 = param_1;
    do {
      FUN_003c2e44(lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0xe0;
    } while (lVar2 < *(int *)(param_1 + 0x1c4));
  }
  FUN_003c2d98(param_1 + 0xe0);
  FUN_003c2d98(param_1);
  return;
}


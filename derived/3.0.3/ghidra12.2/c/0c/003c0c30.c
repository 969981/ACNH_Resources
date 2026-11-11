
void FUN_003c0c30(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x1da) != '\0') {
    if (0 < *(int *)(param_1 + 0x1c4)) {
      lVar2 = 0;
      lVar1 = param_1;
      do {
        FUN_003c2e98(lVar1,1);
        lVar2 = lVar2 + 1;
        lVar1 = lVar1 + 0xe0;
      } while (lVar2 < *(int *)(param_1 + 0x1c4));
    }
    *(undefined1 *)(param_1 + 0x1da) = 0;
  }
  *(undefined1 *)(param_1 + 0x1d9) = 0;
  *(undefined2 *)(param_1 + 0x1db) = 0;
  return;
}


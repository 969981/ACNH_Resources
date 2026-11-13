
void FUN_014da190(long param_1)

{
  uint uVar1;
  int iVar2;
  int local_24;
  
  FUN_014ce120();
  FUN_014cef20(param_1);
  if (*(int *)(param_1 + 0x378) == 4) {
    FUN_014cd664(&local_24);
    uVar1 = local_24 + 0x20000000U >> 0x1e;
    iVar2 = uVar1 + 2;
    if (2 < uVar1 - 1) {
      iVar2 = 2;
    }
    *(int *)(param_1 + 0xb28) = iVar2;
  }
  if (*(int *)(param_1 + 0x3c8) != 0xc) {
    *(undefined4 *)(param_1 + 0xf60) = 0;
  }
  return;
}


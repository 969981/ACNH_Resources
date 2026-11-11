
void FUN_003b6670(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uStack_31;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x980));
  if (((*(char *)(param_1 + 0x950) != '\0') && (*(char *)(param_1 + 0x951) != '\0')) &&
     (*(char *)(param_1 + 0xa64) != '\0')) {
    lVar3 = param_1 + 0x5a8;
    uVar1 = FUN_003c482c(lVar3,1);
    FUN_003c40b8(lVar3,1,(uVar1 ^ 0xffffffff) & 1);
    uVar1 = FUN_003c482c(lVar3,2);
    FUN_003c40b8(lVar3,2,(uVar1 ^ 0xffffffff) & 1);
    uVar1 = FUN_003c482c(lVar3,3);
    FUN_003c40b8(lVar3,3,(uVar1 ^ 0xffffffff) & 1);
    if (*(char *)(param_1 + 0x952) != '\0') {
      lVar3 = param_1 + 0x6a0;
      uVar1 = FUN_003c482c(lVar3,1);
      FUN_003c40b8(lVar3,1,(uVar1 ^ 0xffffffff) & 1);
      uVar1 = FUN_003c482c(lVar3,2);
      FUN_003c40b8(lVar3,2,(uVar1 ^ 0xffffffff) & 1);
    }
  }
  FUN_003b4ea8(&uStack_31);
  for (lVar3 = *(long *)(param_1 + 0x898); lVar3 != param_1 + 0x890; lVar3 = *(long *)(lVar3 + 8)) {
    FUN_003c3700(lVar3 + -0x40);
  }
  FUN_003b4ec0(&uStack_31);
  if (*(int *)(param_1 + 0xf8) < *(int *)(param_1 + 0xf4)) {
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    uVar2 = FUN_003cb1d8();
    FUN_003cb9b0(uVar2,0x40);
  }
  if (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0x104)) {
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
    uVar2 = FUN_003cb1d8();
    FUN_003cb9b0(uVar2,0x40);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x980));
  return;
}


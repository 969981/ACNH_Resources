
void FUN_003c0ba0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x1d8) != '\0') {
    if (0 < *(int *)(param_1 + 0x1c4)) {
      lVar3 = 0;
      lVar2 = param_1;
      do {
        FUN_003c2e44(lVar2);
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0xe0;
      } while (lVar3 < *(int *)(param_1 + 0x1c4));
    }
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    uVar1 = FUN_003cb1d8();
    FUN_003cb704(uVar1,param_1);
    *(undefined1 *)(param_1 + 0x1d8) = 0;
  }
  return;
}


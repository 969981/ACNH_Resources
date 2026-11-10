
void FUN_00221810(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  while (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    FUN_00227860(param_1,5);
    iVar1 = *(int *)(param_1 + 0x58);
  }
  lVar2 = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  lVar3 = param_1;
  do {
    *(undefined2 *)(lVar3 + 0xad) = 0;
    lVar2 = lVar2 + 4;
    *(undefined1 *)(lVar3 + 0xaf) = 0;
    lVar3 = param_1 + lVar2;
    *(undefined1 *)(lVar3 + 0xac) = 0;
  } while (lVar2 != 0x400);
  *(undefined8 *)(param_1 + 0xa4) = 0;
  FUN_00220f24((int *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  return;
}



int FUN_00171cb4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_00171d04();
  if (iVar2 == 0) {
    lVar3 = FUN_001726f0(param_1,1);
    lVar1 = 0;
    if (*(int *)(lVar3 + 0xdc) != 5) {
      lVar1 = lVar3;
    }
    *(ushort *)(lVar1 + 0xe2) = *(ushort *)(lVar1 + 0xe2) | 0x400;
  }
  return iVar2;
}


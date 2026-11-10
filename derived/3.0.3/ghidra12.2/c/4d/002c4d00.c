
void FUN_002c4d00(long param_1,long param_2,ushort param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((param_3 == 0) || (*(int *)(param_1 + 0xa8) == 0)) {
    return;
  }
  iVar4 = param_3 - 1;
  do {
    lVar3 = FUN_002237a8(param_1 + 0x98);
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar3 - *(int *)(param_1 + 0xac);
    }
    lVar3 = lVar1 + 0x10;
    FUN_0021f4e0(lVar3);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    FUN_0021fed4(lVar3);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    FUN_002236bc(param_1 + 0x80,param_1 + 0x80,lVar1);
    FUN_0021f54c(lVar3,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    do {
      if (iVar4 == 0) {
        return;
      }
      iVar4 = iVar4 + -1;
    } while (*(int *)(param_1 + 0xa8) == 0);
  } while( true );
}


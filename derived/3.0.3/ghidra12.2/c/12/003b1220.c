
void FUN_003b1220(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 10) != '\0') {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x40) + lVar2;
      FUN_00347c8c(lVar1,param_2);
      FUN_00347b98(lVar1);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x48;
    } while (uVar3 < *(byte *)(param_1 + 10));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) & 0xfffe;
  return;
}


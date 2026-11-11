
void FUN_003ad6b0(long param_1,undefined8 param_2)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x32);
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      uVar3 = 0;
    }
    else {
      lVar4 = 0;
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 2;
        *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar4 + 0x78) = param_2;
        lVar1 = *(long *)(param_1 + 0x48) + lVar4;
        lVar4 = lVar4 + 0x100;
        *(undefined8 *)(lVar1 + 0xf8) = param_2;
      } while (((ulong)uVar2 & 0xfffe) != uVar3);
    }
    if ((uVar2 & 1) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x48) + uVar3 * 0x80 + 0x78) = param_2;
    }
  }
  return;
}


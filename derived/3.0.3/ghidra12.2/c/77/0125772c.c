
ushort FUN_0125772c(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x68);
  if ((uVar1 >> 5 & 1) != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar2 = FUN_011e5fa8();
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 0x68) & 0xffdb;
  }
  return uVar1 >> 5 & 1;
}


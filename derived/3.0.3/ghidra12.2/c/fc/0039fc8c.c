
undefined8 FUN_0039fc8c(long param_1)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x34);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 4 & 1) == 0) {
      if ((uVar1 >> 3 & 1) == 0) {
        return 0;
      }
      lVar2 = 2;
    }
    else {
      lVar2 = 1;
    }
  }
  else {
    lVar2 = 0;
  }
  return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + (&DAT_04beb438)[lVar2]) + 0x68);
}


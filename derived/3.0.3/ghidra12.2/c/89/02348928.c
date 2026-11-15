
undefined8 FUN_02348928(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(DAT_05231900 + 0x100);
  if (lVar1 != 0) {
    if ((*(ushort *)(param_1 + 0xc150) >> 1 & 1) != 0) {
      FUN_015a30c0(lVar1,param_1 + 0xc140);
    }
    if ((*(ushort *)(param_1 + 0xc180) >> 1 & 1) != 0) {
      FUN_015a30c0(lVar1,param_1 + 0xc170);
    }
  }
  return 0;
}


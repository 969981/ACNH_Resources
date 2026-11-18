
void FUN_032fc0c8(long param_1,uint param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x1788), lVar1 != 0)) {
    if ((param_2 & 1) == 0) {
      *(ushort *)(lVar1 + 0x50) = *(ushort *)(lVar1 + 0x50) & 0xfffe;
      FUN_032c2100();
      lVar1 = *(long *)(param_1 + 0xbf8);
      goto joined_r0x032fc114;
    }
    *(ushort *)(lVar1 + 0x50) = *(ushort *)(lVar1 + 0x50) | 1;
  }
  lVar1 = *(long *)(param_1 + 0xbf8);
joined_r0x032fc114:
  if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20c0), lVar1 == 0)) {
    lVar1 = *(long *)(param_1 + 0x30);
  }
  else if ((param_2 & 1) == 0) {
    *(ushort *)(lVar1 + 0x50) = *(ushort *)(lVar1 + 0x50) & 0xfffe;
    FUN_032c2100();
    lVar1 = *(long *)(param_1 + 0x30);
  }
  else {
    *(ushort *)(lVar1 + 0x50) = *(ushort *)(lVar1 + 0x50) | 1;
    lVar1 = *(long *)(param_1 + 0x30);
  }
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x1350), lVar1 != 0)) {
    if ((param_2 & 1) == 0) {
      *(ushort *)(lVar1 + 0x50) = *(ushort *)(lVar1 + 0x50) & 0xfffe;
      FUN_032c2100();
      return;
    }
    *(ushort *)(lVar1 + 0x50) = *(ushort *)(lVar1 + 0x50) | 1;
  }
  return;
}


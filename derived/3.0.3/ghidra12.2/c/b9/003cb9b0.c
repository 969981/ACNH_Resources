
void FUN_003cb9b0(long param_1,ushort param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x10); lVar1 != param_1 + 8; lVar1 = *(long *)(lVar1 + 8)) {
    if (*(char *)(lVar1 + -0xb0) != '\0') {
      *(ushort *)(lVar1 + -0xa0) = *(ushort *)(lVar1 + -0xa0) | param_2;
    }
  }
  return;
}


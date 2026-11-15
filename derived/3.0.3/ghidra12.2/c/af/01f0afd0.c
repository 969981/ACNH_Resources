
void FUN_01f0afd0(long param_1)

{
  long lVar1;
  uint uVar2;
  
  FUN_01ec8d30();
  FUN_0212eca8(param_1 + 0xaa50,1,0);
  *(uint *)(*(long *)(param_1 + 8) + 0x69c) = *(uint *)(*(long *)(param_1 + 8) + 0x69c) | 0x10;
  *(ushort *)(param_1 + 0xaf64) = *(ushort *)(param_1 + 0xaf64) | 0x20;
  uVar2 = *(uint *)(param_1 + 0xaf80);
  if (uVar2 < 3) {
    lVar1 = *(long *)PTR_DAT_04bb9a68 + (ulong)uVar2 * 0x1c;
    if (2 < uVar2) {
      lVar1 = *(long *)PTR_DAT_04bb9a68;
    }
    *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) | 1;
  }
  return;
}


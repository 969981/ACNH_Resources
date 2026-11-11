
void FUN_003a28b0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  
  uVar3 = *(ushort *)(*(long *)*param_1 + 0xe6);
  if ((ulong)uVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(long *)(*(long *)*param_1 + 0x18) + lVar4;
      puVar2 = param_1 + 1;
      if ((*(byte *)(lVar1 + 0x1c) & 1) != 0) {
        puVar2 = param_1 + 2;
      }
      FUN_0039fd18(lVar1,*puVar2,*(undefined1 *)(lVar1 + 0x19));
      lVar4 = lVar4 + 0x28;
    } while ((ulong)uVar3 * 0x28 != lVar4);
  }
  return;
}


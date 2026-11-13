
void FUN_013d8a60(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  byte bStack_7;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    uVar6 = 0;
    do {
      puVar1 = (undefined8 *)(lVar5 + ((long)((ulong)uVar6 << 0x20) >> 0x1c));
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined4 *)((long)puVar1 + 10) = 0xfffffffe;
      *(undefined2 *)((long)puVar1 + 0xe) = 0;
      *puVar1 = 0;
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    iVar4 = 0;
    do {
      lVar7 = lVar5 + (long)iVar4 * 0x28;
      if (*(long *)(lVar7 + 8) != 0 ||
          *(ulong *)(lVar7 + 0x10) != (ulong)CONCAT42(0xfffffffe,(ushort)bStack_7 << 8)) {
        *(long *)(lVar7 + 8) = 0;
        *(ulong *)(lVar7 + 0x10) = (ulong)CONCAT42(0xfffffffe,(ushort)bStack_7 << 8);
        *(undefined1 *)(lVar5 + (long)iVar4 * 0x28 + 0x18) = 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar3 != iVar4);
  }
  return;
}


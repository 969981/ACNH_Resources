
void FUN_00694514(long param_1)

{
  long lVar1;
  char cVar2;
  ushort uVar3;
  
  uVar3 = *(short *)(param_1 + 0x100) - 1;
  *(ushort *)(param_1 + 0x100) = uVar3;
  cVar2 = *(char *)(param_1 + (ulong)uVar3 * 8);
  if (cVar2 != '\x01') {
    lVar1 = param_1 + (ulong)uVar3 * 8;
    if (cVar2 == '\x02') {
      uVar3 = *(ushort *)(lVar1 + 2);
      *(ushort *)(param_1 + 0x202) = uVar3 + 1;
      *(undefined1 *)(param_1 + 0x102 + (ulong)uVar3) = 0x5b;
      uVar3 = *(ushort *)(param_1 + 0x202);
      *(ushort *)(param_1 + 0x202) = uVar3 + 1;
      *(undefined1 *)(param_1 + 0x102 + (ulong)uVar3) = 0x5d;
      uVar3 = *(ushort *)(param_1 + 0x202);
    }
    else {
      uVar3 = *(ushort *)(lVar1 + 2);
      *(ushort *)(param_1 + 0x202) = uVar3;
    }
    *(undefined1 *)(param_1 + (ulong)uVar3 + 0x102) = 0;
  }
  return;
}


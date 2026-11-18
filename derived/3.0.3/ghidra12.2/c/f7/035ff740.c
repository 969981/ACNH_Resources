
void FUN_035ff740(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_2 + 8);
  uVar3 = *(ushort *)(param_1 + 3);
  bVar1 = *(byte *)(param_1 + 5);
  bVar2 = *(byte *)(lVar4 + 0x148);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(long *)(param_2 + 0x48) = lVar4;
  *(ulong *)(param_2 + 0x50) =
       lVar4 + ((ulong)uVar3 & (2L << ((ulong)bVar2 & 0x3f)) + 0xffffU) * 0x4000;
  if (*(long *)(param_2 + 0x18) != 0) {
    if (*(int *)(param_2 + 0xa8) == 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(ulong *)(&DAT_04194b08 + (long)*(char *)(lVar4 + 0x149) * 8);
    }
    *(ulong *)(param_2 + 0x60) = *(long *)(param_2 + 0x18) + (uVar5 & bVar1) * 0x2000;
  }
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 0xfe | *(char *)(param_1 + 2) != '\0';
  if (*(char *)(param_1 + 1) != '\0') {
    bVar1 = *(byte *)(param_1 + 6);
    if (*(byte *)(param_2 + 400) < bVar1) {
      *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_2 + -0xdb0);
    }
    else if (bVar1 < *(byte *)(param_2 + 400)) {
      *(long *)(param_2 + 0x1a0) =
           (*(long *)(param_2 + -0xdb0) - *(long *)(param_2 + 0x198)) + *(long *)(param_2 + 0x1a0);
    }
    *(byte *)(param_2 + 400) = bVar1;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



void FUN_003be6a0(long param_1,byte param_2,int param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)(param_1 + 0x1e0);
  *(byte *)(param_1 + 0x123) = param_2;
  if (lVar3 != 0) {
    cVar2 = (param_2 & 1) - 1;
    do {
      while( true ) {
        uVar4 = (uint)*(ushort *)(lVar3 + 0x156);
        if (*(ushort *)(lVar3 + 0x158) < uVar4) break;
        *(undefined1 *)(lVar3 + 0x154) = *(undefined1 *)(lVar3 + 0x155);
        *(char *)(lVar3 + 0x155) = cVar2;
        *(short *)(lVar3 + 0x156) = (short)((param_3 + 4U) / 5);
        *(undefined2 *)(lVar3 + 0x158) = 0;
        lVar3 = *(long *)(lVar3 + 0x198);
        if (lVar3 == 0) {
          return;
        }
      }
      cVar1 = '\0';
      if (uVar4 != 0) {
        cVar1 = (char)((int)(((uint)*(byte *)(lVar3 + 0x155) - (uint)*(byte *)(lVar3 + 0x154)) *
                            (uint)*(ushort *)(lVar3 + 0x158)) / (int)uVar4);
      }
      *(byte *)(lVar3 + 0x154) = *(byte *)(lVar3 + 0x154) + cVar1;
      *(char *)(lVar3 + 0x155) = cVar2;
      *(short *)(lVar3 + 0x156) = (short)((ulong)(param_3 + 4U) / 5);
      *(undefined2 *)(lVar3 + 0x158) = 0;
      lVar3 = *(long *)(lVar3 + 0x198);
    } while (lVar3 != 0);
  }
  return;
}



uint FUN_03f855f0(long param_1,uint param_2)

{
  if ((param_2 & 0xff) - 8 < 0x75) {
    switch(param_2 & 0xff) {
    case 8:
      return (uint)(*(ushort *)(param_1 + 0x1012c) >> 4);
    case 9:
    case 0x19:
    case 0x29:
    case 0x39:
    case 0x49:
    case 0x59:
    case 0x69:
    case 0x79:
      param_1 = param_1 + (ulong)(param_2 >> 4 & 0xf) * 0x90;
      return (uint)((int)*(short *)(param_1 + 0x1012c) * (int)*(short *)(param_1 + 0x10116)) >> 0x13
      ;
    case 0x18:
      return (uint)(*(ushort *)(param_1 + 0x101bc) >> 4);
    case 0x28:
      return (uint)(*(ushort *)(param_1 + 0x1024c) >> 4);
    case 0x38:
      return (uint)(*(ushort *)(param_1 + 0x102dc) >> 4);
    case 0x48:
      return (uint)(*(ushort *)(param_1 + 0x1036c) >> 4);
    case 0x4c:
      if ((*(char *)(param_1 + 0x1059c) != '\0') &&
         (*(int *)(*(long *)(param_1 + 0x105f0) + 0x30) * 0x3f <
          **(int **)(param_1 + 8) - *(int *)(param_1 + 0x105e0))) {
        *(undefined1 *)(param_1 + 0x1059c) = 0;
        *(undefined1 *)(param_1 + 0x105e6) = 0;
      }
      break;
    case 0x58:
      return (uint)(*(ushort *)(param_1 + 0x103fc) >> 4);
    case 0x68:
      return (uint)(*(ushort *)(param_1 + 0x1048c) >> 4);
    case 0x78:
      return (uint)(*(ushort *)(param_1 + 0x1051c) >> 4);
    case 0x7c:
      return (uint)*(byte *)(param_1 + 0x105cc);
    }
  }
  return (uint)*(byte *)(param_1 + (ulong)(byte)param_2 + 0x10550);
}



void FUN_032f0180(undefined8 param_1,long param_2,undefined1 param_3,byte param_4)

{
  ushort uVar1;
  char cVar2;
  
  *(undefined2 *)(param_2 + 0x79e94) = 1;
  if (-1 < (char)*(byte *)(param_2 + 0xb52ca)) {
    *(long *)(param_2 + (ulong)*(byte *)(param_2 + 0xb52ca) * 0x50 + 0x6f520) = param_2 + 0x86b48;
  }
  cVar2 = *(char *)(param_2 + 2);
  if ((cVar2 != '\x11') && (cVar2 != '\x0e')) {
    if (cVar2 == '\t') {
      *(undefined2 *)(param_2 + 0x79e90) = 0x3700;
      *(undefined4 *)(param_2 + 0x79e8a) = 0x640032;
      FUN_032f1aa0();
      return;
    }
    *(byte *)(param_2 + 0x79e91) = param_4;
    *(undefined1 *)(param_2 + 0x79e90) = param_3;
    *(undefined4 *)(param_2 + 0x79e8a) = 0x640032;
    *(ushort *)(param_2 + 0x79e88) =
         *(ushort *)(param_2 + 0x79e88) & 0xffef |
         (ushort)(*(ushort *)(param_2 + 0x79da6) == (ushort)param_4) << 4;
    FUN_032f2480(param_1,param_2,300);
    return;
  }
  *(undefined1 *)(param_2 + 0x79e90) = param_3;
  *(byte *)(param_2 + 0x79e91) = param_4;
  *(undefined4 *)(param_2 + 0x79e8a) = 0x640032;
  uVar1 = *(ushort *)(param_2 + 0x79e88) | 0x13;
  if (*(ushort *)(param_2 + 0x79da6) != (ushort)param_4) {
    uVar1 = *(ushort *)(param_2 + 0x79e88) & 0xffef;
  }
  *(ushort *)(param_2 + 0x79e88) = uVar1;
  FUN_032f2110(param_1,param_2,300);
  return;
}


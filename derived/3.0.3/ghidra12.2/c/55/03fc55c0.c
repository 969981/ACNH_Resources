
void FUN_03fc55c0(long param_1,byte param_2)

{
  long *plVar1;
  
  if (*(byte *)(param_1 + 0x45e70) != param_2 >> 7) {
    *(byte *)(param_1 + 0x45e70) = param_2 >> 7;
  }
  if ((-1 < (char)param_2) && (param_2 = param_2 & 0xf, *(byte *)(param_1 + 0x45e71) != param_2)) {
    plVar1 = (long *)(param_1 + 0x226a80);
    if ((ushort)*(byte *)(param_1 + 0x45e7c) != *(ushort *)(param_1 + 0x45e7a)) {
      *(char *)(param_1 + 0x45e7c) = (char)*(ushort *)(param_1 + 0x45e7a);
      *(char *)(*plVar1 + 0x7802b) = *(char *)(*plVar1 + 0x7802b) + '\x01';
      *(undefined1 *)(*plVar1 + (ulong)*(byte *)(*plVar1 + 0x7802b) * 3 + 0x7802c) =
           *(undefined1 *)(param_1 + 0x45e7a);
      *(char *)(*plVar1 + (ulong)*(byte *)(*plVar1 + 0x7802b) * 3 + 0x7802d) =
           *(char *)(param_1 + 0x316a9f) + -1;
    }
    *(byte *)(param_1 + 0x45e71) = param_2;
    *(byte *)(*plVar1 + (ulong)*(byte *)(*plVar1 + 0x7802b) * 3 + 0x7802e) = param_2;
  }
  return;
}


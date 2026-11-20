
void FUN_03f8d6c0(long param_1)

{
  byte bVar1;
  byte bVar2;
  
  *(int *)(param_1 + 0x10) =
       *(int *)(param_1 + 0x10) +
       (int)*(short *)(param_1 + 0x10020 + (ulong)*(byte *)(param_1 + 10) * 0x20 +
                      (ulong)(*(ushort *)(param_1 + 8) >> 0xc) * 2);
  bVar1 = FUN_03f5f2f4();
  *(byte *)(param_1 + 0xc) = bVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 0x10) =
       *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1409c) +
       (int)*(short *)(param_1 + 0x10020 +
                      (ulong)((uint)*(ushort *)(param_1 + 0x14092) + (uint)bVar1 >> 0xc & 0xf) * 2);
  bVar2 = FUN_03f5f2f4(param_1,0);
  bVar1 = *(byte *)(param_1 + 0x14098);
  *(byte *)(param_1 + 0x14098) = bVar1 | bVar2;
  bVar1 = bVar1 | bVar2;
  *(byte *)(param_1 + 0x14082) = bVar1 >> 7;
  *(bool *)(param_1 + 0x14081) = bVar1 == 0;
  *(undefined1 *)(param_1 + 0x14089) = 1;
  return;
}


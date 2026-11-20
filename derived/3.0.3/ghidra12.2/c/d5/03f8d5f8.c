
void FUN_03f8d5f8(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  *(int *)(param_1 + 0x10) =
       *(int *)(param_1 + 0x10) +
       (int)*(short *)(param_1 + 0x10020 + (ulong)*(byte *)(param_1 + 10) * 0x20 +
                      (ulong)(*(ushort *)(param_1 + 8) >> 0xc) * 2);
  bVar1 = FUN_03f5f2f4();
  *(byte *)(param_1 + 0xc) = bVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x14092) + (uint)bVar1;
  uVar3 = uVar2 & 0xffff;
  *(int *)(param_1 + 0x10) =
       *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x140a0) +
       *(short *)(param_1 + 0x10020 + ((ulong)(uVar2 >> 0xb) & 0x1e)) * 2;
  uVar2 = FUN_03f5f068(param_1,uVar3);
  *(undefined1 *)(param_1 + 0x14089) = 1;
  *(bool *)(param_1 + 0x14081) = (*(ushort *)(param_1 + 0x14098) & uVar2) == 0;
  FUN_03f8d280(param_1,uVar3,*(ushort *)(param_1 + 0x14098) | uVar2);
  return;
}


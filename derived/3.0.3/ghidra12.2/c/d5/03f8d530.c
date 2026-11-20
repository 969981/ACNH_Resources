
void FUN_03f8d530(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  *(int *)(param_1 + 0x10) =
       *(int *)(param_1 + 0x10) +
       (int)*(short *)(param_1 + 0x10020 + (ulong)*(byte *)(param_1 + 10) * 0x20 +
                      (ulong)(*(ushort *)(param_1 + 8) >> 0xc) * 2);
  bVar2 = FUN_03f5f2f4();
  *(byte *)(param_1 + 0xc) = bVar2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x14092) + (uint)bVar2;
  *(int *)(param_1 + 0x10) =
       *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x140a0) +
       (int)*(short *)(param_1 + 0x10020 + (ulong)(uVar1 >> 0xc & 0xf) * 2);
  uVar3 = FUN_03f5f2f4(param_1,0,uVar1);
  *(undefined1 *)(param_1 + 0x14089) = 1;
  *(bool *)(param_1 + 0x14081) = (*(byte *)(param_1 + 0x14098) & uVar3) == 0;
  FUN_03f5ef94(param_1,0,uVar1,*(byte *)(param_1 + 0x14098) | uVar3);
  return;
}


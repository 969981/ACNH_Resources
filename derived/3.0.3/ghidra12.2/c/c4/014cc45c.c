
bool FUN_014cc45c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  
  puVar2 = PTR_DAT_04bb48f8;
  bVar1 = *(byte *)(param_1 + 0xf64);
  *(undefined1 *)(param_1 + 0xf64) = 0;
  *(undefined1 *)(param_1 + 0xf64) = *(undefined1 *)(**(long **)puVar2 + 0x17e);
  uVar3 = FUN_02582d8c(param_1 + 0x5d0,1);
  if ((uVar3 < 8) && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')
     ) {
    uVar5 = *(undefined4 *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d8);
  }
  else {
    uVar5 = 0xffffffff;
  }
  iVar4 = FUN_009b55cc(DAT_04d02f58,uVar5);
  uVar3 = (uint)*(byte *)(param_1 + 0xf64);
  if (iVar4 < 0) {
    uVar3 = uVar3 | 2;
    *(char *)(param_1 + 0xf64) = (char)uVar3;
  }
  bVar6 = *(byte *)(param_1 + 0xf65);
  if (((uVar3 ^ (bVar1 & 1) == 0) & 1) == 0) {
    bVar6 = bVar6 | 1;
    *(byte *)(param_1 + 0xf65) = bVar6;
  }
  if (((uVar3 >> 1 ^ (uint)((bVar1 >> 1 & 1) == 0)) & 1) == 0) {
    *(byte *)(param_1 + 0xf65) = bVar6 | 2;
  }
  return uVar3 != 0;
}


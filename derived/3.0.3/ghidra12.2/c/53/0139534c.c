
void FUN_0139534c(long param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar2 | 1;
  if (*(long *)(param_1 + 0x90) == 0) {
    if ((uVar2 >> 1 & 1) != 0) {
      return;
    }
  }
  else if (*(char *)(*(long *)(param_1 + 0x90) + 8) != '\0' || (uVar2 & 2) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x28) = uVar2 | 3;
  lVar5 = *DAT_0537d558;
  bVar3 = *(byte *)(lVar5 + 0x473);
  pbVar4 = PTR_DAT_04bc1220;
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
    if (7 < bVar3) {
      puVar1 = (uint *)(lVar5 + 0x48);
    }
    if (((*puVar1 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar3)) {
      FUN_01391f64(param_1 + 0x30,4);
      FUN_013925c4(&DAT_051a9940,*(undefined8 *)(param_1 + 0x58));
      return;
    }
    if ((*puVar1 & 8) != 0) {
      pbVar4 = (byte *)(lVar5 + 0x473);
    }
  }
  if (*pbVar4 < 8) {
    *(byte *)(param_1 + 0xa0) = *(byte *)(param_1 + 0xa0) | (byte)(1 << (ulong)(*pbVar4 & 0x1f));
  }
  return;
}


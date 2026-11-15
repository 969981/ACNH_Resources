
uint FUN_020e9e8c(long param_1)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  
  lVar7 = **(long **)PTR_DAT_04bb27d0;
  bVar3 = *(byte *)(lVar7 + 0x473);
  uVar6 = (ulong)(char)bVar3;
  pbVar8 = PTR_DAT_04bc1220;
  if (uVar6 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar7 + 0x48) + (uVar6 & 0xffffffff) * 0x20;
    if (7 < bVar3) {
      puVar1 = (uint *)(lVar7 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pbVar8 = (byte *)(lVar7 + 0x473);
    }
  }
  uVar5 = (*(byte *)(param_1 + 7) >> 4 & 3) - 1;
  if (uVar5 < 3) {
    uVar5 = uVar5 & 1;
  }
  else {
    uVar4 = *(ushort *)(param_1 + 5) >> 2;
    if ((ushort)*pbVar8 == (uVar4 & 0xff)) {
      return 1;
    }
    uVar5 = (uint)((ushort)(byte)*PTR_DAT_04bb5018 == (uVar4 & 0xff));
    if ((bVar3 != 0xff) && ((ushort)(byte)*PTR_DAT_04bb5018 == (uVar4 & 0xff))) {
      pbVar8 = (byte *)(lVar7 + 0x48) + (uVar6 & 0xffffffff) * 0x80;
      if (7 < bVar3) {
        pbVar8 = (byte *)(lVar7 + 0x48);
      }
      if ((*pbVar8 >> 3 & 1) == 0) {
        return 1;
      }
      lVar7 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
      lVar2 = lVar7 + (uVar6 & 0xffffffff) * 0xc;
      if (0xb < bVar3) {
        lVar2 = lVar7;
      }
      return (uint)(*(char *)(lVar2 + 10) != '\0');
    }
  }
  return uVar5;
}


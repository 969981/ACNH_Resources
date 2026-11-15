
uint FUN_01e3e21c(long param_1)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  
  if (*(uint *)(DAT_0537d558 + 0x10) < 2) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x690);
  if (lVar7 != 0) {
    lVar6 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar6 + 0x473);
    uVar5 = (ulong)(char)bVar2;
    pbVar8 = PTR_DAT_04bc1220;
    if (uVar5 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + (uVar5 & 0xffffffff) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar6 + 0x473);
      }
    }
    uVar4 = (*(byte *)(lVar7 + 7) >> 4 & 3) - 1;
    if (uVar4 < 3) {
      return uVar4 & 1;
    }
    uVar3 = *(ushort *)(lVar7 + 5) >> 2;
    if ((ushort)*pbVar8 != (uVar3 & 0xff)) {
      uVar4 = (uint)((ushort)DAT_0537bdb8 == (uVar3 & 0xff));
      if (bVar2 == 0xff) {
        return uVar4;
      }
      if ((ushort)DAT_0537bdb8 != (uVar3 & 0xff)) {
        return uVar4;
      }
      pbVar8 = (byte *)(lVar6 + 0x48) + (uVar5 & 0xffffffff) * 0x80;
      if (7 < bVar2) {
        pbVar8 = (byte *)(lVar6 + 0x48);
      }
      if ((*pbVar8 >> 3 & 1) != 0) {
        lVar7 = DAT_0537d558[2] + 0x108 + (uVar5 & 0xffffffff) * 0xc;
        if (0xb < bVar2) {
          lVar7 = DAT_0537d558[2] + 0x108;
        }
        return (uint)(*(char *)(lVar7 + 10) != '\0');
      }
    }
  }
  return 1;
}


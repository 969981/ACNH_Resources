
bool FUN_01e3f8bc(long param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  
  lVar10 = *(long *)(param_1 + 0x690);
  if (lVar10 == 0) goto LAB_01e3fa20;
  lVar8 = **(long **)PTR_DAT_04bb27d0;
  bVar4 = *(byte *)(lVar8 + 0x473);
  uVar9 = (ulong)(char)bVar4;
  pbVar11 = PTR_DAT_04bc1220;
  if (uVar9 != 0xffffffffffffffff) {
    puVar2 = (uint *)(lVar8 + 0x48) + (uVar9 & 0xffffffff) * 0x20;
    if (7 < bVar4) {
      puVar2 = (uint *)(lVar8 + 0x48);
    }
    if ((*puVar2 & 8) != 0) {
      pbVar11 = (byte *)(lVar8 + 0x473);
    }
  }
  bVar5 = *(byte *)(lVar10 + 7) >> 4 & 3;
  pbVar7 = PTR_DAT_04bc1220;
  if (bVar5 == 1) {
LAB_01e3f938:
    if (bVar4 != 0xff) goto LAB_01e3f944;
  }
  else {
    if (bVar5 == 2) goto LAB_01e3fa20;
    if (bVar5 == 3) goto LAB_01e3f938;
    uVar6 = CONCAT11(*(undefined1 *)(lVar10 + 6),*(undefined1 *)(lVar10 + 5)) >> 2;
    if ((ushort)*pbVar11 == (uVar6 & 0xff)) goto LAB_01e3fa20;
    if ((bVar4 == 0xff) || ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar6 & 0xff))) {
      if ((ushort)(byte)*PTR_DAT_04bb5018 == (uVar6 & 0xff)) goto LAB_01e3fa20;
      goto LAB_01e3f938;
    }
    pbVar11 = (byte *)(lVar8 + 0x48) + (uVar9 & 0xffffffff) * 0x80;
    if (7 < bVar4) {
      pbVar11 = (byte *)(lVar8 + 0x48);
    }
    if ((*pbVar11 >> 3 & 1) == 0) goto LAB_01e3fa20;
    lVar1 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
    lVar3 = lVar1 + (uVar9 & 0xffffffff) * 0xc;
    if (0xb < bVar4) {
      lVar3 = lVar1;
    }
    if (*(char *)(lVar3 + 10) != '\0') goto LAB_01e3fa20;
LAB_01e3f944:
    puVar2 = (uint *)(lVar8 + 0x48) + (uVar9 & 0xffffffff) * 0x20;
    if (7 < bVar4) {
      puVar2 = (uint *)(lVar8 + 0x48);
    }
    if ((*puVar2 & 8) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x473);
    }
  }
  uVar6 = *(ushort *)(lVar10 + 6) >> 2;
  if (((ushort)(byte)*PTR_DAT_04bb5018 != (uVar6 & 0xff)) && ((ushort)*pbVar7 != (uVar6 & 0xff))) {
    return (*(byte *)(param_1 + 0x69e) & 0x40) == 0;
  }
LAB_01e3fa20:
  return (bool)(*(byte *)(param_1 + 0x69e) >> 5 & 1);
}


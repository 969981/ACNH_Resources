
void FUN_01ea3608(long param_1,undefined4 param_2)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  
  *(undefined4 *)(param_1 + 0xae8c) = param_2;
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x690);
  if (lVar6 != 0) {
    lVar8 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar8 + 0x473);
    uVar7 = (ulong)(char)bVar3;
    pbVar9 = PTR_DAT_04bc1220;
    if (uVar7 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + (uVar7 & 0xffffffff) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar8 + 0x473);
      }
    }
    bVar4 = *(byte *)(lVar6 + 7) >> 4 & 3;
    if (bVar4 != 1) {
      if (bVar4 != 2) {
        if (bVar4 == 3) {
          return;
        }
        uVar5 = *(ushort *)(lVar6 + 5) >> 2;
        if ((ushort)*pbVar9 != (uVar5 & 0xff)) {
          if ((bVar3 == 0xff) || ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar5 & 0xff))) {
            if ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar5 & 0xff)) {
              return;
            }
          }
          else {
            pbVar9 = (byte *)(lVar8 + 0x48) + (uVar7 & 0xffffffff) * 0x80;
            if (7 < bVar3) {
              pbVar9 = (byte *)(lVar8 + 0x48);
            }
            if ((*pbVar9 >> 3 & 1) != 0) {
              lVar8 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
              lVar2 = lVar8 + (uVar7 & 0xffffffff) * 0xc;
              if (0xb < bVar3) {
                lVar2 = lVar8;
              }
              if (*(char *)(lVar2 + 10) == '\0') {
                return;
              }
            }
          }
        }
      }
      *(byte *)(lVar6 + 0xc) = *(byte *)(lVar6 + 0xc) & 0xfc | (byte)param_2 & 3;
    }
  }
  return;
}



void FUN_021123c8(undefined8 param_1,ushort *param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ushort uVar9;
  long *plVar10;
  
  lVar6 = DAT_053e5c10;
  if (DAT_053e5c10 != 0) {
    uVar5 = *param_2;
    plVar10 = *(long **)PTR_DAT_04bb27d0;
    uVar9 = uVar5 >> 5 & 0xff;
    FUN_020ea330(DAT_053e5c10,uVar9,0);
    uVar1 = uVar5 >> 5 & 0xff;
    lVar8 = *plVar10;
    bVar4 = *(byte *)(lVar8 + 0x473);
    lVar2 = lVar6 + (ulong)uVar1 * 0x15;
    if (0x6c < uVar1) {
      lVar2 = lVar6;
    }
    pbVar7 = &DAT_0537bdbc;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar3 = (uint *)(lVar8 + 0x48);
      }
      pbVar7 = &DAT_0537bdbc;
      if ((*puVar3 & 8) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x473);
      }
    }
    if ((ushort)*pbVar7 == (*(ushort *)(lVar2 + 5) >> 2 & 0xff)) {
      *(byte *)(lVar2 + 7) = *(byte *)(lVar2 + 7) & 0xcf;
      FUN_020ea498(lVar6,uVar9,0,0);
      return;
    }
  }
  return;
}


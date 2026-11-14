
void FUN_01dbd8c4(byte *param_1,long *param_2,byte *param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  long lVar6;
  
  lVar6 = *param_2;
  bVar5 = *(byte *)(lVar6 + 0x473);
  pbVar3 = PTR_DAT_04bc1220;
  puVar4 = (uint *)PTR_DAT_04bb32e0;
  if ((long)(char)bVar5 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar6 + 0x48);
    puVar2 = puVar1 + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
    if (7 < bVar5) {
      puVar2 = puVar1;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      bVar5 = *param_3;
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar2 = puVar1 + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar2 = puVar1;
        }
        if ((*puVar2 & 1) != 0) {
          puVar4 = puVar2 + 0x1e;
        }
      }
      goto LAB_01dbd958;
    }
    if ((*puVar2 & 8) != 0) {
      pbVar3 = (byte *)(lVar6 + 0x473);
    }
  }
  puVar4 = (uint *)PTR_DAT_04bb5038;
  if (*param_3 != *pbVar3) {
    puVar4 = (uint *)PTR_DAT_04bb32e0;
  }
LAB_01dbd958:
  bVar5 = (byte)*puVar4;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  *param_1 = bVar5;
  return;
}



undefined2 FUN_01dbd9e8(long *param_1,byte *param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  long lVar5;
  
  lVar5 = *param_1;
  bVar4 = *(byte *)(lVar5 + 0x473);
  if ((long)(char)bVar4 == 0xffffffffffffffff) {
    if (*param_2 != DAT_0537bdbc) {
      return 0xffff;
    }
  }
  else {
    puVar1 = (uint *)(lVar5 + 0x48);
    puVar3 = puVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
    if (7 < bVar4) {
      puVar3 = puVar1;
    }
    pbVar2 = &DAT_0537bdbc;
    if ((*puVar3 & 8) != 0) {
      pbVar2 = (byte *)(lVar5 + 0x473);
    }
    bVar4 = *param_2;
    if (bVar4 != *pbVar2) {
      if ((bVar4 == 0xff) || ((*puVar3 >> 3 & 1) == 0)) {
        return 0xffff;
      }
      puVar3 = puVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar3 = puVar1;
      }
      if (((byte)*puVar3 >> 3 & 1) != 0) {
        lVar5 = param_1[2];
        if ((((param_3 & 1) != 0) && (*(byte *)(lVar5 + 0x1e2) != 0xff)) &&
           (*(byte *)(lVar5 + 0x1e2) == bVar4)) {
          return *(undefined2 *)(lVar5 + 0x1e0);
        }
        if (bVar4 < 8) {
          return *(undefined2 *)(lVar5 + (ulong)(uint)bVar4 * 0xc + 0x108);
        }
      }
      return 0xffff;
    }
  }
  return DAT_04c487d4;
}


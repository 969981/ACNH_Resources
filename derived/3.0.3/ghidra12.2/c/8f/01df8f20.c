
void FUN_01df8f20(undefined1 *param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  long lVar7;
  
  *param_1 = 0;
  lVar7 = *DAT_0537d558;
  bVar6 = *(byte *)(lVar7 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar7 + 0x48);
    puVar2 = puVar1 + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar2 = puVar1;
    }
    uVar4 = *puVar2;
    pcVar3 = &DAT_0537bdbc;
    if ((uVar4 & 8) != 0) {
      pcVar3 = (char *)(lVar7 + 0x473);
    }
    cVar5 = *pcVar3;
    if (((cVar5 != '\0' && (uVar4 & 8) != 0) && ((*(byte *)puVar1 >> 3 & 1) != 0)) &&
       (*(long *)(DAT_0537fc68 + 0xd8) == *param_2)) {
      return;
    }
    *param_1 = 1;
    if (((cVar5 != '\x01' && (uVar4 & 8) != 0) && ((*(byte *)(lVar7 + 200) >> 3 & 1) != 0)) &&
       (*(long *)(DAT_0537fc68 + 0x108) == *param_2)) {
      return;
    }
    *param_1 = 2;
    if (((cVar5 != '\x02' && (uVar4 & 8) != 0) && ((*(byte *)(lVar7 + 0x148) >> 3 & 1) != 0)) &&
       (*(long *)(DAT_0537fc68 + 0x138) == *param_2)) {
      return;
    }
    *param_1 = 3;
    if (((cVar5 != '\x03' && (uVar4 & 8) != 0) && ((*(byte *)(lVar7 + 0x1c8) >> 3 & 1) != 0)) &&
       (*(long *)(DAT_0537fc68 + 0x168) == *param_2)) {
      return;
    }
    *param_1 = 4;
    if (((cVar5 != '\x04' && (uVar4 & 8) != 0) && ((*(byte *)(lVar7 + 0x248) >> 3 & 1) != 0)) &&
       (*(long *)(DAT_0537fc68 + 0x198) == *param_2)) {
      return;
    }
    *param_1 = 5;
    if (((cVar5 != '\x05' && (uVar4 & 8) != 0) && ((*(byte *)(lVar7 + 0x2c8) >> 3 & 1) != 0)) &&
       (*(long *)(DAT_0537fc68 + 0x1c8) == *param_2)) {
      return;
    }
    *param_1 = 6;
    if (((cVar5 != '\x06' && (uVar4 & 8) != 0) && ((*(byte *)(lVar7 + 0x348) >> 3 & 1) != 0)) &&
       (*(long *)(DAT_0537fc68 + 0x1f8) == *param_2)) {
      return;
    }
    *param_1 = 7;
    if (((cVar5 != '\a' && (uVar4 & 8) != 0) && ((*(byte *)(lVar7 + 0x3c8) >> 3 & 1) != 0)) &&
       (*(long *)(DAT_0537fc68 + 0x228) == *param_2)) {
      return;
    }
  }
  *param_1 = DAT_0537bdb8;
  return;
}



void FUN_022f3680(byte *param_1)

{
  uint *puVar1;
  uint *puVar2;
  char *pcVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  
  *param_1 = 0;
  lVar4 = *DAT_0537d558;
  bVar6 = *(byte *)(lVar4 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar4 + 0x48);
    puVar2 = puVar1 + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar2 = puVar1;
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar2 & 8) != 0) {
      pcVar3 = (char *)(lVar4 + 0x473);
    }
    if ((*pcVar3 == '\0' || (*puVar2 & 8) == 0) || ((*(byte *)puVar1 >> 3 & 1) == 0)) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
      *param_1 = 1;
      lVar4 = *DAT_0537d558;
      bVar6 = *(byte *)(lVar4 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar4 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar4 + 0x473);
    }
    if ((*pcVar3 != '\x01' && (*puVar1 & 8) != 0) && ((*(byte *)(lVar4 + 200) >> 3 & 1) != 0)) {
      bVar5 = bVar5 | 2;
      *param_1 = bVar5;
      lVar4 = *DAT_0537d558;
      bVar6 = *(byte *)(lVar4 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar4 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar4 + 0x473);
    }
    if ((*pcVar3 != '\x02' && (*puVar1 & 8) != 0) && ((*(byte *)(lVar4 + 0x148) >> 3 & 1) != 0)) {
      bVar5 = bVar5 | 4;
      *param_1 = bVar5;
      lVar4 = *DAT_0537d558;
      bVar6 = *(byte *)(lVar4 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar4 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar4 + 0x473);
    }
    if ((*pcVar3 != '\x03' && (*puVar1 & 8) != 0) && ((*(byte *)(lVar4 + 0x1c8) >> 3 & 1) != 0)) {
      bVar5 = bVar5 | 8;
      *param_1 = bVar5;
      lVar4 = *DAT_0537d558;
      bVar6 = *(byte *)(lVar4 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar4 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar4 + 0x473);
    }
    if ((*pcVar3 != '\x04' && (*puVar1 & 8) != 0) && ((*(byte *)(lVar4 + 0x248) >> 3 & 1) != 0)) {
      bVar5 = bVar5 | 0x10;
      *param_1 = bVar5;
      lVar4 = *DAT_0537d558;
      bVar6 = *(byte *)(lVar4 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar4 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar4 + 0x473);
    }
    if (((*pcVar3 != '\x05') && ((*puVar1 & 8) != 0)) && ((*(byte *)(lVar4 + 0x2c8) >> 3 & 1) != 0))
    {
      bVar5 = bVar5 | 0x20;
      *param_1 = bVar5;
      lVar4 = *DAT_0537d558;
      bVar6 = *(byte *)(lVar4 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar4 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar4 + 0x473);
    }
    if (((*pcVar3 != '\x06') && ((*puVar1 & 8) != 0)) && ((*(byte *)(lVar4 + 0x348) >> 3 & 1) != 0))
    {
      bVar5 = bVar5 | 0x40;
      *param_1 = bVar5;
      lVar4 = *DAT_0537d558;
      bVar6 = *(byte *)(lVar4 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar4 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar4 + 0x473);
    }
    if (((*pcVar3 != '\a') && ((*puVar1 & 8) != 0)) && ((*(byte *)(lVar4 + 0x3c8) >> 3 & 1) != 0)) {
      *param_1 = bVar5 | 0x80;
      return;
    }
  }
  return;
}


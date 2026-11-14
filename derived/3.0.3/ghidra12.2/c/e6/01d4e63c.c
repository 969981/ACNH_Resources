
void FUN_01d4e63c(undefined8 param_1)

{
  uint *puVar1;
  uint *puVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  byte bVar6;
  undefined1 local_24 [4];
  
  plVar4 = DAT_0537d558;
  lVar5 = *DAT_0537d558;
  bVar6 = *(byte *)(lVar5 + 0x473);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar5 + 0x48);
    puVar2 = puVar1 + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar2 = puVar1;
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar2 & 8) != 0) {
      pcVar3 = (char *)(lVar5 + 0x473);
    }
    if ((*pcVar3 != '\0' && (*puVar2 & 8) != 0) && ((*(byte *)puVar1 >> 3 & 1) != 0)) {
      local_24[0] = 0;
      param_1 = FUN_01d432b0(param_1,local_24);
      lVar5 = *plVar4;
      bVar6 = *(byte *)(lVar5 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar5 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar5 + 0x473);
    }
    if ((*pcVar3 != '\x01' && (*puVar1 & 8) != 0) && ((*(byte *)(lVar5 + 200) >> 3 & 1) != 0)) {
      local_24[0] = 1;
      param_1 = FUN_01d432b0(param_1,local_24);
      lVar5 = *plVar4;
      bVar6 = *(byte *)(lVar5 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar5 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar5 + 0x473);
    }
    if ((*pcVar3 != '\x02' && (*puVar1 & 8) != 0) && ((*(byte *)(lVar5 + 0x148) >> 3 & 1) != 0)) {
      local_24[0] = 2;
      param_1 = FUN_01d432b0(param_1,local_24);
      lVar5 = *plVar4;
      bVar6 = *(byte *)(lVar5 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar5 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar5 + 0x473);
    }
    if ((*pcVar3 != '\x03' && (*puVar1 & 8) != 0) && ((*(byte *)(lVar5 + 0x1c8) >> 3 & 1) != 0)) {
      local_24[0] = 3;
      param_1 = FUN_01d432b0(param_1,local_24);
      lVar5 = *plVar4;
      bVar6 = *(byte *)(lVar5 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar5 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar5 + 0x473);
    }
    if ((*pcVar3 != '\x04' && (*puVar1 & 8) != 0) && ((*(byte *)(lVar5 + 0x248) >> 3 & 1) != 0)) {
      local_24[0] = 4;
      param_1 = FUN_01d432b0(param_1,local_24);
      lVar5 = *plVar4;
      bVar6 = *(byte *)(lVar5 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar5 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar5 + 0x473);
    }
    if ((*pcVar3 != '\x05' && (*puVar1 & 8) != 0) && ((*(byte *)(lVar5 + 0x2c8) >> 3 & 1) != 0)) {
      local_24[0] = 5;
      param_1 = FUN_01d432b0(param_1,local_24);
      lVar5 = *plVar4;
      bVar6 = *(byte *)(lVar5 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar5 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar5 + 0x473);
    }
    if (((*pcVar3 != '\x06') && ((*puVar1 & 8) != 0)) && ((*(byte *)(lVar5 + 0x348) >> 3 & 1) != 0))
    {
      local_24[0] = 6;
      param_1 = FUN_01d432b0(param_1,local_24);
      lVar5 = *plVar4;
      bVar6 = *(byte *)(lVar5 + 0x473);
      if (bVar6 == 0xff) {
        return;
      }
    }
    puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
    if (7 < bVar6) {
      puVar1 = (uint *)(lVar5 + 0x48);
    }
    pcVar3 = &DAT_0537bdbc;
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar5 + 0x473);
    }
    if (((*pcVar3 != '\a') && ((*puVar1 & 8) != 0)) && ((*(byte *)(lVar5 + 0x3c8) >> 3 & 1) != 0)) {
      local_24[0] = 7;
      FUN_01d432b0(param_1,local_24);
    }
  }
  return;
}


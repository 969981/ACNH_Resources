
/* WARNING: Removing unreachable block (ram,0x01390e08) */

undefined8 FUN_013908c8(long param_1)

{
  char *pcVar1;
  uint *puVar2;
  uint *puVar3;
  char *pcVar4;
  char cVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  
  lVar7 = **(long **)PTR_DAT_04bb27d0;
  bVar6 = *(byte *)(lVar7 + 0x473);
  uVar8 = (ulong)(char)bVar6;
  pcVar1 = (char *)(lVar7 + 0x473);
  pcVar9 = PTR_DAT_04bc1220;
  pcVar10 = PTR_DAT_04bc1220;
  if (uVar8 == 0xffffffffffffffff) {
    if (*PTR_DAT_04bc1220 != '\0') goto LAB_01390928;
LAB_01390930:
    if (bVar6 != 0xff) {
      puVar2 = (uint *)(lVar7 + 0x48);
      puVar3 = puVar2 + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar3 = puVar2;
      }
      pcVar4 = PTR_DAT_04bc1220;
      if ((*puVar3 & 8) != 0) {
        pcVar4 = pcVar1;
      }
      if ((*pcVar4 == '\0') || (((*puVar3 >> 3 & 1) != 0 && ((*(byte *)puVar2 >> 3 & 1) != 0))))
      goto LAB_01390984;
      goto LAB_013909a0;
    }
    if (*PTR_DAT_04bc1220 == '\0') {
LAB_01390984:
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        return 0;
      }
      goto LAB_01390994;
    }
    if (*PTR_DAT_04bc1220 != '\x01') goto LAB_013909d4;
LAB_013909dc:
    if (bVar6 != 0xff) {
      puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      pcVar10 = PTR_DAT_04bc1220;
      if ((*puVar2 & 8) != 0) {
        pcVar10 = pcVar1;
      }
      if ((*pcVar10 == '\x01') ||
         (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar7 + 200) >> 3 & 1) != 0)))) goto LAB_01390a2c;
      goto LAB_01390a48;
    }
    cVar5 = *PTR_DAT_04bc1220;
    if (cVar5 == '\x01') {
LAB_01390a2c:
      if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
        return 0;
      }
      goto LAB_01390a3c;
    }
  }
  else {
    puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
    if (7 < bVar6) {
      puVar2 = (uint *)(lVar7 + 0x48);
    }
    pcVar4 = PTR_DAT_04bc1220;
    if ((*puVar2 & 8) != 0) {
      pcVar4 = pcVar1;
    }
    if (*pcVar4 == '\0') goto LAB_01390930;
LAB_01390928:
    if ((*(byte *)(lVar7 + 0x48) >> 1 & 1) != 0) goto LAB_01390930;
LAB_01390994:
    if (bVar6 != 0xff) {
LAB_013909a0:
      puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pcVar10 = pcVar1;
      }
    }
    if (*pcVar10 == '\x01') goto LAB_013909dc;
LAB_013909d4:
    if ((*(byte *)(lVar7 + 200) >> 1 & 1) != 0) goto LAB_013909dc;
LAB_01390a3c:
    if (bVar6 != 0xff) {
LAB_01390a48:
      puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pcVar9 = pcVar1;
      }
    }
    cVar5 = *pcVar9;
  }
  pcVar10 = PTR_DAT_04bc1220;
  if ((cVar5 == '\x02') || ((*(byte *)(lVar7 + 0x148) >> 1 & 1) != 0)) {
    if (bVar6 != 0xff) {
      puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      pcVar9 = PTR_DAT_04bc1220;
      if ((*puVar2 & 8) != 0) {
        pcVar9 = pcVar1;
      }
      if ((*pcVar9 == '\x02') ||
         (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar7 + 0x148) >> 3 & 1) != 0))))
      goto LAB_01390ad4;
      goto LAB_01390af0;
    }
    cVar5 = *PTR_DAT_04bc1220;
    if (cVar5 == '\x02') {
LAB_01390ad4:
      if ((*(byte *)(param_1 + 8) >> 2 & 1) == 0) {
        return 0;
      }
      goto LAB_01390ae4;
    }
  }
  else {
LAB_01390ae4:
    if (bVar6 != 0xff) {
LAB_01390af0:
      puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pcVar10 = pcVar1;
      }
    }
    cVar5 = *pcVar10;
  }
  pcVar10 = PTR_DAT_04bc1220;
  if ((cVar5 == '\x03') || ((*(byte *)(lVar7 + 0x1c8) >> 1 & 1) != 0)) {
    if (bVar6 != 0xff) {
      puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      pcVar9 = PTR_DAT_04bc1220;
      if ((*puVar2 & 8) != 0) {
        pcVar9 = pcVar1;
      }
      if ((*pcVar9 == '\x03') ||
         (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar7 + 0x1c8) >> 3 & 1) != 0))))
      goto LAB_01390b7c;
      goto LAB_01390b98;
    }
    cVar5 = *PTR_DAT_04bc1220;
    if (cVar5 == '\x03') {
LAB_01390b7c:
      if ((*(byte *)(param_1 + 8) >> 3 & 1) == 0) {
        return 0;
      }
      goto LAB_01390b8c;
    }
  }
  else {
LAB_01390b8c:
    if (bVar6 != 0xff) {
LAB_01390b98:
      puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pcVar10 = pcVar1;
      }
    }
    cVar5 = *pcVar10;
  }
  pcVar10 = PTR_DAT_04bc1220;
  if ((cVar5 == '\x04') || ((*(byte *)(lVar7 + 0x248) >> 1 & 1) != 0)) {
    if (bVar6 != 0xff) {
      puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      pcVar9 = PTR_DAT_04bc1220;
      if ((*puVar2 & 8) != 0) {
        pcVar9 = pcVar1;
      }
      if ((*pcVar9 == '\x04') ||
         (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar7 + 0x248) >> 3 & 1) != 0))))
      goto LAB_01390c24;
      goto LAB_01390c40;
    }
    cVar5 = *PTR_DAT_04bc1220;
    if (cVar5 == '\x04') {
LAB_01390c24:
      if ((*(byte *)(param_1 + 8) >> 4 & 1) == 0) {
        return 0;
      }
      goto LAB_01390c34;
    }
  }
  else {
LAB_01390c34:
    if (bVar6 != 0xff) {
LAB_01390c40:
      puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pcVar10 = pcVar1;
      }
    }
    cVar5 = *pcVar10;
  }
  pcVar10 = PTR_DAT_04bc1220;
  if ((cVar5 == '\x05') || ((*(byte *)(lVar7 + 0x2c8) >> 1 & 1) != 0)) {
    if (bVar6 != 0xff) {
      puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      pcVar9 = PTR_DAT_04bc1220;
      if ((*puVar2 & 8) != 0) {
        pcVar9 = pcVar1;
      }
      if ((*pcVar9 == '\x05') ||
         (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar7 + 0x2c8) >> 3 & 1) != 0))))
      goto LAB_01390ccc;
      goto LAB_01390ce8;
    }
    cVar5 = *PTR_DAT_04bc1220;
    if (cVar5 == '\x05') {
LAB_01390ccc:
      if ((*(byte *)(param_1 + 8) >> 5 & 1) == 0) {
        return 0;
      }
      goto LAB_01390cdc;
    }
  }
  else {
LAB_01390cdc:
    if (bVar6 != 0xff) {
LAB_01390ce8:
      puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pcVar10 = pcVar1;
      }
    }
    cVar5 = *pcVar10;
  }
  pcVar10 = PTR_DAT_04bc1220;
  if ((cVar5 == '\x06') || ((*(byte *)(lVar7 + 0x348) >> 1 & 1) != 0)) {
    if (bVar6 == 0xff) {
      cVar5 = *PTR_DAT_04bc1220;
      if (cVar5 != '\x06') goto LAB_01390dbc;
LAB_01390d74:
      if ((*(byte *)(param_1 + 8) >> 6 & 1) == 0) {
        return 0;
      }
      goto LAB_01390d84;
    }
    puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
    if (7 < bVar6) {
      puVar2 = (uint *)(lVar7 + 0x48);
    }
    pcVar9 = PTR_DAT_04bc1220;
    if ((*puVar2 & 8) != 0) {
      pcVar9 = pcVar1;
    }
    if ((*pcVar9 == '\x06') ||
       (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar7 + 0x348) >> 3 & 1) != 0)))) goto LAB_01390d74;
LAB_01390d90:
    puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
    if (7 < bVar6) {
      puVar2 = (uint *)(lVar7 + 0x48);
    }
    if ((*puVar2 & 8) != 0) {
      pcVar10 = pcVar1;
    }
  }
  else {
LAB_01390d84:
    if (bVar6 != 0xff) goto LAB_01390d90;
  }
  cVar5 = *pcVar10;
LAB_01390dbc:
  if ((cVar5 == '\a') || ((*(byte *)(lVar7 + 0x3c8) >> 1 & 1) != 0)) {
    if (bVar6 == 0xff) {
      if (*PTR_DAT_04bc1220 != '\a') {
        return 1;
      }
    }
    else {
      puVar2 = (uint *)(lVar7 + 0x48) + (uVar8 & 0xffffffff) * 0x20;
      if (7 < bVar6) {
        puVar2 = (uint *)(lVar7 + 0x48);
      }
      pcVar10 = PTR_DAT_04bc1220;
      if ((*puVar2 & 8) != 0) {
        pcVar10 = pcVar1;
      }
      if (*pcVar10 != '\a') {
        if ((*puVar2 >> 3 & 1) == 0) {
          return 1;
        }
        if ((*(byte *)(lVar7 + 0x3c8) >> 3 & 1) == 0) {
          return 1;
        }
      }
    }
    if (-1 < *(char *)(param_1 + 8)) {
      return 0;
    }
  }
  return 1;
}


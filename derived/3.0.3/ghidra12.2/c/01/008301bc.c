
void FUN_008301bc(uint *param_1,char *param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  uint local_4c;
  byte local_48 [4];
  byte local_44 [4];
  byte local_28 [4];
  byte local_24 [4];
  
  *param_1 = 0xffffffff;
  puVar3 = PTR_DAT_04bb39b0;
  if ((param_3 != 0) || (*param_2 == '\0')) {
    lVar8 = *(long *)PTR_DAT_04bb39b0;
    if (lVar8 == 0) {
      pbVar7 = &DAT_0548e140;
LAB_00830404:
      if (*pbVar7 < 8) goto LAB_0083047c;
LAB_00830410:
      if (DAT_0537d558 == (long *)0x0) {
LAB_00830474:
        pbVar7 = &DAT_0548e168;
        goto LAB_0083047c;
      }
      lVar8 = *DAT_0537d558;
      bVar2 = *(byte *)(lVar8 + 0x473);
      pbVar7 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar8 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar7 = (byte *)(lVar8 + 0x471);
        }
      }
      local_24[0] = *pbVar7;
      if (7 < local_24[0]) goto LAB_00830474;
    }
    else {
      pbVar7 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar8 + 0x15c) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x158);
      }
      if (7 < *pbVar7) {
        if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_00830404;
        }
        goto LAB_00830410;
      }
LAB_0083047c:
      local_24[0] = *pbVar7;
      if (7 < local_24[0]) {
        local_24[0] = 0xff;
      }
    }
    uVar4 = FUN_02582fe0(local_24);
    *(ushort *)((long)param_1 + 2) = uVar4 & 7;
    uVar5 = param_3 & 7 | (*(uint *)(param_2 + 4) & 0x3ff) << 3 | (uint)(uVar4 & 7) << 0x10;
    goto LAB_0083061c;
  }
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  if (lVar8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_008302a4:
    if (*pbVar7 < 8) goto LAB_0083031c;
LAB_008302b0:
    if (DAT_0537d558 == (long *)0x0) {
LAB_00830314:
      pbVar7 = &DAT_0548e168;
      goto LAB_0083031c;
    }
    lVar8 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar8 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x471);
      }
    }
    local_48[0] = *pbVar7;
    if (7 < local_48[0]) goto LAB_00830314;
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_008302a4;
      }
      goto LAB_008302b0;
    }
LAB_0083031c:
    local_48[0] = *pbVar7;
    if (7 < local_48[0]) {
      local_48[0] = 0xff;
    }
  }
  uVar5 = FUN_02582fe0(local_48);
  local_4c = (uVar5 & 7) << 0x10 | 0xa000;
  uVar6 = FUN_037818a0(&local_4c);
  if ((uVar6 & 1) != 0) {
    *param_1 = 0xffffffff;
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
      pbVar7 = &DAT_0548e140;
LAB_008304c4:
      if (7 < *pbVar7) {
LAB_008304d0:
        if (DAT_0537d558 != (long *)0x0) {
          lVar8 = *DAT_0537d558;
          bVar2 = *(byte *)(lVar8 + 0x473);
          pbVar7 = PTR_DAT_04bb5038;
          if ((long)(char)bVar2 != 0xffffffffffffffff) {
            puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
            if (7 < bVar2) {
              puVar1 = (uint *)(lVar8 + 0x48);
            }
            if ((*puVar1 & 8) != 0) {
              pbVar7 = (byte *)(lVar8 + 0x471);
            }
          }
          local_44[0] = *pbVar7;
          if (local_44[0] < 8) goto LAB_00830550;
        }
        pbVar7 = &DAT_0548e168;
      }
    }
    else {
      pbVar7 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar8 + 0x15c) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x158);
      }
      if (7 < *pbVar7) {
        if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_008304c4;
        }
        goto LAB_008304d0;
      }
    }
    local_44[0] = *pbVar7;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
LAB_00830550:
    uVar5 = FUN_02582fe0(local_44);
    *param_1 = (uVar5 & 7) << 0x10 | 0xa000;
    return;
  }
  *param_1 = 0xffffffff;
  lVar8 = *(long *)puVar3;
  if (lVar8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_0083056c:
    if (*pbVar7 < 8) goto LAB_008305e4;
LAB_00830578:
    if (DAT_0537d558 == (long *)0x0) {
LAB_008305dc:
      pbVar7 = &DAT_0548e168;
      goto LAB_008305e4;
    }
    lVar8 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar8 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x471);
      }
    }
    local_28[0] = *pbVar7;
    if (7 < local_28[0]) goto LAB_008305dc;
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0083056c;
      }
      goto LAB_00830578;
    }
LAB_008305e4:
    local_28[0] = *pbVar7;
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
  }
  uVar4 = FUN_02582fe0(local_28);
  *(ushort *)((long)param_1 + 2) = uVar4 & 7;
  uVar5 = (*(uint *)(param_2 + 4) & 0x3ff) << 3 | (uint)(uVar4 & 7) << 0x10;
LAB_0083061c:
  *param_1 = uVar5 | 0x2000;
  return;
}


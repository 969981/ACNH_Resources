
bool FUN_01f78db0(long param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  byte local_34 [4];
  byte local_18 [4];
  byte local_14 [4];
  
  puVar3 = PTR_DAT_04bb39b0;
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  if (lVar7 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_01f78e28:
    if (*pbVar6 < 8) goto LAB_01f78ea0;
LAB_01f78e34:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01f78e98:
      pbVar6 = &DAT_0548e168;
      goto LAB_01f78ea0;
    }
    lVar7 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar7 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x471);
      }
    }
    local_18[0] = *pbVar6;
    if (7 < local_18[0]) goto LAB_01f78e98;
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01f78e28;
      }
      goto LAB_01f78e34;
    }
LAB_01f78ea0:
    local_18[0] = *pbVar6;
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
    }
  }
  lVar7 = FUN_0251b3b0(local_18,0);
  if (lVar7 == 0) {
    return false;
  }
  uVar4 = FUN_01f78500(lVar7,lVar7,0);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  lVar7 = *(long *)puVar3;
  if (lVar7 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_01f78f2c:
    if (*pbVar6 < 8) goto LAB_01f78fa4;
LAB_01f78f38:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01f78f9c:
      pbVar6 = &DAT_0548e168;
      goto LAB_01f78fa4;
    }
    lVar7 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar7 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x471);
      }
    }
    local_14[0] = *pbVar6;
    if (7 < local_14[0]) goto LAB_01f78f9c;
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01f78f2c;
      }
      goto LAB_01f78f38;
    }
LAB_01f78fa4:
    local_14[0] = *pbVar6;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
  }
  lVar7 = FUN_0251b3b0(local_14,0);
  if ((lVar7 == 0) || (uVar4 = FUN_01f789c0(lVar7,lVar7,0,0,0), (uVar4 & 1) == 0)) {
    return false;
  }
  lVar7 = *(long *)puVar3;
  if (lVar7 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_01f79054:
    if (7 < *pbVar6) {
LAB_01f79060:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        local_34[0] = *pbVar6;
        if (local_34[0] < 8) goto LAB_01f790e0;
      }
      pbVar6 = &DAT_0548e168;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01f79054;
      }
      goto LAB_01f79060;
    }
  }
  local_34[0] = *pbVar6;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
LAB_01f790e0:
  lVar7 = FUN_0251b3b0(local_34,0);
  if (lVar7 == 0) {
    return false;
  }
  uVar5 = FUN_01f78500(lVar7,lVar7,param_1 + 0xaf68);
  FUN_01f789c0(uVar5,lVar7,param_1 + 0xaf80,param_1 + 0xaf74,param_1 + 0xafd8);
  return lVar7 != 0;
}


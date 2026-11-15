
uint FUN_01e38bf4(long param_1,ulong param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  byte local_24 [4];
  byte local_8 [4];
  byte local_4 [4];
  
  plVar9 = *(long **)PTR_DAT_04bb27d0;
  if (*(uint *)(plVar9 + 0x10) < 2) {
    if ((param_2 & 1) == 0) {
      if (DAT_04cd19d8 == 0) {
        local_24[0] = DAT_0548e140;
        if (7 < DAT_0548e140) goto LAB_01e38df8;
LAB_01e38f48:
        if (7 < local_24[0]) {
          local_24[0] = 0xff;
        }
      }
      else {
        pbVar6 = PTR_DAT_04bb32e0;
        if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
          pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
        }
        local_24[0] = *pbVar6;
        if ((*pbVar6 < 8) ||
           (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
            (local_24[0] = *(byte *)(DAT_054f5738 + 0x11a5), local_24[0] < 8)))) goto LAB_01e38f48;
LAB_01e38df8:
        lVar10 = *plVar9;
        bVar2 = *(byte *)(lVar10 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar10 + 0x471);
          }
        }
        local_24[0] = *pbVar6;
        if (7 < local_24[0]) {
          local_24[0] = *PTR_DAT_04bb5038;
          goto LAB_01e38f48;
        }
      }
      uVar3 = *(ushort *)(param_1 + 0x284);
      if (uVar3 < 1000) {
        if ((DAT_04c47dc0 < (short)uVar3) ||
           (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar3 & 0xffffffffU) * 0x10) == 0)) {
          uVar7 = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar3 * 0x10 + 8);
        }
        pbVar6 = local_24;
        param_3 = 0;
        uVar8 = 0;
        goto LAB_01e38fb0;
      }
    }
    else {
      if (DAT_04cd19d8 == 0) {
        local_8[0] = DAT_0548e140;
        if (7 < DAT_0548e140) goto LAB_01e38da4;
LAB_01e38ec4:
        if (7 < local_8[0]) {
          local_8[0] = 0xff;
        }
      }
      else {
        pbVar6 = PTR_DAT_04bb32e0;
        if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
          pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
        }
        local_8[0] = *pbVar6;
        if ((*pbVar6 < 8) ||
           (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
            (local_8[0] = *(byte *)(DAT_054f5738 + 0x11a5), local_8[0] < 8)))) goto LAB_01e38ec4;
LAB_01e38da4:
        lVar10 = *plVar9;
        bVar2 = *(byte *)(lVar10 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar10 + 0x471);
          }
        }
        local_8[0] = *pbVar6;
        if (7 < local_8[0]) {
          local_8[0] = *PTR_DAT_04bb5038;
          goto LAB_01e38ec4;
        }
      }
      uVar3 = *(ushort *)(param_1 + 0x284);
      if (uVar3 < 1000) {
        if ((DAT_04c47dc0 < (short)uVar3) ||
           (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar3 & 0xffffffffU) * 0x10) == 0)) {
          uVar7 = 0xffffffffffffffff;
        }
        else {
          uVar7 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar3 * 0x10 + 8);
        }
        param_3 = param_3 & 1;
        pbVar6 = local_8;
        uVar8 = 1;
LAB_01e38fb0:
        uVar4 = FUN_00a77550(pbVar6,uVar7,param_3,uVar8);
        goto LAB_01e38fb4;
      }
    }
  }
  else {
    if (DAT_04cd19d8 == 0) {
      local_4[0] = DAT_0548e140;
      if (7 < DAT_0548e140) goto LAB_01e38d50;
LAB_01e38e4c:
      if (7 < local_4[0]) {
        local_4[0] = 0xff;
      }
    }
    else {
      pbVar6 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      local_4[0] = *pbVar6;
      if ((*pbVar6 < 8) ||
         (((*(int *)(DAT_04cd19d8 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
          (local_4[0] = *(byte *)(DAT_054f5738 + 0x11a5), local_4[0] < 8)))) goto LAB_01e38e4c;
LAB_01e38d50:
      lVar10 = *plVar9;
      bVar2 = *(byte *)(lVar10 + 0x473);
      pbVar6 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar6 = (byte *)(lVar10 + 0x471);
        }
      }
      local_4[0] = *pbVar6;
      if (7 < local_4[0]) {
        local_4[0] = *PTR_DAT_04bb5038;
        goto LAB_01e38e4c;
      }
    }
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
    uVar5 = FUN_01e3e9e4(param_1,local_4,1);
    if (((uVar5 & 1) != 0) && (*(int *)(param_1 + 0x698) != -1)) {
      FUN_020a0f28(*(int *)(param_1 + 0x698),2);
      uVar4 = 1;
      *(uint *)(param_1 + 0x69c) = *(uint *)(param_1 + 0x69c) | 0x1000;
      goto LAB_01e38fb4;
    }
  }
  uVar4 = 0;
LAB_01e38fb4:
  return uVar4 & 1;
}


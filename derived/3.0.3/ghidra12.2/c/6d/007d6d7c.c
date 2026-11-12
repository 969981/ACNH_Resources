
void FUN_007d6d7c(uint *param_1,char *param_2)

{
  uint *puVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  byte local_28 [4];
  byte local_24 [4];
  
  uVar4 = *(uint *)(param_2 + 4);
  if (uVar4 == 0xffffffff) {
    *param_1 = DAT_04cb0c60;
    if (DAT_04cd19d8 == 0) {
      pbVar6 = &DAT_0548e140;
LAB_007d6e84:
      if (*pbVar6 < 8) goto LAB_007d6efc;
LAB_007d6e90:
      if (DAT_0537d558 == (long *)0x0) {
LAB_007d6ef4:
        pbVar6 = &DAT_0548e168;
        goto LAB_007d6efc;
      }
      lVar7 = *DAT_0537d558;
      bVar3 = *(byte *)(lVar7 + 0x473);
      pbVar6 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar7 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar6 = (byte *)(lVar7 + 0x471);
        }
      }
      local_28[0] = *pbVar6;
      if (7 < local_28[0]) goto LAB_007d6ef4;
    }
    else {
      pbVar6 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar6) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_007d6e84;
        }
        goto LAB_007d6e90;
      }
LAB_007d6efc:
      local_28[0] = *pbVar6;
      if (7 < local_28[0]) {
        local_28[0] = 0xff;
      }
    }
    uVar4 = FUN_02582fe0(local_28);
    uVar2 = *(ushort *)((long)param_1 + 2);
    uVar4 = uVar4 & 7;
  }
  else {
    if (*param_2 != '\0') {
      uVar4 = DAT_04cb0c60 & 0xffff0000 | uVar4 & 7 | 8;
      goto LAB_007d6fd0;
    }
    *param_1 = DAT_04cb0c60;
    if (DAT_04cd19d8 == 0) {
      pbVar6 = &DAT_0548e140;
LAB_007d6f2c:
      if (*pbVar6 < 8) goto LAB_007d6fa4;
LAB_007d6f38:
      if (DAT_0537d558 == (long *)0x0) {
LAB_007d6f9c:
        pbVar6 = &DAT_0548e168;
        goto LAB_007d6fa4;
      }
      lVar7 = *DAT_0537d558;
      bVar3 = *(byte *)(lVar7 + 0x473);
      pbVar6 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar7 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar6 = (byte *)(lVar7 + 0x471);
        }
      }
      local_24[0] = *pbVar6;
      if (7 < local_24[0]) goto LAB_007d6f9c;
    }
    else {
      pbVar6 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar6 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar6) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_007d6f2c;
        }
        goto LAB_007d6f38;
      }
LAB_007d6fa4:
      local_24[0] = *pbVar6;
      if (7 < local_24[0]) {
        local_24[0] = 0xff;
      }
    }
    uVar5 = FUN_02582fe0(local_24);
    uVar2 = *(ushort *)((long)param_1 + 2);
    uVar4 = uVar5 & 7 | (uVar4 & 0x3ff) << 6;
  }
  uVar4 = uVar4 | (uint)uVar2 << 0x10;
LAB_007d6fd0:
  *param_1 = uVar4;
  return;
}


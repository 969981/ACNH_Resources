
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01eb3f28(long *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  short *psVar10;
  byte local_2c [4];
  byte local_28 [4];
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bb39b0;
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  if (lVar8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_01eb3f9c:
    if (*pbVar7 < 8) goto LAB_01eb4014;
LAB_01eb3fa8:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01eb400c:
      pbVar7 = &DAT_0548e168;
      goto LAB_01eb4014;
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
    if (7 < local_28[0]) goto LAB_01eb400c;
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01eb3f9c;
      }
      goto LAB_01eb3fa8;
    }
LAB_01eb4014:
    local_28[0] = *pbVar7;
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
  }
  uVar5 = FUN_033ff6f0(local_28);
  if ((uVar5 & 1) == 0) {
    return;
  }
  iVar4 = *(int *)((long)param_1 + 0x77f4);
  if ((iVar4 == 0x3d) || (iVar9 = (int)param_1[0xef6], iVar9 == 0x3d)) {
    local_24 = 0xd;
    if (iVar4 == 0x39) {
      return;
    }
    if (*(int *)(param_1[2] + 0x360) == 0xd) {
      return;
    }
    iVar9 = (int)param_1[0xef6];
  }
  else if (iVar4 == 0x39) {
    return;
  }
  if (iVar9 == 0x39) {
    return;
  }
  if ((iVar4 != 0x3e) && (iVar9 != 0x3e)) {
    lVar8 = *param_1;
    uVar6 = 0x3e;
    goto LAB_01eb4260;
  }
  lVar8 = *(long *)puVar3;
  if (lVar8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_01eb4108:
    if (*pbVar7 < 8) goto LAB_01eb4180;
LAB_01eb4114:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01eb4178:
      pbVar7 = &DAT_0548e168;
      goto LAB_01eb4180;
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
    local_2c[0] = *pbVar7;
    if (7 < local_2c[0]) goto LAB_01eb4178;
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01eb4108;
      }
      goto LAB_01eb4114;
    }
LAB_01eb4180:
    local_2c[0] = *pbVar7;
    if (7 < local_2c[0]) {
      local_2c[0] = 0xff;
    }
  }
  uVar5 = FUN_0252f03c(local_2c);
  if (((uVar5 & 1) == 0) && (uVar5 = FUN_0252f488(local_2c), (uVar5 & 1) == 0)) {
    if ((DAT_054f5738 == 0) || (uVar5 = (ulong)local_2c[0], 7 < uVar5)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar10 = &DAT_054f0c08;
        if (iVar4 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = 0;
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
        }
      }
      else {
        psVar10 = &DAT_054f0c08;
      }
    }
    else {
      psVar10 = (short *)(DAT_054f5738 + uVar5 * 0xd0 +
                          (ulong)(*(uint *)(DAT_054f5738 + uVar5 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if ((((((char)psVar10[0x32] == '\0') || (*psVar10 != DAT_04c487d4)) ||
         (0x148 < *(uint *)(psVar10 + 2))) || (2 < *(uint *)(psVar10 + 2) - 0x118)) &&
       ((uVar5 = FUN_02530720(local_2c), (uVar5 & 1) == 0 &&
        (uVar5 = FUN_0251b738(local_2c), (uVar5 & 1) != 0)))) {
      return;
    }
  }
  lVar8 = *param_1;
  uVar6 = 0x3d;
LAB_01eb4260:
  (**(code **)(lVar8 + 0x38))(param_1,uVar6,0,0);
  return;
}


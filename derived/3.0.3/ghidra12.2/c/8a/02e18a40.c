
void FUN_02e18a40(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  ushort uVar3;
  short sVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  ushort local_9e;
  undefined1 auStack_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined2 local_50;
  undefined4 local_48;
  ushort local_44 [2];
  byte local_28 [4];
  int local_24;
  
  puVar5 = PTR_DAT_04bb3170;
  FUN_007ef010(local_44,PTR_DAT_04bb3170);
  uVar8 = *(uint *)(param_1 + 0x2cc);
  if (0xd < uVar8) {
    uVar8 = 0;
  }
  local_48 = *(undefined4 *)(PTR_DAT_04bc82b0 + (ulong)uVar8 * 0x70 + 0xc);
  if (DAT_05739190 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(DAT_05739190 + 0x28);
  }
  if (*(char *)(lVar11 + 0x1800) == '\0') {
    bVar7 = 1;
  }
  else {
    bVar7 = (**(code **)(*(long *)(lVar11 + 0x17f8) + 0x18))(lVar11 + 0x17f8);
    *(char *)(lVar11 + 0x1800) = '\0';
  }
  *(byte *)(lVar11 + 0x1801) = bVar7 & 1;
  FUN_007ef010(&local_9e,lVar11 + 0x1802);
  FUN_007ef010(auStack_9c,lVar11 + 0x1804);
  local_98 = *(undefined8 *)(lVar11 + 0x1808);
  uStack_90 = *(undefined8 *)(lVar11 + 0x1810);
  local_88 = *(undefined8 *)(lVar11 + 0x1818);
  local_80 = *(undefined4 *)(lVar11 + 0x1820);
  uStack_7c = *(undefined4 *)(lVar11 + 0x1824);
  local_78 = *(undefined8 *)(lVar11 + 0x1828);
  uStack_70 = *(undefined8 *)(lVar11 + 0x1830);
  local_68 = *(undefined8 *)(lVar11 + 0x1838);
  uStack_60 = *(undefined8 *)(lVar11 + 0x1840);
  local_58 = *(undefined1 *)(lVar11 + 0x1848);
  local_50 = *(undefined2 *)(lVar11 + 0x1850);
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
    uVar3 = *(ushort *)puVar5;
LAB_02e18bdc:
    if (local_9e != uVar3) {
      if (((DAT_04c8c100 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04c8c100), iVar9 != 0)) {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar12 = 0;
        do {
          if (*(int *)(DAT_04c8c0f8 + uVar12 * 4) == 0) goto LAB_02e18c28;
          uVar12 = uVar12 + 1;
        } while (DAT_04c8c0f0 != uVar12);
      }
      uVar12 = 0;
LAB_02e18c28:
      if (((DAT_04c8c100 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0))
      {
        FUN_00706e58(&DAT_04c8c0f0);
        __cxa_guard_release(&DAT_04c8c100);
      }
      uVar8 = (uint)uVar12;
      if (DAT_04c8c0f0 <= uVar8) {
        uVar8 = 0;
      }
      local_9e = local_9e & 0x7f | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar8 * 4) << 0xb);
LAB_02e18c50:
      local_44[0] = local_9e;
    }
  }
  else {
    local_24 = 0x20;
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    uVar3 = *(ushort *)puVar5;
    if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_02e18bdc;
    if (local_9e != uVar3) goto LAB_02e18c50;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_02e18cb4:
    if (*pbVar10 < 8) goto LAB_02e18d2c;
LAB_02e18cc0:
    if (DAT_0537d558 == (long *)0x0) {
LAB_02e18d24:
      pbVar10 = &DAT_0548e168;
      goto LAB_02e18d2c;
    }
    lVar11 = *DAT_0537d558;
    bVar7 = *(byte *)(lVar11 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar2 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar10 = (byte *)(lVar11 + 0x471);
      }
    }
    local_28[0] = *pbVar10;
    if (7 < local_28[0]) goto LAB_02e18d24;
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02e18cb4;
      }
      goto LAB_02e18cc0;
    }
LAB_02e18d2c:
    local_28[0] = *pbVar10;
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
  }
  local_24 = FUN_02531fa8(local_28);
  if (local_24 == 0x43) goto LAB_02e18e4c;
  if (DAT_04cd19d8 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_02e18db0:
    if (*pbVar10 < 8) goto LAB_02e18e28;
LAB_02e18dbc:
    if (DAT_0537d558 == (long *)0x0) {
LAB_02e18e20:
      pbVar10 = &DAT_0548e168;
      goto LAB_02e18e28;
    }
    lVar11 = *DAT_0537d558;
    bVar7 = *(byte *)(lVar11 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar2 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar10 = (byte *)(lVar11 + 0x471);
      }
    }
    bVar7 = *pbVar10;
    bVar6 = 7 < bVar7;
    if (bVar6) {
      bVar7 = 0xff;
    }
    local_24._1_3_ = (undefined3)((uint)local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,bVar7);
    if (bVar6) goto LAB_02e18e20;
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02e18db0;
      }
      goto LAB_02e18dbc;
    }
LAB_02e18e28:
    bVar7 = *pbVar10;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    local_24 = CONCAT31(local_24._1_3_,bVar7);
  }
  FUN_02536444(&local_24,0x43,1);
LAB_02e18e4c:
  if (*(byte *)(param_1 + 0x1f8) < 8) {
    uVar8 = FUN_02582d8c(param_1 + 0x1f8,1);
    puVar5 = PTR_DAT_04bb4fb8;
    if ((((uVar8 < 8) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) != '\0')) &&
       ((uVar8 = FUN_02582d8c(param_1 + 0x1f8,1), uVar8 < 8 &&
        (*(char *)(*(long *)puVar5 + (ulong)uVar8 * 0x13f0 + 0x13d4) != '\0')))) {
      lVar11 = *(long *)puVar5 + (ulong)uVar8 * 0x13f0;
      *(undefined4 *)(lVar11 + 0x13b0) = local_48;
      *(ushort *)(lVar11 + 0x13b4) = local_44[0];
    }
  }
  return;
}


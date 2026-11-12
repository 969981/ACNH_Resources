
void FUN_00ba8400(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  uint local_cc;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  byte local_88 [4];
  undefined4 local_84;
  undefined **local_80 [4];
  
  puVar3 = PTR_DAT_04bb43c0;
  local_80[0] = &PTR_FUN_0493bbf0;
  uVar5 = 0;
  do {
    (**(code **)(*param_1 + 0x10))(&local_c0,param_1,uVar5);
    lVar6 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar2 = 1 << (ulong)(uVar5 & 0x1f);
    if ((*(uint *)(lVar6 + (ulong)(uVar5 >> 5) * 4) & uVar2) != 0) {
      lVar6 = *(long *)puVar3;
      uVar4 = FUN_0277d6c4(&local_c0);
      if (*(long *)puVar3 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if (((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
           (uVar7 = (*(code *)*local_80[0])(local_80,&local_c0), (uVar7 & 1) != 0))
        goto LAB_00ba8470;
      }
      lVar6 = (**(code **)(*param_1 + 0x18))(param_1);
      lVar12 = (ulong)(uVar5 >> 5) * 4;
      *(uint *)(lVar6 + lVar12) = *(uint *)(lVar6 + lVar12) & (uVar2 ^ 0xffffffff);
    }
LAB_00ba8470:
    uVar5 = uVar5 + 1;
  } while (uVar5 != 15000);
  local_84 = FUN_00a8c014(DAT_04da7238);
  FUN_00b92a60(param_1,&local_84);
  FUN_02845b50(param_1);
  if (DAT_04cd19d8 == 0) {
    pbVar9 = &DAT_0548e140;
LAB_00ba8598:
    if (7 < *pbVar9) {
LAB_00ba85a4:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar10 = *(byte *)(lVar6 + 0x473);
        pbVar9 = PTR_DAT_04bb5038;
        if ((long)(char)bVar10 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
          if (7 < bVar10) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar9 = (byte *)(lVar6 + 0x471);
          }
        }
        local_88[0] = *pbVar9;
        if (local_88[0] < 8) goto LAB_00ba8624;
      }
      pbVar9 = &DAT_0548e168;
    }
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar9 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar9) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar9 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_00ba8598;
      }
      goto LAB_00ba85a4;
    }
  }
  local_88[0] = *pbVar9;
  if (7 < local_88[0]) {
    local_88[0] = 0xff;
  }
LAB_00ba8624:
  bVar10 = local_88[0];
  if (7 < local_88[0]) {
    bVar10 = 0xff;
  }
  local_c0 = CONCAT71(local_c0._1_7_,bVar10);
  lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_c0,1);
  if (lVar6 != 0) {
    if ((*(long **)(lVar6 + 0xd0) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar6 + 0xd0), puVar8 == (undefined8 *)0x0)) {
      local_cc = 0;
    }
    else {
      local_cc = (**(code **)*puVar8)();
    }
    local_c0 = 0xfffe;
    FUN_0277d4ac(&local_c0);
    local_b8 = 0xfffe;
    FUN_0277d4ac(&local_b8);
    local_b0 = 0xfffe;
    FUN_0277d4ac(&local_b0);
    local_a8 = 0xfffe;
    FUN_0277d4ac(&local_a8);
    local_a0 = 0xfffe;
    FUN_0277d4ac(&local_a0);
    local_98 = 0xfffe;
    FUN_0277d4ac(&local_98);
    local_90 = 0xfffe;
    FUN_0277d4ac(&local_90);
    lVar12 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
    if ((*(char *)(lVar12 + 0xaf89) == '\0') || (7 < *(byte *)(lVar12 + 0xaf88))) {
      lVar11 = lVar12;
      if ((*(char *)(lVar12 + 0xaf8a) != '\0') &&
         ((uVar7 = FUN_016e5e90(), (uVar7 & 1) != 0 &&
          (lVar11 = lVar12 + 0xaf90, (*(byte *)(lVar12 + 0xaf8b) & 0xfe) != 0)))) {
        lVar11 = lVar12;
      }
    }
    else {
      lVar11 = lVar12 + (ulong)*(byte *)(lVar12 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar8 = (undefined8 *)FUN_026e85f0(lVar11);
    local_c0 = *puVar8;
    lVar12 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
    if ((*(char *)(lVar12 + 0xaf89) == '\0') || (7 < *(byte *)(lVar12 + 0xaf88))) {
      lVar11 = lVar12;
      if ((*(char *)(lVar12 + 0xaf8a) != '\0') &&
         ((uVar7 = FUN_016e5e90(), (uVar7 & 1) != 0 &&
          (lVar11 = lVar12 + 0xaf90, (*(byte *)(lVar12 + 0xaf8b) & 0xfe) != 0)))) {
        lVar11 = lVar12;
      }
    }
    else {
      lVar11 = lVar12 + (ulong)*(byte *)(lVar12 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar8 = (undefined8 *)FUN_026ea320(lVar11);
    lVar12 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
    local_b8 = *puVar8;
    if ((*(char *)(lVar12 + 0xaf89) == '\0') || (7 < *(byte *)(lVar12 + 0xaf88))) {
      lVar11 = lVar12;
      if ((*(char *)(lVar12 + 0xaf8a) != '\0') &&
         ((uVar7 = FUN_016e5e90(), (uVar7 & 1) != 0 &&
          (lVar11 = lVar12 + 0xaf90, (*(byte *)(lVar12 + 0xaf8b) & 0xfe) != 0)))) {
        lVar11 = lVar12;
      }
    }
    else {
      lVar11 = lVar12 + (ulong)*(byte *)(lVar12 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar8 = (undefined8 *)FUN_026ea720(lVar11);
    local_b0 = *puVar8;
    puVar8 = (undefined8 *)FUN_02807b30(*(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0));
    lVar12 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
    local_a8 = *puVar8;
    if ((*(char *)(lVar12 + 0xaf89) == '\0') || (7 < *(byte *)(lVar12 + 0xaf88))) {
      lVar11 = lVar12;
      if ((*(char *)(lVar12 + 0xaf8a) != '\0') &&
         ((uVar7 = FUN_016e5e90(), (uVar7 & 1) != 0 &&
          (lVar11 = lVar12 + 0xaf90, (*(byte *)(lVar12 + 0xaf8b) & 0xfe) != 0)))) {
        lVar11 = lVar12;
      }
    }
    else {
      lVar11 = lVar12 + (ulong)*(byte *)(lVar12 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar8 = (undefined8 *)FUN_026e9470(lVar11);
    lVar12 = *(long *)(lVar6 + 0xb8) + *(long *)(lVar6 + 0xb0);
    local_a0 = *puVar8;
    if ((*(char *)(lVar12 + 0xaf89) == '\0') || (7 < *(byte *)(lVar12 + 0xaf88))) {
      lVar11 = lVar12;
      if ((*(char *)(lVar12 + 0xaf8a) != '\0') &&
         ((uVar7 = FUN_016e5e90(), (uVar7 & 1) != 0 &&
          (lVar11 = lVar12 + 0xaf90, (*(byte *)(lVar12 + 0xaf8b) & 0xfe) != 0)))) {
        lVar11 = lVar12;
      }
    }
    else {
      lVar11 = lVar12 + (ulong)*(byte *)(lVar12 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar8 = (undefined8 *)FUN_026e9240(lVar11);
    local_98 = *puVar8;
    FUN_0253395c(local_c8,local_88,DAT_04c9a0c8);
    lVar12 = *(long *)puVar3;
    uVar5 = FUN_0277d6c4(&local_c0);
    if (*(long *)puVar3 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar5 = FUN_0277d6c4(&local_c0);
        if ((uVar5 >> 3 & 0x1fff) < 0x753) {
          lVar11 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
          *(uint *)(lVar12 + lVar11) =
               *(uint *)(lVar12 + lVar11) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    lVar12 = *(long *)puVar3;
    uVar5 = FUN_0277d6c4(&local_b8);
    if (*(long *)puVar3 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar5 = FUN_0277d6c4(&local_b8);
        if ((uVar5 >> 3 & 0x1fff) < 0x753) {
          lVar11 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
          *(uint *)(lVar12 + lVar11) =
               *(uint *)(lVar12 + lVar11) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    lVar12 = *(long *)puVar3;
    uVar5 = FUN_0277d6c4(&local_b0);
    if (*(long *)puVar3 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar5 = FUN_0277d6c4(&local_b0);
        if ((uVar5 >> 3 & 0x1fff) < 0x753) {
          lVar11 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
          *(uint *)(lVar12 + lVar11) =
               *(uint *)(lVar12 + lVar11) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    lVar12 = *(long *)puVar3;
    uVar5 = FUN_0277d6c4(&local_a8);
    if (*(long *)puVar3 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar5 = FUN_0277d6c4(&local_a8);
        if ((uVar5 >> 3 & 0x1fff) < 0x753) {
          lVar11 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
          *(uint *)(lVar12 + lVar11) =
               *(uint *)(lVar12 + lVar11) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    lVar12 = *(long *)puVar3;
    uVar5 = FUN_0277d6c4(&local_a0);
    if (*(long *)puVar3 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar5 = FUN_0277d6c4(&local_a0);
        if ((uVar5 >> 3 & 0x1fff) < 0x753) {
          lVar11 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
          *(uint *)(lVar12 + lVar11) =
               *(uint *)(lVar12 + lVar11) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    lVar12 = *(long *)puVar3;
    uVar5 = FUN_0277d6c4(&local_98);
    if (*(long *)puVar3 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar5 = FUN_0277d6c4(&local_98);
        if ((uVar5 >> 3 & 0x1fff) < 0x753) {
          lVar11 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
          *(uint *)(lVar12 + lVar11) =
               *(uint *)(lVar12 + lVar11) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    lVar12 = *(long *)puVar3;
    uVar5 = FUN_0277d6c4(&local_90);
    if (*(long *)puVar3 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar5 = FUN_0277d6c4(&local_90);
        if ((uVar5 >> 3 & 0x1fff) < 0x753) {
          lVar11 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
          *(uint *)(lVar12 + lVar11) =
               *(uint *)(lVar12 + lVar11) & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    if ((((local_cc & 1) != 0) && (*(long *)(lVar6 + 0xd0) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0xd0) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return;
}


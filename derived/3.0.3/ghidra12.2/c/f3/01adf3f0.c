
void FUN_01adf3f0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  ushort uVar10;
  uint *puVar11;
  char *pcVar12;
  undefined *local_d0;
  undefined8 *local_c8;
  undefined *local_c0;
  char *local_b8;
  undefined *local_b0;
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  undefined1 local_54 [4];
  
  if (param_2 == 0) {
    return;
  }
  **(undefined1 **)(param_2 + 8) = 0;
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar7 = *puVar8;
    if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
      puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
      if (((*puVar11 != 0) && (uVar7 = puVar11[1], uVar7 != 0)) && ((ulong)(ushort)puVar11[2] != 0))
      {
        lVar9 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar11 + lVar9 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar9 != 0) {
          uVar2 = 0;
          if ((ulong)uVar7 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar7);
          }
          if (*puVar11 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
             uVar7 = (uint)uVar10, uVar10 < 0xbd)) goto LAB_01adf4b8;
        }
      }
    }
    uVar7 = 0;
  }
LAB_01adf4b8:
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar7);
  if (uVar7 != 0x56) {
    return;
  }
  FUN_01adf970(&local_c0,param_1);
  local_a0 = 0x40;
  local_5d = 0;
  local_b0 = PTR_DAT_04bb2f70 + 0x10;
  local_a8 = local_9c;
  (**(code **)(local_c0 + 0x18))(&local_c0);
  pcVar12 = local_b8;
  if (local_9c != local_b8) {
    (**(code **)(local_c0 + 0x18))(&local_c0);
    lVar9 = 0;
    do {
      if (local_b8[lVar9] == '\0') goto LAB_01adf570;
      if (local_b8[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_01adf570;
      }
      if (local_b8[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_01adf570;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_01adf570:
    iVar1 = (int)lVar9;
    if (local_a0 <= (int)lVar9) {
      iVar1 = local_a0 + -1;
    }
    memcpy(local_9c,pcVar12,(long)iVar1);
    local_9c[iVar1] = 0;
  }
  iVar1 = local_a0;
  puVar5 = local_a8;
  puVar4 = PTR_DAT_04bb2bc0;
  puVar3 = PTR_DAT_04bb2020;
  local_54[0] = 0;
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  local_d0 = PTR_DAT_04bb2020 + 0x10;
  local_b8 = "FtrPltFlw";
  local_c8 = &DAT_0407ebb1;
  local_a8[(long)local_a0 + -1] = 0;
  local_c0 = local_d0;
  (**(code **)(puVar4 + 0x28))(&local_b0);
  lVar9 = 0;
  do {
    if (local_a8[lVar9] == '\0') goto LAB_01adf63c;
    if (local_a8[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_01adf63c;
    }
    if (local_a8[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_01adf63c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_01adf63c:
  FUN_038d0770(puVar5,0,iVar1,puVar5,lVar9,&local_c0,&local_d0,local_54);
  iVar1 = local_a0;
  puVar5 = local_a8;
  local_d0 = puVar3 + 0x10;
  local_b8 = "Vase";
  local_c8 = &DAT_0407ebb1;
  local_54[0] = 0;
  local_c0 = local_d0;
  (**(code **)(local_b0 + 0x18))(&local_b0);
  puVar6 = local_a8;
  (**(code **)(local_b0 + 0x18))(&local_b0);
  lVar9 = 0;
  do {
    if (local_a8[lVar9] == '\0') goto LAB_01adf6dc;
    if (local_a8[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_01adf6dc;
    }
    if (local_a8[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_01adf6dc;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  lVar9 = 0;
LAB_01adf6dc:
  FUN_038d0770(puVar5,0,iVar1,puVar6,lVar9,&local_c0,&local_d0,local_54);
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
LAB_01adf90c:
    uVar10 = 0x21;
  }
  else {
    uVar7 = *puVar8;
    uVar10 = 0;
    if ((uVar7 != 0) && (puVar8 != (uint *)(ulong)uVar7)) {
      puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar7 = puVar11[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar11 + lVar9 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar9 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar7);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0148) &&
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar2 * 2),
               uVar10 < 0xa2)) goto LAB_01adf790;
          }
        }
        uVar10 = 0;
      }
    }
LAB_01adf790:
    if (uVar10 == 3) {
      pcVar12 = "AccessoryPltMouth%s";
      local_c0._0_4_ = 3;
      goto LAB_01adf928;
    }
    uVar7 = *puVar8;
    uVar10 = 0;
    if ((uVar7 != 0) && (puVar8 != (uint *)(ulong)uVar7)) {
      puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar7 = puVar11[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar11 + lVar9 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar9 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar7);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0148) &&
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar2 * 2),
               uVar10 < 0xa2)) goto LAB_01adf82c;
          }
        }
        uVar10 = 0;
      }
    }
LAB_01adf82c:
    if (uVar10 == 0x13) {
      pcVar12 = "CapPltOrnamentR%s";
      local_c0._0_4_ = 0x13;
      goto LAB_01adf928;
    }
    if (puVar8 == (uint *)0x0) goto LAB_01adf90c;
    uVar7 = *puVar8;
    uVar10 = 0;
    if ((uVar7 != 0) && (puVar8 != (uint *)(ulong)uVar7)) {
      puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar7 = puVar11[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar11 + lVar9 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar9 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar7);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0148) &&
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar2 * 2),
               uVar10 < 0xa2)) goto LAB_01adf910;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_01adf910:
  if (uVar10 != 0x12) {
    return;
  }
  pcVar12 = "CapPltOrnamentL%s";
  local_c0._0_4_ = 0x12;
LAB_01adf928:
  (**(code **)(local_b0 + 0x18))(&local_b0);
  FUN_038d13f0(param_2,pcVar12,local_a8);
  return;
}



void FUN_021c64b0(void)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  byte bVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 local_100;
  undefined *local_f0;
  char *pcStack_e8;
  undefined4 local_e0;
  undefined1 local_dc [7];
  undefined1 local_d5;
  undefined *local_d0;
  char *pcStack_c8;
  undefined4 local_c0;
  undefined1 local_bc [7];
  undefined1 local_b5;
  undefined **local_b0;
  char *pcStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [7];
  undefined1 local_95;
  uint local_90 [10];
  byte local_68 [4];
  uint local_64;
  
  puVar4 = PTR_DAT_04bb4f78;
  local_64 = 0;
  if (DAT_04cd19d8 == 0) {
    pbVar12 = &DAT_0548e140;
LAB_021c6534:
    if (7 < *pbVar12) {
LAB_021c6540:
      if (DAT_0537d558 != (long *)0x0) {
        lVar14 = *DAT_0537d558;
        bVar13 = *(byte *)(lVar14 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar13 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
          if (7 < bVar13) {
            puVar1 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar12 = (byte *)(lVar14 + 0x471);
          }
        }
        local_68[0] = *pbVar12;
        if (local_68[0] < 8) goto LAB_021c65c0;
      }
      pbVar12 = &DAT_0548e168;
    }
  }
  else {
    pbVar12 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar12 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar12 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_021c6534;
      }
      goto LAB_021c6540;
    }
  }
  local_68[0] = *pbVar12;
  if (7 < local_68[0]) {
    local_68[0] = 0xff;
  }
LAB_021c65c0:
  local_100 = 0;
  local_90[8] = 0;
  local_90[9] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  bVar13 = local_68[0];
  if (7 < local_68[0]) {
    bVar13 = 0xff;
  }
  uVar15 = 0;
  uVar16 = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  do {
    lVar14 = FUN_0265c2a0(uVar15 & 0xffffffff);
    if (lVar14 != 0) {
      if ((*(long **)(lVar14 + 0x28) == (long *)0x0) ||
         (puVar9 = (undefined8 *)**(long **)(lVar14 + 0x28), puVar9 == (undefined8 *)0x0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)*puVar9)();
        uVar10 = uVar10 & 0xffffffff;
      }
      lVar2 = *(long *)(lVar14 + 8);
      lVar3 = *(long *)(lVar14 + 0x10);
      local_b0 = (undefined **)CONCAT71(local_b0._1_7_,bVar13);
      lVar11 = FUN_025830c0(*(undefined8 *)puVar4,&local_b0,1);
      if (lVar11 != 0) {
        if ((*(long **)(lVar11 + 0x17bb0) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar11 + 0x17bb0), puVar9 == (undefined8 *)0x0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)*puVar9)();
          uVar5 = uVar5 ^ 1;
        }
        uVar6 = FUN_026b318c(lVar3 + lVar2,
                             *(long *)(lVar11 + 0x17b98) + *(long *)(lVar11 + 0x17b90) + 0x1c);
        if ((((uVar5 & 1) == 0) && (*(long *)(lVar11 + 0x17bb0) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar11 + 0x17bb0) + 8), puVar9 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar9)();
        }
        if (-1 < (int)uVar6) {
          lVar2 = *(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8) + 4;
          lVar3 = lVar2 + (ulong)uVar6 * 0x5f0;
          if (7 < uVar6) {
            lVar3 = lVar2;
          }
          local_b0 = &PTR_LAB_048f9770;
          pcStack_a8 = "HasAcquaintanceship";
          iVar7 = FUN_02746e10(lVar3 + 0x38,&local_b0);
          if (iVar7 != 0) {
            lVar2 = *(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8) + 4;
            lVar3 = lVar2 + (ulong)uVar6 * 0x5f0;
            if (7 < uVar6) {
              lVar3 = lVar2;
            }
            local_b0 = &PTR_LAB_048f9770;
            pcStack_a8 = "Friendship";
            uVar5 = FUN_02746e10(lVar3 + 0x38,&local_b0);
            if (uVar5 < 0x1e) {
              uVar6 = 1;
            }
            else if (uVar5 < 0x3c) {
              uVar6 = 2;
            }
            else if (uVar5 < 100) {
              uVar6 = 3;
            }
            else if (uVar5 < 0x96) {
              uVar6 = 4;
            }
            else {
              uVar6 = 5;
              if (199 < uVar5) {
                uVar6 = 6;
              }
            }
            local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar6);
            if (3 < uVar6) {
              local_64 = 1 << (ulong)((uint)uVar15 & 0x1f) | local_100._4_4_;
              local_100 = CONCAT44(local_64,(uint)local_100 + 1);
              local_90[uVar15] = uVar5;
            }
          }
        }
      }
      uVar16 = uVar16 + 1;
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 != 10);
  uVar5 = local_100._4_4_ - (local_100._4_4_ >> 1 & 0x55555555);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
  uVar5 = uVar5 + (uVar5 >> 8);
  if ((uVar5 + (uVar5 >> 0x10) & 0x3f) != 0) {
    uVar6 = FUN_021abc98(&local_64,local_90);
    local_b0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    pcStack_a8 = "SantaMissionNpcIndex1";
    FUN_0274bfe8(local_68,&local_b0,uVar6);
    puVar4 = PTR_DAT_04bb3768;
    pcStack_a8 = local_9c;
    local_95 = 0;
    local_a0 = 8;
    local_9c[0] = 0;
    local_b0 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
    FUN_021d7c00(&local_b0,uVar6);
    uVar5 = local_100._4_4_;
    if (uVar6 < 10) {
      uVar5 = local_100._4_4_ & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
      local_64 = uVar5;
    }
    if ((4 < (int)uVar16) && (1 < (int)(uint)local_100)) {
      uVar6 = FUN_021abc98(&local_64,local_90);
      local_d0 = PTR_DAT_04bb2020 + 0x10;
      pcStack_c8 = "SantaMissionNpcIndex2";
      FUN_0274bfe8(local_68,&local_d0,uVar6);
      if (uVar6 < 10) {
        local_64 = uVar5 & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
      }
      pcStack_c8 = local_bc;
      local_b5 = 0;
      local_c0 = 8;
      local_d0 = puVar4 + 0x10;
      local_bc[0] = 0;
      FUN_021d7c00(&local_d0,uVar6);
      if ((8 < uVar16) && (2 < (uint)local_100)) {
        uVar8 = FUN_021abc98(&local_64,local_90);
        local_f0 = PTR_DAT_04bb2020 + 0x10;
        pcStack_e8 = "SantaMissionNpcIndex3";
        FUN_0274bfe8(local_68,&local_f0,uVar8);
        pcStack_e8 = local_dc;
        local_d5 = 0;
        local_e0 = 8;
        local_f0 = puVar4 + 0x10;
        local_dc[0] = 0;
        FUN_021d7c00(&local_f0,uVar8);
      }
    }
  }
  return;
}


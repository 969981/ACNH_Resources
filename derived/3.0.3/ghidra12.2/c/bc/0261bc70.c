
void FUN_0261bc70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_a8;
  long local_a0;
  int local_84;
  long local_80;
  undefined4 local_78;
  byte local_70 [12];
  undefined4 local_64;
  
  FUN_02507c6c(local_70,1,1,0,0);
  puVar6 = PTR_DAT_04bc32d8;
  puVar5 = PTR_DAT_04bb5038;
  if (7 < local_70[0]) {
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bc32d8 + 0x10;
LAB_0261bd1c:
  uVar12 = (ulong)local_70[0];
  puVar3 = (undefined8 *)(param_1 + 0xe9ce0 + uVar12 * 0x100);
  iVar7 = 0;
  uVar9 = 0;
  do {
    uVar13 = (uint)uVar9 & 4;
    uVar10 = (uint)uVar9 + 4;
    bVar4 = *(byte *)((long)puVar3 + (uVar9 >> 3));
    iVar7 = (bVar4 >> (ulong)(uVar13 | 3) & 1) +
            (bVar4 >> (ulong)(uVar13 | 2) & 1) + (bVar4 >> (ulong)(uVar13 | 1) & 1) +
            (bVar4 >> (ulong)uVar13 & 1) + iVar7;
    uVar9 = (ulong)uVar10;
  } while (uVar10 != 0x800);
  if (iVar7 != 0) {
    local_64 = 0;
    puStack_f8 = PTR_s_get_recipe_diy_04a859d0;
    local_100 = puVar1;
    FUN_025ffac8(&local_a8,&local_100,local_70);
    local_80 = 0;
    local_78 = local_64;
    local_a8 = puVar2;
    if (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb1) == '\0') {
      if (local_a0 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if (*(long *)(local_a0 + 8) != 0) {
          lVar8 = FUN_03f28fa0(*(long *)(local_a0 + 8),0x28);
          if (lVar8 == 0) {
            *(undefined1 *)(*(long *)PTR_DAT_04bb2268 + 0xb1) = 1;
          }
        }
      }
      local_80 = lVar8;
    }
    uVar12 = 0;
    do {
      uVar10 = (uint)uVar12;
      if ((*(byte *)((long)puVar3 + (uVar12 >> 3)) >> (ulong)(uVar10 & 6) & 1) != 0)
      goto LAB_0261bea8;
      if ((*(byte *)((long)puVar3 + (uVar12 >> 3)) >> (ulong)(uVar10 + 1 & 7) & 1) != 0) {
        uVar12 = (ulong)(uVar10 + 1);
        goto LAB_0261bea8;
      }
      uVar12 = (ulong)(uVar10 + 2);
    } while (uVar10 + 2 != 0x800);
    uVar12 = 0;
LAB_0261bea8:
    uVar10 = 0x7fe;
    do {
      uVar13 = uVar10 + 1;
      if (((*(byte *)((long)puVar3 + (ulong)(uVar13 >> 3)) >> (ulong)(uVar13 & 7) & 1) != 0) ||
         (uVar13 = uVar10,
         (*(byte *)((long)puVar3 + (ulong)(uVar10 >> 3)) >> (ulong)(uVar10 & 7) & 1) != 0)) {
        iVar7 = uVar13 + 1;
        if (iVar7 == (int)uVar12) goto LAB_0261bfec;
        goto LAB_0261bf10;
      }
      uVar10 = uVar10 - 2;
    } while (uVar10 != 0xfffffffe);
    iVar7 = 0;
    if ((int)uVar12 != 0) {
LAB_0261bf10:
      uVar10 = 0;
LAB_0261bf28:
      if (((((uint)uVar12 & 0xffff) < 0x800) &&
          ((*(byte *)(param_1 + 0xe98e0 + (uVar12 >> 3 & 0x1fff)) >> (ulong)((uint)uVar12 & 7) & 1)
           != 0)) && (uVar10 < 0x28)) {
        *(short *)(((ulong)&local_100 | 2) + (ulong)uVar10 * 2) = (short)uVar12;
        uVar10 = uVar10 + 1;
      }
      do {
        uVar13 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar13;
        if (0x7ff < uVar13) {
          uVar13 = 0x7fe;
          goto LAB_0261bf90;
        }
      } while ((*(byte *)((long)puVar3 + (ulong)(uVar13 >> 3)) >> (ulong)(uVar13 & 7) & 1) == 0);
      goto LAB_0261bf20;
    }
    goto LAB_0261bfec;
  }
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  goto LAB_0261c300;
  while (uVar13 = uVar13 - 2, uVar13 != 0xfffffffe) {
LAB_0261bf90:
    uVar11 = uVar13 + 1;
    if (((*(byte *)((long)puVar3 + (ulong)(uVar11 >> 3)) >> (ulong)(uVar11 & 7) & 1) != 0) ||
       (uVar11 = uVar13,
       (*(byte *)((long)puVar3 + (ulong)(uVar13 >> 3)) >> (ulong)(uVar13 & 7) & 1) != 0)) {
      uVar12 = (ulong)(uVar11 + 1);
      goto LAB_0261bf20;
    }
  }
  uVar12 = 0;
LAB_0261bf20:
  if (iVar7 == (int)uVar12) goto LAB_0261bfd4;
  goto LAB_0261bf28;
LAB_0261bfd4:
  if (uVar10 != 0) {
    local_100 = (undefined *)(CONCAT62(local_100._2_6_,(short)uVar10) & 0xffffffffffff00ff);
    FUN_025a2bb0(&local_a8,&local_100);
  }
LAB_0261bfec:
  local_a8 = puVar6 + 0x10;
  iVar7 = FUN_025a2dcc(&local_a8);
  if (iVar7 == -1) {
LAB_0261c024:
    if (local_84 == 0) {
      local_84 = 1;
    }
  }
  else {
    iVar7 = (**(code **)(local_a8 + 0x20))(&local_a8);
    local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar7);
    if (0xc < iVar7) goto LAB_0261c024;
  }
  FUN_02601530(&local_a8);
  local_64 = 1;
  puStack_f8 = PTR_s_get_recipe_cooking_04a859d8;
  local_100 = PTR_DAT_04bb2020 + 0x10;
  FUN_025ffac8(&local_a8,&local_100,local_70);
  local_a8 = puVar6 + 0x10;
  local_80 = 0;
  local_78 = local_64;
  if (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb1) == '\0') {
    if (local_a0 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if ((*(long *)(local_a0 + 8) != 0) &&
         (lVar8 = FUN_03f28fa0(*(long *)(local_a0 + 8),0x28), lVar8 == 0)) {
        *(undefined1 *)(*(long *)PTR_DAT_04bb2268 + 0xb1) = 1;
      }
    }
    local_80 = lVar8;
  }
  uVar12 = 0;
  do {
    uVar10 = (uint)uVar12;
    if ((*(byte *)((long)puVar3 + (uVar12 >> 3)) >> (ulong)(uVar10 & 6) & 1) != 0)
    goto LAB_0261c118;
    if ((*(byte *)((long)puVar3 + (uVar12 >> 3)) >> (ulong)(uVar10 + 1 & 7) & 1) != 0) {
      uVar12 = (ulong)(uVar10 + 1);
      goto LAB_0261c118;
    }
    uVar12 = (ulong)(uVar10 + 2);
  } while (uVar10 + 2 != 0x800);
  uVar12 = 0;
LAB_0261c118:
  uVar10 = 0x7fe;
  do {
    uVar13 = uVar10 + 1;
    if (((*(byte *)((long)puVar3 + (ulong)(uVar13 >> 3)) >> (ulong)(uVar13 & 7) & 1) != 0) ||
       (uVar13 = uVar10,
       (*(byte *)((long)puVar3 + (ulong)(uVar10 >> 3)) >> (ulong)(uVar10 & 7) & 1) != 0)) {
      iVar7 = uVar13 + 1;
      if (iVar7 == (int)uVar12) goto LAB_0261c25c;
      goto LAB_0261c180;
    }
    uVar10 = uVar10 - 2;
  } while (uVar10 != 0xfffffffe);
  iVar7 = 0;
  if ((int)uVar12 != 0) {
LAB_0261c180:
    uVar10 = 0;
LAB_0261c198:
    if (((((uint)uVar12 & 0xffff) < 0x800) &&
        ((*(byte *)(param_1 + 0xe99e0 + (uVar12 >> 3 & 0x1fff)) >> (ulong)((uint)uVar12 & 7) & 1) !=
         0)) && (uVar10 < 0x28)) {
      *(short *)(((ulong)&local_100 | 2) + (ulong)uVar10 * 2) = (short)uVar12;
      uVar10 = uVar10 + 1;
    }
    do {
      uVar13 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar13;
      if (0x7ff < uVar13) {
        uVar13 = 0x7fe;
        goto LAB_0261c200;
      }
    } while ((*(byte *)((long)puVar3 + (ulong)(uVar13 >> 3)) >> (ulong)(uVar13 & 7) & 1) == 0);
    goto LAB_0261c190;
  }
LAB_0261c25c:
  local_a8 = puVar6 + 0x10;
  iVar7 = FUN_025a2dcc(&local_a8);
  if (iVar7 != -1) {
    iVar7 = (**(code **)(local_a8 + 0x20))(&local_a8);
    local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar7);
    if (iVar7 < 0xd) goto LAB_0261c2a0;
  }
  if (local_84 == 0) {
    local_84 = 1;
  }
LAB_0261c2a0:
  FUN_02601530(&local_a8);
  uVar12 = (ulong)local_70[0];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  if (7 < local_70[0]) {
    return;
  }
LAB_0261c300:
  do {
    if (uVar12 == 7) {
      return;
    }
    uVar12 = uVar12 + 1;
    uVar9 = FUN_02507924(local_70,puVar5 + uVar12);
  } while ((uVar9 & 1) == 0);
  local_70[0] = puVar5[uVar12];
  if (7 < local_70[0]) {
    return;
  }
  goto LAB_0261bd1c;
  while (uVar13 = uVar13 - 2, uVar13 != 0xfffffffe) {
LAB_0261c200:
    uVar11 = uVar13 + 1;
    if (((*(byte *)((long)puVar3 + (ulong)(uVar11 >> 3)) >> (ulong)(uVar11 & 7) & 1) != 0) ||
       (uVar11 = uVar13,
       (*(byte *)((long)puVar3 + (ulong)(uVar13 >> 3)) >> (ulong)(uVar13 & 7) & 1) != 0)) {
      uVar12 = (ulong)(uVar11 + 1);
      goto LAB_0261c190;
    }
  }
  uVar12 = 0;
LAB_0261c190:
  if (iVar7 == (int)uVar12) goto LAB_0261c244;
  goto LAB_0261c198;
LAB_0261c244:
  if (uVar10 != 0) {
    local_100 = (undefined *)(CONCAT62(local_100._2_6_,(short)uVar10) & 0xffffffffffff00ff);
    FUN_025a2bb0(&local_a8,&local_100);
  }
  goto LAB_0261c25c;
}


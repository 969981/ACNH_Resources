
/* WARNING: Removing unreachable block (ram,0x01687764) */
/* WARNING: Removing unreachable block (ram,0x016876e0) */
/* WARNING: Removing unreachable block (ram,0x0168782c) */

void FUN_01687660(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined *local_3088;
  undefined4 local_3080;
  undefined4 uStack_307c;
  byte local_3078;
  undefined1 auStack_3070 [8];
  int local_3068;
  int iStack_3064;
  uint local_3058 [1024];
  undefined **local_2058;
  uint local_2050 [1024];
  undefined8 local_1050;
  undefined *local_1048;
  int local_1040;
  int local_103c;
  undefined *local_1038;
  int local_1030;
  int local_102c;
  
  local_2058 = &PTR_LAB_049bb2c8;
  memset(local_2050,0,0x1000);
  local_1050 = (undefined *)CONCAT44(local_1050._4_4_,0x15);
  memset(local_3058,0,0x1000);
  lVar13 = 0;
  do {
    puVar4 = (uint *)(param_1 + 0x290d8 + lVar13);
    uVar7 = *(uint *)((long)local_3058 + lVar13 + 4);
    lVar3 = lVar13 + 8;
    uVar10 = puVar4[1];
    *(uint *)((long)local_2050 + lVar13 + 0x1000) = *puVar4 | *(uint *)((long)local_3058 + lVar13);
    *(uint *)((long)local_2050 + lVar13 + 0x1004) = uVar10 | uVar7;
    lVar13 = lVar3;
  } while (lVar3 != 0x1000);
  memcpy(local_3058,&local_1050,0x1000);
  local_1050 = (undefined *)CONCAT44(local_1050._4_4_,0x17);
  lVar13 = 0;
  do {
    puVar4 = (uint *)(param_1 + 0x2b0e8 + lVar13);
    uVar7 = *(uint *)((long)local_3058 + lVar13 + 4);
    lVar3 = lVar13 + 8;
    uVar10 = puVar4[1];
    *(uint *)((long)local_2050 + lVar13 + 0x1000) = *puVar4 & *(uint *)((long)local_3058 + lVar13);
    *(uint *)((long)local_2050 + lVar13 + 0x1004) = uVar10 & uVar7;
    lVar13 = lVar3;
  } while (lVar3 != 0x1000);
  memcpy(local_3058,&local_1050,0x1000);
  uVar12 = 0;
  do {
    if ((local_3058[uVar12 >> 5] >> (ulong)((uint)uVar12 & 0x1f) & 1) != 0) goto LAB_016877d4;
    uVar7 = (uint)uVar12 + 1;
    uVar12 = (ulong)uVar7;
  } while (uVar7 != 0x8000);
  uVar12 = 0;
LAB_016877d4:
  iVar8 = 0x8000;
  do {
    if ((local_3058[iVar8 - 1U >> 5] >> (ulong)(iVar8 - 1U & 0x1f) & 1) != 0) break;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar9 = (int)uVar12;
joined_r0x01687800:
  if (iVar8 == iVar9) {
    local_1050 = (undefined *)((ulong)local_1050 & 0xffffffff00000000);
    lVar13 = 0;
    do {
      puVar4 = (uint *)(param_1 + 0x14030 + lVar13);
      lVar3 = lVar13 + 8;
      uVar7 = puVar4[1];
      *(uint *)((long)local_2050 + lVar13 + 0x1000) = *puVar4 & *(uint *)((long)local_2050 + lVar13)
      ;
      *(uint *)((long)local_2050 + lVar13 + 0x1004) =
           uVar7 & *(uint *)((long)local_2050 + lVar13 + 4);
      lVar13 = lVar3;
    } while (lVar3 != 0x1000);
    memcpy(local_2050,&local_1050,0x1000);
    iVar8 = 0;
    lVar13 = 2;
    do {
      lVar3 = lVar13 + 0x400;
      lVar13 = lVar13 + 1;
      uVar7 = local_3058[lVar3] - (local_3058[lVar3] >> 1 & 0x55555555);
      uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
      uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
      uVar7 = uVar7 + (uVar7 >> 8);
      iVar8 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + iVar8;
    } while (lVar13 != 0x402);
    if (iVar8 != 0) {
      FUN_01696be0(auStack_3070,&local_2058);
      uStack_307c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
      local_3080 = 1;
      local_3078 = FUN_017baf44();
      local_3078 = local_3078 & 1;
      local_3088 = PTR_DAT_04bb6268 + 0x10;
      local_1050 = (undefined *)0x9c6;
      FUN_0277d4ac(&local_1050);
      FUN_011f3880(&local_3088,0,&local_1050,auStack_3070);
      local_1040 = local_3068;
      local_103c = iStack_3064;
      local_1050 = PTR_DAT_04bbc1a0 + 0x10;
      local_1030 = local_3068 + 1;
      local_102c = iStack_3064 + 1;
      local_1048 = PTR_DAT_04bb2010 + 0x10;
      local_1038 = local_1048;
      FUN_01686550(param_1,&local_1050);
    }
    return;
  }
  uVar11 = (uint)uVar12;
  iVar6 = (uVar11 & 0xff) * 2;
  uVar10 = iVar6 - 2;
  uVar7 = (int)uVar11 >> 7 & 0xfffffffe;
  uVar5 = uVar7 - 2;
  iVar9 = (int)uVar10 >> 1;
  if ((((DAT_05233970 <= (int)uVar10 && (int)uVar10 <= DAT_05233980) && (DAT_05233974 <= (int)uVar5)
       ) && ((int)uVar5 <= DAT_05233984)) && (uVar1 = uVar5 * 0x80 + iVar9, uVar1 >> 0xf == 0)) {
    uVar1 = uVar1 >> 5;
    local_2050[uVar1] = local_2050[uVar1] | 1 << (ulong)(uVar10 >> 1 & 0x1f);
  }
  if (((DAT_05233970 <= iVar6 && iVar6 <= DAT_05233980) && (DAT_05233974 <= (int)uVar5)) &&
     (((int)uVar5 <= DAT_05233984 && ((uVar5 >> 8 & 0x1ffff) == 0)))) {
    uVar1 = (uVar5 * 0x80 | uVar11 & 0xff) >> 5;
    local_2050[uVar1] = local_2050[uVar1] | 1 << (ulong)(uVar11 & 0x1f);
  }
  uVar1 = iVar6 + 2;
  if (((DAT_05233970 <= (int)uVar1 && (int)uVar1 <= DAT_05233980) && (DAT_05233974 <= (int)uVar5))
     && (((int)uVar5 <= DAT_05233984 && (uVar5 = uVar5 * 0x80 + (uVar1 >> 1), uVar5 >> 0xf == 0))))
  {
    uVar5 = uVar5 >> 5;
    local_2050[uVar5] = local_2050[uVar5] | 1 << (ulong)(uVar1 >> 1 & 0x1f);
  }
  if (DAT_05233970 <= (int)uVar10 && (int)uVar10 <= DAT_05233980) {
    if (((DAT_05233974 <= (int)uVar7) && ((int)uVar7 <= DAT_05233984)) &&
       (uVar5 = (uVar11 & 0xffffff00) + iVar9, uVar5 >> 0xf == 0)) {
      uVar5 = uVar5 >> 5;
      local_2050[uVar5] = local_2050[uVar5] | 1 << (ulong)(uVar10 >> 1 & 0x1f);
    }
    iVar2 = uVar7 + 2;
    if (((DAT_05233974 <= iVar2) && (iVar2 <= DAT_05233984)) &&
       (uVar5 = iVar2 * 0x80 + iVar9, uVar5 >> 0xf == 0)) {
      uVar5 = uVar5 >> 5;
      local_2050[uVar5] = local_2050[uVar5] | 1 << (ulong)(uVar10 >> 1 & 0x1f);
    }
  }
  uVar7 = uVar7 + 2;
  if (((DAT_05233970 <= iVar6 && iVar6 <= DAT_05233980) && (DAT_05233974 <= (int)uVar7)) &&
     (((int)uVar7 <= DAT_05233984 && ((uVar7 >> 8 & 0x1ffff) == 0)))) {
    uVar10 = (uVar11 & 0xff | (uVar7 >> 1) << 8) >> 5;
    local_2050[uVar10] = local_2050[uVar10] | 1 << (ulong)(uVar11 & 0x1f);
  }
  if ((((DAT_05233970 <= (int)uVar1 && (int)uVar1 <= DAT_05233980) && (DAT_05233974 <= (int)uVar7))
      && ((int)uVar7 <= DAT_05233984)) && (uVar7 = uVar7 * 0x80 + (uVar1 >> 1), uVar7 >> 0xf == 0))
  {
    uVar7 = uVar7 >> 5;
    local_2050[uVar7] = local_2050[uVar7] | 1 << (ulong)(uVar1 >> 1 & 0x1f);
  }
  do {
    uVar7 = (int)uVar12 + 1;
    uVar12 = (ulong)uVar7;
    if (0x7fff < uVar7) {
      uVar7 = 0x7ffe;
      goto LAB_01687a54;
    }
  } while ((local_3058[uVar7 >> 5] >> (ulong)(uVar7 & 0x1f) & 1) == 0);
  goto LAB_016879d0;
  while (uVar7 = uVar7 - 2, uVar7 != 0xfffffffe) {
LAB_01687a54:
    uVar10 = uVar7 + 1;
    if (((local_3058[uVar10 >> 5] >> (ulong)(uVar10 & 0x1f) & 1) != 0) ||
       (uVar10 = uVar7, (local_3058[uVar7 >> 5] >> (ulong)(uVar7 & 0x1f) & 1) != 0)) {
      uVar12 = (ulong)(uVar10 + 1);
      goto LAB_016879d0;
    }
  }
  uVar12 = 0;
LAB_016879d0:
  iVar9 = (int)uVar12;
  goto joined_r0x01687800;
}



bool FUN_01686ec0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint *__s;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  undefined *local_90c8;
  int local_90c0;
  uint uStack_90bc;
  byte local_90b8;
  undefined1 auStack_90b0 [8];
  uint local_90a8;
  uint uStack_90a4;
  undefined8 local_90a0;
  uint local_9098 [4096];
  undefined **local_5098;
  uint local_5090 [1024];
  undefined *local_4090;
  undefined *local_4088;
  uint local_4080;
  uint uStack_407c;
  undefined *local_4078;
  int local_4070;
  int iStack_406c;
  undefined8 local_4068;
  uint local_4060 [4096];
  
  __s = local_9098 + 0x1002;
  local_5098 = &PTR_LAB_049bb2c8;
  memset(__s,0,0x1000);
  lVar15 = 0;
  do {
    uVar14 = *(uint *)(param_1 + 0x16040 + lVar15 + 4);
    lVar16 = lVar15 + 8;
    *(uint *)((long)local_9098 + lVar15 + -8) =
         *(uint *)(param_1 + 0x16040 + lVar15) | *(uint *)((long)local_9098 + lVar15 + 0x4008);
    *(uint *)((long)local_9098 + lVar15 + -4) =
         uVar14 | *(uint *)((long)local_9098 + lVar15 + 0x400c);
    lVar15 = lVar16;
  } while (lVar16 != 0x1000);
  memcpy(__s,&local_90a0,0x1000);
  lVar15 = 0;
  do {
    uVar14 = *(uint *)(param_1 + 0x2b0e8 + lVar15 + 4);
    lVar16 = lVar15 + 8;
    *(uint *)((long)local_9098 + lVar15 + -8) =
         *(uint *)(param_1 + 0x2b0e8 + lVar15) & *(uint *)((long)local_9098 + lVar15 + 0x4008);
    *(uint *)((long)local_9098 + lVar15 + -4) =
         uVar14 & *(uint *)((long)local_9098 + lVar15 + 0x400c);
    lVar15 = lVar16;
  } while (lVar16 != 0x1000);
  memcpy(__s,&local_90a0,0x1000);
  local_90a0 = PTR_DAT_04bbbc40 + 0x10;
  memset(local_9098,0,0x4000);
  lVar15 = 0;
  do {
    uVar18 = *(uint *)(param_1 + 0x4010 + lVar15 + 4);
    uVar14 = *(uint *)((long)local_9098 + lVar15 + 4);
    lVar16 = lVar15 + 8;
    *(uint *)((long)&local_4068 + lVar15) =
         *(uint *)(param_1 + 0x4010 + lVar15) | *(uint *)((long)local_9098 + lVar15);
    *(uint *)((long)&local_4068 + lVar15 + 4) = uVar18 | uVar14;
    lVar15 = lVar16;
  } while (lVar16 != 0x4000);
  memcpy(local_9098,&local_4068,0x4000);
  lVar15 = param_1 + 0x8018;
  lVar16 = 0;
  do {
    uVar18 = *(uint *)(lVar15 + lVar16 + 4);
    uVar14 = *(uint *)((long)local_9098 + lVar16 + 4);
    lVar3 = lVar16 + 8;
    *(uint *)((long)&local_4068 + lVar16) =
         *(uint *)(lVar15 + lVar16) | *(uint *)((long)local_9098 + lVar16);
    *(uint *)((long)&local_4068 + lVar16 + 4) = uVar18 | uVar14;
    lVar16 = lVar3;
  } while (lVar3 != 0x4000);
  memcpy(local_9098,&local_4068,0x4000);
  local_4068 = &PTR_LAB_049bb2c8;
  memset(local_4060,0,0x1000);
  uVar19 = 0;
  do {
    if ((__s[uVar19 >> 5] >> (ulong)((uint)uVar19 & 0x1f) & 1) != 0) goto LAB_016870f0;
    uVar14 = (uint)uVar19 + 1;
    uVar19 = (ulong)uVar14;
  } while (uVar14 != 0x8000);
  uVar19 = 0;
LAB_016870f0:
  iVar17 = 0x8000;
  do {
    if ((__s[iVar17 - 1U >> 5] >> (ulong)(iVar17 - 1U & 0x1f) & 1) != 0) break;
    iVar17 = iVar17 + -1;
  } while (iVar17 != 0);
  if (iVar17 == (int)uVar19) {
LAB_01687118:
    iVar17 = 0;
    lVar16 = 2;
    do {
      uVar14 = *(uint *)((long)&local_4068 + lVar16 * 4);
      lVar16 = lVar16 + 1;
      uVar14 = uVar14 - (uVar14 >> 1 & 0x55555555);
      uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
      uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
      uVar14 = uVar14 + (uVar14 >> 8);
      iVar17 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + iVar17;
    } while (lVar16 != 0x402);
    if (iVar17 != 0) {
      FUN_01696be0(auStack_90b0,&local_4068);
      uStack_90bc = *(uint *)(PTR_DAT_04bbbf90 + 0xc);
      local_90c0 = 1;
      local_90b8 = FUN_017baf44();
      local_90b8 = local_90b8 & 1;
      local_90c8 = PTR_DAT_04bb6268 + 0x10;
      FUN_011f3880(&local_90c8,0,param_2,auStack_90b0);
      local_4088 = PTR_DAT_04bb2010 + 0x10;
      local_4090 = PTR_DAT_04bbc1a0 + 0x10;
      iStack_406c = uStack_90a4 + 1;
      local_4080 = local_90a8;
      uStack_407c = uStack_90a4;
      local_4078 = local_4088;
      local_4070 = local_90a8 + 1;
      FUN_01686550(param_1,&local_4090);
      uVar14 = *(uint *)(param_1 + 0x32164);
      if (((uVar14 ^ 0xffffffff) & 0xe0) != 0) {
        *(uint *)(param_1 + 0x32164) =
             uVar14 & 0xffffff00 | uVar14 & 0x1f | (uVar14 + 0x20 >> 5 & 7) << 5;
      }
      iVar11 = DAT_05233984;
      iVar10 = DAT_05233980;
      iVar9 = DAT_05233974;
      iVar12 = DAT_05233970;
      if (((DAT_05233970 <= (int)local_90a8) && ((int)local_90a8 <= DAT_05233980)) &&
         ((DAT_05233974 <= (int)uStack_90a4 &&
          (((int)uStack_90a4 <= DAT_05233984 &&
           (uVar14 = (uStack_90a4 & 0x1fffffe) * 0x80 + ((int)local_90a8 >> 1), uVar14 >> 0xf == 0))
          )))) {
        param_1 = param_1 + (ulong)(uVar14 >> 5) * 4;
        *(uint *)(param_1 + 0x290d8) =
             *(uint *)(param_1 + 0x290d8) | 1 << (ulong)(local_90a8 >> 1 & 0x1f);
      }
      uVar14 = uStack_90a4 + 2;
      uVar18 = local_90a8;
      do {
        if ((((iVar12 <= (int)uVar18) && ((int)uVar18 <= iVar10)) && (iVar9 <= (int)uStack_90a4)) &&
           (((int)uStack_90a4 <= iVar11 &&
            (uVar8 = uVar18 + uStack_90a4 * 0x200, uVar8 >> 0x11 == 0)))) {
          lVar16 = (ulong)(uVar8 >> 5) * 4;
          *(uint *)(lVar15 + lVar16) = *(uint *)(lVar15 + lVar16) | 1 << (ulong)(uVar18 & 0x1f);
        }
        if ((int)uVar18 < (int)(local_90a8 + 1)) {
          uVar18 = uVar18 + 1;
        }
        else {
          uStack_90a4 = uStack_90a4 + 1;
          uVar18 = local_90a8;
        }
      } while ((local_90a8 != uVar18) || (uVar14 != uStack_90a4));
    }
    return iVar17 != 0;
  }
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  puVar5 = PTR_DAT_04bbc1a0 + 0x10;
LAB_01687380:
  uVar18 = (uint)uVar19;
  local_90c0 = (uVar18 & 0xff) << 1;
  uStack_90bc = (int)uVar18 >> 7 & 0xfffffffe;
  local_90c8 = puVar4;
  uVar13 = FUN_01695900(&local_90a0,&local_90c8,1);
  uVar14 = uStack_90bc;
  iVar12 = local_90c0;
  if ((uVar13 & 1) == 0) {
    puVar6 = PTR_DAT_04bb2010 + 0x10;
    iVar9 = local_90c0 + -2;
    uVar8 = uStack_90bc - 2;
    iVar10 = local_90c0 + -1;
    iVar11 = uStack_90bc - 1;
    local_4090 = puVar5;
    local_4088 = puVar6;
    local_4080 = iVar9;
    uStack_407c = uVar8;
    local_4078 = puVar6;
    local_4070 = iVar10;
    iStack_406c = iVar11;
    uVar13 = FUN_0097d8e0(&local_4090);
    if ((uVar13 & 1) != 0) {
      puVar7 = PTR_DAT_04bbc1a0 + 0x10;
      local_4080 = iVar12;
      local_4090 = puVar7;
      local_4088 = puVar6;
      uStack_407c = uVar8;
      local_4078 = puVar6;
      local_4070 = iVar12 + 1;
      iStack_406c = iVar11;
      uVar13 = FUN_0097d8e0(&local_4090);
      if ((uVar13 & 1) != 0) {
        iVar1 = iVar12 + 2;
        puVar6 = PTR_DAT_04bb2010 + 0x10;
        iVar2 = iVar12 + 3;
        local_4090 = puVar7;
        local_4088 = puVar6;
        local_4080 = iVar1;
        uStack_407c = uVar8;
        local_4078 = puVar6;
        local_4070 = iVar2;
        iStack_406c = iVar11;
        uVar13 = FUN_0097d8e0(&local_4090);
        if ((uVar13 & 1) != 0) {
          puVar7 = PTR_DAT_04bbc1a0 + 0x10;
          uStack_407c = uVar14;
          local_4090 = puVar7;
          local_4088 = puVar6;
          local_4080 = iVar9;
          local_4078 = puVar6;
          local_4070 = iVar10;
          iStack_406c = uVar14 + 1;
          uVar13 = FUN_0097d8e0(&local_4090);
          if ((uVar13 & 1) != 0) {
            puVar6 = PTR_DAT_04bb2010 + 0x10;
            uStack_407c = uVar14;
            local_4090 = puVar7;
            local_4088 = puVar6;
            local_4080 = iVar1;
            local_4078 = puVar6;
            local_4070 = iVar2;
            iStack_406c = uVar14 + 1;
            uVar13 = FUN_0097d8e0(&local_4090);
            if ((uVar13 & 1) != 0) {
              uVar8 = uVar14 + 2;
              iVar11 = uVar14 + 3;
              puVar7 = PTR_DAT_04bbc1a0 + 0x10;
              local_4090 = puVar7;
              local_4088 = puVar6;
              local_4080 = iVar9;
              uStack_407c = uVar8;
              local_4078 = puVar6;
              local_4070 = iVar10;
              iStack_406c = iVar11;
              uVar13 = FUN_0097d8e0(&local_4090);
              if ((uVar13 & 1) != 0) {
                puVar6 = PTR_DAT_04bb2010 + 0x10;
                local_4080 = iVar12;
                local_4090 = puVar7;
                local_4088 = puVar6;
                uStack_407c = uVar8;
                local_4078 = puVar6;
                local_4070 = iVar12 + 1;
                iStack_406c = iVar11;
                uVar13 = FUN_0097d8e0(&local_4090);
                if ((uVar13 & 1) != 0) {
                  local_4090 = PTR_DAT_04bbc1a0 + 0x10;
                  local_4088 = puVar6;
                  local_4080 = iVar1;
                  uStack_407c = uVar8;
                  local_4078 = puVar6;
                  local_4070 = iVar2;
                  iStack_406c = iVar11;
                  uVar13 = FUN_0097d8e0(&local_4090);
                  if ((((uVar13 & 1) != 0) &&
                      (uVar13 = FUN_01676880(&local_90c8,0), uVar18 >> 0xf == 0)) &&
                     ((uVar13 & 1) == 0)) {
                    local_4060[uVar18 >> 5] = local_4060[uVar18 >> 5] | 1 << (ulong)(uVar18 & 0x1f);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  do {
    uVar14 = (int)uVar19 + 1;
    uVar19 = (ulong)uVar14;
    if (0x7fff < uVar14) {
      uVar14 = 0x7ffe;
      goto LAB_01687624;
    }
  } while ((__s[uVar14 >> 5] >> (ulong)(uVar14 & 0x1f) & 1) == 0);
  goto LAB_01687378;
  while (uVar14 = uVar14 - 2, uVar14 != 0xfffffffe) {
LAB_01687624:
    uVar18 = uVar14 + 1;
    if (((__s[uVar18 >> 5] >> (ulong)(uVar18 & 0x1f) & 1) != 0) ||
       (uVar18 = uVar14, (__s[uVar14 >> 5] >> (ulong)(uVar14 & 0x1f) & 1) != 0)) {
      uVar19 = (ulong)(uVar18 + 1);
      goto LAB_01687378;
    }
  }
  uVar19 = 0;
LAB_01687378:
  if (iVar17 == (int)uVar19) goto LAB_01687118;
  goto LAB_01687380;
}


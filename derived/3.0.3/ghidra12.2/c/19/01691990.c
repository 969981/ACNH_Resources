
void FUN_01691990(long param_1)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  byte bVar4;
  undefined *puVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined *local_20a0;
  uint local_2098;
  uint uStack_2094;
  undefined2 local_2090;
  undefined1 local_208e;
  undefined1 local_208d;
  undefined4 local_208c;
  undefined4 local_2088;
  undefined4 local_2084;
  uint local_2080;
  undefined2 local_207c;
  undefined1 local_207a;
  undefined *local_2078;
  undefined4 local_2070;
  undefined4 uStack_206c;
  long local_2068;
  undefined8 local_2060;
  undefined1 auStack_2058 [8];
  uint local_2050;
  uint local_204c;
  undefined **local_2048;
  uint local_2040 [1024];
  undefined8 local_1040;
  undefined8 local_1038;
  ulong local_1030;
  undefined8 local_1028;
  undefined8 local_1020;
  undefined8 local_1018;
  undefined8 local_1010;
  undefined8 local_1008;
  undefined8 local_1000;
  undefined8 local_ff8;
  undefined8 local_ff0;
  undefined8 local_fe8;
  undefined8 local_fe0;
  undefined8 local_fd8;
  undefined8 local_fd0;
  undefined8 local_fc8;
  undefined8 local_fc0;
  undefined8 local_fb8;
  undefined8 local_fb0;
  undefined8 local_fa8;
  undefined8 local_fa0;
  undefined8 local_f98;
  undefined8 local_f90;
  undefined8 local_f88;
  undefined8 local_f80;
  undefined8 local_f78;
  undefined8 local_f70;
  undefined8 local_f68;
  undefined8 local_f60;
  undefined8 local_f58;
  undefined8 local_f50;
  undefined8 local_f48;
  
  local_2048 = &PTR_LAB_049bb2c8;
  lVar16 = param_1 + 8;
  memset(local_2040,0,0x1000);
  lVar12 = 0;
  do {
    lVar2 = lVar12 + 8;
    uVar7 = ((uint *)(lVar16 + lVar12))[1];
    *(uint *)((long)local_2040 + lVar12 + 0x1000) =
         *(uint *)(lVar16 + lVar12) | *(uint *)((long)local_2040 + lVar12);
    *(uint *)((long)local_2040 + lVar12 + 0x1004) = uVar7 | *(uint *)((long)local_2040 + lVar12 + 4)
    ;
    lVar12 = lVar2;
  } while (lVar2 != 0x1000);
  memcpy(local_2040,&local_1040,0x1000);
  lVar12 = 0;
  do {
    puVar3 = (uint *)(param_1 + 0x5030 + lVar12);
    lVar2 = lVar12 + 8;
    uVar7 = puVar3[1];
    *(uint *)((long)local_2040 + lVar12 + 0x1000) = *puVar3 & *(uint *)((long)local_2040 + lVar12);
    *(uint *)((long)local_2040 + lVar12 + 0x1004) = uVar7 & *(uint *)((long)local_2040 + lVar12 + 4)
    ;
    lVar12 = lVar2;
  } while (lVar2 != 0x1000);
  memcpy(local_2040,&local_1040,0x1000);
  iVar8 = 0;
  lVar12 = 2;
  do {
    uVar7 = *(uint *)((long)&local_2048 + lVar12 * 4);
    lVar12 = lVar12 + 1;
    uVar7 = uVar7 - (uVar7 >> 1 & 0x55555555);
    uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
    uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
    uVar7 = uVar7 + (uVar7 >> 8);
    iVar8 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + iVar8;
  } while (lVar12 != 0x402);
  if (iVar8 != 0) {
    FUN_01696d70(auStack_2058,&local_2048);
    if ((((DAT_05233970 <= (int)local_2050) && ((int)local_2050 <= DAT_05233980)) &&
        (DAT_05233974 <= (int)local_204c)) &&
       (((int)local_204c <= DAT_05233984 &&
        (uVar7 = (local_204c & 0x1fffffe) * 0x80 + ((int)local_2050 >> 1), uVar7 >> 0xf == 0)))) {
      lVar12 = (ulong)(uVar7 >> 5) * 4;
      *(uint *)(lVar16 + lVar12) =
           *(uint *)(lVar16 + lVar12) & (1 << (ulong)(local_2050 >> 1 & 0x1f) ^ 0xffffffffU);
    }
    local_2060 = 0x16a1;
    FUN_0277d4ac(&local_2060);
    puVar5 = PTR_DAT_04bb43c0;
    local_2068 = 0;
    local_2078 = PTR_DAT_04bc0510 + 0x10;
    local_2070 = (undefined4)local_2060;
    uStack_206c = local_2060._4_4_;
    lVar16 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(&local_2070);
    if (*(long *)puVar5 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(&local_2060);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if (uVar7 < *(uint *)(lVar16 + 0x1d8)) {
          lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar7 * 8);
          if (lVar16 != 0) {
            local_2068 = lVar16;
          }
        }
      }
    }
    uVar9 = FUN_021f6520();
    puVar5 = PTR_DAT_04bb46f0;
    local_207a = (undefined1)(uVar9 >> 0x10);
    local_207c = (undefined2)uVar9;
    uVar7 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
    DAT_0514cb58 = DAT_0514cb5c;
    DAT_0514cb5c = DAT_0514cb60;
    uVar7 = uVar7 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar7 ^ DAT_0514cb64;
    DAT_0514cb60 = DAT_0514cb64;
    uVar11 = (uint)((ulong)uVar7 * 1000 >> 0x20);
    DAT_0514cb64 = uVar7;
    if (uVar11 < 300) {
      local_f48 = 0;
      local_f50 = 0;
      local_f58 = 0;
      local_f60 = 0;
      local_f68 = 0;
      local_f70 = 0;
      local_f78 = 0;
      local_f80 = 0;
      local_f88 = 0;
      local_f90 = 0;
      local_f98 = 0;
      local_fa0 = 0;
      local_fa8 = 0;
      local_fb0 = 0;
      local_fb8 = 0;
      local_fc0 = 0;
      local_fc8 = 0;
      local_fd0 = 0;
      local_fd8 = 0;
      local_fe0 = 0;
      local_fe8 = 0;
      local_ff0 = 0;
      local_ff8 = 0;
      local_1000 = 0;
      local_1008 = 0;
      local_1010 = 0;
      local_1018 = 0;
      local_1020 = 0;
      local_1028 = 0;
      local_1030 = 0;
      lVar16 = *(long *)PTR_DAT_04bb46f0;
      local_1038 = 0;
      local_1040 = (undefined *)0x0;
      if (uVar11 < 0x11d) {
        local_2080 = FUN_020fd7d8(&local_207c);
        local_2080 = local_2080 & 0xff;
        local_2088 = local_2080;
        if (6 < local_2080 - 1) {
          local_2088 = 0;
        }
      }
      else {
        local_2088 = 8;
      }
      FUN_0262a9b0(lVar16,&local_1040,&local_2088,lVar16 + 0xe98e0);
      uVar10 = FUN_0120fd30();
      if ((uVar10 & 1) == 0) {
        lVar16 = *(long *)puVar5;
        FUN_0262bed0(lVar16,&local_1040,lVar16 + 0xe98e0);
      }
      uVar7 = 0;
      uVar10 = 0;
      do {
        uVar13 = (uint)uVar10 & 6;
        uVar11 = (uint)uVar10 + 2;
        bVar4 = *(byte *)((long)local_2040 + (uVar10 >> 3) + 0x1000);
        uVar7 = (bVar4 >> (ulong)(uVar13 | 1) & 1) + (bVar4 >> (ulong)uVar13 & 1) + uVar7;
        uVar10 = (ulong)uVar11;
      } while (uVar11 != 0x800);
      if (uVar7 == 0) {
        uVar10 = 0xffff;
        uVar7 = DAT_0514cb58;
        DAT_0514cb58 = DAT_0514cb5c;
        uVar13 = DAT_0514cb60;
        uVar11 = DAT_0514cb64;
      }
      else {
        uVar11 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
        uVar11 = uVar11 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar11 ^ DAT_0514cb64;
        uVar14 = (uint)((ulong)uVar11 * (ulong)uVar7 >> 0x20);
        DAT_0514cb58 = DAT_0514cb60;
        uVar7 = DAT_0514cb5c;
        uVar13 = DAT_0514cb64;
        if (uVar14 < 0x7fffffff) {
          uVar10 = 0;
          uVar15 = 0;
          do {
            if ((*(byte *)((long)local_2040 + (uVar10 >> 3) + 0x1000) >> (ulong)((uint)uVar10 & 7) &
                1) != 0) {
              if (uVar15 == uVar14) goto LAB_0169204c;
              uVar15 = uVar15 + 1;
            }
            uVar1 = (uint)uVar10 + 1;
            uVar10 = (ulong)uVar1;
          } while (uVar1 != 0x800);
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = 0xffffffff;
        }
      }
LAB_0169204c:
      uVar7 = uVar7 ^ uVar7 << 0xb;
      DAT_0514cb64 = uVar7 >> 8 ^ uVar11 >> 0x13 ^ uVar7 ^ uVar11;
      iVar8 = (int)((ulong)DAT_0514cb64 * 0xff >> 0x20);
      DAT_0514cb5c = uVar13;
      DAT_0514cb60 = uVar11;
    }
    else {
      local_f48 = 0;
      local_f50 = 0;
      local_f58 = 0;
      local_f60 = 0;
      local_f68 = 0;
      local_f70 = 0;
      local_f78 = 0;
      local_f80 = 0;
      local_f88 = 0;
      local_f90 = 0;
      local_f98 = 0;
      local_fa0 = 0;
      local_fa8 = 0;
      local_fb0 = 0;
      local_fb8 = 0;
      local_fc0 = 0;
      local_fc8 = 0;
      local_fd0 = 0;
      local_fd8 = 0;
      local_fe0 = 0;
      local_fe8 = 0;
      local_ff0 = 0;
      local_ff8 = 0;
      local_1000 = 0;
      local_1008 = 0;
      local_1010 = 0;
      local_1018 = 0;
      local_1020 = 0;
      local_1028 = 0;
      local_1030 = 0;
      local_2088 = 10;
      local_1038 = 0;
      local_1040 = (undefined *)0x0;
      FUN_0262a9b0(*(long *)PTR_DAT_04bb46f0,&local_1040,&local_2088,
                   *(long *)PTR_DAT_04bb46f0 + 0xe98e0);
      uVar10 = FUN_0120fd30();
      if ((uVar10 & 1) == 0) {
        lVar16 = *(long *)puVar5;
        FUN_0262bed0(lVar16,&local_1040,lVar16 + 0xe98e0);
      }
      uVar7 = 0;
      uVar10 = 0;
      do {
        uVar13 = (uint)uVar10 & 6;
        uVar11 = (uint)uVar10 + 2;
        bVar4 = *(byte *)((long)local_2040 + (uVar10 >> 3) + 0x1000);
        uVar7 = (bVar4 >> (ulong)(uVar13 | 1) & 1) + (bVar4 >> (ulong)uVar13 & 1) + uVar7;
        uVar10 = (ulong)uVar11;
      } while (uVar11 != 0x800);
      if (uVar7 == 0) {
        uVar10 = 0xffff;
        uVar7 = DAT_0514cb58;
        DAT_0514cb58 = DAT_0514cb5c;
        uVar13 = DAT_0514cb60;
        uVar11 = DAT_0514cb64;
      }
      else {
        uVar11 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
        uVar11 = uVar11 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar11 ^ DAT_0514cb64;
        uVar14 = (uint)((ulong)uVar11 * (ulong)uVar7 >> 0x20);
        uVar7 = DAT_0514cb5c;
        DAT_0514cb58 = DAT_0514cb60;
        uVar13 = DAT_0514cb64;
        if (uVar14 < 0x7fffffff) {
          uVar10 = 0;
          uVar15 = 0;
          do {
            if ((*(byte *)((long)local_2040 + (uVar10 >> 3) + 0x1000) >> (ulong)((uint)uVar10 & 7) &
                1) != 0) {
              if (uVar15 == uVar14) goto LAB_01692018;
              uVar15 = uVar15 + 1;
            }
            uVar1 = (uint)uVar10 + 1;
            uVar10 = (ulong)uVar1;
          } while (uVar1 != 0x800);
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = 0xffffffff;
        }
      }
LAB_01692018:
      uVar7 = uVar7 ^ uVar7 << 0xb;
      DAT_0514cb64 = uVar7 >> 8 ^ uVar11 >> 0x13 ^ uVar7 ^ uVar11;
      iVar8 = (int)((ulong)DAT_0514cb64 * 0xff >> 0x20);
      DAT_0514cb5c = uVar13;
      DAT_0514cb60 = uVar11;
    }
    FUN_01afc400(&local_2088,&local_2078,uVar9 & 0xffffff,uVar10,iVar8 + 1);
    local_2090 = (undefined2)local_2088;
    local_2060 = CONCAT44(local_2084,local_2088);
    local_208e = local_2088._2_1_;
    local_208d = local_2088._3_1_;
    local_208c = local_2084;
    local_2098 = local_2050;
    uStack_2094 = local_204c;
    local_1038 = local_1038 & 0xffffffff00000000;
    local_20a0 = PTR_DAT_04bb2010 + 0x10;
    lVar16 = *(long *)PTR_DAT_04bb2720;
    if (lVar16 == 0) {
      puVar17 = &DAT_055c04a0;
    }
    else {
      puVar17 = &DAT_055c04a0;
      if (*(long *)(lVar16 + 0x330) != 0) {
        puVar17 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
        iVar8 = FUN_006bd550(*puVar17,0);
        puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar17 = &DAT_055c04a0;
        }
      }
    }
    local_1038 = CONCAT44(*(undefined4 *)(puVar17 + 7),(undefined4)local_1038);
    uVar6 = FUN_017baf44();
    local_1030 = CONCAT71(local_1030._1_7_,uVar6) & 0xffffffffffffff01;
    local_1040 = PTR_DAT_04bb6268 + 0x10;
    FUN_011f3880(&local_1040,0,&local_2090,&local_20a0);
  }
  return;
}


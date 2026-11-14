
void FUN_01d871b0(long param_1)

{
  undefined8 **ppuVar1;
  long lVar2;
  undefined8 **ppuVar3;
  undefined8 **__src;
  long *plVar4;
  byte *pbVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 **ppuVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  ulong uVar23;
  char *pcVar24;
  long lVar25;
  char cVar26;
  long lVar27;
  char *pcVar28;
  long lVar29;
  int *piVar30;
  ulong uVar31;
  undefined8 *puVar32;
  ulong uVar33;
  long lVar34;
  undefined8 *local_2288;
  char *pcStack_2280;
  undefined8 *local_2278;
  char *pcStack_2270;
  undefined8 local_2268;
  undefined8 local_2260;
  undefined1 local_2258 [8];
  undefined *local_2250;
  undefined8 local_2248;
  undefined8 local_2240;
  undefined8 local_2238;
  undefined7 uStack_2230;
  undefined1 local_2229;
  undefined7 uStack_2228;
  undefined8 local_2220;
  uint uStack_2218;
  undefined4 uStack_2214;
  undefined8 local_2210;
  undefined8 uStack_2208;
  undefined8 local_2200;
  undefined8 uStack_21f8;
  undefined8 local_21f0;
  undefined8 uStack_21e8;
  undefined8 local_21e0;
  undefined8 uStack_21d8;
  undefined8 local_21d0;
  undefined8 uStack_21c8;
  undefined8 local_21c0;
  undefined8 uStack_21b8;
  undefined7 local_21b0;
  undefined1 uStack_21a9;
  undefined7 uStack_21a8;
  undefined1 local_21a0;
  undefined8 local_219f;
  undefined8 local_2197;
  undefined8 local_218f;
  undefined8 local_2187;
  undefined8 local_217f;
  undefined8 local_2177;
  undefined7 local_216f;
  undefined1 uStack_2168;
  undefined7 uStack_2167;
  undefined8 local_215f;
  undefined8 uStack_2157;
  undefined8 local_214f;
  undefined8 uStack_2147;
  undefined8 local_213f;
  undefined8 uStack_2137;
  undefined7 uStack_212f;
  undefined1 local_2128;
  undefined7 uStack_2127;
  undefined2 local_211f;
  undefined1 auStack_2118 [32];
  long alStack_20f8 [7];
  undefined8 auStack_20c0 [1028];
  uint local_a0;
  undefined8 *local_98;
  undefined8 *puStack_90;
  undefined8 *local_88;
  undefined8 **local_80;
  undefined *local_78;
  undefined *puStack_70;
  
  FUN_01c814b0(auStack_2118);
  ppuVar1 = (undefined8 **)(PTR_DAT_04bb2020 + 0x10);
  local_2260 = "EventDeli";
  local_2268 = ppuVar1;
  FUN_01c81860(auStack_2118,&local_2268,1);
  puVar7 = PTR_DAT_04bb2120;
  uVar23 = (ulong)local_a0;
  if (0 < (int)local_a0) {
    uVar31 = 0;
    lVar2 = param_1 + 0x10;
    ppuVar3 = (undefined8 **)(PTR_DAT_04bb2bc0 + 0x10);
LAB_01d87294:
    plVar20 = alStack_20f8 + uVar31 * 10;
    if (99 < uVar31) {
      plVar20 = alStack_20f8;
    }
    plVar4 = alStack_20f8 + uVar31 * 10 + 1;
    if (99 < uVar31) {
      plVar4 = alStack_20f8 + 1;
    }
    if ((long)(int)uVar23 <= (long)uVar31) {
      plVar4 = (long *)(PTR_PTR_04bb2238 + 8);
      plVar20 = (long *)PTR_PTR_04bb2238;
    }
    cVar26 = *DAT_05374a68;
    if (cVar26 != '\0') {
      pcVar24 = (char *)*plVar4;
      pcVar28 = DAT_05374a68;
      do {
        pcVar28 = pcVar28 + 1;
        if (*pcVar24 != cVar26) goto LAB_01d87284;
        cVar26 = *pcVar28;
        pcVar24 = pcVar24 + 1;
      } while (cVar26 != '\0');
    }
    (**(code **)(*plVar20 + 0x18))(plVar20);
    uVar13 = DAT_05374a70;
    lVar27 = *plVar4;
    lVar25 = 0;
    do {
      if (*(char *)(lVar27 + lVar25) == '\0') {
LAB_01d87340:
        iVar16 = (int)lVar25;
joined_r0x01d87344:
        if (0 < iVar16) {
          lVar34 = 0;
          goto LAB_01d87360;
        }
        break;
      }
      if (*(char *)(lVar27 + lVar25 + 1) == '\0') {
        lVar25 = lVar25 + 1;
        goto LAB_01d87340;
      }
      if (*(char *)(lVar27 + lVar25 + 2) == '\0') {
        lVar25 = lVar25 + 2;
        iVar16 = (int)lVar25;
        goto joined_r0x01d87344;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    goto LAB_01d87378;
  }
LAB_01d87b80:
  if (((DAT_05374bd0 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_05374bd0), iVar16 != 0)) {
    local_2268 = (undefined8 **)0x800000006;
    puVar32 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
    local_80 = (undefined8 **)0x40911d0;
    local_88 = puVar32;
    FUN_01d88f70(&local_2260,&local_88);
    puStack_90 = &DAT_0407ebb1;
    local_98 = puVar32;
    FUN_01d89040(&local_2220,&local_98);
    local_21a0 = 0;
    pcStack_2270 = "1999-12-31T00:00:00";
    local_2278 = puVar32;
    FUN_01d88f70(&local_219f,&local_2278);
    pcStack_2280 = "2061-01-01T23:59:59";
    local_2288 = puVar32;
    FUN_01d88f70(&local_215f,&local_2288);
    local_211f = 0;
    DAT_05374ac7 = 0;
    DAT_05374b47 = 0;
    DAT_05374b88 = 0;
    DAT_05374bc8 = 0;
    DAT_05374ab0 = local_2238;
    DAT_05374ab8._0_7_ = uStack_2230;
    DAT_05374ab8._7_1_ = local_2229;
    uRam0000000005374ac0 = uStack_2228;
    DAT_05374a80 = local_2268;
    DAT_05374a88 = (undefined8 **)local_2260;
    DAT_05374a90 = (undefined8 **)local_2258;
    DAT_05374a98 = local_2250;
    DAT_05374aa0 = local_2248;
    DAT_05374aa8 = local_2240;
    DAT_05374b28 = local_21c0;
    DAT_05374b30 = uStack_21b8;
    DAT_05374b38._0_7_ = local_21b0;
    DAT_05374b38._7_1_ = uStack_21a9;
    uRam0000000005374b40 = uStack_21a8;
    DAT_05374b08 = local_21e0;
    DAT_05374b10 = uStack_21d8;
    DAT_05374b18 = local_21d0;
    DAT_05374b20 = uStack_21c8;
    DAT_05374ae8 = local_2200;
    DAT_05374af0 = uStack_21f8;
    DAT_05374af8 = local_21f0;
    DAT_05374b00 = uStack_21e8;
    DAT_05374ad0 = CONCAT44(uStack_2214,uStack_2218);
    DAT_05374ac8 = local_2220;
    DAT_05374ad8 = local_2210;
    DAT_05374ae0 = uStack_2208;
    DAT_05374b48 = local_21a0;
    DAT_05374b69 = local_217f;
    DAT_05374b71 = local_2177;
    DAT_05374b79._0_7_ = local_216f;
    DAT_05374b79._7_1_ = uStack_2168;
    uRam0000000005374b81 = uStack_2167;
    DAT_05374b49 = local_219f;
    DAT_05374b51 = local_2197;
    DAT_05374b59 = local_218f;
    DAT_05374b61 = local_2187;
    DAT_05374ba9 = local_213f;
    DAT_05374bb1 = uStack_2137;
    DAT_05374bb9._0_7_ = uStack_212f;
    DAT_05374bb9._7_1_ = local_2128;
    uRam0000000005374bc1 = uStack_2127;
    DAT_05374b89 = local_215f;
    DAT_05374b91 = uStack_2157;
    DAT_05374b99 = local_214f;
    DAT_05374ba1 = uStack_2147;
    DAT_05374bc9 = 0;
    __cxa_guard_release(&DAT_05374bd0);
  }
  uVar23 = FUN_01d86d10(&DAT_05374a80);
  if ((uVar23 & 1) != 0) {
    lVar2 = param_1 + 0x10;
    if (*(long *)(param_1 + 0x18) != lVar2) {
      lVar25 = (long)*(int *)(param_1 + 0x24);
      piVar30 = (int *)(*(long *)(param_1 + 0x18) - lVar25);
      do {
        if (((*(byte *)(piVar30 + 0x26) >> 2 & 1) == 0) && (DAT_05374a80._4_4_ == *piVar30))
        goto LAB_01d87e0c;
        piVar30 = (int *)(*(long *)((long)piVar30 + lVar25 + 8) - lVar25);
      } while (piVar30 != (int *)(lVar2 - lVar25));
    }
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      puVar21 = malloc(0xb0);
    }
    else {
      plVar20 = *(long **)(param_1 + 8);
      if (plVar20 == (long *)0x0) {
        lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar20 = (long *)(lVar25 + 8);
        if (lVar27 != 0) {
          plVar20 = (long *)(lVar27 + 0xa8);
        }
        plVar20 = (long *)*plVar20;
        if (plVar20 == (long *)0x0) goto LAB_01d87e0c;
      }
      puVar21 = (undefined4 *)(**(code **)(*plVar20 + 0x30))(plVar20,0xb0,8);
    }
    if (puVar21 != (undefined4 *)0x0) {
      *(undefined1 *)((long)puVar21 + 0x5b) = 0;
      puVar32 = (undefined8 *)(puVar21 + 7);
      *(undefined1 *)puVar32 = 0;
      *(undefined8 *)(puVar21 + 0x18) = 0x1000007b2;
      puVar7 = PTR_DAT_04bb2bc0;
      puVar21[6] = 0x40;
      *(undefined8 *)(puVar21 + 0x28) = 0;
      *(undefined8 *)(puVar21 + 0x2a) = 0;
      *(undefined8 *)(puVar21 + 0x23) = 0;
      *(undefined8 *)((long)puVar21 + 0x91) = 0;
      *(undefined **)(puVar21 + 2) = puVar7 + 0x10;
      *(undefined8 **)(puVar21 + 4) = puVar32;
      *(undefined8 *)(puVar21 + 0x1a) = 0x400000001;
      *(undefined8 *)(puVar21 + 0x1c) = 0;
      *(undefined8 *)(puVar21 + 0x1e) = 0x7b200000000;
      *(undefined8 *)(puVar21 + 0x20) = 0x100000001;
      puVar21[0x22] = 4;
      *puVar21 = DAT_05374a80._4_4_;
      if ((undefined8 ***)puVar32 != &DAT_05374a88) {
        lVar25 = 0;
        do {
          if (*(char *)((long)&DAT_05374a88 + lVar25) == '\0') goto LAB_01d87d4c;
          if (*(char *)((long)&DAT_05374a88 + lVar25 + 1) == '\0') {
            lVar25 = lVar25 + 1;
            goto LAB_01d87d4c;
          }
          if (*(char *)((long)&DAT_05374a88 + lVar25 + 2) == '\0') {
            lVar25 = lVar25 + 2;
            goto LAB_01d87d4c;
          }
          lVar25 = lVar25 + 3;
        } while (lVar25 != 0x80001);
        lVar25 = 0;
LAB_01d87d4c:
        iVar16 = (int)lVar25;
        if (0x3e < iVar16) {
          iVar16 = 0x3f;
        }
        memcpy(puVar32,&DAT_05374a88,(long)iVar16);
        *(undefined1 *)((long)puVar32 + (long)iVar16) = 0;
      }
      local_2268 = (undefined8 **)0x0;
      local_2260 = (char *)0x0;
      puVar32 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
      local_80 = (undefined8 **)&DAT_05374b49;
      local_88 = puVar32;
      FUN_038e9c10(puVar21 + 0x18,&local_2268,&local_88);
      local_80 = (undefined8 **)&DAT_05374b89;
      local_88 = puVar32;
      FUN_038e9c10(puVar21 + 0x1f,&local_2268,&local_88);
      bVar6 = *(byte *)(puVar21 + 0x26) & 0xfe | (byte)DAT_05374bc9;
      *(byte *)(puVar21 + 0x26) = bVar6;
      *(byte *)(puVar21 + 0x26) = bVar6 & 0xfd | DAT_05374bc9._1_1_ << 1;
      lVar25 = *(long *)(param_1 + 0x10);
      plVar20 = (long *)((long)*(int *)(param_1 + 0x24) + (long)puVar21);
      *(long **)(param_1 + 0x10) = plVar20;
      *plVar20 = lVar25;
      plVar20[1] = lVar2;
      if (lVar25 != 0) {
        *(long **)(lVar25 + 8) = plVar20;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
  }
LAB_01d87e0c:
  FUN_01c81610(auStack_2118);
  return;
  while (lVar34 = lVar34 + 1, lVar25 != lVar34) {
LAB_01d87360:
    if (*(char *)(lVar27 + lVar34) == '.') goto LAB_01d87380;
  }
LAB_01d87378:
  lVar34 = 0xffffffff;
LAB_01d87380:
  uStack_2218 = uStack_2218 & 0xffffff;
  local_2258._0_5_ = 0x40;
  local_2260 = local_2258 + 4;
  lVar27 = (long)(int)DAT_05374a70;
  uVar14 = (int)lVar34 - DAT_05374a70;
  uVar23 = (ulong)uVar14;
  local_2268 = ppuVar3;
  (**(code **)(*plVar20 + 0x18))(plVar20);
  lVar25 = 0;
  do {
    if (*(char *)(*plVar4 + lVar25) == '\0') {
LAB_01d873fc:
      if ((int)lVar25 <= (int)uVar13) goto LAB_01d874b4;
      goto LAB_01d87404;
    }
    lVar29 = *plVar4 + lVar25;
    if (*(char *)(lVar29 + 1) == '\0') {
      lVar25 = lVar25 + 1;
      goto LAB_01d873fc;
    }
    if (*(char *)(lVar29 + 2) == '\0') {
      if ((int)uVar13 < (int)lVar25 + 2) goto LAB_01d87404;
      goto LAB_01d874b4;
    }
    lVar25 = lVar25 + 3;
  } while (lVar25 != 0x80001);
  if (0x7fffffff < uVar13) {
LAB_01d87404:
    (**(code **)(*plVar20 + 0x18))(plVar20);
    ppuVar12 = (undefined8 **)local_2260;
    __src = (undefined8 **)(*plVar4 + lVar27);
    if ((undefined8 **)local_2260 != __src) {
      if (((int)lVar34 == -1) || ((int)uVar14 < 0)) {
        uVar23 = 0;
        do {
          if (*(char *)((long)__src + uVar23) == '\0') goto LAB_01d87490;
          if (*(char *)((long)__src + uVar23 + 1) == '\0') {
            uVar23 = uVar23 + 1;
            goto LAB_01d87490;
          }
          if (*(char *)((long)__src + uVar23 + 2) == '\0') {
            uVar23 = uVar23 + 2;
            goto LAB_01d87490;
          }
          uVar23 = uVar23 + 3;
        } while (uVar23 != 0x80001);
        uVar23 = 0;
      }
LAB_01d87490:
      iVar16 = (int)uVar23;
      if ((int)local_2258._0_4_ <= (int)uVar23) {
        iVar16 = local_2258._0_4_ + -1;
      }
      memcpy(local_2260,__src,(long)iVar16);
      *(char *)((long)ppuVar12 + (long)iVar16) = '\0';
    }
  }
LAB_01d874b4:
  if (*local_2260 != '\0') {
    (*(code *)local_2268[3])(&local_2268);
    lVar25 = 0;
    do {
      if (*(char *)((long)local_2260 + lVar25) == '\0') {
LAB_01d87514:
        iVar16 = (int)lVar25 + 1;
        if ((int)lVar25 != -1) goto LAB_01d87530;
        goto LAB_01d875d8;
      }
      if (*(char *)((long)local_2260 + lVar25 + 1) == '\0') {
        lVar25 = lVar25 + 1;
        goto LAB_01d87514;
      }
      if (*(char *)((long)local_2260 + lVar25 + 2) == '\0') {
        iVar16 = (int)lVar25 + 3;
        if ((int)lVar25 == -3) goto LAB_01d875d8;
        goto LAB_01d87530;
      }
      lVar25 = lVar25 + 3;
    } while (lVar25 != 0x80001);
    iVar16 = 1;
LAB_01d87530:
    uVar23 = 0;
    uVar33 = 0;
    do {
      (*(code *)local_2268[3])(&local_2268);
      lVar25 = 0;
      do {
        if (*(char *)((long)local_2260 + lVar25) == '\0') goto LAB_01d875a4;
        if (*(char *)((long)local_2260 + lVar25 + 1) == '\0') {
          lVar25 = lVar25 + 1;
          goto LAB_01d875a4;
        }
        if (*(char *)((long)local_2260 + lVar25 + 2) == '\0') {
          lVar25 = lVar25 + 2;
          goto LAB_01d875a4;
        }
        lVar25 = lVar25 + 3;
      } while (lVar25 != 0x80001);
      lVar25 = 0;
LAB_01d875a4:
      pbVar5 = puVar7;
      if ((int)uVar23 <= (int)lVar25 && -1 < (int)uVar23) {
        pbVar5 = (byte *)((long)local_2260 + uVar33);
      }
      if (*pbVar5 == 0) break;
      if (9 < *pbVar5 - 0x30) goto LAB_01d87284;
      uVar23 = uVar33 + 1;
      uVar33 = uVar23 & 0xffffffff;
    } while (iVar16 != (int)uVar23);
LAB_01d875d8:
    uVar23 = FUN_038d30c0(&local_88,&local_2268,10);
    if (((uVar23 & 1) != 0) &&
       (uVar23 = FUN_01c81ac0(auStack_2118,uVar31 & 0xffffffff,1), (uVar23 & 1) != 0)) {
      puVar32 = auStack_20c0 + uVar31 * 10;
      if (99 < uVar31) {
        puVar32 = auStack_20c0;
      }
      if ((long)(int)local_a0 <= (long)uVar31) {
        puVar32 = (undefined8 *)PTR_DAT_04bc1040;
      }
      lVar34 = *(long *)PTR_DAT_04bc1048;
      lVar27 = *(long *)(lVar34 + 0x10);
      lVar25 = lVar34 + 8;
      if (lVar27 != lVar25) {
        puVar32 = (undefined8 *)*puVar32;
        lVar34 = (long)puVar32 + (long)*(int *)(lVar34 + 0x1c);
        lVar29 = lVar27;
        do {
          if (lVar29 == lVar34) {
            lVar29 = lVar27;
            goto LAB_01d87680;
          }
          lVar29 = *(long *)(lVar29 + 8);
        } while (lVar29 != lVar25);
      }
    }
  }
LAB_01d87284:
  uVar23 = (ulong)(int)local_a0;
  uVar31 = uVar31 + 1;
  if ((long)uVar23 <= (long)uVar31) goto LAB_01d87b80;
  goto LAB_01d87294;
  while (lVar29 = *(long *)(lVar29 + 8), lVar29 != lVar25) {
LAB_01d87680:
    if (lVar29 == lVar34) {
      uVar22 = *puVar32;
      goto LAB_01d876a0;
    }
  }
  uVar22 = 0;
LAB_01d876a0:
  do {
    if (lVar27 == lVar34) {
      if (puVar32[1] != 0) {
        FUN_00699eb4(&local_88,uVar22);
        uVar23 = FUN_0069aa28(&local_88);
        if ((uVar23 & 1) != 0) {
          local_2268 = &local_98;
          local_2260 = (char *)&local_88;
          local_2250 = &DAT_0409f795;
          local_2258 = (undefined1  [8])ppuVar1;
          uVar23 = (*(code *)**(undefined8 **)(PTR_DAT_04bc1198 + 0x30))
                             (PTR_DAT_04bc1198 + 0x30,&local_2268);
          if (((uVar23 & 1) != 0) && ((uint)local_98 < 10)) {
            local_21b0 = 0;
            uStack_21a9 = 0;
            uStack_21a8 = 0;
            local_21c0 = 0;
            uStack_21b8 = 0;
            local_21d0 = 0;
            uStack_21c8 = 0;
            local_21e0 = 0;
            uStack_21d8 = 0;
            local_21f0 = 0;
            uStack_21e8 = 0;
            local_2200 = 0;
            uStack_21f8 = 0;
            local_2210 = 0;
            uStack_2208 = 0;
            local_2220 = 0;
            uStack_2218 = 0;
            uStack_2214 = 0;
            uStack_2230 = 0;
            local_2229 = 0;
            uStack_2228 = 0;
            local_2240 = 0;
            local_2238 = 0;
            local_2250 = (undefined *)0x0;
            local_2248 = 0;
            uStack_212f = 0;
            local_2128 = 0;
            uStack_2127 = 0;
            local_213f = 0;
            uStack_2137 = 0;
            local_214f = 0;
            uStack_2147 = 0;
            local_215f = 0;
            uStack_2157 = 0;
            local_216f = 0;
            uStack_2168 = 0;
            uStack_2167 = 0;
            local_217f = 0;
            local_2177 = 0;
            local_218f = 0;
            local_2187 = 0;
            local_219f = 0;
            local_2197 = 0;
            lVar34 = *(long *)PTR_DAT_04bc1048;
            lVar25 = lVar34 + 8;
            local_2260 = (char *)0x0;
            local_2258 = (undefined1  [8])0x0;
            lVar27 = *(long *)(lVar34 + 0x10);
            if (lVar27 != lVar25) {
              lVar34 = (long)puVar32 + (long)*(int *)(lVar34 + 0x1c);
              lVar29 = lVar27;
              goto LAB_01d877a0;
            }
          }
        }
      }
      break;
    }
    lVar27 = *(long *)(lVar27 + 8);
  } while (lVar27 != lVar25);
  goto LAB_01d87284;
  while (lVar29 = *(long *)(lVar29 + 8), lVar29 != lVar25) {
LAB_01d877a0:
    if (lVar29 == lVar34) {
      lVar29 = lVar27;
      goto LAB_01d877bc;
    }
  }
  goto LAB_01d87284;
  while (lVar29 = *(long *)(lVar29 + 8), lVar29 != lVar25) {
LAB_01d877bc:
    if (lVar29 == lVar34) {
      uVar22 = *puVar32;
      goto LAB_01d877dc;
    }
  }
  uVar22 = 0;
LAB_01d877dc:
  do {
    if (lVar27 == lVar34) {
      if (puVar32[1] != 0) {
        FUN_00699eb4(&local_98,uVar22);
        uVar23 = FUN_0069aa28(&local_98);
        puVar8 = PTR_DAT_04bc11a0;
        if ((uVar23 & 1) != 0) {
          local_88 = &local_2268;
          local_80 = &local_98;
          local_78 = PTR_DAT_04bb2020 + 0x10;
          puStack_70 = &DAT_0409f795;
          uVar23 = (*(code *)**(undefined8 **)(PTR_DAT_04bc11a0 + 0x30))
                             (PTR_DAT_04bc11a0 + 0x30,&local_88);
          uVar33 = (*(code *)**(undefined8 **)(puVar8 + 0xe0))(puVar8 + 0xe0,&local_88);
          uVar17 = (*(code *)**(undefined8 **)(puVar8 + 400))(puVar8 + 400,&local_88);
          uVar13 = (*(code *)**(undefined8 **)(puVar8 + 0x240))(puVar8 + 0x240,&local_88);
          uVar14 = (*(code *)**(undefined8 **)(puVar8 + 0x2f0))(puVar8 + 0x2f0,&local_88);
          uVar15 = (*(code *)**(undefined8 **)(puVar8 + 0x3a0))(puVar8 + 0x3a0,&local_88);
          uVar18 = (*(code *)**(undefined8 **)(puVar8 + 0x450))(puVar8 + 0x450,&local_88);
          uVar19 = (*(code *)**(undefined8 **)(puVar8 + 0x500))(puVar8 + 0x500,&local_88);
          if (((((((uVar23 & 1) != 0) || ((uVar33 & 1) != 0)) || ((uVar17 & 1) != 0)) ||
               (((uVar13 & 1) != 0 || ((uVar14 & 1) != 0)))) ||
              (((uVar15 & 1) != 0 || (((uVar18 & 1) != 0 || ((uVar19 & 1) != 0)))))) &&
             (uVar23 = FUN_01d86d10(&local_2268), (uVar23 & 1) != 0)) {
            if (*(long *)(param_1 + 0x18) == lVar2) goto LAB_01d87994;
            lVar25 = (long)*(int *)(param_1 + 0x24);
            piVar30 = (int *)(*(long *)(param_1 + 0x18) - lVar25);
            goto LAB_01d8797c;
          }
        }
      }
      break;
    }
    lVar27 = *(long *)(lVar27 + 8);
  } while (lVar27 != lVar25);
  goto LAB_01d87284;
  while (piVar30 = (int *)(*(long *)((long)piVar30 + lVar25 + 8) - lVar25),
        piVar30 != (int *)(lVar2 - lVar25)) {
LAB_01d8797c:
    if (((*(byte *)(piVar30 + 0x26) >> 2 & 1) == 0) && (local_2268._4_4_ == *piVar30))
    goto LAB_01d87284;
  }
LAB_01d87994:
  puVar21 = (undefined4 *)FUN_038aa600(0xb0,*(undefined8 *)(param_1 + 8),PTR_nothrow_04bb2988);
  if (puVar21 != (undefined4 *)0x0) {
    *(undefined1 *)((long)puVar21 + 0x5b) = 0;
    *(undefined1 *)(puVar21 + 7) = 0;
    puVar21[6] = 0x40;
    *(undefined **)(puVar21 + 2) = PTR_DAT_04bb2bc0 + 0x10;
    *(undefined4 **)(puVar21 + 4) = puVar21 + 7;
    puVar11 = PTR_DAT_04bb4e80;
    puVar10 = PTR_DAT_04bb4e78;
    puVar9 = PTR_DAT_04bb4e70;
    puVar8 = PTR_DAT_04bb4e68;
    FUN_038e95b4(puVar21 + 0x18,PTR_DAT_04bb4e68,PTR_DAT_04bb4e70,PTR_DAT_04bb4e78,PTR_DAT_04bb4e80,
                 PTR_DAT_04bb4e88,PTR_DAT_04bb4e90);
    FUN_038e95b4(puVar21 + 0x1f,puVar8,puVar9,puVar10,puVar11,PTR_DAT_04bb4e88,PTR_DAT_04bb4e90);
    *(undefined1 *)(puVar21 + 0x26) = 0;
    *puVar21 = local_2268._4_4_;
    puVar32 = *(undefined8 **)(puVar21 + 4);
    *(undefined8 *)(puVar21 + 0x28) = 0;
    *(undefined8 *)(puVar21 + 0x2a) = 0;
    if (puVar32 != &local_2260) {
      lVar25 = 0;
      do {
        if (*(char *)((long)&local_2260 + lVar25) == '\0') goto LAB_01d87ab4;
        if (*(char *)((long)&local_2260 + lVar25 + 1) == '\0') {
          lVar25 = lVar25 + 1;
          goto LAB_01d87ab4;
        }
        if (*(char *)((long)&local_2260 + lVar25 + 2) == '\0') {
          lVar25 = lVar25 + 2;
          goto LAB_01d87ab4;
        }
        lVar25 = lVar25 + 3;
      } while (lVar25 != 0x80001);
      lVar25 = 0;
LAB_01d87ab4:
      iVar16 = (int)lVar25;
      if ((int)puVar21[6] <= (int)lVar25) {
        iVar16 = puVar21[6] + -1;
      }
      memcpy(puVar32,&local_2260,(long)iVar16);
      *(undefined1 *)((long)puVar32 + (long)iVar16) = 0;
    }
    local_88 = (undefined8 *)0x0;
    local_80 = (undefined8 **)0x0;
    puVar32 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
    local_98 = puVar32;
    puStack_90 = &local_219f;
    uVar23 = FUN_038e9c10(puVar21 + 0x18,&local_88,&local_98);
    if (((uVar23 & 1) == 0) ||
       (local_98 = puVar32, puStack_90 = &local_215f,
       uVar23 = FUN_038e9c10(puVar21 + 0x1f,&local_88,&local_98), (uVar23 & 1) == 0)) {
      operator_delete(puVar21);
    }
    else {
      bVar6 = *(byte *)(puVar21 + 0x26) & 0xfe | (byte)local_211f;
      *(byte *)(puVar21 + 0x26) = bVar6;
      *(byte *)(puVar21 + 0x26) = bVar6 & 0xfd | local_211f._1_1_ << 1;
      lVar25 = *(long *)(param_1 + 0x10);
      plVar20 = (long *)((long)*(int *)(param_1 + 0x24) + (long)puVar21);
      *(long **)(param_1 + 0x10) = plVar20;
      *plVar20 = lVar25;
      plVar20[1] = lVar2;
      if (lVar25 != 0) {
        *(long **)(lVar25 + 8) = plVar20;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
  }
  goto LAB_01d87284;
}


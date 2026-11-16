
void FUN_02915db0(ulong param_1)

{
  long lVar1;
  undefined4 *puVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  void *__dest;
  undefined8 uVar7;
  long ***__src;
  bool bVar8;
  int iVar9;
  long *****ppppplVar10;
  int iVar11;
  ulong uVar12;
  long ***ppplVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  short *psVar19;
  void *__src_00;
  uint uVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long *****ppppplVar23;
  char *pcVar24;
  long ****pppplVar25;
  ushort uVar26;
  long *****ppppplVar27;
  long ****apppplStack_5300 [4];
  long *local_52e0;
  short *local_52d8;
  short *local_52d0;
  short *local_52c8;
  long *****local_52c0;
  long *****local_52b8;
  int local_52b0;
  undefined1 auStack_52ac [12];
  long ****local_52a0;
  int local_5298;
  undefined8 local_5290;
  long alStack_51f0 [2530];
  undefined8 local_2e0;
  long local_290;
  long ***local_288;
  short *local_258;
  long ***local_250;
  int local_248;
  long **local_244 [3];
  undefined1 local_225;
  undefined4 local_220;
  short *local_218;
  undefined *local_210;
  int local_208;
  undefined local_204 [31];
  undefined1 local_1e5;
  undefined1 local_1c5;
  short *local_1c0;
  undefined *local_1b8;
  int local_1b0;
  undefined local_1ac [31];
  undefined1 local_18d;
  int local_188;
  undefined1 local_ad;
  undefined1 local_a8;
  undefined *local_a0;
  long local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar6 = PTR_DAT_04bc3a78;
  puVar21 = *(undefined **)(PTR_DAT_04bc3a78 + 8);
  if (puVar21 != &DAT_040e5b1b) {
    iVar9 = 4;
    if (*(int *)(PTR_DAT_04bc3a78 + 0x10) < 5) {
      iVar9 = *(int *)(PTR_DAT_04bc3a78 + 0x10) + -1;
    }
    memcpy(puVar21,&DAT_040e5b1b,(long)iVar9);
    puVar21[iVar9] = 0;
  }
  (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
  iVar9 = FUN_006bd550(*(undefined8 *)(puVar6 + 8),0);
  *(int *)(puVar6 + 0x38) = iVar9;
  puVar6 = PTR_DAT_04bc3a88;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    DAT_04c487d0 = 0;
    plVar15 = DAT_055c1b60;
    do {
      if ((int)plVar15[-1] == iVar9) goto LAB_02915e84;
      plVar15 = (long *)plVar15[1];
      DAT_04c487d0 = DAT_04c487d0 + 1;
    } while (plVar15 != &DAT_055c1b58);
  }
  DAT_04c487d0 = -1;
LAB_02915e84:
  puVar22 = *(undefined8 **)(PTR_DAT_04bc3a88 + 8);
  if (puVar22 != &DAT_0407ebb1) {
    iVar9 = 0;
    if (*(int *)(PTR_DAT_04bc3a88 + 0x10) < 1) {
      iVar9 = *(int *)(PTR_DAT_04bc3a88 + 0x10) + -1;
    }
    memset(puVar22,0,(long)iVar9);
    *(undefined1 *)((long)puVar22 + (long)iVar9) = 0;
  }
  (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
  iVar9 = FUN_006bd550(*(undefined8 *)(puVar6 + 8),0);
  plVar15 = DAT_055c1b60;
  *(int *)(puVar6 + 0x38) = iVar9;
  puVar21 = PTR_DAT_04bc3a80;
  if (plVar15 != &DAT_055c1b58) {
    DAT_04c487cc = 0;
    do {
      if ((int)plVar15[-1] == iVar9) goto LAB_02915f28;
      plVar15 = (long *)plVar15[1];
      DAT_04c487cc = DAT_04c487cc + 1;
    } while (plVar15 != &DAT_055c1b58);
  }
  DAT_04c487cc = -1;
LAB_02915f28:
  pcVar24 = *(char **)(PTR_DAT_04bc3a80 + 8);
  if ((param_1 & 1) == 0) {
    if (pcVar24 != "Boot") {
      iVar9 = 4;
      if (*(int *)(PTR_DAT_04bc3a80 + 0x10) < 5) {
        iVar9 = *(int *)(PTR_DAT_04bc3a80 + 0x10) + -1;
      }
      memcpy(pcVar24,&DAT_040e5b1b,(long)iVar9);
      pcVar24[iVar9] = '\0';
    }
    (**(code **)(*(long *)puVar21 + 0x18))(puVar21);
    iVar9 = FUN_006bd550(*(undefined8 *)(puVar21 + 8),0);
    plVar15 = DAT_055c1b60;
    *(int *)(puVar21 + 0x38) = iVar9;
    if (plVar15 != &DAT_055c1b58) {
      DAT_04c487d4 = 0;
      do {
        if ((int)plVar15[-1] == iVar9) goto LAB_02916184;
        plVar15 = (long *)plVar15[1];
        DAT_04c487d4 = DAT_04c487d4 + 1;
      } while (plVar15 != &DAT_055c1b58);
    }
    DAT_04c487d4 = -1;
LAB_02916184:
    pcVar24 = *(char **)(puVar6 + 8);
    if (pcVar24 != "GrowUp") {
      iVar9 = 6;
      if (*(int *)(puVar6 + 0x10) < 7) {
        iVar9 = *(int *)(puVar6 + 0x10) + -1;
      }
      memcpy(pcVar24,"GrowUp",(long)iVar9);
      pcVar24[iVar9] = '\0';
    }
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    iVar9 = FUN_006bd550(*(undefined8 *)(puVar6 + 8),0);
    plVar15 = DAT_055c1b60;
    *(int *)(puVar6 + 0x38) = iVar9;
    if (plVar15 != &DAT_055c1b58) {
      DAT_04c487cc = 0;
      plVar16 = plVar15;
      do {
        if ((int)plVar16[-1] == iVar9) goto LAB_02916234;
        plVar16 = (long *)plVar16[1];
        DAT_04c487cc = DAT_04c487cc + 1;
      } while (plVar16 != &DAT_055c1b58);
    }
    DAT_04c487cc = -1;
LAB_02916234:
    if (plVar15 == &DAT_055c1b58) goto LAB_02916240;
  }
  else {
    if (pcVar24 != "Select") {
      iVar9 = 6;
      if (*(int *)(PTR_DAT_04bc3a80 + 0x10) < 7) {
        iVar9 = *(int *)(PTR_DAT_04bc3a80 + 0x10) + -1;
      }
      memcpy(pcVar24,"Select",(long)iVar9);
      pcVar24[iVar9] = '\0';
    }
    (**(code **)(*(long *)puVar21 + 0x18))(puVar21);
    iVar9 = FUN_006bd550(*(undefined8 *)(puVar21 + 8),0);
    plVar15 = DAT_055c1b60;
    *(int *)(puVar21 + 0x38) = iVar9;
    puVar6 = PTR_DAT_04bb3998;
    if (plVar15 != &DAT_055c1b58) {
      DAT_04c487d4 = 0;
      do {
        if ((int)plVar15[-1] == iVar9) goto LAB_02915fd8;
        plVar15 = (long *)plVar15[1];
        DAT_04c487d4 = DAT_04c487d4 + 1;
      } while (plVar15 != &DAT_055c1b58);
    }
    DAT_04c487d4 = -1;
LAB_02915fd8:
    DAT_055c110c = 0;
    if (((*PTR_DAT_04bb3998 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar9 != 0)) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
    }
    puVar21 = PTR_DAT_04bb3990;
    if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
      uVar12 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar12 * 4) == 0) goto LAB_0291602c;
        uVar12 = uVar12 + 1;
      } while (*(uint *)PTR_DAT_04bb3990 != uVar12);
    }
    uVar12 = 0;
LAB_0291602c:
    DAT_055c1120 = (undefined4)uVar12;
    DAT_055c1124 = 0;
    DAT_055c1128 = 0;
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar9 != 0)) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
    }
    if (0 < (int)*(uint *)puVar21) {
      uVar12 = 0;
      do {
        if (*(int *)(*(long *)(puVar21 + 8) + uVar12 * 4) == 0) goto LAB_02916078;
        uVar12 = uVar12 + 1;
      } while (*(uint *)puVar21 != uVar12);
    }
    uVar12 = 0;
LAB_02916078:
    DAT_055c113c = (undefined4)uVar12;
    DAT_055c1140 = 0;
    DAT_055c1144 = 0;
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar9 != 0)) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
    }
    if (0 < (int)*(uint *)puVar21) {
      uVar12 = 0;
      do {
        if (*(int *)(*(long *)(puVar21 + 8) + uVar12 * 4) == 0) goto LAB_029160c8;
        uVar12 = uVar12 + 1;
      } while (*(uint *)puVar21 != uVar12);
    }
    uVar12 = 0;
LAB_029160c8:
    DAT_055c1158 = (undefined4)uVar12;
    DAT_055c115c = 0;
    plVar15 = DAT_055c1b60;
    if (DAT_055c1b60 == &DAT_055c1b58) goto LAB_02916240;
  }
  do {
    plVar16 = (long *)plVar15[1];
    plVar14 = plVar16;
    if (*plVar15 != 0) {
      *(long **)(*plVar15 + 8) = plVar16;
      plVar14 = (long *)plVar15[1];
    }
    if (plVar14 != (long *)0x0) {
      *plVar14 = *plVar15;
    }
    *plVar15 = 0;
    plVar15[1] = 0;
    DAT_055c1b68 = DAT_055c1b68 + -1;
    plVar14 = plVar15 + -8;
    *plVar14 = (long)DAT_055c1b70;
    plVar15 = plVar16;
    DAT_055c1b70 = plVar14;
  } while (plVar16 != &DAT_055c1b58);
LAB_02916240:
  uVar12 = FUN_03eba3a0(&DAT_055c9150);
  if ((uVar12 & 1) != 0) {
    local_52b0 = 0;
    local_52c0 = (long *****)&local_52c0;
    ppppplVar27 = (long *****)&local_52b8;
    auStack_52ac._4_8_ = &local_5290;
    lVar17 = 0xff;
    plVar15 = alStack_51f0;
    do {
      plVar15[-10] = (long)plVar15;
      plVar15[-0x14] = (long)(plVar15 + -10);
      lVar17 = lVar17 + -3;
      *plVar15 = (long)(plVar15 + 10);
      plVar15 = plVar15 + 0x1e;
    } while (lVar17 != 0);
    local_2e0 = 0;
    local_5298 = 0x100;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    plVar15 = *(long **)(*(long *)PTR_DAT_04bb2650 + 0x100);
    local_90 = (long *)0x0;
    local_1b0 = 0x100;
    local_ad = 0;
    local_a0 = PTR_DAT_04bb2818 + 0x10;
    local_98 = 0;
    local_a8 = 0;
    local_1ac[0] = 0;
    local_1b8 = local_1ac;
    local_1c0 = (short *)(PTR_DAT_04bb21f8 + 0x10);
    local_52b8 = local_52c0;
    local_52a0 = (long ****)auStack_52ac._4_8_;
    if (((char)plVar15[0xf] != '\0') &&
       (local_98 = (**(code **)(*plVar15 + 0xd0))(plVar15,&local_a0,&DAT_055c9118), local_98 != 0))
    {
      local_90 = plVar15;
    }
    local_1c5 = 0;
    local_208 = 0x40;
    local_204[0] = 0;
    local_210 = local_204;
    local_218 = (short *)(PTR_DAT_04bb2bc0 + 0x10);
    if ((char)plVar15[0xf] != '\0') {
      local_52e0 = &local_98;
      local_52c8 = (short *)(PTR_DAT_04bb2020 + 0x10);
      local_52d0 = (short *)(PTR_DAT_04bb2a08 + 0x10);
      local_52d8 = (short *)(PTR_DAT_04bb2028 + 0x10);
      do {
        uVar12 = (**(code **)(*plVar15 + 0x48))(plVar15,&local_a0);
        if ((uVar12 & 1) == 0) {
LAB_029168a4:
          if ((((char)plVar15[0xf] != '\0') &&
              (uVar12 = (**(code **)(*plVar15 + 0x48))(plVar15,&local_a0), (uVar12 & 1) != 0)) &&
             (uVar12 = (**(code **)(*plVar15 + 0xd8))(plVar15,&local_a0), (uVar12 & 1) != 0)) {
            *local_52e0 = 0;
            local_52e0[1] = 0;
          }
          break;
        }
        local_258 = (short *)((ulong)local_258 & 0xffffffff00000000);
        (**(code **)(*plVar15 + 0xe0))(plVar15,&local_258,&local_a0,&local_1c0,1);
        puVar6 = local_210;
        if ((int)local_258 == 0) goto LAB_029168a4;
        (**(code **)(local_1c0 + 0xc))(&local_1c0);
        puVar21 = local_1b8;
        if (puVar6 != local_1b8) {
          (**(code **)(local_1c0 + 0xc))(&local_1c0);
          lVar17 = 0;
          do {
            if (local_1b8[lVar17] == '\0') goto LAB_029164ec;
            if (local_1b8[lVar17 + 1] == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_029164ec;
            }
            if (local_1b8[lVar17 + 2] == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_029164ec;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          lVar17 = 0;
LAB_029164ec:
          iVar9 = (int)lVar17;
          if (local_208 <= (int)lVar17) {
            iVar9 = local_208 + -1;
          }
          memcpy(puVar6,puVar21,(long)iVar9);
          puVar6[iVar9] = 0;
        }
        local_258 = local_52c8;
        local_250 = (long ***)&DAT_04068b53;
        (**(code **)(local_218 + 0xc))(&local_218);
        uVar12 = 0;
        do {
          if (local_210[uVar12] == '\0') goto LAB_02916584;
          if (local_210[uVar12 + 1] == '\0') {
            uVar12 = uVar12 + 1;
            goto LAB_02916584;
          }
          if (local_210[uVar12 + 2] == '\0') {
            uVar12 = uVar12 + 2;
            goto LAB_02916584;
          }
          uVar12 = uVar12 + 3;
        } while (uVar12 != 0x80001);
        uVar12 = 0;
LAB_02916584:
        (**(code **)(local_258 + 0xc))(&local_258);
        puVar6 = local_210;
        lVar17 = 0;
        do {
          iVar9 = (int)uVar12;
          if (*(char *)((long)local_250 + lVar17) == '\0') {
LAB_029165e4:
            uVar20 = (uint)lVar17;
            iVar11 = iVar9 - uVar20;
            if ((int)uVar20 <= iVar9) goto LAB_029165ec;
            goto LAB_02916670;
          }
          if (*(char *)((long)local_250 + lVar17 + 1) == '\0') {
            lVar17 = lVar17 + 1;
            goto LAB_029165e4;
          }
          if (*(char *)((long)local_250 + lVar17 + 2) == '\0') {
            uVar20 = (int)lVar17 + 2;
            iVar11 = iVar9 - uVar20;
            if (iVar9 < (int)uVar20) goto LAB_02916670;
            goto LAB_029165ec;
          }
          lVar17 = lVar17 + 3;
        } while (lVar17 != 0x80001);
        uVar20 = 0;
        iVar11 = iVar9;
        if (-1 < iVar9) {
LAB_029165ec:
          (**(code **)(local_258 + 0xc))(&local_258);
          if ((0 < (int)uVar20) && ((long ***)(puVar6 + iVar11) != local_250)) {
            if (0x7ffff < (int)uVar20) {
              uVar20 = 0x80000;
            }
            lVar17 = -(ulong)uVar20;
            ppplVar13 = local_250;
            do {
              cVar3 = puVar6[lVar17 + (uVar12 & 0xffffffff)];
              if (cVar3 != *(char *)ppplVar13) goto LAB_02916670;
              bVar8 = lVar17 != -1;
              lVar17 = lVar17 + 1;
            } while ((cVar3 != '\0') && (ppplVar13 = (long ***)((long)ppplVar13 + 1), bVar8));
          }
          local_210[iVar11] = 0;
        }
LAB_02916670:
        (**(code **)(local_218 + 0xc))(&local_218);
        FUN_006d8678(&local_290,&DAT_0409e973,local_210);
        local_225 = 0;
        local_248 = 0x20;
        local_258 = local_52d0;
        local_250 = local_244;
        (**(code **)(local_290 + 0x18))(&local_290);
        ppplVar13 = local_288;
        if (local_244 != local_288) {
          (**(code **)(local_290 + 0x18))(&local_290);
          lVar17 = 0;
          do {
            if (*(char *)((long)local_288 + lVar17) == '\0') goto LAB_0291672c;
            if (*(char *)((long)local_288 + lVar17 + 1) == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_0291672c;
            }
            if (*(char *)((long)local_288 + lVar17 + 2) == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_0291672c;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          lVar17 = 0;
LAB_0291672c:
          iVar9 = (int)lVar17;
          if (local_248 <= (int)lVar17) {
            iVar9 = local_248 + -1;
          }
          memcpy(local_244,ppplVar13,(long)iVar9);
          *(undefined1 *)((long)local_244 + (long)iVar9) = 0;
        }
        local_258 = local_52d8;
        (**(code **)(local_290 + 0x18))(&local_290);
        local_220 = FUN_006bd550(local_288,0);
        uVar7 = auStack_52ac._4_8_;
        if (local_52b0 < local_5298) {
          if ((long ****)auStack_52ac._4_8_ != (long ****)0x0) {
            auStack_52ac._4_8_ = *(undefined8 *)auStack_52ac._4_8_;
          }
          *(undefined1 *)(uVar7 + 0x33) = 0;
          ppplVar13 = (long ***)(uVar7 + 0x14);
          *(undefined4 *)(uVar7 + 0x10) = 0x20;
          *(undefined **)uVar7 = PTR_DAT_04bb2a08 + 0x10;
          *(long ****)(uVar7 + 8) = ppplVar13;
          (**(code **)(local_258 + 0xc))(&local_258);
          __src = local_250;
          if (ppplVar13 != local_250) {
            (**(code **)(local_258 + 0xc))(&local_258);
            lVar17 = 0;
            do {
              if (*(char *)((long)local_250 + lVar17) == '\0') goto LAB_0291683c;
              if (*(char *)((long)local_250 + lVar17 + 1) == '\0') {
                lVar17 = lVar17 + 1;
                goto LAB_0291683c;
              }
              if (*(char *)((long)local_250 + lVar17 + 2) == '\0') {
                lVar17 = lVar17 + 2;
                goto LAB_0291683c;
              }
              lVar17 = lVar17 + 3;
            } while (lVar17 != 0x80001);
            lVar17 = 0;
LAB_0291683c:
            iVar9 = (int)lVar17;
            if (*(int *)(uVar7 + 0x10) <= (int)lVar17) {
              iVar9 = *(int *)(uVar7 + 0x10) + -1;
            }
            memcpy(ppplVar13,__src,(long)iVar9);
            *(undefined1 *)((long)ppplVar13 + (long)iVar9) = 0;
          }
          *(undefined **)uVar7 = PTR_DAT_04bb2028 + 0x10;
          *(undefined4 *)(uVar7 + 0x38) = local_220;
          ppppplVar23 = (long *****)(uVar7 + 0x40);
          *ppppplVar23 = (long ****)0x0;
          *(long *******)(uVar7 + 0x48) = &local_52c0;
          *ppppplVar23 = (long ****)local_52c0;
          if (local_52c0 != (long *****)0x0) {
            local_52c0[1] = (long ****)ppppplVar23;
          }
          local_52b0 = local_52b0 + 1;
          local_52c0 = ppppplVar23;
        }
      } while ((char)plVar15[0xf] != '\0');
    }
    plVar15 = local_90;
    local_a0 = PTR_DAT_04bb2818 + 0x10;
    if (((local_90 != (long *)0x0) && ((char)local_90[0xf] != '\0')) &&
       (uVar12 = (**(code **)(*local_90 + 0x48))(local_90,&local_a0), (uVar12 & 1) != 0)) {
      (**(code **)(*plVar15 + 0xd8))(plVar15,&local_a0);
    }
    lVar17 = *(long *)PTR_DAT_04bb2720;
    if ((lVar17 != 0) && (*(long *)(lVar17 + 0x330) != 0)) {
      puVar22 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      FUN_006bd550(*puVar22,0);
    }
    lVar17 = FUN_03eb9ee0(&DAT_055c9150,0x40,0,1);
    if (((lVar17 != 0) &&
        (psVar19 = *(short **)(lVar17 + 8), local_258 = psVar19, psVar19 != (short *)0x0)) &&
       (uVar12 = FUN_03eaa5e0(psVar19), (uVar12 & 1) != 0)) {
      uVar18 = *(uint *)(psVar19 + 6);
      uVar20 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*psVar19 != 0x5942) {
        uVar20 = uVar18;
      }
      if ((uVar20 != 0) &&
         (local_250 = (long ***)((long)psVar19 + (ulong)uVar20), ((ulong)*local_250 & 0xfe) == 0xc0)
         ) {
        uVar20 = *(uint *)local_250 >> 8;
        if (*psVar19 == 0x5942) {
          uVar20 = uVar20 & 0xff00 | *(uint *)local_250 >> 0x18 | (uVar20 & 0xff) << 0x10;
        }
        if (uVar20 != 0) {
          local_52c8 = (short *)CONCAT44(local_52c8._4_4_,uVar20);
          uVar18 = 0;
          local_52d0 = (short *)(PTR_DAT_04bb2a08 + 0x10);
          local_52d8 = (short *)(PTR_DAT_04bb2028 + 0x10);
          do {
            uVar12 = FUN_03eaa1d8(&local_258,&local_a0,uVar18);
            if ((uVar12 & 1) != 0) {
              local_1e5 = 0;
              local_208 = 0x20;
              local_218 = local_52d0;
              local_210 = local_204;
              if (local_204 != local_a0) {
                lVar17 = 0;
                do {
                  if (local_a0[lVar17] == '\0') {
LAB_02916afc:
                    iVar9 = (int)lVar17;
joined_r0x02916b00:
                    if (0x1f < iVar9) {
                      iVar9 = 0x1f;
                    }
                    goto LAB_02916b08;
                  }
                  if (local_a0[lVar17 + 1] == '\0') {
                    lVar17 = lVar17 + 1;
                    goto LAB_02916afc;
                  }
                  if (local_a0[lVar17 + 2] == '\0') {
                    iVar9 = (int)lVar17 + 2;
                    goto joined_r0x02916b00;
                  }
                  lVar17 = lVar17 + 3;
                } while (lVar17 != 0x80001);
                iVar9 = 0;
LAB_02916b08:
                memcpy(local_204,local_a0,(long)iVar9);
                local_204[iVar9] = 0;
              }
              puVar6 = local_210;
              local_18d = 0;
              local_218 = local_52d8;
              local_1b0 = 0x20;
              local_1c0 = (short *)(PTR_DAT_04bb2a08 + 0x10);
              local_1b8 = local_1ac;
              local_210[(long)local_208 + -1] = 0;
              if (local_1ac != local_210) {
                (**(code **)(local_52d8 + 0xc))(&local_218);
                lVar17 = 0;
                do {
                  if (local_210[lVar17] == '\0') goto LAB_02916bcc;
                  if (local_210[lVar17 + 1] == '\0') {
                    lVar17 = lVar17 + 1;
                    goto LAB_02916bcc;
                  }
                  if (local_210[lVar17 + 2] == '\0') {
                    lVar17 = lVar17 + 2;
                    goto LAB_02916bcc;
                  }
                  lVar17 = lVar17 + 3;
                } while (lVar17 != 0x80001);
                lVar17 = 0;
LAB_02916bcc:
                iVar9 = (int)lVar17;
                if (local_1b0 <= (int)lVar17) {
                  iVar9 = local_1b0 + -1;
                }
                memcpy(local_1ac,puVar6,(long)iVar9);
                local_1ac[iVar9] = 0;
              }
              local_1c0 = (short *)(PTR_DAT_04bb2028 + 0x10);
              (**(code **)(local_218 + 0xc))(&local_218);
              local_188 = FUN_006bd550(local_210,0);
              ppppplVar23 = ppppplVar27;
              do {
                pppplVar25 = *ppppplVar23;
                if ((long *****)(pppplVar25 + -8) == apppplStack_5300) goto LAB_02916a60;
                ppppplVar23 = (long *****)(pppplVar25 + 1);
              } while (*(int *)(pppplVar25 + -1) != local_188);
              FUN_029158a0(&DAT_055c1b58,&local_1c0);
              if (*pppplVar25 != (long ***)0x0) {
                (*pppplVar25)[1] = (long **)*ppppplVar23;
              }
              if (*ppppplVar23 != (long ****)0x0) {
                **ppppplVar23 = *pppplVar25;
              }
              *pppplVar25 = (long ***)0x0;
              pppplVar25[1] = (long ***)0x0;
              local_52b0 = local_52b0 + -1;
              pppplVar25[-8] = (long ***)auStack_52ac._4_8_;
              auStack_52ac._4_8_ = pppplVar25 + -8;
LAB_02916a60:
              uVar20 = (uint)local_52c8;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar20);
        }
      }
    }
    if ((long ******)local_52b8 != &local_52c0) {
      ppppplVar10 = local_52b8 + -8;
      ppppplVar23 = local_52b8;
      do {
        FUN_029158a0(&DAT_055c1b58,ppppplVar10);
        ppppplVar23 = (long *****)ppppplVar23[1];
        ppppplVar10 = ppppplVar23 + -8;
      } while (ppppplVar10 != apppplStack_5300);
    }
    do {
      ppppplVar23 = (long *****)*ppppplVar27;
      ppppplVar27 = ppppplVar23 + 1;
    } while ((long ******)ppppplVar23 != &local_52c0);
  }
  uVar12 = 0;
  do {
    uVar4 = uVar12 << 3;
    uVar5 = uVar12 >> 0x1f;
    uVar20 = (int)uVar12 + 1;
    uVar12 = (ulong)uVar20;
    *(undefined8 *)((long)&DAT_055c11c8 + (-uVar5 & 0xfffffff800000000 | uVar4)) = 0;
  } while (uVar20 != 0x100);
  if (DAT_055c1b60 != &DAT_055c1b58) {
    pppplVar25 = (long ****)(PTR_DAT_04bb2a08 + 0x10);
    ppppplVar27 = (long *****)(PTR_DAT_04bb2028 + 0x10);
    plVar15 = DAT_055c1b60;
LAB_02916d70:
    plVar16 = plVar15 + -8;
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar26 = 0;
      plVar14 = DAT_055c1b60;
      do {
        if ((int)plVar14[-1] == (int)plVar15[-1]) {
          if (uVar26 != 0xffff) {
            local_5290._3_1_ = 0;
            local_52b0 = 0x20;
            local_52c0 = (long *****)pppplVar25;
            local_52b8 = (long *****)auStack_52ac;
            (**(code **)(*plVar16 + 0x18))(plVar16);
            ppppplVar23 = (long *****)plVar15[-7];
            if ((long *****)auStack_52ac == ppppplVar23) goto LAB_02916e68;
            (**(code **)(*plVar16 + 0x18))(plVar16);
            lVar17 = 0;
            goto LAB_02916e04;
          }
          break;
        }
        plVar14 = (long *)plVar14[1];
        uVar26 = uVar26 + 1;
      } while (plVar14 != &DAT_055c1b58);
    }
    goto LAB_02916d60;
  }
LAB_02916ebc:
  __dest = DAT_055c10d8;
  puVar6 = PTR_PTR_04bb2238;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src_00 = *(void **)(puVar6 + 8);
  if (__dest != __src_00) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    lVar17 = 0;
    do {
      if (*(char *)(*(long *)(puVar6 + 8) + lVar17) == '\0') goto LAB_02916f3c;
      lVar1 = *(long *)(puVar6 + 8) + lVar17;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_02916f3c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_02916f3c;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_02916f3c:
    iVar9 = (int)lVar17;
    if (DAT_055c10e0 <= (int)lVar17) {
      iVar9 = DAT_055c10e0 + -1;
    }
    memcpy(__dest,__src_00,(long)iVar9);
    *(undefined1 *)((long)__dest + (long)iVar9) = 0;
  }
  DAT_055c1ac8 = 0;
  DAT_055c1ad0 = 0;
  DAT_055c1ab8 = 0;
  DAT_055c1ac0 = 0;
  DAT_055c1aa8 = 0;
  DAT_055c1ab0 = 0;
  DAT_055c1a98 = 0;
  DAT_055c1aa0 = 0;
  DAT_055c1ad8 = 0;
  DAT_055c1ae0 = 0;
  DAT_055c1ae8 = 0;
  DAT_055c1af0 = 0;
  DAT_055c1af8 = 0;
  DAT_055c1b00 = 0;
  DAT_055c1b08 = 0;
  DAT_055c1b10 = 0;
  DAT_055c1b18 = 0;
  DAT_055c1b20 = 0;
  DAT_055c1b28 = 0;
  DAT_055c1b30 = 0;
  DAT_055c1b38 = 0;
  DAT_055c1b40 = 0;
  DAT_055c1b48 = 0;
  DAT_055c1b50 = 0;
  return;
  while( true ) {
    lVar1 = plVar15[-7] + lVar17;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar17 = lVar17 + 1;
      goto LAB_02916e40;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar17 = lVar17 + 2;
      goto LAB_02916e40;
    }
    lVar17 = lVar17 + 3;
    if (lVar17 == 0x80001) break;
LAB_02916e04:
    if (*(char *)(plVar15[-7] + lVar17) == '\0') goto LAB_02916e40;
  }
  lVar17 = 0;
LAB_02916e40:
  iVar9 = (int)lVar17;
  if (local_52b0 <= (int)lVar17) {
    iVar9 = local_52b0 + -1;
  }
  memcpy(auStack_52ac,ppppplVar23,(long)iVar9);
  *(undefined1 *)((long)auStack_52ac + (long)iVar9) = 0;
LAB_02916e68:
  local_52c0 = ppppplVar27;
  lVar17 = FUN_0290c1e0(&local_52c0);
  if (lVar17 != 0) {
    psVar19 = *(short **)(lVar17 + 8);
    local_1b8 = (undefined *)0x0;
    local_1c0 = psVar19;
    if (psVar19 != (short *)0x0) {
      uVar12 = FUN_03eaa5e0(psVar19);
      if ((uVar12 & 1) == 0) {
        local_1b8 = (undefined *)0x0;
        local_1c0 = (short *)0x0;
      }
      else {
        uVar18 = *(uint *)(psVar19 + 6);
        uVar20 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
        uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
        if (*psVar19 != 0x5942) {
          uVar20 = uVar18;
        }
        if (uVar20 != 0) {
          local_1b8 = (undefined *)((long)psVar19 + (ulong)uVar20);
        }
      }
    }
    puVar2 = &DAT_055c11c8 + ((long)(short)uVar26 & 0xffffffffU) * 2;
    if ((uVar26 & 0xff00) != 0) {
      puVar2 = &DAT_055c11c8;
    }
    FUN_0290d9d0(puVar2,&local_1c0);
  }
LAB_02916d60:
  plVar15 = (long *)plVar15[1];
  if (plVar15 == &DAT_055c1b58) goto LAB_02916ebc;
  goto LAB_02916d70;
}



undefined8
FUN_02956940(long param_1,uint *param_2,long param_3,undefined8 param_4,undefined8 param_5,
            uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long lVar12;
  undefined2 uVar13;
  long lVar14;
  uint *puVar15;
  undefined2 *puVar16;
  short *psVar17;
  ushort *puVar18;
  uint *puVar19;
  uint uVar20;
  long *plVar21;
  ushort uVar22;
  uint uVar23;
  ushort local_68 [4];
  
  puVar4 = PTR_DAT_04bb39d8;
  if (((param_6 & 1) == 0) && (uVar7 = FUN_029524c0(), (uVar7 & 1) != 0)) {
    puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar4);
    uVar20 = puVar8[3];
    uVar6 = *puVar8 ^ *puVar8 << 0xb;
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar6 = uVar6 >> 8 ^ uVar20 >> 0x13 ^ uVar6 ^ uVar20;
    puVar8[2] = uVar20;
    puVar8[3] = uVar6;
    puVar3 = PTR_DAT_04bb27c0;
    lVar14 = *(long *)PTR_DAT_04bb27c0;
    if (lVar14 != 0) {
      uVar20 = *(uint *)PTR_DAT_04bc3ab8;
      if ((((uVar20 == 0) ||
           (plVar21 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                ((ulong)(uVar20 >> 0x11) & 0x7ff8)), plVar21 == (long *)0x0)) ||
          ((*(uint *)(plVar21 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar21 + 0x46) != uVar20)) {
        plVar21 = (long *)0x0;
      }
      if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar14 = *(long *)puVar3;
        iVar5 = (**(code **)(*plVar9 + 0x60))();
        if (iVar5 < 0x11) {
          uVar20 = 1;
        }
        else {
          if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_02956a68;
          uVar20 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_02956a68:
        uVar20 = 0;
      }
      if (plVar21 != (long *)0x0) {
        lVar14 = plVar21[0x2a];
        if (((*PTR_DAT_04bc3a98 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc3a98), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bc3a90 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc3a98);
        }
        uVar7 = (**(code **)(*plVar21 + 0x20))(plVar21,PTR_DAT_04bc3a90);
        uVar23 = 0;
        if ((int)lVar14 == 1) {
          uVar23 = uVar20;
        }
        if (((uVar7 & 1) != 0) && (uVar23 != 0)) {
          lVar14 = FUN_02948fec(plVar21);
          pbVar10 = (byte *)(**(code **)(*(long *)(lVar14 + 0x240) + 0xf0))(lVar14 + 0x240);
          if ((uint)((ulong)uVar6 * 100 >> 0x20) <= (uint)*pbVar10) {
            uVar11 = 1;
            uVar6 = 0x3331;
            goto LAB_02956c10;
          }
        }
      }
    }
  }
  puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar4);
  uVar23 = 0;
  uVar2 = puVar8[3];
  uVar20 = 0;
  uVar6 = *puVar8 ^ *puVar8 << 0xb;
  *puVar8 = puVar8[1];
  puVar8[1] = puVar8[2];
  uVar1 = uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2;
  uVar6 = 0xb18;
  puVar8[2] = uVar2;
  puVar8[3] = uVar1;
  do {
    uVar20 = uVar20 & 0xffff;
    if ((int)*(uint *)(param_3 + 0x1c0) < 1) {
      if (((*(long *)(param_3 + 0xb0) == 0) ||
          (puVar8 = *(uint **)(*(long *)(param_3 + 0xb0) + 8), puVar8 == (uint *)0x0)) ||
         (*puVar8 <= uVar20)) {
LAB_02956c08:
        uVar11 = 0;
      }
      else {
        if (((*(uint *)(param_3 + 200) <= uVar20) ||
            (*(char *)(*(long *)(param_3 + 0xd0) + (ulong)uVar20) != '\0')) &&
           ((puVar8[1] != 0 && ((ushort)puVar8[2] != 0)))) {
          iVar5 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            iVar5 = 0x1c;
          }
          puVar8 = (uint *)((ulong)(puVar8[1] * uVar20 + (uint)(ushort)puVar8[2] * 8 + iVar5) +
                           (long)puVar8);
          if (puVar8 != (uint *)0x0) goto LAB_02956b40;
        }
LAB_02956bf8:
        uVar11 = 0;
        uVar6 = 0xfffe;
      }
      goto LAB_02956c10;
    }
    if (*(uint *)(param_3 + 0x1c0) <= uVar20) goto LAB_02956c08;
    uVar2 = uVar20;
    if (*(uint *)(param_3 + 0x1b0) <= uVar20) {
      uVar2 = 0;
    }
    puVar8 = *(uint **)(*(long *)(param_3 + 0x1b8) + (ulong)uVar2 * 8);
    if (puVar8 == (uint *)0x0) goto LAB_02956bf8;
LAB_02956b40:
    iVar5 = FUN_02953e40(puVar8,param_4,param_5);
    uVar23 = iVar5 + uVar23;
    uVar20 = uVar20 + 1;
  } while ((uVar23 & 0xffff) <= (uint)((ulong)uVar1 * 100 >> 0x20));
  puVar15 = (uint *)(ulong)*puVar8;
  if (*puVar8 == 0) {
LAB_02956cbc:
    uVar13 = 0xfffe;
  }
  else {
    if ((DAT_055d6d60 & 1) == 0) {
      DAT_055d6d60 = 1;
      DAT_055d6e04 = 0xffffffff;
      DAT_055d6d64 = -1;
      DAT_055d6d6c = 0xffffffffffffffff;
      DAT_055d6d64._4_4_ = 0xffffffff;
      DAT_055d6d74 = 0xffffffffffffffff;
      DAT_055d6d7c = 0xffffffffffffffff;
      DAT_055d6d84 = 0xffffffffffffffff;
      DAT_055d6d8c = 0xffffffffffffffff;
      DAT_055d6d94 = 0xffffffffffffffff;
      DAT_055d6d9c = 0xffffffffffffffff;
      DAT_055d6da4 = 0xffffffffffffffff;
      DAT_055d6dac = 0xffffffffffffffff;
      DAT_055d6db4 = 0xffffffffffffffff;
      DAT_055d6dbc = 0xffffffffffffffff;
      DAT_055d6dc4 = 0xffffffffffffffff;
      DAT_055d6dcc = 0xffffffffffffffff;
      DAT_055d6dd4 = 0xffffffffffffffff;
      DAT_055d6ddc = 0xffffffffffffffff;
      DAT_055d6de4 = 0xffffffffffffffff;
      DAT_055d6dec = 0xffffffffffffffff;
      DAT_055d6df4 = 0xffffffffffffffff;
      DAT_055d6dfc = 0xffffffffffffffff;
LAB_02956cb4:
      uVar6 = DAT_055d6d64._4_4_;
      if (puVar8 != puVar15) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_02956cbc;
          lVar14 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar15)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar8 + (lVar14 - (long)puVar15);
          if (lVar14 == 0) goto LAB_02956cbc;
          uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar15));
          DAT_055d6d64 = CONCAT44(0xfffffffe,(undefined4)DAT_055d6d64);
          if (uVar7 == 0) goto LAB_02956cbc;
          puVar19 = (uint *)(lVar14 + 4);
          while (puVar19[-1] != 0x20cb67bc) {
            puVar19 = puVar19 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_02956cbc;
          }
          uVar6 = *puVar19;
          uVar20 = 0;
          if (uVar6 != 0xffffffff) {
            uVar20 = uVar6;
          }
          DAT_055d6d64 = CONCAT44(uVar20,(undefined4)DAT_055d6d64);
        } while ((int)uVar20 < 0);
        puVar16 = (undefined2 *)((long)puVar8 + (ulong)uVar20);
        if (puVar16 != (undefined2 *)0x0) goto LAB_02956c60;
      }
      goto LAB_02956cbc;
    }
    if (DAT_055d6d64 < 0) goto LAB_02956cb4;
    puVar16 = (undefined2 *)((long)puVar8 + (ulong)DAT_055d6d64._4_4_);
    if (puVar16 == (undefined2 *)0x0) goto LAB_02956cbc;
LAB_02956c60:
    uVar13 = *puVar16;
  }
  uVar7 = FUN_02953210(param_1,uVar13);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  puVar15 = (uint *)(ulong)*puVar8;
  if (*puVar8 == 0) {
LAB_02956dd0:
    uVar22 = 0xfffe;
  }
  else {
    if ((DAT_055d6d60 & 1) == 0) {
      DAT_055d6d60 = 1;
      DAT_055d6e04 = 0xffffffff;
      DAT_055d6d64 = -1;
      DAT_055d6d6c = 0xffffffffffffffff;
      DAT_055d6d64._4_4_ = 0xffffffff;
      DAT_055d6d74 = 0xffffffffffffffff;
      DAT_055d6d7c = 0xffffffffffffffff;
      DAT_055d6d84 = 0xffffffffffffffff;
      DAT_055d6d8c = 0xffffffffffffffff;
      DAT_055d6d94 = 0xffffffffffffffff;
      DAT_055d6d9c = 0xffffffffffffffff;
      DAT_055d6da4 = 0xffffffffffffffff;
      DAT_055d6dac = 0xffffffffffffffff;
      DAT_055d6db4 = 0xffffffffffffffff;
      DAT_055d6dbc = 0xffffffffffffffff;
      DAT_055d6dc4 = 0xffffffffffffffff;
      DAT_055d6dcc = 0xffffffffffffffff;
      DAT_055d6dd4 = 0xffffffffffffffff;
      DAT_055d6ddc = 0xffffffffffffffff;
      DAT_055d6de4 = 0xffffffffffffffff;
      DAT_055d6dec = 0xffffffffffffffff;
      DAT_055d6df4 = 0xffffffffffffffff;
      DAT_055d6dfc = 0xffffffffffffffff;
LAB_02956dc8:
      uVar6 = DAT_055d6d64._4_4_;
      if (puVar8 != puVar15) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_02956dd0;
          lVar14 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar15)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar8 + (lVar14 - (long)puVar15);
          if (lVar14 == 0) goto LAB_02956dd0;
          uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar15));
          DAT_055d6d64 = CONCAT44(0xfffffffe,(undefined4)DAT_055d6d64);
          if (uVar7 == 0) goto LAB_02956dd0;
          puVar19 = (uint *)(lVar14 + 4);
          while (puVar19[-1] != 0x20cb67bc) {
            puVar19 = puVar19 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_02956dd0;
          }
          uVar6 = *puVar19;
          uVar20 = 0;
          if (uVar6 != 0xffffffff) {
            uVar20 = uVar6;
          }
          DAT_055d6d64 = CONCAT44(uVar20,(undefined4)DAT_055d6d64);
        } while ((int)uVar20 < 0);
        puVar18 = (ushort *)((long)puVar8 + (ulong)uVar20);
        if (puVar18 != (ushort *)0x0) goto LAB_02956cf4;
      }
      goto LAB_02956dd0;
    }
    if (DAT_055d6d64 < 0) goto LAB_02956dc8;
    puVar18 = (ushort *)((long)puVar8 + (ulong)DAT_055d6d64._4_4_);
    if (puVar18 == (ushort *)0x0) goto LAB_02956dd0;
LAB_02956cf4:
    uVar22 = *puVar18;
  }
  lVar14 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar14 != 0) && (*(long *)(lVar14 + 0x28) != 0)) && (*(int *)(lVar14 + 0x80) == 1)) {
    if (uVar22 == 0x32a8) {
      return 0;
    }
    if (uVar22 != 0xfffe) {
      local_68[1] = 0;
      local_68[2] = 0;
      local_68[3] = 0;
      local_68[0] = uVar22;
      FUN_0277d4ac(local_68);
      plVar21 = (long *)(param_1 + 0x1e8);
      lVar14 = (**(code **)(*(long *)(param_1 + 0x1e8) + 0x20))(plVar21);
      uVar6 = FUN_0277d6c4(local_68);
      if ((0x752 < (uVar6 >> 3 & 0x1fff)) ||
         ((*(uint *)(lVar14 + (ulong)((uVar6 & 0xffff) >> 5) * 4) >> (ulong)(uVar6 & 0x1f) & 1) == 0
         )) {
        lVar12 = (**(code **)(*plVar21 + 0x20))(plVar21);
        lVar14 = 0;
        uVar6 = 0;
        do {
          puVar15 = (uint *)(lVar12 + lVar14);
          lVar14 = lVar14 + 4;
          uVar20 = *puVar15 - (*puVar15 >> 1 & 0x55555555);
          uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
          uVar20 = uVar20 + (uVar20 >> 4) & 0xf0f0f0f;
          uVar20 = uVar20 + (uVar20 >> 8);
          uVar6 = (uVar20 + (uVar20 >> 0x10) & 0x3f) + uVar6;
        } while (lVar14 != 0x754);
        if ((uVar22 & 0xfffe) != 0xb18) {
          return 0;
        }
        if ((uVar6 & 0xff) != 0) {
          return 0;
        }
      }
    }
  }
  if ((param_6 & 1) == 0) goto LAB_02957010;
  puVar15 = (uint *)(ulong)*puVar8;
  if (*puVar8 != 0) {
    if ((DAT_055d6d60 & 1) == 0) {
      DAT_055d6d60 = 1;
      DAT_055d6e04 = 0xffffffff;
      DAT_055d6d64 = -1;
      DAT_055d6d6c = 0xffffffffffffffff;
      DAT_055d6d64._4_4_ = 0xffffffff;
      DAT_055d6d74 = 0xffffffffffffffff;
      DAT_055d6d7c = 0xffffffffffffffff;
      DAT_055d6d84 = 0xffffffffffffffff;
      DAT_055d6d8c = 0xffffffffffffffff;
      DAT_055d6d94 = 0xffffffffffffffff;
      DAT_055d6d9c = 0xffffffffffffffff;
      DAT_055d6da4 = 0xffffffffffffffff;
      DAT_055d6dac = 0xffffffffffffffff;
      DAT_055d6db4 = 0xffffffffffffffff;
      DAT_055d6dbc = 0xffffffffffffffff;
      DAT_055d6dc4 = 0xffffffffffffffff;
      DAT_055d6dcc = 0xffffffffffffffff;
      DAT_055d6dd4 = 0xffffffffffffffff;
      DAT_055d6ddc = 0xffffffffffffffff;
      DAT_055d6de4 = 0xffffffffffffffff;
      DAT_055d6dec = 0xffffffffffffffff;
      DAT_055d6df4 = 0xffffffffffffffff;
      DAT_055d6dfc = 0xffffffffffffffff;
LAB_02957008:
      uVar6 = DAT_055d6d64._4_4_;
      if (puVar8 != puVar15) {
        do {
          if (uVar6 != 0xffffffff) goto LAB_02957010;
          lVar14 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar15)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar8 + (lVar14 - (long)puVar15);
          if (lVar14 == 0) goto LAB_02957010;
          uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar15));
          DAT_055d6d64 = CONCAT44(0xfffffffe,(undefined4)DAT_055d6d64);
          if (uVar7 == 0) goto LAB_02957010;
          puVar19 = (uint *)(lVar14 + 4);
          while (puVar19[-1] != 0x20cb67bc) {
            puVar19 = puVar19 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_02957010;
          }
          uVar6 = *puVar19;
          uVar20 = 0;
          if (uVar6 != 0xffffffff) {
            uVar20 = uVar6;
          }
          DAT_055d6d64 = CONCAT44(uVar20,(undefined4)DAT_055d6d64);
        } while ((int)uVar20 < 0);
        psVar17 = (short *)((long)puVar8 + (ulong)uVar20);
        if (psVar17 != (short *)0x0) goto LAB_02956f0c;
      }
    }
    else {
      if (DAT_055d6d64 < 0) goto LAB_02957008;
      psVar17 = (short *)((long)puVar8 + (ulong)DAT_055d6d64._4_4_);
      if (psVar17 == (short *)0x0) goto LAB_02957010;
LAB_02956f0c:
      if (*psVar17 == 0xb17) {
        uVar11 = 1;
        uVar6 = 0xb18;
        goto LAB_02956c10;
      }
    }
LAB_02957010:
    puVar15 = (uint *)(ulong)*puVar8;
    if (*puVar8 != 0) {
      if ((DAT_055d6d60 & 1) != 0) {
        if (DAT_055d6d64 < 0) goto LAB_02957088;
        puVar18 = (ushort *)((long)puVar8 + (ulong)DAT_055d6d64._4_4_);
        if (puVar18 == (ushort *)0x0) goto LAB_02957090;
LAB_02957038:
        uVar6 = (uint)*puVar18;
        uVar11 = 1;
        goto LAB_02956c10;
      }
      DAT_055d6d60 = 1;
      DAT_055d6e04 = 0xffffffff;
      DAT_055d6d64 = -1;
      DAT_055d6d6c = 0xffffffffffffffff;
      DAT_055d6d64._4_4_ = 0xffffffff;
      DAT_055d6d74 = 0xffffffffffffffff;
      DAT_055d6d7c = 0xffffffffffffffff;
      DAT_055d6d84 = 0xffffffffffffffff;
      DAT_055d6d8c = 0xffffffffffffffff;
      DAT_055d6d94 = 0xffffffffffffffff;
      DAT_055d6d9c = 0xffffffffffffffff;
      DAT_055d6da4 = 0xffffffffffffffff;
      DAT_055d6dac = 0xffffffffffffffff;
      DAT_055d6db4 = 0xffffffffffffffff;
      DAT_055d6dbc = 0xffffffffffffffff;
      DAT_055d6dc4 = 0xffffffffffffffff;
      DAT_055d6dcc = 0xffffffffffffffff;
      DAT_055d6dd4 = 0xffffffffffffffff;
      DAT_055d6ddc = 0xffffffffffffffff;
      DAT_055d6de4 = 0xffffffffffffffff;
      DAT_055d6dec = 0xffffffffffffffff;
      DAT_055d6df4 = 0xffffffffffffffff;
      DAT_055d6dfc = 0xffffffffffffffff;
LAB_02957088:
      if (puVar8 != puVar15) {
        uVar11 = 1;
        uVar6 = 0xfffe;
        uVar20 = DAT_055d6d64._4_4_;
        do {
          if (uVar20 != 0xffffffff) goto LAB_02957090;
          lVar14 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar15)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar8 + (lVar14 - (long)puVar15);
          if (lVar14 == 0) goto LAB_02957090;
          uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar15));
          DAT_055d6d64 = CONCAT44(0xfffffffe,(undefined4)DAT_055d6d64);
          if (uVar7 == 0) goto LAB_02957090;
          puVar19 = (uint *)(lVar14 + 4);
          while (puVar19[-1] != 0x20cb67bc) {
            puVar19 = puVar19 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_02956c10;
          }
          uVar20 = *puVar19;
          uVar23 = 0;
          if (uVar20 != 0xffffffff) {
            uVar23 = uVar20;
          }
          DAT_055d6d64 = CONCAT44(uVar23,(undefined4)DAT_055d6d64);
        } while ((int)uVar23 < 0);
        puVar18 = (ushort *)((long)puVar8 + (ulong)uVar23);
        if (puVar18 != (ushort *)0x0) goto LAB_02957038;
      }
    }
  }
LAB_02957090:
  uVar11 = 1;
  uVar6 = 0xfffe;
LAB_02956c10:
  *param_2 = uVar6;
  return uVar11;
}


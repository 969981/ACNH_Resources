
void FUN_03b7b9b0(char *param_1)

{
  undefined *puVar1;
  MutexType *pMVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  char cVar18;
  long lVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  char *pcVar22;
  long *plVar23;
  char cVar24;
  int iVar25;
  long lVar26;
  undefined4 *puVar27;
  long lVar28;
  int iVar29;
  char *pcVar30;
  char *pcVar31;
  undefined8 *puVar32;
  char *pcVar33;
  long *plVar34;
  long *plVar35;
  float *pfVar36;
  long *plVar37;
  float *pfVar38;
  long *plVar39;
  float *pfVar40;
  float *pfVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float local_c8 [4];
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  
  puVar7 = PTR_DAT_04bd0d90;
  if (*param_1 == '\0') {
    return;
  }
  if (param_1[1] == '\0') {
    if (*(int *)(param_1 + 0x80) == 0) {
      return;
    }
    FUN_03b7b860(param_1);
    return;
  }
  fVar43 = 1.0;
  lVar19 = *(long *)PTR_DAT_04bc3ee8;
  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
    fVar43 = *(float *)(*(long *)(lVar19 + 0x10) + 0x20);
  }
  fVar48 = *(float *)(param_1 + 0xc0) * 0.6931472;
  iVar25 = (int)(fVar48 * 1.442695);
  fVar48 = ((fVar48 - (float)iVar25 * 0.6931472) + 0.6931472) * 23.08312;
  uVar14 = (ulong)(uint)(int)fVar48;
  fVar48 = ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar14 * 8) +
                            *(float *)((long)(PTR_DAT_04bd0d90 + uVar14 * 8) + 4) *
                            (fVar48 - (float)uVar14)) + iVar25 * 0x800000));
  *(float *)(param_1 + 0x138) = fVar48;
  *(float *)(param_1 + 0x134) = (10.0 / fVar43) * fVar48;
  if (lVar19 != 0) {
    if (*(long *)(lVar19 + 0x10) != 0) {
      local_b0 = local_b0 & 0xffffffff00000000;
      lVar26 = *(long *)(*(long *)(lVar19 + 0x10) + 8);
      if (lVar26 != 0) {
        *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(lVar26 + 8);
      }
    }
    lVar19 = *(long *)(lVar19 + 0x20);
    if (lVar19 != 0) {
      uVar5 = *(uint *)(param_1 + 4);
      uVar4 = *(uint *)(lVar19 + 0x10);
      if (uVar4 == uVar5 || (uVar4 < uVar5 || (int)uVar4 < (int)uVar5)) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(*(long *)(lVar19 + 0x18) + (long)(int)uVar5 * 8);
      }
      *(undefined8 *)(param_1 + 0x148) = uVar20;
    }
  }
  fVar43 = (float)(int)*(float *)(param_1 + 0xc0) * -0.6931472;
  iVar25 = (int)(fVar43 * 1.442695);
  fVar43 = (fVar43 + (float)iVar25 * -0.6931472 + 0.6931472) * 23.08312;
  uVar14 = (ulong)(uint)(int)fVar43;
  lVar19 = *(long *)(param_1 + 0x148);
  *(float *)(param_1 + 0xc4) =
       ABS((float)((int)(*(float *)(puVar7 + uVar14 * 8) +
                        *(float *)((long)(puVar7 + uVar14 * 8) + 4) * (fVar43 - (float)uVar14)) +
                  iVar25 * 0x800000)) * 5.0;
  if (lVar19 != 0) {
    if (*(char *)(lVar19 + 0xe8) == '\0') {
      uVar42 = *(undefined4 *)(lVar19 + 0x134);
      puVar21 = (undefined4 *)(lVar19 + 0x144);
      puVar27 = (undefined4 *)(lVar19 + 0x154);
    }
    else {
      uVar42 = *(undefined4 *)(lVar19 + 0x188);
      puVar21 = (undefined4 *)(lVar19 + 0x18c);
      puVar27 = (undefined4 *)(lVar19 + 400);
    }
    *(undefined4 *)(param_1 + 0x15c) = uVar42;
    *(undefined4 *)(param_1 + 0x160) = *puVar21;
    *(undefined4 *)(param_1 + 0x164) = *puVar27;
    if (((*(int *)(param_1 + 0xcc) == 0) && (*(long *)(lVar19 + 0xf0) != 0)) &&
       (puVar32 = *(undefined8 **)(*(long *)(lVar19 + 0xf0) + 0x50), puVar32 != (undefined8 *)0x0))
    {
      if (((*PTR_DAT_04bb6208 & 1) == 0) &&
         (iVar25 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar25 != 0)) {
        *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6208);
      }
      uVar14 = (**(code **)*puVar32)(puVar32,PTR_DAT_04bb6200);
      if ((uVar14 & 1) == 0) goto LAB_03b7bbfc;
      pcVar15 = (char *)((long)puVar32 + 0x4c);
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)((long)puVar32 + 0x44);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(puVar32 + 9);
      goto LAB_03b7bcd4;
    }
LAB_03b7bbfc:
    switch(*(undefined4 *)(param_1 + 0xcc)) {
    case 0:
    case 1:
      pcVar15 = param_1 + 0x164;
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x15c);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x160);
      break;
    case 2:
      lVar19 = *(long *)(param_1 + 0x148);
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar19 + 0x134);
      pcVar15 = (char *)(lVar19 + 0x154);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar19 + 0x144);
      break;
    case 3:
      lVar19 = *(long *)(param_1 + 0x148);
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar19 + 0x188);
      pcVar15 = (char *)(lVar19 + 400);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar19 + 0x18c);
      break;
    case 4:
      pcVar15 = param_1 + 0xd8;
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0xd4);
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0xd0);
      break;
    default:
      goto switchD_03b7bc1c_default;
    }
LAB_03b7bcd4:
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)pcVar15;
switchD_03b7bc1c_default:
    param_1[0x168] = '\0';
    param_1[0x169] = '\0';
    param_1[0x16a] = '\0';
    param_1[0x16b] = '\0';
    param_1[0x16c] = '\0';
    param_1[0x16d] = '\0';
    param_1[0x16e] = '\0';
    param_1[0x16f] = '\0';
    if (*(int *)(param_1 + 0x10) == 0) {
      *(float *)(param_1 + 0x168) =
           (*(float *)(param_1 + 0x15c) - *(float *)(param_1 + 0x150)) * *(float *)(param_1 + 0x134)
      ;
      *(float *)(param_1 + 0x16c) =
           *(float *)(param_1 + 0x134) * (*(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x158))
      ;
    }
    lVar19 = *(long *)(param_1 + 0x148);
    if (lVar19 != 0) {
      fVar49 = *(float *)(lVar19 + 0x188);
      fVar43 = -1.0;
      fVar48 = *(float *)(lVar19 + 400);
      if (*(int *)(param_1 + 0x10) == 1) {
        lVar26 = 0xf8;
        lVar28 = lVar19 + 0xf8;
        if (*(char *)(lVar19 + 0xe8) != '\0') {
          lVar26 = 0x158;
          lVar28 = lVar19 + 0x158;
        }
        fVar44 = *(float *)(lVar28 + 0xc) +
                 *(float *)(lVar19 + 0x18c) * *(float *)(lVar28 + 4) +
                 fVar49 * *(float *)(lVar19 + lVar26) + fVar48 * *(float *)(lVar28 + 8);
        fVar48 = *(float *)(lVar28 + 0x2c) +
                 *(float *)(lVar19 + 0x18c) * *(float *)(lVar28 + 0x24) +
                 fVar49 * *(float *)(lVar28 + 0x20) + fVar48 * *(float *)(lVar28 + 0x28);
        if (*(char *)(lVar19 + 0xe0) != '\0') {
          fVar48 = 0.0;
        }
        fVar49 = -0.0;
      }
      else if (*(int *)(param_1 + 0x10) == 0) {
        fVar44 = fVar49 - *(float *)(param_1 + 0x15c);
        fVar48 = fVar48 - *(float *)(param_1 + 0x164);
        fVar49 = -*(float *)(lVar19 + 0x178);
        fVar43 = -*(float *)(lVar19 + 0x180);
      }
      else {
        fVar48 = 0.0;
        fVar49 = -0.0;
        fVar44 = 0.0;
      }
      *(float *)(param_1 + 0x194) = fVar43;
      *(float *)(param_1 + 400) = fVar49;
      *(float *)(param_1 + 0x188) = fVar44 * *(float *)(param_1 + 0x134);
      *(float *)(param_1 + 0x18c) = fVar48 * *(float *)(param_1 + 0x134);
    }
    puVar7 = PTR_DAT_04bc4310;
    if (((*(long *)PTR_DAT_04bc3ee8 != 0) &&
        (lVar19 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x20), lVar19 != 0)) &&
       (*(int *)(lVar19 + 0x10) != 0)) {
      plVar39 = *(long **)(lVar19 + 0x18);
      lVar19 = (long)*(int *)(lVar19 + 0x10) << 3;
      puVar1 = PTR_DAT_04bc4318 + 0x10;
      pfVar38 = (float *)(*(long *)(param_1 + 0x180) + 4);
      pfVar40 = (float *)(*(long *)(param_1 + 0x170) + 4);
      pfVar41 = (float *)(*(long *)(param_1 + 0x178) + 4);
      do {
        lVar26 = *plVar39;
        plVar35 = *(long **)(lVar26 + 0xf0);
        if (((*puVar7 & 1) == 0) && (iVar25 = __cxa_guard_acquire(puVar7), iVar25 != 0)) {
          *(undefined **)PTR_DAT_04bc4308 = puVar1;
          __cxa_guard_release(puVar7);
        }
        if (plVar35 == (long *)0x0) {
          plVar35 = (long *)0x0;
        }
        else {
          uVar14 = (**(code **)(*plVar35 + 0x18))(plVar35,PTR_DAT_04bc4308);
          if ((uVar14 & 1) == 0) {
            plVar35 = (long *)0x0;
          }
        }
        local_a8 = 0.0;
        local_b0 = 0;
        local_c8[2] = 0.0;
        local_c8[0] = 0.0;
        local_c8[1] = 0.0;
        if (*(int *)(param_1 + 0x10) == 1) {
          if (plVar35 == (long *)0x0) {
            lVar28 = *(long *)(param_1 + 0x148);
            fVar49 = 0.0;
            fVar44 = 0.0;
            local_c8[1] = *(float *)(lVar26 + 0x144);
            local_c8[0] = *(float *)(lVar26 + 0x134);
            local_c8[2] = *(float *)(lVar26 + 0x154);
            cVar24 = *(char *)(lVar28 + 0xe8);
            cVar18 = *(char *)(lVar28 + 0xe0);
            fVar43 = *(float *)(lVar26 + 0x144);
            fVar48 = *(float *)(lVar26 + 0x134);
          }
          else {
            FUN_03bab224(plVar35,&local_b0,local_c8);
            lVar28 = *(long *)(param_1 + 0x148);
            cVar24 = *(char *)(lVar28 + 0xe8);
            lVar16 = 0xf8;
            lVar17 = lVar28 + 0xf8;
            if (cVar24 != '\0') {
              lVar16 = 0x158;
              lVar17 = lVar28 + 0x158;
            }
            fVar44 = *(float *)(lVar17 + 0xc) +
                     local_b0._4_4_ * *(float *)(lVar17 + 4) +
                     (float)local_b0 * *(float *)(lVar28 + lVar16) +
                     local_a8 * *(float *)(lVar17 + 8);
            cVar18 = *(char *)(lVar28 + 0xe0);
            fVar49 = *(float *)(lVar17 + 0x2c) +
                     local_b0._4_4_ * *(float *)(lVar17 + 0x24) +
                     (float)local_b0 * *(float *)(lVar17 + 0x20) +
                     local_a8 * *(float *)(lVar17 + 0x28);
            fVar43 = local_c8[1];
            fVar48 = local_c8[0];
            if (cVar18 != '\0') {
              fVar49 = 0.0;
            }
          }
          lVar16 = 0xf8;
          if (cVar24 != '\0') {
            lVar16 = 0x158;
          }
          puVar32 = (undefined8 *)(lVar28 + 0xf8);
          if (cVar24 != '\0') {
            puVar32 = (undefined8 *)(lVar28 + 0x158);
          }
          fVar46 = *(float *)((long)puVar32 + 0xc) +
                   fVar43 * *(float *)((long)puVar32 + 4) + fVar48 * *(float *)(lVar28 + lVar16) +
                   local_c8[2] * *(float *)(puVar32 + 1);
          fVar52 = (float)*(undefined8 *)(lVar26 + 0x148);
          fVar43 = *(float *)((long)puVar32 + 0x2c) +
                   fVar43 * *(float *)((long)puVar32 + 0x24) + fVar48 * *(float *)(puVar32 + 4) +
                   local_c8[2] * *(float *)(puVar32 + 5);
          if (cVar18 != '\0') {
            fVar43 = 0.0;
          }
          fVar55 = (float)((ulong)*(undefined8 *)(lVar26 + 0x148) >> 0x20);
          fVar56 = (float)*(undefined8 *)(lVar26 + 0x150);
          fVar48 = (float)*(undefined8 *)(lVar28 + 0xf8) * fVar52 +
                   (float)*(undefined8 *)(lVar28 + 0x108) * fVar55 +
                   (float)*(undefined8 *)(lVar28 + 0x118) * fVar56 + 0.0;
          fVar52 = (float)*(undefined8 *)(lVar28 + 0x100) * fVar52 +
                   (float)*(undefined8 *)(lVar28 + 0x110) * fVar55 +
                   (float)*(undefined8 *)(lVar28 + 0x120) * fVar56 + 0.0;
LAB_03b7bf08:
          fVar48 = -fVar48;
          fVar52 = -fVar52;
        }
        else {
          if (*(int *)(param_1 + 0x10) == 0) {
            if (plVar35 == (long *)0x0) {
              fVar43 = *(float *)(lVar26 + 0x154);
              fVar49 = 0.0;
              fVar44 = 0.0;
              fVar46 = *(float *)(param_1 + 0x15c);
              pfVar36 = (float *)(lVar26 + 0x134);
              fVar48 = *(float *)(param_1 + 0x164);
            }
            else {
              pfVar36 = local_c8;
              FUN_03bab224(plVar35,&local_b0,local_c8);
              fVar46 = *(float *)(param_1 + 0x15c);
              fVar44 = (float)local_b0 - fVar46;
              fVar48 = *(float *)(param_1 + 0x164);
              fVar49 = local_a8 - fVar48;
              fVar43 = local_c8[2];
            }
            fVar43 = fVar43 - fVar48;
            fVar46 = *pfVar36 - fVar46;
            fVar48 = *(float *)(lVar26 + 0x118);
            fVar52 = *(float *)(lVar26 + 0x120);
            goto LAB_03b7bf08;
          }
          fVar49 = 0.0;
          fVar44 = 0.0;
          fVar48 = -0.0;
          fVar43 = 0.0;
          fVar46 = 0.0;
          fVar52 = -1.0;
        }
        pfVar38[-1] = fVar48;
        plVar39 = plVar39 + 1;
        lVar19 = lVar19 + -8;
        *pfVar38 = fVar52;
        fVar48 = *(float *)(param_1 + 0x134);
        pfVar41[-1] = fVar44 * fVar48;
        *pfVar41 = fVar49 * fVar48;
        fVar48 = *(float *)(param_1 + 0x134);
        pfVar40[-1] = fVar46 * fVar48;
        *pfVar40 = fVar43 * fVar48;
        pfVar38 = pfVar38 + 2;
        pfVar40 = pfVar40 + 2;
        pfVar41 = pfVar41 + 2;
      } while (lVar19 != 0);
    }
  }
  pMVar2 = (MutexType *)(param_1 + 0x38);
  nn::os::LockMutex(pMVar2);
  if (*(char **)(param_1 + 0x78) != param_1 + 0x70) {
    lVar28 = (long)*(int *)(param_1 + 0x84);
    lVar26 = (long)*(char **)(param_1 + 0x78) - lVar28;
    lVar19 = lVar26 + lVar28;
    do {
      lVar19 = *(long *)(lVar19 + 8);
      if (param_1[0x129] == '\0' && *(char *)(lVar26 + 0x19a) != '\0') {
        nn::os::LockMutex(pMVar2);
        plVar39 = (long *)(*(int *)(param_1 + 0x9c) + lVar26);
        lVar16 = *plVar39;
        plVar35 = (long *)plVar39[1];
        if (plVar35 != (long *)0x0 || lVar16 != 0) {
          if (lVar16 != 0) {
            *(long **)(lVar16 + 8) = plVar35;
            plVar35 = (long *)plVar39[1];
          }
          if (plVar35 != (long *)0x0) {
            *plVar35 = *plVar39;
          }
          *plVar39 = 0;
          plVar39[1] = 0;
          *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
        }
        plVar39 = (long *)(*(int *)(param_1 + 0xb4) + lVar26);
        lVar16 = *plVar39;
        plVar35 = (long *)plVar39[1];
        if (plVar35 != (long *)0x0 || lVar16 != 0) {
          if (lVar16 != 0) {
            *(long **)(lVar16 + 8) = plVar35;
            plVar35 = (long *)plVar39[1];
          }
          if (plVar35 != (long *)0x0) {
            *plVar35 = *plVar39;
          }
          *plVar39 = 0;
          plVar39[1] = 0;
          *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
        }
        plVar39 = (long *)(*(int *)(param_1 + 0x84) + lVar26);
        if (*plVar39 != 0) {
          *(long *)(*plVar39 + 8) = plVar39[1];
        }
        if ((long *)plVar39[1] != (long *)0x0) {
          *(long *)plVar39[1] = *plVar39;
        }
        *plVar39 = 0;
        plVar39[1] = 0;
        plVar39 = (long *)(*(int *)(param_1 + 0x6c) + lVar26);
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
        lVar26 = *(long *)(param_1 + 0x58);
        *(long **)(param_1 + 0x58) = plVar39;
        *plVar39 = lVar26;
        plVar39[1] = (long)(param_1 + 0x58);
        if (lVar26 != 0) {
          *(long **)(lVar26 + 8) = plVar39;
        }
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        nn::os::UnlockMutex(pMVar2);
      }
      else {
        plVar39 = (long *)(lVar26 + *(int *)(param_1 + 0xb4));
        lVar16 = *plVar39;
        plVar35 = (long *)plVar39[1];
        if (plVar35 != (long *)0x0 || lVar16 != 0) {
          if (lVar16 != 0) {
            *(long **)(lVar16 + 8) = plVar35;
            plVar35 = (long *)plVar39[1];
          }
          if (plVar35 != (long *)0x0) {
            *plVar35 = *plVar39;
          }
          *plVar39 = 0;
          plVar39[1] = 0;
          *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
        }
        lVar16 = *(long *)(param_1 + 0x110);
        uVar14 = FUN_03b76330(lVar26 + 0x10,*(undefined8 *)(lVar16 + 8),
                              *(undefined4 *)(lVar16 + 0x14),*(undefined1 *)(lVar16 + 0x10));
        if ((uVar14 & 1) == 0) {
LAB_03b7c310:
          bVar13 = 0;
        }
        else if ((((*(long *)(param_1 + 0x118) == 0) ||
                  (**(char **)(*(long *)(*(long *)(param_1 + 0x118) + 8) + 8) == '\0')) ||
                 (**(char **)(lVar26 + 0x70) == '\0')) ||
                ((*(long *)PTR_DAT_04bc3ee8 == 0 ||
                 (lVar16 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x18), lVar16 == 0)))) {
LAB_03b7c320:
          lVar16 = *(long *)(param_1 + 0x120);
          bVar13 = FUN_03b76330(lVar26 + 0xa0,*(undefined8 *)(lVar16 + 8),
                                *(undefined4 *)(lVar16 + 0x14),*(undefined1 *)(lVar16 + 0x10));
          if (((bVar13 & 1) != 0) && (param_1[0x128] == '\0')) {
            local_b0 = CONCAT44(local_b0._4_4_,1);
            bVar13 = (*(uint *)(lVar26 + 0x134) >> 1 & 1) == 0;
          }
        }
        else {
          lVar16 = FUN_03ba4630(lVar16,lVar26 + 0x68);
          bVar13 = 0;
          if (lVar16 != 0) {
            do {
              lVar17 = *(long *)(param_1 + 0x118);
              uVar14 = FUN_03b76330(lVar16 + 8,*(undefined8 *)(lVar17 + 8),
                                    *(undefined4 *)(lVar17 + 0x14),*(undefined1 *)(lVar17 + 0x10));
              if ((uVar14 & 1) != 0) goto LAB_03b7c320;
              if (*(long *)(lVar16 + 0x58) == 0) goto LAB_03b7c310;
              lVar16 = *(long *)(*(long *)(lVar16 + 0x58) + 0x20);
              bVar13 = 0;
            } while (lVar16 != 0);
          }
        }
        bVar13 = bVar13 & 1;
        *(byte *)(lVar26 + 0x168) = bVar13;
        lVar16 = *(long *)(param_1 + 0x148);
        if (lVar16 != 0) {
          if (*(int *)(param_1 + 0x10) == 1) {
            local_b0._0_4_ = *(float *)(lVar26 + 0x104);
            local_b0._4_4_ = *(float *)(lVar26 + 0x114);
            local_a8 = *(float *)(lVar26 + 0x124);
            FUN_03baa168(lVar16,&local_b0,lVar26 + 0x16c);
            fVar44 = 0.0;
            fVar48 = 0.0;
            fVar43 = 0.0;
            *(float *)(lVar26 + 0x184) = *(float *)(lVar26 + 0x16c);
            lVar17 = *(long *)(param_1 + 0x148);
            fVar49 = *(float *)(param_1 + 0x134);
            bVar12 = *(char *)(lVar17 + 0xe8) != '\0';
            lVar16 = lVar17 + 0xf8;
            if (bVar12) {
              lVar16 = lVar17 + 0x158;
            }
            lVar3 = 0xf8;
            if (bVar12) {
              lVar3 = 0x158;
            }
            fVar54 = *(float *)(lVar16 + 0x20);
            fVar45 = *(float *)(lVar16 + 0x24);
            fVar50 = *(float *)(lVar16 + 0x28);
            fVar51 = *(float *)(lVar16 + 0x2c);
            fVar52 = *(float *)(lVar17 + lVar3);
            cVar24 = *(char *)(lVar17 + 0xe0);
            fVar53 = *(float *)(lVar16 + 4);
            fVar55 = *(float *)(lVar16 + 8);
            fVar56 = *(float *)(lVar16 + 0xc);
            fVar46 = fVar51 + local_b0._4_4_ * fVar45 + (float)local_b0 * fVar54 + local_a8 * fVar50
            ;
            if (cVar24 != '\0') {
              fVar46 = 0.0;
            }
            if (0.0 < *(float *)(lVar26 + 0x138)) {
              fVar43 = fVar51 + fVar45 * *(float *)(lVar26 + 300) +
                                *(float *)(lVar26 + 0x128) * fVar54 +
                                *(float *)(lVar26 + 0x130) * fVar50;
              if (cVar24 != '\0') {
                fVar43 = 0.0;
              }
              fVar48 = fVar49 * (fVar56 + fVar53 * *(float *)(lVar26 + 300) +
                                          *(float *)(lVar26 + 0x128) * fVar52 +
                                          *(float *)(lVar26 + 0x130) * fVar55);
              fVar43 = fVar49 * fVar43;
            }
            fVar57 = *(float *)(lVar26 + 0xf4);
            fVar47 = 0.0;
            bVar12 = fVar57 != 1.0;
            if (bVar12) {
              fVar44 = *(float *)(lVar17 + 0x134);
              fVar58 = *(float *)(lVar17 + 0x144);
              fVar59 = *(float *)(lVar17 + 0x154);
              *(float *)(lVar26 + 0x184) = *(float *)(lVar26 + 0x16c) * fVar57;
              fVar44 = fVar44 + fVar57 * (*(float *)(lVar26 + 0x104) - fVar44);
              fVar58 = fVar58 + fVar57 * (*(float *)(lVar26 + 0x114) - fVar58);
              fVar59 = fVar59 + fVar57 * (*(float *)(lVar26 + 0x124) - fVar59);
              fVar47 = fVar51 + fVar45 * fVar58 + fVar44 * fVar54 + fVar59 * fVar50;
              if (cVar24 != '\0') {
                fVar47 = 0.0;
              }
              fVar44 = fVar49 * (fVar56 + fVar53 * fVar58 + fVar44 * fVar52 + fVar59 * fVar55);
              fVar47 = fVar49 * fVar47;
            }
            fVar46 = fVar49 * fVar46;
            fVar49 = (fVar56 + local_b0._4_4_ * fVar53 + (float)local_b0 * fVar52 +
                               local_a8 * fVar55) * fVar49;
          }
          else if (*(int *)(param_1 + 0x10) == 0) {
            fVar52 = *(float *)(lVar26 + 0x104);
            fVar44 = 0.0;
            fVar43 = 0.0;
            bVar12 = *(char *)(lVar16 + 0xe8) != '\0';
            fVar56 = *(float *)(lVar26 + 0x124);
            fVar55 = *(float *)(param_1 + 0x134);
            lVar17 = 0x134;
            if (bVar12) {
              lVar17 = 0x188;
            }
            fVar49 = *(float *)(param_1 + 0x168);
            lVar3 = 0x154;
            if (bVar12) {
              lVar3 = 400;
            }
            fVar54 = *(float *)(lVar16 + lVar17);
            fVar46 = *(float *)(param_1 + 0x16c);
            fVar53 = *(float *)(lVar16 + lVar3);
            local_b0 = CONCAT44(*(undefined4 *)(lVar26 + 0x114),fVar52);
            fVar48 = 0.0;
            if (0.0 < *(float *)(lVar26 + 0x138)) {
              fVar48 = fVar49 + fVar55 * (*(float *)(lVar26 + 0x128) - fVar54);
              fVar43 = fVar46 + fVar55 * (*(float *)(lVar26 + 0x130) - fVar53);
            }
            local_a8 = fVar56;
            FUN_03baa168(lVar16,&local_b0,lVar26 + 0x16c);
            fVar45 = *(float *)(lVar26 + 0xf4);
            fVar47 = 0.0;
            bVar12 = fVar45 != 1.0;
            *(float *)(lVar26 + 0x184) = *(float *)(lVar26 + 0x16c);
            if (bVar12) {
              fVar44 = *(float *)(*(long *)(param_1 + 0x148) + 0x134);
              fVar50 = *(float *)(*(long *)(param_1 + 0x148) + 0x154);
              fVar51 = *(float *)(param_1 + 0x134);
              fVar44 = *(float *)(param_1 + 0x168) +
                       fVar51 * ((fVar44 + fVar45 * ((float)local_b0 - fVar44)) - fVar54);
              fVar47 = *(float *)(param_1 + 0x16c);
              *(float *)(lVar26 + 0x184) = *(float *)(lVar26 + 0x16c) * fVar45;
              fVar47 = fVar47 + fVar51 * ((fVar50 + fVar45 * (local_a8 - fVar50)) - fVar53);
            }
            fVar49 = (fVar52 - fVar54) * fVar55 + fVar49;
            fVar46 = (fVar56 - fVar53) * fVar55 + fVar46;
          }
          else {
            bVar12 = false;
            fVar48 = 0.0;
            fVar43 = 0.0;
            fVar44 = 0.0;
            fVar47 = 0.0;
            fVar49 = 0.0;
            fVar46 = 0.0;
          }
          plVar39 = (long *)(*(int *)(param_1 + 0x9c) + lVar26);
          lVar16 = *plVar39;
          plVar35 = (long *)plVar39[1];
          if (plVar35 != (long *)0x0 || lVar16 != 0) {
            if (lVar16 != 0) {
              *(long **)(lVar16 + 8) = plVar35;
              plVar35 = (long *)plVar39[1];
            }
            if (plVar35 != (long *)0x0) {
              *plVar35 = *plVar39;
            }
            *plVar39 = 0;
            plVar39[1] = 0;
            *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
          }
          fVar53 = *(float *)(param_1 + 0xe4) * *(float *)(param_1 + 0x134);
          fVar56 = *(float *)(param_1 + 0x134) * *(float *)(param_1 + 0xe8);
          fVar54 = *(float *)(param_1 + 0xdc);
          fVar45 = *(float *)(param_1 + 0xe0);
          *(undefined2 *)(lVar26 + 0x198) = 0;
          fVar55 = fVar54 * -0.5;
          fVar54 = fVar54 * 0.5;
          fVar52 = fVar54;
          if (fVar53 <= fVar54) {
            fVar52 = fVar53;
          }
          if (fVar55 <= fVar53) {
            fVar55 = fVar52;
          }
          fVar53 = fVar45 * -0.5;
          fVar45 = fVar45 * 0.5;
          fVar50 = fVar55 - fVar54;
          fVar54 = fVar54 + fVar55;
          fVar52 = fVar45;
          if (fVar56 <= fVar45) {
            fVar52 = fVar56;
          }
          if (fVar53 <= fVar56) {
            fVar53 = fVar52;
          }
          fVar52 = fVar53 - fVar45;
          bVar8 = false;
          bVar10 = false;
          if (fVar50 < fVar49) {
            bVar8 = false;
            bVar10 = true;
            if (!NAN(fVar54) && !NAN(fVar49)) {
              bVar8 = fVar54 == fVar49;
              bVar10 = fVar49 <= fVar54;
            }
          }
          fVar45 = fVar45 + fVar53;
          bVar9 = false;
          bVar11 = false;
          if (bVar10 && !bVar8) {
            bVar9 = false;
            bVar11 = true;
            if (!NAN(fVar46) && !NAN(fVar52)) {
              bVar9 = fVar46 == fVar52;
              bVar11 = fVar52 <= fVar46;
            }
          }
          local_b0 = CONCAT44(fVar52,fVar50);
          bVar8 = false;
          bVar10 = false;
          if (bVar11 && !bVar9) {
            bVar8 = false;
            bVar10 = true;
            if (!NAN(fVar45) && !NAN(fVar46)) {
              bVar8 = fVar45 == fVar46;
              bVar10 = fVar46 <= fVar45;
            }
          }
          local_a8 = fVar54;
          fStack_a4 = fVar45;
          if (!bVar10 || bVar8) {
            if (fVar49 == 0.0) {
              fVar55 = fVar49;
              fVar56 = fVar46;
              if (fVar46 != 0.0) goto LAB_03b7c720;
            }
            else {
LAB_03b7c720:
              local_c8[0] = 0.0;
              local_c8[1] = 0.0;
              fVar55 = SQRT(fVar46 * fVar46 + fVar49 * fVar49);
              local_c8[2] = fVar49;
              local_c8[3] = fVar46;
              if (0.0 < fVar55) {
                fVar55 = 1.0 / fVar55;
                local_c8[2] = fVar49 * fVar55;
                local_c8[3] = fVar46 * fVar55;
              }
              uVar14 = FUN_03b7cd00(&local_b8,local_c8,&local_b0);
              fVar55 = local_b8;
              fVar56 = fStack_b4;
              if ((uVar14 & 1) == 0) {
                fVar55 = fVar49;
                fVar56 = fVar46;
              }
            }
            fVar46 = fVar56;
            fVar49 = fVar55;
            *(undefined1 *)(lVar26 + 0x198) = 1;
          }
          if (bVar12) {
            bVar8 = false;
            bVar10 = false;
            if (fVar50 < fVar44) {
              bVar8 = false;
              bVar10 = true;
              if (!NAN(fVar54) && !NAN(fVar44)) {
                bVar8 = fVar54 == fVar44;
                bVar10 = fVar44 <= fVar54;
              }
            }
            bVar9 = false;
            bVar11 = false;
            if (bVar10 && !bVar8) {
              bVar9 = false;
              bVar11 = true;
              if (!NAN(fVar47) && !NAN(fVar52)) {
                bVar9 = fVar47 == fVar52;
                bVar11 = fVar52 <= fVar47;
              }
            }
            bVar8 = false;
            bVar10 = false;
            if (bVar11 && !bVar9) {
              bVar8 = false;
              bVar10 = true;
              if (!NAN(fVar45) && !NAN(fVar47)) {
                bVar8 = fVar45 == fVar47;
                bVar10 = fVar47 <= fVar45;
              }
            }
            if (!bVar10 || bVar8) {
              if (fVar44 == 0.0) {
                fVar52 = fVar44;
                fVar55 = fVar47;
                if (fVar47 != 0.0) goto LAB_03b7c7a8;
              }
              else {
LAB_03b7c7a8:
                local_c8[0] = 0.0;
                local_c8[1] = 0.0;
                fVar52 = SQRT(fVar47 * fVar47 + fVar44 * fVar44);
                local_c8[2] = fVar44;
                local_c8[3] = fVar47;
                if (0.0 < fVar52) {
                  fVar52 = 1.0 / fVar52;
                  local_c8[2] = fVar44 * fVar52;
                  local_c8[3] = fVar47 * fVar52;
                }
                uVar14 = FUN_03b7cd00(&local_b8,local_c8,&local_b0);
                fVar52 = local_b8;
                fVar55 = fStack_b4;
                if ((uVar14 & 1) == 0) {
                  fVar52 = fVar44;
                  fVar55 = fVar47;
                }
              }
              fVar47 = fVar55;
              fVar44 = fVar52;
              *(undefined1 *)(lVar26 + 0x199) = 1;
            }
          }
          *(float *)(lVar26 + 0x148) = fVar49;
          *(float *)(lVar26 + 0x14c) = fVar46;
          *(float *)(lVar26 + 0x15c) = fVar44;
          *(float *)(lVar26 + 0x160) = fVar47;
          *(float *)(lVar26 + 0x150) = fVar48;
          *(float *)(lVar26 + 0x154) = fVar43;
          *(bool *)(lVar26 + 0x158) = bVar12;
          *(float *)(lVar26 + 0x164) = fVar46;
          bVar13 = 0;
          if (*(char *)(lVar26 + 0x168) != '\0') {
            plVar39 = (long *)(*(int *)(param_1 + 0x9c) + lVar26);
            lVar16 = *(long *)(param_1 + 0x88);
            *(long **)(param_1 + 0x88) = plVar39;
            *plVar39 = lVar16;
            plVar39[1] = (long)(param_1 + 0x88);
            if (lVar16 != 0) {
              *(long **)(lVar16 + 8) = plVar39;
            }
            *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
            bVar13 = *(byte *)(lVar26 + 0x168);
          }
        }
        local_b0 = CONCAT44(local_b0._4_4_,0x13);
        if (((*(uint *)(param_1 + 200) >> 0x13 & 1) != 0) && (bVar13 != 0)) {
          plVar39 = (long *)(lVar26 + *(int *)(param_1 + 0xb4));
          lVar26 = *(long *)(param_1 + 0xa0);
          *(long **)(param_1 + 0xa0) = plVar39;
          *plVar39 = lVar26;
          plVar39[1] = (long)(param_1 + 0xa0);
          if (lVar26 != 0) {
            *(long **)(lVar26 + 8) = plVar39;
          }
          *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
        }
      }
      lVar26 = lVar19 - lVar28;
    } while (lVar26 != (long)(param_1 + 0x70) - lVar28);
  }
  iVar25 = *(int *)(param_1 + 0x98);
  pcVar15 = param_1 + 0x88;
  if (iVar25 < 2) {
LAB_03b7c98c:
    if (iVar25 == 0) goto LAB_03b7cab0;
    iVar29 = *(int *)(param_1 + 0x9c);
  }
  else {
    iVar29 = *(int *)(param_1 + 0x9c);
    if (*(char **)(*(long *)(param_1 + 0x90) + 8) != pcVar15) {
      lVar19 = -(long)iVar29;
      pcVar33 = *(char **)(*(long *)(param_1 + 0x90) + 8);
      do {
        pcVar22 = *(char **)(pcVar33 + 8);
        if ((long)pcVar33 + lVar19 != 0) {
          pcVar31 = *(char **)pcVar33;
          if (((long)pcVar31 + lVar19 != 0) &&
             (fVar43 = *(float *)((long)pcVar33 + lVar19 + 0x164),
             fVar43 < *(float *)((long)pcVar31 + lVar19 + 0x164))) {
            pcVar30 = pcVar31;
            while( true ) {
              pcVar30 = *(char **)pcVar30;
              pcVar6 = pcVar15;
              if (pcVar30 == pcVar15) break;
              pcVar6 = pcVar30;
              if (((long)pcVar30 + lVar19 == 0) ||
                 (*(float *)((long)pcVar30 + lVar19 + 0x164) <= fVar43)) break;
            }
            pcVar30 = pcVar22;
            if (pcVar31 != (char *)0x0) {
              *(char **)(pcVar31 + 8) = pcVar22;
              pcVar30 = *(char **)(pcVar33 + 8);
            }
            if (pcVar30 != (char *)0x0) {
              *(undefined8 *)pcVar30 = *(undefined8 *)pcVar33;
            }
            pcVar33[0] = '\0';
            pcVar33[1] = '\0';
            pcVar33[2] = '\0';
            pcVar33[3] = '\0';
            pcVar33[4] = '\0';
            pcVar33[5] = '\0';
            pcVar33[6] = '\0';
            pcVar33[7] = '\0';
            pcVar33[8] = '\0';
            pcVar33[9] = '\0';
            pcVar33[10] = '\0';
            pcVar33[0xb] = '\0';
            pcVar33[0xc] = '\0';
            pcVar33[0xd] = '\0';
            pcVar33[0xe] = '\0';
            pcVar33[0xf] = '\0';
            puVar32 = *(undefined8 **)(pcVar6 + 8);
            *(char **)(pcVar6 + 8) = pcVar33;
            *(char **)pcVar33 = pcVar6;
            *(undefined8 **)(pcVar33 + 8) = puVar32;
            if (puVar32 != (undefined8 *)0x0) {
              *puVar32 = pcVar33;
            }
          }
        }
        pcVar33 = pcVar22;
      } while (pcVar22 != pcVar15);
      iVar25 = *(int *)(param_1 + 0x98);
      goto LAB_03b7c98c;
    }
  }
  lVar19 = (long)-iVar29;
  if (*(char **)pcVar15 != pcVar15) {
    pcVar33 = *(char **)pcVar15 + lVar19;
    do {
      lVar26 = (long)*(char **)(pcVar33 + *(int *)(param_1 + 0x9c)) - (long)*(int *)(param_1 + 0x9c)
      ;
      if ((*(char **)(pcVar33 + *(int *)(param_1 + 0x9c)) != pcVar15 && lVar26 != 0) &&
         (*(float *)(pcVar33 + 0x164) - *(float *)(lVar26 + 0x164) < 16.0)) {
        *(float *)(lVar26 + 0x164) = *(float *)(pcVar33 + 0x164) + -16.0;
      }
      pcVar33 = (char *)(*(long *)(pcVar33 + iVar29) + lVar19);
    } while (pcVar33 != pcVar15 + lVar19);
    iVar25 = *(int *)(param_1 + 0x98);
    lVar19 = -(long)*(int *)(param_1 + 0x9c);
  }
  lVar26 = *(long *)(param_1 + 0x90);
  if (iVar25 < 1) {
    lVar26 = 0;
  }
  lVar28 = 0;
  if (lVar26 != 0) {
    lVar28 = lVar19 + lVar26;
  }
  if (*(float *)(lVar28 + 0x164) < 0.0) {
    *(undefined4 *)(lVar28 + 0x164) = 0;
    if (*(char **)(param_1 + 0x90) != pcVar15) {
      lVar26 = (long)*(int *)(param_1 + 0x9c);
      lVar19 = (long)*(char **)(param_1 + 0x90) - lVar26;
      do {
        pcVar33 = *(char **)(lVar19 + *(int *)(param_1 + 0x9c) + 8);
        lVar28 = (long)pcVar33 - (long)*(int *)(param_1 + 0x9c);
        if ((pcVar33 != pcVar15 && lVar28 != 0) &&
           (*(float *)(lVar28 + 0x164) - *(float *)(lVar19 + 0x164) < 16.0)) {
          *(float *)(lVar28 + 0x164) = *(float *)(lVar19 + 0x164) + 16.0;
        }
        lVar19 = *(long *)(lVar19 + lVar26 + 8) - lVar26;
      } while (lVar19 != (long)pcVar15 - lVar26);
    }
  }
LAB_03b7cab0:
  local_b0 = CONCAT44(local_b0._4_4_,0x13);
  if (((*(uint *)(param_1 + 200) >> 0x13 & 1) != 0) && (1 < *(int *)(param_1 + 0xb0))) {
    plVar35 = *(long **)(param_1 + 0xa8);
    plVar39 = (long *)(param_1 + 0xa0);
    if (plVar35 != plVar39) {
      lVar19 = -(long)*(int *)(param_1 + 0xb4);
      do {
        if ((long *)plVar35[1] == plVar39) break;
        lVar26 = (long)plVar35 + lVar19 + 0xa0;
        plVar34 = (long *)plVar35[1];
        do {
          (**(code **)(*(long *)((long)plVar35 + lVar19 + 0xa0) + 0x18))(lVar26);
          (**(code **)(*(long *)((long)plVar35 + lVar19 + 0xa0) + 0x18))(lVar26);
          plVar37 = (long *)((long)plVar34 + lVar19 + 0xa0);
          lVar16 = *(long *)((long)plVar35 + lVar19 + 0xa8);
          (**(code **)(*plVar37 + 0x18))(plVar37);
          lVar28 = *(long *)((long)plVar34 + lVar19 + 0xa8);
          if (lVar16 == lVar28) {
LAB_03b7cbf4:
            plVar37 = (long *)plVar34[1];
            plVar23 = plVar37;
            if (*plVar34 != 0) {
              *(long **)(*plVar34 + 8) = plVar37;
              plVar23 = (long *)plVar34[1];
            }
            if (plVar23 != (long *)0x0) {
              *plVar23 = *plVar34;
            }
            *plVar34 = 0;
            plVar34[1] = 0;
            *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
          }
          else {
            uVar14 = 0;
            bVar12 = true;
            lVar16 = *(long *)((long)plVar35 + lVar19 + 0xa8) + 2;
            do {
              lVar17 = lVar16 + uVar14;
              cVar24 = *(char *)(lVar17 + -2);
              if (cVar24 != *(char *)(lVar28 + uVar14)) break;
              if (cVar24 == '\0') {
                if (bVar12) goto LAB_03b7cbf4;
                break;
              }
              cVar24 = *(char *)(lVar17 + -1);
              if (cVar24 != *(char *)(lVar28 + uVar14 + 1)) break;
              if (cVar24 == '\0') goto LAB_03b7cbf4;
              cVar24 = *(char *)(lVar16 + uVar14);
              if (cVar24 != *(char *)(lVar28 + uVar14 + 2)) break;
              if (cVar24 == '\0') goto LAB_03b7cbf4;
              bVar12 = uVar14 < 0x7fffe;
              uVar14 = uVar14 + 3;
            } while (uVar14 != 0x80001);
            plVar37 = (long *)plVar34[1];
          }
          plVar34 = plVar37;
        } while (plVar37 != plVar39);
        plVar35 = (long *)plVar35[1];
      } while (plVar35 != plVar39);
    }
  }
  nn::os::UnlockMutex(pMVar2);
  if (param_1[0x12a] == '\0') {
    if (param_1[0x129] == '\0') {
      return;
    }
  }
  else {
    param_1[0x130] = '\0';
    param_1[0x131] = '\0';
    param_1[0x132] = '\0';
    param_1[0x133] = '\0';
    param_1[0x129] = '\x01';
    param_1[0x12a] = '\0';
  }
  if ((*(float *)(param_1 + 300) != 0.0) &&
     (fVar43 = *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x1c) +
               *(float *)(param_1 + 0x130), *(float *)(param_1 + 0x130) = fVar43,
     *(float *)(param_1 + 300) <= fVar43)) {
    param_1[0x130] = '\0';
    param_1[0x131] = '\0';
    param_1[0x132] = '\0';
    param_1[0x133] = '\0';
    param_1[0x129] = '\0';
    param_1[0x12a] = '\x01';
  }
  return;
}


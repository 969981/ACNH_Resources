
void FUN_029ccb60(long param_1)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  byte bVar20;
  long lVar21;
  undefined8 *puVar22;
  uint uVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  long lVar26;
  long *plVar27;
  undefined8 *puVar28;
  long *plVar29;
  long lVar30;
  undefined1 uVar31;
  byte bVar32;
  uint *puVar33;
  int iVar34;
  ulong uVar35;
  char *pcVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  float fVar49;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  undefined1 local_98;
  char cStack_97;
  char cStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined4 local_90;
  uint *local_88;
  undefined4 local_78;
  undefined2 local_74;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  puVar25 = *(undefined8 **)(param_1 + 0x3c0);
  puVar28 = (undefined8 *)(param_1 + 0x3b8);
  if (puVar25 != puVar28) {
    lVar21 = (long)*(int *)(param_1 + 0x3cc);
    plVar19 = (long *)(param_1 + 0x130);
    lVar26 = (long)puVar25 - lVar21;
    do {
      if ((*(byte *)(lVar26 + 1) & 1) == 0) {
        if (((*(byte *)(lVar26 + 1) >> 1 & 1) != 0) &&
           (plVar29 = *(long **)(lVar26 + 0x10), plVar29 != (long *)0x0)) {
          *(undefined8 *)(lVar26 + 0x10) = 0;
          lVar30 = *plVar29;
          *(byte *)(lVar30 + 1) = *(byte *)(lVar30 + 1) | 2;
        }
      }
      else {
        iVar34 = *(int *)(param_1 + 0x60);
        if (iVar34 != 0) {
          if (iVar34 < 1) {
            lVar30 = 0;
          }
          else {
            iVar4 = *(int *)(param_1 + 0x58);
            iVar5 = *(int *)(param_1 + 0x5c);
            iVar3 = 0;
            if (iVar4 <= iVar5) {
              iVar3 = iVar4;
            }
            lVar30 = *(long *)(*(long *)(param_1 + 0x50) + (long)(iVar5 - iVar3) * 8);
            iVar3 = 0;
            if (iVar5 + 1 < iVar4) {
              iVar3 = iVar5 + 1;
            }
            *(int *)(param_1 + 0x5c) = iVar3;
            *(int *)(param_1 + 0x60) = iVar34 + -1;
          }
          if (*(int *)(param_1 + 0x140) < *(int *)(param_1 + 0x158)) {
            plVar29 = *(long **)(param_1 + 0x148);
            if (plVar29 != (long *)0x0) {
              *(long *)(param_1 + 0x148) = *plVar29;
            }
            *plVar29 = lVar30;
            plVar29[2] = 0;
            plVar15 = plVar29 + 1;
            *plVar15 = 0;
            lVar16 = *plVar19;
            *plVar19 = (long)plVar15;
            plVar29[2] = (long)plVar19;
            *plVar15 = lVar16;
            if (lVar16 != 0) {
              *(long **)(lVar16 + 8) = plVar15;
            }
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
          }
          else {
            plVar29 = (long *)0x0;
          }
          *(byte *)(lVar30 + 1) = *(byte *)(lVar30 + 1) | 1;
          *(long **)(lVar26 + 0x10) = plVar29;
        }
      }
      if (((*(byte *)(lVar26 + 1) >> 2 & 1) != 0) && (*(long **)(lVar26 + 0x10) != (long *)0x0)) {
        uVar14 = *(uint *)(lVar26 + 0xc);
        uVar39 = *(undefined8 *)(lVar26 + 4);
        lVar30 = **(long **)(lVar26 + 0x10);
        *(byte *)(lVar30 + 1) = *(byte *)(lVar30 + 1) | 4;
        *(ulong *)(lVar30 + 0x18) = (ulong)uVar14;
        *(undefined8 *)(lVar30 + 0x10) = uVar39;
      }
      *(undefined1 *)(lVar26 + 1) = 0;
      lVar26 = *(long *)(lVar26 + lVar21 + 8) - lVar21;
    } while (lVar26 != (long)puVar28 - lVar21);
    puVar25 = *(undefined8 **)(param_1 + 0x3c0);
  }
  puVar2 = (undefined8 *)(param_1 + 0xcc28);
  while (puVar25 != puVar28) {
    puVar22 = (undefined8 *)puVar25[1];
    *puVar25 = 0;
    puVar25[1] = 0;
    puVar25 = puVar22;
  }
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  *(undefined8 **)(param_1 + 0x3c0) = puVar28;
  *(long *)(param_1 + 0x3b8) = param_1 + 0x3b8;
  nn::os::UnlockMutex(pMVar1);
  plVar29 = *(long **)(param_1 + 0x138);
  plVar19 = (long *)(param_1 + 0x128);
  if (plVar29 != (long *)(param_1 + 0x130)) {
    plVar15 = plVar29 + -1;
    do {
      pbVar24 = (byte *)plVar29[-1];
      plVar18 = (long *)plVar29[1];
      bVar20 = pbVar24[1];
      if ((bVar20 >> 1 & 1) == 0) {
        bVar32 = bVar20;
        if ((bVar20 & 1) != 0) {
          pbVar24[1] = bVar20 & 0xfe;
          *pbVar24 = *pbVar24 | 1;
          bVar32 = bVar20 & 0xfe;
        }
        if ((bVar20 >> 2 & 1) == 0) {
          bVar20 = *pbVar24;
        }
        else {
          pbVar24[1] = bVar32 & 0xfb;
          bVar20 = *pbVar24;
        }
      }
      else {
        pbVar24[1] = 0;
        *pbVar24 = *pbVar24 & 0xfe;
        bVar20 = *pbVar24;
      }
      if ((bVar20 & 1) == 0) {
        plVar27 = (long *)plVar29[1];
        if (*plVar29 != 0) {
          *(long **)(*plVar29 + 8) = plVar27;
          plVar27 = (long *)plVar29[1];
        }
        if (plVar27 != (long *)0x0) {
          *plVar27 = *plVar29;
        }
        *plVar29 = 0;
        plVar29[1] = 0;
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + -1;
        *plVar15 = *(long *)(param_1 + 0x148);
        *(long **)(param_1 + 0x148) = plVar15;
        iVar34 = *(int *)(param_1 + 0x60);
        iVar3 = *(int *)(param_1 + 0x58);
        if (iVar34 < iVar3) {
          *(int *)(param_1 + 0x60) = iVar34 + 1;
          iVar34 = *(int *)(param_1 + 0x5c) + iVar34;
          iVar4 = 0;
          if (iVar3 <= iVar34) {
            iVar4 = iVar3;
          }
          *(byte **)(*(long *)(param_1 + 0x50) + (long)(iVar34 - iVar4) * 8) = pbVar24;
        }
      }
      plVar15 = plVar18 + -1;
      plVar29 = plVar18;
    } while (plVar15 != plVar19);
  }
  nn::os::LockMutex(pMVar1);
  puVar28 = *(undefined8 **)(param_1 + 0xcc30);
  if (puVar28 != puVar2) {
    lVar21 = (long)*(int *)(param_1 + 0xcc3c);
    plVar29 = (long *)(param_1 + 0x35f8);
    lVar26 = (long)puVar28 - lVar21;
    bVar20 = DAT_055ea180;
    bVar32 = DAT_055ea181;
    do {
      if ((*(byte *)(lVar26 + 1) & 1) == 0) {
        if (((*(byte *)(lVar26 + 1) >> 1 & 1) != 0) &&
           (plVar15 = *(long **)(lVar26 + 0x18), plVar15 != (long *)0x0)) {
          *(undefined8 *)(lVar26 + 0x18) = 0;
          lVar30 = *plVar15;
          *(byte *)(lVar30 + 1) = *(byte *)(lVar30 + 1) | 2;
        }
      }
      else {
        lVar30 = *(long *)(param_1 + 0xcc40);
        if (lVar30 != 0) {
          do {
            while (*(int *)(lVar30 + 0x20) <= *(int *)(lVar26 + 4)) {
              if (*(int *)(lVar26 + 4) <= *(int *)(lVar30 + 0x20)) {
                iVar34 = *(int *)(param_1 + 0x3f0);
                if (iVar34 == 0) {
                  bVar13 = bVar20 & 1;
                  bVar20 = 1;
                  if (bVar13 == 0) {
                    DAT_055ea180 = 1;
                  }
                }
                else {
                  uVar37 = *(undefined4 *)(lVar30 + 0x28);
                  uVar38 = *(undefined4 *)(lVar30 + 0x24);
                  if (iVar34 < 1) {
                    lVar30 = 0;
                  }
                  else {
                    iVar4 = *(int *)(param_1 + 0x3ec);
                    iVar5 = *(int *)(param_1 + 1000);
                    iVar3 = 0;
                    if (iVar5 <= iVar4) {
                      iVar3 = iVar5;
                    }
                    lVar30 = *(long *)(*(long *)(param_1 + 0x3e0) + (long)(iVar4 - iVar3) * 8);
                    *(int *)(param_1 + 0x3f0) = iVar34 + -1;
                    iVar34 = 0;
                    if (iVar4 + 1 < iVar5) {
                      iVar34 = iVar4 + 1;
                    }
                    *(int *)(param_1 + 0x3ec) = iVar34;
                  }
                  if (*(int *)(param_1 + 0x3608) < *(int *)(param_1 + 0x3620)) {
                    plVar15 = *(long **)(param_1 + 0x3610);
                    if (plVar15 != (long *)0x0) {
                      *(long *)(param_1 + 0x3610) = *plVar15;
                    }
                    *plVar15 = lVar30;
                    plVar15[2] = 0;
                    plVar18 = plVar15 + 1;
                    *plVar18 = 0;
                    lVar16 = *plVar29;
                    *plVar29 = (long)plVar18;
                    plVar15[2] = (long)plVar29;
                    *plVar18 = lVar16;
                    if (lVar16 != 0) {
                      *(long **)(lVar16 + 8) = plVar18;
                    }
                    *(int *)(param_1 + 0x3608) = *(int *)(param_1 + 0x3608) + 1;
                  }
                  else {
                    plVar15 = (long *)0x0;
                  }
                  iVar34 = *(int *)(lVar26 + 4);
                  *(char *)(lVar30 + 5) = (char)uVar38;
                  *(char *)(lVar30 + 6) = (char)((uint)uVar38 >> 8);
                  *(char *)(lVar30 + 7) = (char)((uint)uVar38 >> 0x10);
                  *(char *)(lVar30 + 8) = (char)((uint)uVar38 >> 0x18);
                  *(undefined4 *)(lVar30 + 0xc) = uVar37;
                  uVar31 = 1;
                  if (iVar34 == 0x3700 || iVar34 == 0x370e) {
                    uVar31 = 2;
                  }
                  *(undefined1 *)(lVar30 + 9) = uVar31;
                  *(byte *)(lVar30 + 1) = *(byte *)(lVar30 + 1) | 1;
                  *(long **)(lVar26 + 0x18) = plVar15;
                }
                goto LAB_029cd044;
              }
              lVar30 = *(long *)(lVar30 + 0x10);
              if (lVar30 == 0) goto LAB_029cd044;
            }
            lVar30 = *(long *)(lVar30 + 8);
          } while (lVar30 != 0);
        }
      }
LAB_029cd044:
      if ((*(byte *)(lVar26 + 1) >> 2 & 1) != 0) {
        if (*(long **)(lVar26 + 0x18) == (long *)0x0) {
          bVar13 = bVar32 & 1;
          bVar32 = 1;
          if (bVar13 == 0) {
            DAT_055ea181 = 1;
          }
        }
        else {
          uVar14 = *(uint *)(lVar26 + 0x10);
          uVar39 = *(undefined8 *)(lVar26 + 8);
          lVar30 = **(long **)(lVar26 + 0x18);
          *(byte *)(lVar30 + 1) = *(byte *)(lVar30 + 1) | 4;
          *(ulong *)(lVar30 + 0x48) = (ulong)uVar14;
          *(undefined8 *)(lVar30 + 0x40) = uVar39;
        }
      }
      *(undefined1 *)(lVar26 + 1) = 0;
      lVar26 = *(long *)(lVar26 + lVar21 + 8) - lVar21;
    } while (lVar26 != (long)puVar2 - lVar21);
    puVar28 = *(undefined8 **)(param_1 + 0xcc30);
  }
  while (puVar28 != puVar2) {
    puVar25 = (undefined8 *)puVar28[1];
    *puVar28 = 0;
    puVar28[1] = 0;
    puVar28 = puVar25;
  }
  *(undefined4 *)(param_1 + 0xcc38) = 0;
  *puVar2 = puVar2;
  *(undefined8 **)(param_1 + 0xcc30) = puVar2;
  nn::os::UnlockMutex(pMVar1);
  plVar29 = (long *)(param_1 + 0xcc70);
  plVar15 = *(long **)(param_1 + 0xcc78);
  plVar18 = (long *)PTR_DAT_04bb26a8;
  while (PTR_DAT_04bb26a8 = (undefined *)plVar18, plVar15 != plVar29) {
    plVar18 = (long *)plVar15[1];
    plVar27 = plVar18;
    if (*plVar15 != 0) {
      *(long **)(*plVar15 + 8) = plVar18;
      plVar27 = (long *)plVar15[1];
    }
    if (plVar27 != (long *)0x0) {
      *plVar27 = *plVar15;
    }
    *plVar15 = 0;
    plVar15[1] = 0;
    *(int *)(param_1 + 0xcc80) = *(int *)(param_1 + 0xcc80) + -1;
    plVar15[-3] = *(long *)(param_1 + 0xcc88);
    *(long **)(param_1 + 0xcc88) = plVar15 + -3;
    plVar15 = plVar18;
    plVar18 = (long *)PTR_DAT_04bb26a8;
  }
  lVar26 = *plVar18;
  nn::os::LockMutex((MutexType *)(lVar26 + 0x896c8));
  cVar6 = *(char *)(lVar26 + 0x89691);
  uVar35 = *(ulong *)(lVar26 + 0x89698);
  lVar21 = *(long *)(lVar26 + 0x896a0);
  nn::os::UnlockMutex((MutexType *)(lVar26 + 0x896c8));
  if (-1 < (long)uVar35) {
    lVar30 = *(long *)PTR_DAT_04bb29d0;
    lVar21 = (long)(lVar30 * (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                             (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5) / 1000 - lVar21;
    lVar26 = 0;
    if (lVar30 != 0) {
      lVar26 = lVar21 / lVar30;
    }
    lVar16 = 0;
    if (lVar30 != 0) {
      lVar16 = (lVar21 * 1000) / lVar30;
    }
    lVar26 = lVar26 * 1000;
    if (lVar21 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
      lVar26 = lVar16;
    }
    uVar35 = lVar26 + uVar35;
  }
  lVar26 = *plVar18;
  uVar14 = *(uint *)(FUN_0011e5e0 + lVar26);
  if ((uVar14 == 0xffffffff) || (*(long *)(lVar26 + 0x11e610) == 0)) {
    uVar14 = 0;
  }
  else {
    if (*(uint *)(lVar26 + 0x11e608) <= uVar14) {
      uVar14 = 0;
    }
    uVar17 = *(uint *)(*(long *)(lVar26 + 0x11e610) + (long)(int)uVar14 * 0x80 + 8);
    local_98 = (undefined1)uVar17;
    cStack_97 = (char)(uVar17 >> 8);
    cStack_96 = (char)(uVar17 >> 0x10);
    uStack_95 = (undefined1)(uVar17 >> 0x18);
    uVar14 = uVar17 - 0x20;
    if ((int)uVar17 < 0x20) {
      uVar14 = uVar17;
    }
    uVar23 = 0x1ffbf;
    if ((int)uVar17 < 0x20) {
      uVar23 = 0xfffffff8;
    }
    uVar14 = uVar23 >> (ulong)(uVar14 & 0x1f) & 1;
  }
  nn::os::LockMutex((MutexType *)(lVar26 + 0x89660));
  sVar7 = *(short *)(lVar26 + 0x895ea);
  iVar34 = *(int *)(lVar26 + 0x89620);
  nn::os::UnlockMutex((MutexType *)(lVar26 + 0x89660));
  if (iVar34 == sVar7) {
    uVar14 = 1;
  }
  plVar15 = *(long **)(param_1 + 0x3600);
  if (plVar15 != (long *)(param_1 + 0x35f8)) {
    plVar18 = plVar15 + -1;
    lVar26 = param_1 + 0xcc60;
    do {
      pbVar24 = (byte *)plVar15[-1];
      local_98 = 0;
      cStack_97 = '\0';
      uStack_95 = 0xff;
      uStack_94 = 0xff;
      plVar27 = (long *)plVar15[1];
      local_90 = 0;
      bVar20 = pbVar24[1];
      local_88 = (uint *)lVar26;
      if ((bVar20 >> 1 & 1) == 0) {
        uVar17 = (uint)*pbVar24;
        if ((bVar20 & 1) != 0) {
          bVar20 = bVar20 & 0xfe;
          uVar17 = *pbVar24 | 1;
          *pbVar24 = (byte)uVar17;
        }
        pbVar24[1] = bVar20 & 0xfb;
        cStack_96 = cVar6;
        if ((uVar17 >> 2 & 1) != 0) {
          FUN_029ce9c4(pbVar24,&local_98);
          local_98 = 1;
          bVar20 = *pbVar24;
          uVar17 = (uint)bVar20;
          if ((bVar20 >> 1 & 1) != 0) {
            uVar17 = bVar20 & 0xfffffffb;
            *pbVar24 = (byte)uVar17;
          }
        }
        if ((uVar17 & 1) == 0) goto LAB_029cd3f8;
        lVar21 = *(long *)(param_1 + 0x138);
        if ((long *)(lVar21 + -8) == plVar19) {
          lVar30 = 0;
          fVar49 = 3.4028235e+38;
        }
        else {
          fVar47 = (float)*(undefined8 *)(pbVar24 + 0x40);
          fVar43 = (float)((ulong)*(undefined8 *)(pbVar24 + 0x40) >> 0x20);
          fVar40 = (float)*(undefined8 *)(pbVar24 + 0x48);
          fVar41 = (float)((ulong)*(undefined8 *)(pbVar24 + 0x48) >> 0x20);
          if (uVar14 == 0) {
            fVar49 = 3.4028235e+38;
            lVar16 = 0;
            do {
              lVar30 = *(long *)(lVar21 + -8);
              lVar21 = *(long *)(lVar21 + 8);
              fVar42 = (float)*(undefined8 *)(lVar30 + 0x10) - fVar47;
              fVar44 = (float)((ulong)*(undefined8 *)(lVar30 + 0x10) >> 0x20) - fVar43;
              fVar45 = (float)*(undefined8 *)(lVar30 + 0x18) - fVar40;
              fVar46 = (float)((ulong)*(undefined8 *)(lVar30 + 0x18) >> 0x20) - fVar41;
              uVar17 = (uint)*(byte *)(lVar30 + 2) + (uint)pbVar24[10] & 0xff;
              fVar42 = fVar42 * fVar42;
              fVar44 = fVar44 * fVar44;
              fVar45 = fVar45 * fVar45;
              fVar46 = fVar46 * fVar46;
              auVar48._4_4_ = fVar44;
              auVar48._0_4_ = fVar42;
              auVar48._8_4_ = fVar45;
              auVar48._12_4_ = fVar46;
              auVar12._4_4_ = fVar44;
              auVar12._0_4_ = fVar42;
              auVar12._8_4_ = fVar45;
              auVar12._12_4_ = fVar46;
              auVar48 = NEON_ext(auVar48,auVar12,8,1);
              fVar42 = auVar48._0_4_ + fVar42 + auVar48._4_4_ + fVar44;
              if ((float)(uVar17 * uVar17) * 100.0 < fVar42 || fVar49 <= fVar42) {
                lVar30 = lVar16;
                fVar42 = fVar49;
              }
              fVar49 = fVar42;
              lVar16 = lVar30;
            } while ((long *)(lVar21 + -8) != plVar19);
          }
          else {
            fVar49 = 3.4028235e+38;
            lVar16 = 0;
            do {
              lVar30 = *(long *)(lVar21 + -8);
              lVar21 = *(long *)(lVar21 + 8);
              fVar42 = (float)*(undefined8 *)(lVar30 + 0x10) - fVar47;
              fVar44 = (float)((ulong)*(undefined8 *)(lVar30 + 0x10) >> 0x20) - fVar43;
              fVar45 = (float)*(undefined8 *)(lVar30 + 0x18) - fVar40;
              fVar46 = (float)((ulong)*(undefined8 *)(lVar30 + 0x18) >> 0x20) - fVar41;
              fVar42 = fVar42 * fVar42;
              fVar44 = fVar44 * fVar44;
              fVar45 = fVar45 * fVar45;
              fVar46 = fVar46 * fVar46;
              auVar10._4_4_ = fVar44;
              auVar10._0_4_ = fVar42;
              auVar10._8_4_ = fVar45;
              auVar10._12_4_ = fVar46;
              auVar11._4_4_ = fVar44;
              auVar11._0_4_ = fVar42;
              auVar11._8_4_ = fVar45;
              auVar11._12_4_ = fVar46;
              auVar48 = NEON_ext(auVar10,auVar11,8,1);
              fVar42 = auVar48._0_4_ + fVar42 + auVar48._4_4_ + fVar44;
              if (fVar49 <= fVar42) {
                lVar30 = lVar16;
                fVar42 = fVar49;
              }
              fVar49 = fVar42;
              lVar16 = lVar30;
            } while ((long *)(lVar21 + -8) != plVar19);
          }
        }
        uVar17 = uVar14;
        if (lVar30 != 0) {
          uVar17 = 1;
        }
        if (((uVar17 != 0) && (FUN_029ced54(pbVar24,&local_98), cStack_97 != '\0')) &&
           (*(int *)(param_1 + 0xcc80) < *(int *)(param_1 + 0xcc98))) {
          uVar38 = *(undefined4 *)(pbVar24 + 0xc);
          puVar28 = *(undefined8 **)(param_1 + 0xcc88);
          if (puVar28 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0xcc88) = *puVar28;
          }
          *(undefined4 *)((long)puVar28 + 4) = uVar38;
          *(float *)(puVar28 + 1) = fVar49;
          puVar28[2] = pbVar24;
          puVar28[4] = 0;
          *(undefined4 *)puVar28 = local_90;
          plVar15 = puVar28 + 3;
          *plVar15 = 0;
          lVar21 = *plVar29;
          *plVar29 = (long)plVar15;
          puVar28[4] = plVar29;
          *plVar15 = lVar21;
          if (lVar21 != 0) {
            *(long **)(lVar21 + 8) = plVar15;
          }
          *(int *)(param_1 + 0xcc80) = *(int *)(param_1 + 0xcc80) + 1;
        }
      }
      else {
        pbVar24[4] = 0;
        pbVar24[0] = 0;
        pbVar24[1] = 0;
        pbVar24[2] = 0;
        pbVar24[3] = 0;
        pbVar24[9] = 0;
        pbVar24[10] = 5;
        pbVar24[5] = 0xff;
        pbVar24[6] = 0xff;
        pbVar24[7] = 0xff;
        pbVar24[8] = 0xff;
        pbVar24[0xc] = 0;
        pbVar24[0xd] = 0;
        pbVar24[0xe] = 0;
        pbVar24[0xf] = 0;
        pbVar24[0x10] = 0;
        pbVar24[0x11] = 0;
        pbVar24[0x12] = 0;
        pbVar24[0x13] = 0;
        pbVar24[0x14] = 0;
        pbVar24[0x15] = 0;
        pbVar24[0x16] = 0xff;
        pbVar24[0x17] = 0xff;
        pbVar24[0x28] = 0xff;
        pbVar24[0x29] = 0xff;
        pbVar24[0x2a] = 0xff;
        pbVar24[0x2b] = 0xff;
        pbVar24[0x18] = 0xff;
        pbVar24[0x19] = 0xff;
        pbVar24[0x1a] = 0xff;
        pbVar24[0x1b] = 0xff;
        pbVar24[0x1c] = 0;
        pbVar24[0x1d] = 0;
        pbVar24[0x1e] = 0;
        pbVar24[0x1f] = 0;
        pbVar24[0x20] = 0xff;
        pbVar24[0x21] = 0xff;
        pbVar24[0x22] = 0xff;
        pbVar24[0x23] = 0xff;
        pbVar24[0x24] = 0;
        pbVar24[0x25] = 0;
        pbVar24[0x26] = 0;
        pbVar24[0x27] = 0;
        *(undefined8 *)(pbVar24 + 0x38) = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
        cStack_96 = cVar6;
LAB_029cd3f8:
        if (*plVar15 != 0) {
          *(long *)(*plVar15 + 8) = plVar15[1];
        }
        if ((long *)plVar15[1] != (long *)0x0) {
          *(long *)plVar15[1] = *plVar15;
        }
        *plVar15 = 0;
        plVar15[1] = 0;
        *(int *)(param_1 + 0x3608) = *(int *)(param_1 + 0x3608) + -1;
        *plVar18 = *(long *)(param_1 + 0x3610);
        *(long **)(param_1 + 0x3610) = plVar18;
        iVar34 = *(int *)(param_1 + 0x3f0);
        iVar3 = *(int *)(param_1 + 1000);
        if (iVar34 < iVar3) {
          *(int *)(param_1 + 0x3f0) = iVar34 + 1;
          iVar34 = *(int *)(param_1 + 0x3ec) + iVar34;
          iVar4 = 0;
          if (iVar3 <= iVar34) {
            iVar4 = iVar3;
          }
          *(byte **)(*(long *)(param_1 + 0x3e0) + (long)(iVar34 - iVar4) * 8) = pbVar24;
        }
      }
      plVar18 = plVar27 + -1;
      plVar15 = plVar27;
    } while (plVar18 != (long *)(param_1 + 0x35f0));
  }
  if (cVar6 != '\0') {
    FUN_029cdae0(*(undefined8 *)(param_1 + 0xcc78),*(undefined8 *)(param_1 + 0xcc70),
                 *(undefined4 *)(param_1 + 0xcc80));
  }
  uStack_95 = 0xff;
  uStack_94 = 0xff;
  plVar19 = *(long **)(param_1 + 0xcc78);
  puVar33 = (uint *)(param_1 + 0xcc60);
  local_98 = 0;
  cStack_97 = 0;
  local_90 = 0;
  plVar15 = (long *)(param_1 + 0xcc58);
  if (plVar19 == plVar29) {
    fVar49 = 0.0;
  }
  else {
    fVar49 = 0.0;
    plVar29 = plVar19 + -3;
    do {
      fVar47 = *(float *)(plVar29 + 1);
      if (2500.0 <= fVar47) {
        fVar43 = 0.1;
      }
      else {
        fVar43 = 1.0;
        if (250.0 < fVar47) {
          fVar43 = 250.0 / fVar47;
        }
      }
      fVar43 = *(float *)((long)plVar29 + 4) * fVar43;
      plVar19 = (long *)plVar19[1];
      fVar49 = fVar49 + fVar43;
      *(float *)((long)plVar29 + 4) = fVar43;
      plVar29 = plVar19 + -3;
    } while (plVar29 != plVar15);
  }
  cStack_96 = cVar6;
  local_88 = puVar33;
  uVar14 = nn::os::GetSystemTick();
  local_a8 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  uStack_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 2;
  local_a0 = (uStack_a4 ^ uStack_a4 >> 0x1e) * 0x6c078965 + 3;
  uStack_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 4;
  if (cVar6 != '\0') {
    puVar33 = &local_a8;
    uVar14 = (uint)(uVar35 / 10);
    uVar17 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
    uVar14 = uVar17 ^ uVar17 * 0x800;
    uVar23 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
    uVar17 = uVar23 ^ uVar23 * 0x800;
    uVar8 = (uVar23 ^ uVar23 >> 0x1e) * 0x6c078965 + 3;
    uVar23 = uVar8 ^ uVar8 * 0x800;
    uVar9 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
    uVar8 = uVar9 ^ uVar9 * 0x800;
    local_a8 = uVar14 >> 8 ^ uVar9 >> 0x13 ^ uVar14 ^ uVar9;
    uStack_a4 = uVar17 >> 8 ^ local_a8 >> 0x13 ^ uVar17 ^ local_a8;
    local_a0 = uVar23 >> 8 ^ uStack_a4 >> 0x13 ^ uVar23 ^ uStack_a4;
    uStack_9c = uVar8 >> 8 ^ local_a0 >> 0x13 ^ uVar8 ^ local_a0;
  }
  iVar34 = 0;
  local_74 = 0;
  local_78 = 0;
  do {
    if (*(int *)(param_1 + 0xcc80) == 0) break;
    uVar14 = *puVar33 ^ *puVar33 << 0xb;
    uVar17 = puVar33[3];
    *puVar33 = puVar33[1];
    puVar33[1] = puVar33[2];
    uVar14 = uVar14 >> 8 ^ uVar17 >> 0x13 ^ uVar14 ^ uVar17;
    puVar33[2] = uVar17;
    puVar33[3] = uVar14;
    lVar26 = *(long *)(param_1 + 0xcc70);
    plVar19 = *(long **)(param_1 + 0xcc78);
    if (*(int *)(param_1 + 0xcc80) < 1) {
      lVar26 = 0;
    }
    plVar18 = plVar19 + -3;
    plVar29 = (long *)0x0;
    if (lVar26 != 0) {
      plVar29 = (long *)(lVar26 + -0x18);
    }
    if (plVar18 != plVar15) {
      fVar47 = 0.0;
      do {
        fVar47 = fVar47 + *(float *)((long)plVar18 + 4);
        if (fVar49 * ((float)(uVar14 >> 9 | 0x3f800000) + -1.0) + 0.0 < fVar47 || plVar29 == plVar18
           ) {
          lVar26 = plVar18[2];
          bVar20 = *(byte *)(lVar26 + 5);
          if ((ulong)(long)(char)bVar20 < 6) {
            pcVar36 = (char *)((long)&local_78 + *(long *)(&DAT_0417dfd0 + (long)(char)bVar20 * 8));
            if (5 < bVar20) goto LAB_029cd890;
LAB_029cd840:
            cVar6 = *pcVar36;
            switch((ulong)(&switchD_029cd854::switchdataD_0417dfc7)[bVar20] * 4 + 0x29cd858) {
            default:
              if ('\x01' < cVar6) goto LAB_029cd890;
              break;
            case 0x29cd87c:
              if ('\x02' < cVar6) goto LAB_029cd890;
              break;
            case 0x29cd888:
              if ('\0' < cVar6) goto LAB_029cd890;
            }
            FUN_029cef4c(lVar26,&local_98);
            iVar34 = iVar34 + 1;
            *pcVar36 = *pcVar36 + '\x01';
          }
          else {
            pcVar36 = (char *)&local_78;
            if (bVar20 < 6) goto LAB_029cd840;
LAB_029cd890:
            if ((int)*plVar18 == 3) {
              FUN_029cef4c(lVar26,&local_98);
            }
          }
          if (*plVar19 != 0) {
            *(long *)(*plVar19 + 8) = plVar19[1];
          }
          if ((long *)plVar19[1] != (long *)0x0) {
            *(long *)plVar19[1] = *plVar19;
          }
          *plVar19 = 0;
          plVar19[1] = 0;
          *(int *)(param_1 + 0xcc80) = *(int *)(param_1 + 0xcc80) + -1;
          *plVar18 = *(long *)(param_1 + 0xcc88);
          *(long **)(param_1 + 0xcc88) = plVar18;
          break;
        }
        plVar19 = (long *)plVar19[1];
        plVar18 = plVar19 + -3;
      } while (plVar18 != plVar15);
    }
  } while (iVar34 < 10);
  plVar19 = *(long **)(param_1 + 0xcc78);
  while (plVar29 = plVar19, plVar18 = plVar29 + -3, plVar18 != plVar15) {
    plVar19 = (long *)plVar29[1];
    if ((int)plVar29[-3] == 3) {
      FUN_029cef4c(plVar29[-1],&local_98);
      if (*plVar29 != 0) {
        *(long *)(*plVar29 + 8) = plVar29[1];
      }
      if ((long *)plVar29[1] != (long *)0x0) {
        *(long *)plVar29[1] = *plVar29;
      }
      *plVar29 = 0;
      plVar29[1] = 0;
      *(int *)(param_1 + 0xcc80) = *(int *)(param_1 + 0xcc80) + -1;
      *plVar18 = *(long *)(param_1 + 0xcc88);
      *(long **)(param_1 + 0xcc88) = plVar18;
    }
  }
  return;
}


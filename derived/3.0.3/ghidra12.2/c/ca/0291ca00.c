
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0291ca00(void)

{
  undefined8 *puVar1;
  long ***ppplVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined8 ****ppppuVar13;
  bool bVar14;
  byte bVar15;
  int iVar16;
  uint *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  byte *pbVar20;
  uint uVar21;
  long lVar22;
  byte *pbVar23;
  byte bVar24;
  byte *pbVar25;
  byte *pbVar26;
  long ****pppplVar27;
  long ****pppplVar28;
  undefined8 *puVar29;
  long lVar30;
  uint uVar31;
  long ****pppplVar32;
  long *plVar33;
  uint uVar34;
  long lVar35;
  byte *pbVar36;
  ulong uVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  byte local_224 [4];
  long ***ppplStack_220;
  long ****local_218;
  long ****local_210;
  int local_208;
  undefined8 ****local_200;
  undefined8 ****ppppuStack_1f8;
  int local_1f0;
  undefined8 ****local_1e8 [3];
  undefined8 ****local_1d0 [3];
  undefined8 ****local_1b8 [3];
  undefined8 ****local_1a0 [3];
  undefined8 ***local_188 [3];
  undefined8 **local_170 [3];
  undefined8 *local_158 [3];
  undefined8 local_140 [3];
  float local_128 [38];
  
  puVar8 = PTR_DAT_04bb3968;
  lVar22 = *(long *)PTR_DAT_04bb3968;
  *(uint *)(lVar22 + 0xd60) = *(uint *)(lVar22 + 0xd60) & 0xfffffffd;
  **(undefined1 **)(lVar22 + 0xd30) = 0;
  lVar22 = *(long *)puVar8;
  *(uint *)(lVar22 + 0xd60) = *(uint *)(lVar22 + 0xd60) & 0xfffffffb;
  puVar7 = PTR_DAT_04bb27d0;
  plVar33 = *(long **)PTR_DAT_04bb27d0;
  bVar24 = *(byte *)(*plVar33 + 0x476);
  if (bVar24 < 2) {
    puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar21 = *puVar17 ^ *puVar17 << 0xb;
    uVar31 = puVar17[3];
    *puVar17 = puVar17[1];
    puVar17[1] = puVar17[2];
    puVar9 = PTR_DAT_04bb47c0;
    uVar21 = uVar21 >> 8 ^ uVar31 >> 0x13 ^ uVar21 ^ uVar31;
    puVar17[2] = uVar31;
    puVar17[3] = uVar21;
    *(uint *)(*(long *)puVar9 + 0x3c) = uVar21;
  }
  puVar9 = PTR_DAT_04bb39b0;
  pbVar23 = PTR_DAT_04bb32e0;
  local_128[0] = 0.0;
  local_128[1] = 0.0;
  local_128[2] = 15.0;
  local_128[3] = -18.0;
  local_128[4] = 0.0;
  local_128[5] = 15.0;
  local_128[6] = 36.0;
  local_128[7] = 0.0;
  local_128[0x18] = -9.0;
  local_128[0x19] = 0.0;
  local_128[0x1a] = 30.0;
  local_128[0x1b] = 9.0;
  local_128[8] = 15.0;
  local_128[9] = -36.0;
  local_128[10] = 0.0;
  local_128[0xb] = 15.0;
  local_128[0xc] = 9.0;
  local_128[0xd] = 0.0;
  local_128[0xe] = 0.0;
  local_128[0xf] = -9.0;
  pppplVar32 = (long ****)&local_210;
  local_128[0x10] = 0.0;
  local_128[0x11] = 0.0;
  local_128[0x12] = 27.0;
  local_128[0x13] = 0.0;
  lVar22 = *(long *)PTR_DAT_04bb5c90;
  local_128[0x14] = 0.0;
  local_128[0x15] = -27.0;
  local_128[0x16] = 0.0;
  local_128[0x17] = 0.0;
  fVar46 = *(float *)(lVar22 + 0x40);
  fVar45 = *(float *)(lVar22 + 0x44);
  fVar44 = *(float *)(lVar22 + 0x48);
  local_128[0x1c] = 0.0;
  local_128[0x1d] = 30.0;
  local_128[0x1e] = 27.0;
  local_128[0x1f] = 0.0;
  local_128[0x20] = 30.0;
  local_128[0x21] = -27.0;
  local_128[0x22] = 0.0;
  local_128[0x23] = 30.0;
  fVar47 = fVar46;
  fVar48 = fVar45;
  fVar49 = fVar44;
  if (bVar24 < 2) {
    local_208 = 0;
    local_200 = local_1e8;
    local_1e8[0] = local_1d0;
    local_1a0[0] = (undefined8 ****)0x0;
    local_1d0[0] = local_1b8;
    local_1b8[0] = local_1a0;
    local_1f0 = 4;
    local_218 = (long ****)&local_218;
    local_210 = (long ****)&local_218;
    ppppuStack_1f8 = local_200;
    FUN_02507c6c(local_224,1,1,0,0);
    puVar11 = PTR_DAT_04bb5038;
    puVar10 = PTR_DAT_04bb4718;
    uVar21 = (uint)local_224[0];
    if (local_224[0] < 8) {
      lVar22 = *(long *)puVar9;
      if (lVar22 == 0) goto LAB_0291cdbc;
LAB_0291cd78:
      pbVar26 = pbVar23;
      if (*(int *)(lVar22 + 0x15c) != 0) {
        pbVar26 = (byte *)(lVar22 + 0x158);
      }
      if (7 < *pbVar26) {
        if (*(int *)(lVar22 + 0x15c) == 0) goto LAB_0291cdcc;
        lVar22 = *(long *)puVar10;
        if (lVar22 == 0) goto LAB_0291cdcc;
        pbVar26 = (byte *)(lVar22 + 0x11a5);
        if (7 < *pbVar26) goto LAB_0291cdcc;
      }
      do {
        uVar31 = (uint)*pbVar26;
        if (7 < uVar31) {
          uVar31 = 0xff;
        }
        do {
          ppppuVar13 = local_200;
          pppplVar27 = local_210;
          pppplVar28 = local_218;
          if (uVar31 < 8 && uVar31 == uVar21) {
            if (local_208 < local_1f0) {
              if (local_200 != (undefined8 ****)0x0) {
                local_200 = (undefined8 ****)*local_200;
              }
              *(char *)ppppuVar13 = (char)uVar21;
              ppppuVar13[2] = (undefined8 ***)0x0;
              local_210 = ppppuVar13 + 1;
              *local_210 = (long ***)0x0;
              *local_210 = (long ***)&local_218;
              ppppuVar13[2] = pppplVar27;
              if (pppplVar27 != (long ****)0x0) {
                *pppplVar27 = (long ***)local_210;
              }
              goto LAB_0291ced0;
            }
          }
          else if (local_208 < local_1f0) {
            if (local_200 != (undefined8 ****)0x0) {
              local_200 = (undefined8 ****)*local_200;
            }
            *(char *)ppppuVar13 = (char)uVar21;
            local_218 = ppppuVar13 + 1;
            *local_218 = (long ***)0x0;
            ppppuVar13[2] = &local_218;
            *local_218 = (long ***)pppplVar28;
            if (pppplVar28 != (long ****)0x0) {
              pppplVar28[1] = (long ***)local_218;
            }
LAB_0291ced0:
            local_208 = local_208 + 1;
            uVar21 = (uint)local_224[0];
            if (7 < uVar21) goto LAB_0291d088;
          }
          uVar37 = (ulong)uVar21;
          do {
            if (uVar37 == 7) goto LAB_0291d080;
            uVar37 = uVar37 + 1;
            uVar18 = FUN_02507924(local_224,puVar11 + uVar37);
          } while ((uVar18 & 1) == 0);
          local_224[0] = puVar11[uVar37];
          uVar21 = (uint)local_224[0];
          if (7 < uVar21) {
LAB_0291d080:
            local_224[0] = 0xff;
            goto LAB_0291d088;
          }
          lVar22 = *(long *)puVar9;
          if (lVar22 != 0) goto LAB_0291cd78;
LAB_0291cdbc:
          pbVar26 = pbVar23;
          if (*pbVar23 < 8) break;
LAB_0291cdcc:
          pbVar26 = puVar11;
          if (*(long **)puVar7 == (long *)0x0) break;
          lVar22 = **(long **)puVar7;
          bVar24 = *(byte *)(lVar22 + 0x473);
          pbVar25 = puVar11;
          if ((long)(char)bVar24 != 0xffffffffffffffff) {
            puVar17 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
            if (7 < bVar24) {
              puVar17 = (uint *)(lVar22 + 0x48);
            }
            if ((*puVar17 & 8) != 0) {
              pbVar25 = (byte *)(lVar22 + 0x471);
            }
          }
          uVar31 = (uint)*pbVar25;
        } while (*pbVar25 < 8);
      } while( true );
    }
LAB_0291d088:
    if ((long *****)local_210 != &local_218) {
      bVar24 = *pbVar23;
      plVar33 = *(long **)puVar7;
      lVar22 = *(long *)puVar9;
      iVar16 = 0;
      lVar30 = *(long *)puVar10;
      pppplVar28 = local_210 + -1;
      pbVar26 = pbVar23;
      if (7 < bVar24) {
        pbVar26 = puVar11;
      }
      pbVar25 = (byte *)(lVar30 + 0x11a5);
      pppplVar27 = local_210;
      fVar38 = fVar46;
      fVar40 = fVar45;
      fVar41 = fVar44;
      do {
        lVar6 = (long)iVar16;
        fVar42 = local_128[lVar6 * 3 + 1];
        fVar43 = local_128[lVar6 * 3 + 2];
        if (lVar22 == 0) {
          pbVar20 = pbVar26;
          if (plVar33 != (long *)0x0 && 7 < bVar24) goto LAB_0291d190;
LAB_0291d1e4:
          uVar21 = (uint)*pbVar20;
          if (7 < uVar21) {
            uVar21 = 0xff;
          }
        }
        else {
          pbVar20 = pbVar23;
          if (*(int *)(lVar22 + 0x15c) != 0) {
            pbVar20 = (byte *)(lVar22 + 0x158);
          }
          if (*pbVar20 < 8) goto LAB_0291d1e4;
          if ((*(int *)(lVar22 + 0x15c) != 0) && (lVar30 != 0)) {
            pbVar20 = pbVar25;
            if ((7 < *pbVar25) && (pbVar20 = puVar11, plVar33 != (long *)0x0)) goto LAB_0291d190;
            goto LAB_0291d1e4;
          }
          if (plVar33 == (long *)0x0) {
            pbVar20 = puVar11;
            goto LAB_0291d1e4;
          }
LAB_0291d190:
          lVar35 = *plVar33;
          bVar15 = *(byte *)(lVar35 + 0x473);
          pbVar36 = puVar11;
          if ((long)(char)bVar15 != 0xffffffffffffffff) {
            puVar17 = (uint *)(lVar35 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
            if (7 < bVar15) {
              puVar17 = (uint *)(lVar35 + 0x48);
            }
            if ((*puVar17 & 8) != 0) {
              pbVar36 = (byte *)(lVar35 + 0x471);
            }
          }
          uVar21 = (uint)*pbVar36;
          pbVar20 = puVar11;
          if (7 < *pbVar36) goto LAB_0291d1e4;
        }
        uVar34 = (uint)*(byte *)pppplVar28;
        uVar31 = 0xff;
        if (*(byte *)pppplVar28 < 8) {
          uVar31 = uVar34;
        }
        if (7 < uVar21) {
          uVar21 = 0xff;
        }
        fVar49 = fVar44 + fVar43;
        fVar48 = fVar45 + fVar42;
        fVar47 = fVar46 + local_128[lVar6 * 3];
        if (uVar31 != uVar21) {
          fVar49 = fVar41;
          fVar48 = fVar40;
          fVar47 = fVar38;
        }
        if (uVar34 < 8) {
          if (uVar31 != uVar21) {
            uVar37 = (ulong)uVar34;
            lVar35 = uVar37 * 0x18;
            *(float *)(&DAT_054f6c88 + uVar37 * 3) = fVar46 + local_128[lVar6 * 3];
            *(float *)((long)&DAT_054f6c88 + lVar35 + 4) = fVar45 + fVar42;
            *(float *)(&DAT_054f6c90 + uVar37 * 3) = fVar44 + fVar43;
            *(undefined8 *)((long)&DAT_054f6c90 + lVar35 + 4) = 0x1900000000;
            *(undefined2 *)(&DAT_054f6c9c + lVar35) = 0;
            bVar15 = *(byte *)pppplVar28;
            bVar14 = 7 < bVar15;
            if (bVar14) {
              bVar15 = 0xff;
            }
            uVar37 = (long)(char)bVar15 & 0xffffffff;
            if (bVar14) {
              uVar37 = 0;
            }
            *(undefined1 *)((long)&DAT_054f6e08 + uVar37) = 1;
            fVar47 = fVar38;
            fVar48 = fVar40;
            fVar49 = fVar41;
          }
        }
        iVar16 = iVar16 + 1;
        pppplVar28 = (long ****)(pppplVar27[1] + -1);
        pppplVar27 = (long ****)pppplVar27[1];
        fVar38 = fVar47;
        fVar40 = fVar48;
        fVar41 = fVar49;
      } while (pppplVar28 != &ppplStack_220);
    }
    do {
      pppplVar28 = (long ****)*pppplVar32;
      pppplVar32 = pppplVar28 + 1;
    } while ((long *****)pppplVar28 != &local_218);
  }
  else {
    local_208 = 0;
    local_1e8[0] = local_1d0;
    local_200 = local_1e8;
    local_140[0] = 0;
    local_1b8[0] = local_1a0;
    local_1d0[0] = local_1b8;
    local_1a0[0] = local_188;
    local_188[0] = local_170;
    local_170[0] = local_158;
    local_158[0] = local_140;
    local_1f0 = 8;
    local_218 = (long ****)&local_218;
    local_210 = (long ****)&local_218;
    ppppuStack_1f8 = local_200;
    FUN_02507c6c(local_224,7,1,0,0);
    puVar10 = PTR_DAT_04bb5038;
    uVar21 = (uint)local_224[0];
    if (local_224[0] < 8) {
      do {
        ppppuVar13 = local_200;
        pppplVar27 = local_210;
        pppplVar28 = local_218;
        lVar22 = *plVar33;
        bVar24 = *(byte *)(lVar22 + 0x473);
        pbVar26 = puVar10;
        if ((long)(char)bVar24 != 0xffffffffffffffff) {
          puVar17 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
          if (7 < bVar24) {
            puVar17 = (uint *)(lVar22 + 0x48);
          }
          if ((*puVar17 & 8) != 0) {
            pbVar26 = (byte *)(lVar22 + 0x470);
          }
        }
        if (*pbVar26 < 8 && *pbVar26 == uVar21) {
          if (local_208 < local_1f0) {
            if (local_200 != (undefined8 ****)0x0) {
              local_200 = (undefined8 ****)*local_200;
            }
            *(char *)ppppuVar13 = (char)uVar21;
            ppppuVar13[2] = (undefined8 ***)0x0;
            local_210 = ppppuVar13 + 1;
            *local_210 = (long ***)0x0;
            *local_210 = (long ***)&local_218;
            ppppuVar13[2] = pppplVar27;
            if (pppplVar27 != (long ****)0x0) {
              *pppplVar27 = (long ***)local_210;
            }
            goto LAB_0291ccb0;
          }
        }
        else if (local_208 < local_1f0) {
          if (local_200 != (undefined8 ****)0x0) {
            local_200 = (undefined8 ****)*local_200;
          }
          *(char *)ppppuVar13 = (char)uVar21;
          local_218 = ppppuVar13 + 1;
          *local_218 = (long ***)0x0;
          ppppuVar13[2] = &local_218;
          *local_218 = (long ***)pppplVar28;
          if (pppplVar28 != (long ****)0x0) {
            pppplVar28[1] = (long ***)local_218;
          }
LAB_0291ccb0:
          local_208 = local_208 + 1;
          uVar21 = (uint)local_224[0];
          if (7 < uVar21) goto LAB_0291cf30;
        }
        uVar37 = (ulong)uVar21;
        do {
          if (uVar37 == 7) goto LAB_0291cf28;
          uVar37 = uVar37 + 1;
          uVar18 = FUN_02507924(local_224,puVar10 + uVar37);
        } while ((uVar18 & 1) == 0);
        local_224[0] = puVar10[uVar37];
        uVar21 = (uint)local_224[0];
      } while (uVar21 < 8);
LAB_0291cf28:
      local_224[0] = 0xff;
    }
LAB_0291cf30:
    if ((long *****)local_210 != &local_218) {
      iVar16 = 0;
      pppplVar28 = local_210 + -1;
      plVar33 = *(long **)puVar7;
      lVar22 = *(long *)puVar9;
      pbVar26 = pbVar23;
      if (7 < *pbVar23) {
        pbVar26 = PTR_DAT_04bb5038;
      }
      pbVar25 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
      pppplVar27 = local_210;
      do {
        if (lVar22 == 0) {
          pbVar20 = pbVar26;
          if (plVar33 != (long *)0x0 && 7 < *pbVar23) goto LAB_0291cfe0;
LAB_0291d034:
          bVar24 = *pbVar20;
          if (7 < bVar24) {
            bVar24 = 0xff;
          }
        }
        else {
          pbVar20 = pbVar23;
          if (*(int *)(lVar22 + 0x15c) != 0) {
            pbVar20 = (byte *)(lVar22 + 0x158);
          }
          if (*pbVar20 < 8) goto LAB_0291d034;
          if ((*(int *)(lVar22 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar20 = pbVar25;
            if ((7 < *pbVar25) && (pbVar20 = PTR_DAT_04bb5038, plVar33 != (long *)0x0))
            goto LAB_0291cfe0;
            goto LAB_0291d034;
          }
          if (plVar33 == (long *)0x0) {
            pbVar20 = PTR_DAT_04bb5038;
            goto LAB_0291d034;
          }
LAB_0291cfe0:
          lVar30 = *plVar33;
          bVar24 = *(byte *)(lVar30 + 0x473);
          pbVar20 = PTR_DAT_04bb5038;
          if ((long)(char)bVar24 != 0xffffffffffffffff) {
            puVar17 = (uint *)(lVar30 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
            if (7 < bVar24) {
              puVar17 = (uint *)(lVar30 + 0x48);
            }
            if ((*puVar17 & 8) != 0) {
              pbVar20 = (byte *)(lVar30 + 0x471);
            }
          }
          bVar24 = *pbVar20;
          pbVar20 = PTR_DAT_04bb5038;
          if (7 < bVar24) goto LAB_0291d034;
        }
        bVar15 = *(byte *)pppplVar28;
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        if (7 < bVar24) {
          bVar24 = 0xff;
        }
        if (bVar15 == bVar24) {
          lVar22 = (long)iVar16;
          fVar48 = fVar45 + local_128[lVar22 * 3 + 1];
          fVar47 = fVar46 + local_128[lVar22 * 3];
          fVar49 = fVar44 + local_128[lVar22 * 3 + 2];
          break;
        }
        pppplVar27 = (long ****)pppplVar27[1];
        iVar16 = iVar16 + 1;
        pppplVar28 = pppplVar27 + -1;
      } while (pppplVar28 != &ppplStack_220);
    }
    do {
      pppplVar28 = (long ****)*pppplVar32;
      pppplVar32 = pppplVar28 + 1;
    } while ((long *****)pppplVar28 != &local_218);
  }
  puVar29 = DAT_055c1b60;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    plVar33 = &DAT_055c1098;
  }
  else {
    do {
      plVar33 = puVar29 + -8;
      if (*(int *)(puVar29 + -1) == -0x78855454) goto LAB_0291d32c;
      puVar1 = puVar29 + 1;
      puVar29 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != &DAT_055c1b58);
    plVar33 = &DAT_055c1098;
  }
LAB_0291d32c:
  if (((*PTR_DAT_04bb3998 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar16 != 0)) {
    FUN_00773950(PTR_DAT_04bb3990);
    __cxa_guard_release(PTR_DAT_04bb3998);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
    uVar37 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar37 * 4) == 0x3971ce74) goto LAB_0291d37c;
      uVar37 = uVar37 + 1;
    } while (*(uint *)PTR_DAT_04bb3990 != uVar37);
  }
  uVar37 = 0;
LAB_0291d37c:
  lVar22 = *(long *)puVar9;
  if (lVar22 == 0) {
LAB_0291d3c0:
    if (7 < *pbVar23) {
LAB_0291d3cc:
      if (*(long **)puVar7 != (long *)0x0) {
        lVar22 = **(long **)puVar7;
        bVar24 = *(byte *)(lVar22 + 0x473);
        pbVar23 = PTR_DAT_04bb5038;
        if ((long)(char)bVar24 != 0xffffffffffffffff) {
          puVar17 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
          if (7 < bVar24) {
            puVar17 = (uint *)(lVar22 + 0x48);
          }
          if ((*puVar17 & 8) != 0) {
            pbVar23 = (byte *)(lVar22 + 0x471);
          }
        }
        bVar24 = *pbVar23;
        bVar14 = bVar24 < 8;
        if (!bVar14) {
          bVar24 = 0xff;
        }
        local_218 = (long ****)CONCAT71(local_218._1_7_,bVar24);
        if (bVar14) goto LAB_0291d444;
      }
      pbVar23 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar22 + 0x15c) != 0) {
      pbVar23 = (byte *)(lVar22 + 0x158);
    }
    if (7 < *pbVar23) {
      if ((*(int *)(lVar22 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar23 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0291d3c0;
      }
      goto LAB_0291d3cc;
    }
  }
  bVar24 = *pbVar23;
  if (7 < bVar24) {
    bVar24 = 0xff;
  }
  local_218 = (long ****)CONCAT71(local_218._1_7_,bVar24);
LAB_0291d444:
  if ((((DAT_055c9188 & 1) == 0) && (**(char **)(PTR_DAT_04bc3a88 + 8) == '\0')) &&
     (uVar18 = FUN_02930ce0(&DAT_055c10d0,plVar33,&local_218), (uVar18 & 1) != 0)) {
    DAT_055c1184 = (undefined4)uVar37;
    DAT_055c1180 = 0;
    _DAT_055c1198 = 0;
    DAT_055c1188 = (byte)local_218;
    if (7 < (byte)local_218) {
      DAT_055c1188 = 0xff;
    }
    DAT_055c119a = 0;
    DAT_055c116c = 0;
    lVar22 = *(long *)PTR_DAT_04bb2808;
    DAT_055c1174._0_4_ = fVar47;
    DAT_055c1174._4_4_ = fVar48;
    DAT_055c117c = fVar49;
    if (lVar22 != 0) {
      (**(code **)(*plVar33 + 0x18))(plVar33);
      iVar16 = FUN_006bd550(plVar33[1],0);
      puVar7 = PTR_DAT_04bb7ab0;
      uVar3 = *(undefined4 *)(PTR_DAT_04bb7ab0 + 4);
      if (iVar16 == 0x55b5d9de) {
        uVar3 = 1;
      }
      lVar30 = *(long *)(lVar22 + 8);
      if ((lVar30 != 0) && (*(int *)(lVar22 + 0x10) == 0)) {
        *(undefined4 *)(lVar30 + 0x33c) = uVar3;
        uVar4 = puVar7[0x14];
        *(undefined4 *)(lVar30 + 0x338) = *(undefined4 *)puVar7;
        uVar39 = *(undefined4 *)(puVar7 + 0xc);
        uVar3 = *(undefined4 *)(puVar7 + 8);
        uVar5 = puVar7[0x15];
        *(undefined4 *)(lVar30 + 0x348) = *(undefined4 *)(puVar7 + 0x10);
        *(undefined1 *)(lVar30 + 0x34c) = uVar4;
        *(undefined4 *)(lVar30 + 0x344) = uVar39;
        *(undefined4 *)(lVar30 + 0x340) = uVar3;
        *(undefined1 *)(lVar30 + 0x34d) = uVar5;
      }
    }
    ppplVar2 = (long ***)(PTR_DAT_04bb2020 + 0x10);
    local_210 = (long ****)0x40df240;
    local_218 = (long ****)ppplVar2;
    FUN_00cc93d0(*(undefined8 *)puVar8,&local_218);
    pcVar12 = DAT_055c19d0;
    local_210 = (long ****)0x4068b6c;
    local_218 = (long ****)ppplVar2;
    if (DAT_055c19d0 != "Obj_Radio_RadioGymnastics") {
      iVar16 = 0x19;
      if (DAT_055c19d8 < 0x1a) {
        iVar16 = DAT_055c19d8 + -1;
      }
      memcpy(DAT_055c19d0,"Obj_Radio_RadioGymnastics",(long)iVar16);
      pcVar12[iVar16] = '\0';
    }
    ppplVar2 = DAT_055c1a28;
    (*(code *)local_218[3])(&local_218);
    pppplVar32 = local_210;
    if ((long ****)ppplVar2 != local_210) {
      (*(code *)local_218[3])(&local_218);
      lVar22 = 0;
      do {
        if (*(char *)((long)local_210 + lVar22) == '\0') goto LAB_0291d66c;
        if (*(char *)((long)local_210 + lVar22 + 1) == '\0') {
          lVar22 = lVar22 + 1;
          goto LAB_0291d66c;
        }
        if (*(char *)((long)local_210 + lVar22 + 2) == '\0') {
          lVar22 = lVar22 + 2;
          goto LAB_0291d66c;
        }
        lVar22 = lVar22 + 3;
      } while (lVar22 != 0x80001);
      lVar22 = 0;
LAB_0291d66c:
      iVar16 = (int)lVar22;
      if (DAT_055c1a30 <= (int)lVar22) {
        iVar16 = DAT_055c1a30 + -1;
      }
      memcpy(ppplVar2,pppplVar32,(long)iVar16);
      *(char *)((long)ppplVar2 + (long)iVar16) = '\0';
    }
    uVar19 = 1;
    DAT_055c1a78 = 0;
    DAT_055c1a7c = 0;
  }
  else {
    uVar19 = 0;
  }
  return uVar19;
}


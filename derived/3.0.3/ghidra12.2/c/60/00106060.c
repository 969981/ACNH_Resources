
/* WARNING: Type propagation algorithm not settling */

uint FUN_00106060(long param_1,long *param_2,uint param_3)

{
  ushort *puVar1;
  byte *pbVar2;
  ushort *puVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  short sVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  ushort uVar20;
  byte bVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  uint local_bbc;
  char local_b18 [4];
  undefined4 local_b14;
  undefined1 auStack_b10 [8];
  short local_b08;
  byte local_aaa;
  byte local_aa9;
  ushort local_aa0;
  ushort local_a9e;
  ushort local_a96;
  ushort local_a94;
  undefined1 auStack_a88 [8];
  short local_a80;
  byte local_a21;
  ushort local_a18;
  ushort local_a16;
  long local_a00;
  undefined2 local_9f8;
  long local_9f0;
  byte local_99a;
  ushort local_990;
  ushort local_98e;
  undefined2 local_980;
  undefined1 auStack_978 [24];
  undefined2 local_960;
  long *local_950;
  long local_948;
  short local_92c;
  char local_928;
  undefined1 local_927;
  
  plVar19 = param_2 + 0x124b;
  puVar1 = (ushort *)((long)param_2 + 0x9262);
  param_3 = param_3 & 0xffff;
  pbVar2 = (byte *)((long)param_2 + 0x9266);
  puVar3 = (ushort *)(param_2 + 0x124c);
  uVar11 = *puVar3;
  local_bbc = 0;
  uVar20 = 0;
  do {
    while (uVar11 != 0) {
      uVar23 = (ulong)uVar20;
      if (((ulong)*(byte *)(param_2 + uVar23 * 0x2a + 0x29) != 0) &&
         (*(short *)((long)param_2 +
                    (ulong)*(byte *)(param_2 + uVar23 * 0x2a + 0x29) * 0x10 + uVar23 * 0x150 + 0x11c
                    ) < 0)) {
        local_980 = 1;
        FUN_0010d880(&local_a00);
        local_a00 = *plVar19 + (ulong)*(ushort *)((long)param_2 + uVar23 * 0x150 + 0x144) * 2;
        local_990 = local_990 & 0x7f;
        uVar11 = 0;
        if ((ulong)*(byte *)(param_2 + uVar23 * 0x2a + 0x29) != 0) {
          uVar11 = *(ushort *)
                    ((long)param_2 +
                    (ulong)*(byte *)(param_2 + uVar23 * 0x2a + 0x29) * 0x10 + uVar23 * 0x150 + 0x11c
                    ) & 0x1ff;
        }
        local_98e = local_98e & 0x7f | uVar11 << 7;
        local_9f8 = 0;
        FUN_00108620(param_1,param_2,param_2 + uVar23 * 0x2a + 2,&local_a00,0);
        local_bbc = local_bbc + 1;
        uVar20 = uVar20 + 1;
        goto LAB_00106394;
      }
      if (*(char *)(param_1 + 3) == '\x03') {
        uVar6 = *(ushort *)(param_2 + 0x1248);
      }
      else {
        uVar6 = *(ushort *)((long)param_2 + 0x9244);
      }
      uVar7 = uVar6 - 1;
      uVar22 = uVar6 + 6;
      if (-1 < (int)uVar7) {
        uVar22 = uVar7;
      }
      if ((0x80U >> (ulong)(uVar7 & 7) &
          (uint)*(byte *)(param_2[uVar23 * 0x2a + 0x2a] + (long)((int)uVar22 >> 3))) != 0) {
        uVar23 = (ulong)*(ushort *)((long)param_2 + uVar23 * 0x150 + 0x144);
        goto LAB_00106348;
      }
      *(undefined1 *)((long)param_2 + uVar23 * 0x150 + 0x14a) = 1;
      uVar20 = uVar20 + 1;
      if ((ushort)(uVar11 - 1) < uVar20) goto LAB_00106cf8;
    }
    *(undefined4 *)((long)param_2 + 0x147) = 0;
    param_2[0x28] = 0;
    *(undefined2 *)(param_2 + 0x12) = 1;
    FUN_0010d880(param_2 + 2);
    *(undefined2 *)((long)param_2 + 300) = 0;
    param_2[0x24] = 0;
    *(undefined4 *)(param_2 + 0x25) = 0;
    *(undefined2 *)(param_2 + 0x23) = 1;
    FUN_0010d880(param_2 + 0x13);
    *(undefined2 *)((long)param_2 + 0x13c) = 0;
    param_2[0x26] = 0;
    *(undefined4 *)(param_2 + 0x27) = 0;
    local_980 = 1;
    FUN_0010d880(&local_a00);
    local_990 = local_990 & 0x7f | *(short *)((long)param_2 + 0x9246) << 7;
    local_98e = local_98e & 0x7f | (short)param_2[0x1249] << 7;
    local_a00 = *plVar19;
    FUN_00108620(param_1,param_2,param_2 + 2,&local_a00,0);
    sVar9 = FUN_001087f0(param_2);
    if (0 < sVar9) {
      uVar20 = uVar20 + 1;
      local_bbc = local_bbc + 1;
    }
    uVar23 = 0;
LAB_00106348:
    uVar15 = (ulong)uVar20;
    uVar22 = (uint)uVar23;
    if (uVar22 == *puVar1) {
      bVar21 = *(byte *)((long)param_2 + uVar15 * 0x150 + 0x149);
      if ((uint)bVar21 + (uint)*(byte *)(param_2 + uVar15 * 0x2a + 0x29) < 2) {
        *(byte *)((long)param_2 + uVar15 * 0x150 + 0x149) = bVar21 + 1;
      }
LAB_00106390:
      uVar20 = uVar20 + 1;
    }
    else {
      if (*(char *)((long)param_2 + uVar15 * 0x150 + 0x14a) != '\0') goto LAB_00106390;
      uVar7 = *(ushort *)((long)param_2 + uVar15 * 0x150 + 0x146) + param_3;
      if (*(char *)(param_1 + 3) == '\x03') {
        if (uVar7 <= *pbVar2) goto LAB_001063d8;
LAB_00106474:
        *(undefined1 *)((long)param_2 + uVar15 * 0x150 + 0x14a) = 1;
        uVar20 = uVar20 + 1;
        *(undefined2 *)((long)param_2 + 0x9264) = 1;
      }
      else {
        if ((int)(((uint)*pbVar2 - (uint)*puVar1) +
                 (uint)*(ushort *)((long)param_2 + uVar15 * 0x150 + 0x144)) < (int)uVar7)
        goto LAB_00106474;
LAB_001063d8:
        lVar14 = *plVar19;
        FUN_0010d850(auStack_978);
        local_928 = *(char *)(param_1 + 3);
        local_927 = 0;
        if (local_928 != '\x03') {
          local_928 = '\0';
        }
        local_950 = param_2 + 0x1094;
        FUN_0011f730(*(undefined8 *)(*param_2 + 0x640),*(undefined2 *)((long)param_2 + 0x924c),0,
                     auStack_978);
        local_960 = *(undefined2 *)((long)param_2 + 0x924e);
        if ((*(byte *)(*plVar19 + uVar23 * 2) & 0xfc) == 0xd8) {
          iVar12 = 1;
          if (*(short *)(*plVar19 + uVar23 * 2 + 2) != 0) {
            iVar12 = 2;
          }
        }
        else {
          iVar12 = 1;
        }
        uVar7 = iVar12 + uVar22;
        if ((uint)*puVar1 < (uVar7 & 0xffff)) {
          bVar8 = false;
        }
        else {
          lVar14 = lVar14 + uVar23 * 2;
          bVar8 = false;
          do {
            if (local_928 == '\x05') {
              local_928 = '\0';
            }
            local_92c = (short)uVar7 - (short)uVar23;
            local_948 = lVar14;
            sVar9 = FUN_00109f40(param_1,auStack_978,1,local_b18);
            if (sVar9 == 0) {
joined_r0x00106c18:
              if (local_b18[0] == '\x01') break;
            }
            else {
              uVar25 = (uint)sVar9;
              if ((int)uVar25 < 0) {
                if ((uVar25 & 0x7f00) != 0x600) {
                  return uVar25;
                }
                break;
              }
              sVar9 = FUN_0010a610(param_1,auStack_978,&local_a00,1);
              uVar25 = (uint)sVar9;
              if (0 < (int)uVar25) {
                bVar21 = 0;
LAB_001065ec:
                do {
                  bVar5 = local_99a;
                  bVar21 = bVar21 + 1;
                  if (0x20 < bVar21) goto joined_r0x00106c58;
                  lVar24 = (long)(short)*puVar3;
                  local_a00 = lVar14;
                  if (uVar22 == 0) {
                    param_2[lVar24 * 0x2a + 0x28] = 0;
                    *(undefined4 *)((long)param_2 + lVar24 * 0x150 + 0x147) = 0;
                    *(undefined2 *)(param_2 + lVar24 * 0x2a + 0x12) = 1;
                    FUN_0010d880();
                    *(undefined2 *)((long)param_2 + lVar24 * 0x150 + 300) = 0;
                    param_2[lVar24 * 0x2a + 0x24] = 0;
                    *(undefined4 *)(param_2 + lVar24 * 0x2a + 0x25) = 0;
                    *(undefined2 *)(param_2 + lVar24 * 0x2a + 0x23) = 1;
                    FUN_0010d880(param_2 + lVar24 * 0x2a + 0x13);
                    *(undefined2 *)((long)param_2 + lVar24 * 0x150 + 0x13c) = 0;
                    param_2[lVar24 * 0x2a + 0x26] = 0;
                    *(undefined4 *)(param_2 + lVar24 * 0x2a + 0x27) = 0;
                  }
                  else {
                    memcpy(param_2 + lVar24 * 0x2a + 2,param_2 + (ulong)uVar20 * 0x2a + 2,0x150);
                  }
                  memcpy(auStack_b10,&local_a00,0x88);
                  if (*(char *)(param_1 + 3) == '\x03') {
                    if ((local_aa9 & 0xf0) != 0x50) {
                      iVar16 = (local_a96 & 0x7f) + (local_aa0 & 0x7f);
                      uVar6 = local_a9e;
                      uVar11 = local_a94;
                      goto LAB_00106740;
                    }
                    iVar12 = (local_a94 & 0x7f) + (local_a9e & 0x7f);
                    iVar16 = iVar12;
                  }
                  else {
                    iVar12 = (local_a94 & 0x7f) + (local_a9e & 0x7f);
                    iVar16 = iVar12;
                    if ((local_aa9 & 0xf0) != 0x50) {
                      uVar6 = local_aa0;
                      uVar11 = local_a96;
LAB_00106740:
                      iVar12 = (uVar11 & 0x7f) + (uVar6 & 0x7f);
                    }
                  }
                  uVar10 = iVar16 + param_3 +
                           (uint)*(ushort *)((long)param_2 + lVar24 * 0x150 + 0x146);
                  if (*(char *)(param_1 + 3) == '\x03') {
                    if (uVar10 <= *pbVar2) goto LAB_001067cc;
                  }
                  else if ((int)uVar10 <=
                           (int)((((uint)*pbVar2 + iVar12) - (uint)*puVar1) +
                                (uint)*(ushort *)((long)param_2 + lVar24 * 0x150 + 0x144)))
                  goto LAB_001067cc;
                  *(undefined2 *)((long)param_2 + 0x9264) = 1;
                  uVar10 = FUN_0010a610(param_1,auStack_978,&local_a00,1);
                  uVar25 = (uint)(short)uVar10;
                  if ((int)uVar25 < 1) goto joined_r0x00106570;
                } while( true );
              }
              bVar21 = 0;
              uVar10 = uVar25;
joined_r0x00106570:
              if (((uVar10 & 0xffff) == 0) && (bVar21 == 0)) goto joined_r0x00106c18;
              if ((short)uVar25 < 0) {
                return uVar25;
              }
joined_r0x00106c58:
              if ((uVar22 != 0) && (*puVar3 <= uVar20)) goto LAB_001064bc;
            }
            if ((*(byte *)(*plVar19 + ((ulong)uVar7 & 0xffff) * 2) & 0xfc) == 0xd8) {
              iVar12 = 1;
              if (*(short *)(*plVar19 + ((ulong)uVar7 & 0xffff) * 2 + 2) != 0) {
                iVar12 = 2;
              }
            }
            else {
              iVar12 = 1;
            }
            uVar7 = iVar12 + uVar7;
          } while ((uVar7 & 0xffff) <= (uint)*puVar1);
        }
        if (uVar22 == 0) {
          uVar11 = *puVar3;
          goto LAB_00106cf8;
        }
LAB_001064bc:
        if (!bVar8) goto LAB_00106390;
        if (uVar20 < *puVar3) {
          while (uVar23 = (ulong)uVar20,
                uVar22 == *(ushort *)((long)param_2 + uVar23 * 0x150 + 0x144)) {
            if ((((ulong)*(byte *)(param_2 + uVar23 * 0x2a + 0x29) != 0) &&
                (*(short *)((long)param_2 +
                           (ulong)*(byte *)(param_2 + uVar23 * 0x2a + 0x29) * 0x10 + uVar23 * 0x150
                           + 0x11c) < 0)) || (uVar20 = uVar20 + 1, *puVar3 <= uVar20)) break;
          }
        }
      }
    }
LAB_00106394:
    uVar11 = *puVar3;
    if ((ushort)(uVar11 - 1) < uVar20) {
LAB_00106cf8:
      if ((short)uVar11 < 1) {
        uVar20 = 0;
      }
      else {
        bVar21 = *(byte *)(param_2 + 0x29);
        bVar5 = *(byte *)((long)param_2 + 0x149);
        uVar20 = 0;
        sVar9 = 0;
        plVar19 = param_2 + 2;
        do {
          if ((uint)bVar5 + (uint)bVar21 <=
              (uint)*(byte *)((long)param_2 + 0x149) + (uint)*(byte *)(param_2 + 0x29)) {
            if (param_2 + 2 != plVar19) {
              memcpy(plVar19,param_2 + 2,0x150);
              uVar11 = *puVar3;
            }
            plVar19 = plVar19 + 0x2a;
            uVar20 = uVar20 + 1;
          }
          sVar9 = sVar9 + 1;
          param_2 = param_2 + 0x2a;
        } while (sVar9 < (short)uVar11);
      }
      *puVar3 = uVar20;
      return local_bbc;
    }
  } while( true );
LAB_001067cc:
  plVar17 = (long *)*param_2;
  if (*plVar17 == local_9f0) {
    lVar18 = 0;
  }
  else if (plVar17[10] == local_9f0) {
    lVar18 = 1;
  }
  else if (plVar17[0x14] == local_9f0) {
    lVar18 = 2;
  }
  else if (plVar17[0x1e] == local_9f0) {
    lVar18 = 3;
  }
  else if (plVar17[0x28] == local_9f0) {
    lVar18 = 4;
  }
  else if (plVar17[0x32] == local_9f0) {
    lVar18 = 5;
  }
  else if (plVar17[0x3c] == local_9f0) {
    lVar18 = 6;
  }
  else if (plVar17[0x46] == local_9f0) {
    lVar18 = 7;
  }
  else if (plVar17[0x50] == local_9f0) {
    lVar18 = 8;
  }
  else if (plVar17[0x5a] == local_9f0) {
    lVar18 = 9;
  }
  else if (plVar17[100] == local_9f0) {
    lVar18 = 10;
  }
  else if (plVar17[0x6e] == local_9f0) {
    lVar18 = 0xb;
  }
  else if (plVar17[0x78] == local_9f0) {
    lVar18 = 0xc;
  }
  else if (plVar17[0x82] == local_9f0) {
    lVar18 = 0xd;
  }
  else if (plVar17[0x8c] == local_9f0) {
    lVar18 = 0xe;
  }
  else if (plVar17[0x96] == local_9f0) {
    lVar18 = 0xf;
  }
  else if (plVar17[0xa0] == local_9f0) {
    lVar18 = 0x10;
  }
  else if (plVar17[0xaa] == local_9f0) {
    lVar18 = 0x11;
  }
  else if (plVar17[0xb4] == local_9f0) {
    lVar18 = 0x12;
  }
  else {
    if (plVar17[0xbe] != local_9f0) goto LAB_00106994;
    lVar18 = 0x13;
  }
  local_b14 = (undefined4)plVar17[lVar18 * 10 + 6];
LAB_00106994:
  uVar10 = (bVar5 >> 4) - 1;
  if (uVar10 != 0) {
    do {
      sVar9 = FUN_0010be60(param_1,&local_a00,auStack_a88,&local_b14);
      uVar25 = (uint)sVar9;
      if ((int)uVar25 < 0) {
        return uVar25;
      }
      uVar13 = (uint)local_a16;
      uVar4 = uVar13 & 0x7f;
      if (1 < (byte)((local_a21 >> 4) - 5)) {
        uVar13 = (uint)local_a18;
      }
      if (*(char *)(param_1 + 3) == '\x03') {
        if ((local_aa9 & 0xf0) != 0x50) {
          iVar16 = (local_a96 & 0x7f) + (local_aa0 & 0x7f);
          uVar6 = local_a94;
          uVar11 = local_a9e;
          goto LAB_00106a80;
        }
        iVar12 = (local_a94 & 0x7f) + (local_a9e & 0x7f);
        iVar16 = iVar12;
      }
      else {
        iVar12 = (local_a94 & 0x7f) + (local_a9e & 0x7f);
        iVar16 = iVar12;
        if ((local_aa9 & 0xf0) != 0x50) {
          uVar6 = local_a96;
          uVar11 = local_aa0;
LAB_00106a80:
          iVar12 = (uVar6 & 0x7f) + (uVar11 & 0x7f);
        }
      }
      uVar4 = uVar4 + param_3 + iVar16 + (uint)*(ushort *)((long)param_2 + lVar24 * 0x150 + 0x146);
      if (*(char *)(param_1 + 3) == '\x03') {
        if (*pbVar2 < uVar4) goto LAB_00106b44;
      }
      else if ((int)(((iVar12 + (uVar13 & 0x7f) + (uint)*pbVar2) - (uint)*puVar1) +
                    (uint)*(ushort *)((long)param_2 + lVar24 * 0x150 + 0x144)) < (int)uVar4) {
LAB_00106b44:
        local_aaa = local_aaa + (char)uVar10 * -0x10 & 0xf0;
        break;
      }
      uVar11 = local_a9e;
      if (1 < (byte)((local_aa9 >> 4) - 5)) {
        uVar11 = local_aa0;
      }
      local_aa0 = local_aa0 & 0xff80 | uVar11 + (short)uVar13 & 0x7f;
      local_a9e = local_a16 & 0xff80 | local_a9e + local_a16 & 0x7f;
      if (local_b08 < local_a80) {
        local_b08 = local_a80;
      }
      memcpy(&local_a00,auStack_a88,0x88);
      uVar10 = uVar10 - 1;
    } while ((uVar10 & 0xff) != 0);
  }
  sVar9 = FUN_00108620(param_1,param_2,param_2 + lVar24 * 0x2a + 2,auStack_b10,0);
  uVar10 = uVar25;
  if (sVar9 == 0) {
    bVar8 = true;
    goto joined_r0x00106570;
  }
  sVar9 = FUN_001087f0(param_2);
  if (0 < sVar9) {
    local_bbc = local_bbc + 1;
    uVar11 = uVar20 + 1;
    if (uVar22 == 0) {
      if (uVar11 <= *puVar3) {
        uVar20 = uVar11;
      }
    }
    else {
      if (*puVar3 <= uVar11) {
        bVar8 = true;
        uVar20 = uVar11;
        goto joined_r0x00106570;
      }
      uVar20 = uVar11;
    }
  }
  bVar8 = true;
  sVar9 = FUN_0010a610(param_1,auStack_978,&local_a00,1);
  uVar25 = (uint)sVar9;
  uVar10 = uVar25;
  if ((int)uVar25 < 1) goto joined_r0x00106570;
  goto LAB_001065ec;
}


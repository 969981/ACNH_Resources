
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dabb40(ulong param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  byte bVar21;
  ulong uVar22;
  long lVar23;
  byte *pbVar24;
  byte *pbVar25;
  uint local_94;
  long local_88;
  byte local_7c [4];
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_04bb27d0;
  iVar2 = *(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0xaa0);
  FUN_0081686c(*(undefined8 *)PTR_DAT_04bb3448);
  puVar8 = PTR_DAT_04bb32e8;
  FUN_00a81c00(*(undefined8 *)PTR_DAT_04bb32e8);
  if (iVar2 != 3) {
    lVar23 = *(long *)PTR_DAT_04bb30a0;
    lVar15 = *(long *)PTR_DAT_04bb46b0;
    if (lVar15 == 0) {
LAB_01dabc18:
      lVar15 = 0;
      plVar17 = _DAT_00000028;
    }
    else {
      puVar16 = *(undefined8 **)(lVar15 + 0x10);
      if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
        lVar14 = (**(code **)(*(long *)*puVar16 + 0x38))();
        lVar15 = 0;
        if (lVar14 != 0) {
          lVar15 = lVar14 + 0x70;
        }
        plVar17 = *(long **)(lVar15 + 0x28);
      }
      else {
        if ((puVar16 == (undefined8 *)0x0) || ((long *)puVar16[0x26] == (long *)0x0))
        goto LAB_01dabc18;
        lVar15 = (**(code **)(*(long *)puVar16[0x26] + 0x38))();
        plVar17 = *(long **)(lVar15 + 0x28);
      }
    }
    if ((plVar17 == (long *)0x0) || ((undefined8 *)*plVar17 == (undefined8 *)0x0)) {
      FUN_00930750(lVar23 + 0x651f0,*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x1e35f0);
    }
    else {
      uVar18 = (*(code *)**(undefined8 **)*plVar17)();
      FUN_00930750(lVar23 + 0x651f0,*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8) + 0x1e35f0);
      if ((((uVar18 & 1) != 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar16 != (undefined8 *)0x0)) {
        (**(code **)*puVar16)();
      }
    }
  }
  if (*(long *)PTR_DAT_04bb6270 != 0) {
    FUN_00a715d0(*(long *)PTR_DAT_04bb6270,1);
  }
  lVar15 = *(long *)PTR_DAT_04bb4778;
  if (lVar15 != 0) {
    memset((void *)(lVar15 + 0x2a58),0,0x4800);
    *(undefined2 *)(lVar15 + 0x87e0) = 0;
    *(undefined4 *)(lVar15 + 0x9150) = 0;
  }
  FUN_022c0370();
  puVar6 = PTR_DAT_04bc2f38;
  uVar11 = 0;
  *PTR_DAT_04bc2da0 = 0xff;
  do {
    uVar18 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    lVar15 = (long)(uVar18 << 0x20) >> 0x1a;
    *(undefined8 *)(puVar6 + lVar15 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + lVar15 + 0x20) = 0;
    *(undefined4 *)(puVar6 + lVar15 + 0x30) = 0;
    *(undefined8 *)(puVar6 + lVar15 + 0x34) = 0xffff000000000000;
    puVar6[lVar15 + 0x3e] = 0;
    *(undefined2 *)(puVar6 + lVar15 + 0x3c) = 0;
  } while (uVar11 != 0x14);
  DAT_04c47fa4 = 0xe;
  DAT_0514f75a = 0;
  DAT_0514f758 = 0xeff;
  FUN_020ea8b0(*(undefined8 *)PTR_DAT_04bb4760);
  uVar18 = 0;
  lVar15 = *(long *)PTR_DAT_04bb4768;
  do {
    uVar22 = uVar18 << 1;
    uVar5 = uVar18 >> 0x1f;
    uVar11 = (int)uVar18 + 1;
    uVar18 = (ulong)uVar11;
    *(undefined2 *)(lVar15 + 0x30 + (-uVar5 & 0xfffffffe00000000 | uVar22)) = 0;
  } while (uVar11 != 0x6d);
  puVar19 = *(undefined4 **)PTR_DAT_04bb5010;
  *puVar19 = 0;
  *(undefined *)(puVar19 + 1) = *PTR_DAT_04bb5018;
  *(undefined8 *)(puVar19 + 2) = 0xffffffff;
  FUN_0219f990(&DAT_053fe348,0);
  FUN_021c279c(&DAT_053fe348);
  FUN_021c9ab0(&DAT_053fe348);
  FUN_021c9dac(&DAT_053fe348,1);
  lVar15 = *(long *)PTR_DAT_04bb3968 + 0x1320;
  FUN_0208b870(lVar15,0,0,0);
  FUN_0208b870(lVar15,1,0,0);
  FUN_0208ca1c(lVar15);
  FUN_021a17a0(&DAT_053fe348,1);
  FUN_021a9828(&DAT_053fe348);
  FUN_021a5380(&DAT_053fe348,1,1,1,0);
  FUN_021a5c80(&DAT_053fe348,0,1);
  puVar6 = PTR_DAT_04bb2020;
  DAT_054542d8 = 2;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "SeasonEventIndoorSceneChangeUpdate";
  FUN_02743234(&local_78,1);
  if (*(long *)PTR_DAT_04bbc218 != 0) {
    FUN_01391530();
  }
  *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) =
       *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) | 2;
  FUN_033fb600();
  lVar15 = *(long *)PTR_DAT_04bb4df8;
  *(undefined1 *)(lVar15 + 0x48a8) = 0xff;
  sVar4 = *(short *)PTR_DAT_04bb3170;
  if (*(short *)(lVar15 + 0x4858) != sVar4) {
    *(short *)(lVar15 + 0x4858) = sVar4;
  }
  if (*(short *)(lVar15 + 0x485a) != sVar4) {
    *(short *)(lVar15 + 0x485a) = sVar4;
  }
  if (*(short *)(lVar15 + 0x485c) != sVar4) {
    *(short *)(lVar15 + 0x485c) = sVar4;
  }
  if (*(short *)(lVar15 + 0x485e) != sVar4) {
    *(short *)(lVar15 + 0x485e) = sVar4;
  }
  if (*(short *)(lVar15 + 0x4860) != sVar4) {
    *(short *)(lVar15 + 0x4860) = sVar4;
  }
  *(undefined8 *)(lVar15 + 0x4874) = 0;
  puVar9 = PTR_DAT_04bb39b0;
  pbVar25 = PTR_DAT_04bb32e0;
  pbVar20 = pbVar25;
  if (iVar2 == 3) {
    lVar15 = *(long *)PTR_DAT_04bb39b0;
    pbVar24 = PTR_DAT_04bb32e0;
    if (lVar15 == 0) {
      if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01dac0b0;
LAB_01dac114:
      bVar21 = *pbVar24;
      if (7 < bVar21) {
        bVar21 = 0xff;
      }
      local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar21);
    }
    else {
      if (*(int *)(lVar15 + 0x15c) != 0) {
        pbVar24 = (byte *)(lVar15 + 0x158);
      }
      if ((*pbVar24 < 8) ||
         (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar24 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar24 < 8))))
      goto LAB_01dac114;
LAB_01dac0b0:
      if (*(long **)puVar7 == (long *)0x0) {
LAB_01dac10c:
        pbVar24 = PTR_DAT_04bb5038;
        goto LAB_01dac114;
      }
      lVar15 = **(long **)puVar7;
      bVar21 = *(byte *)(lVar15 + 0x473);
      pbVar24 = PTR_DAT_04bb5038;
      if ((long)(char)bVar21 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
        if (7 < bVar21) {
          puVar1 = (uint *)(lVar15 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar24 = (byte *)(lVar15 + 0x471);
        }
      }
      bVar21 = *pbVar24;
      bVar10 = 7 < bVar21;
      if (bVar10) {
        bVar21 = 0xff;
      }
      local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar21);
      if (bVar10) goto LAB_01dac10c;
    }
    FUN_0267eb10(&local_78);
    lVar15 = *(long *)puVar9;
    if (lVar15 != 0) goto LAB_01dac138;
LAB_01dac6f8:
    if (*pbVar25 < 8) goto LAB_01dac76c;
LAB_01dac708:
    if (*(long **)puVar7 == (long *)0x0) {
LAB_01dac764:
      pbVar20 = PTR_DAT_04bb5038;
      goto LAB_01dac76c;
    }
    lVar15 = **(long **)puVar7;
    bVar21 = *(byte *)(lVar15 + 0x473);
    pbVar20 = PTR_DAT_04bb5038;
    if ((long)(char)bVar21 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
      if (7 < bVar21) {
        puVar1 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar20 = (byte *)(lVar15 + 0x471);
      }
    }
    bVar21 = *pbVar20;
    bVar10 = 7 < bVar21;
    if (bVar10) {
      bVar21 = 0xff;
    }
    local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar21);
    if (bVar10) goto LAB_01dac764;
  }
  else {
    lVar15 = *(long *)PTR_DAT_04bb6c70;
    if (((*(char *)(lVar15 + 0x13271) == '\0') && (*(char *)(lVar15 + 0x26509) == '\0')) &&
       ((*(char *)(lVar15 + 0x397a1) == '\0' &&
        ((((*(char *)(lVar15 + 0x4ca39) == '\0' && (*(char *)(lVar15 + 0x5fcd1) == '\0')) &&
          (*(char *)(lVar15 + 0x72f69) == '\0')) &&
         ((*(char *)(lVar15 + 0x86201) == '\0' && (*(char *)(lVar15 + 0x99499) == '\0')))))))) {
      lVar15 = *(long *)PTR_DAT_04bb39b0;
      pbVar24 = PTR_DAT_04bb32e0;
      if (lVar15 == 0) {
        if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01dac194;
LAB_01dac1f8:
        local_7c[0] = *pbVar24;
        if (7 < local_7c[0]) {
          local_7c[0] = 0xff;
        }
      }
      else {
        if (*(int *)(lVar15 + 0x15c) != 0) {
          pbVar24 = (byte *)(lVar15 + 0x158);
        }
        if ((*pbVar24 < 8) ||
           (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (pbVar24 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar24 < 8))))
        goto LAB_01dac1f8;
LAB_01dac194:
        if (*(long **)puVar7 == (long *)0x0) {
LAB_01dac1f0:
          pbVar24 = PTR_DAT_04bb5038;
          goto LAB_01dac1f8;
        }
        lVar15 = **(long **)puVar7;
        bVar21 = *(byte *)(lVar15 + 0x473);
        pbVar24 = PTR_DAT_04bb5038;
        if ((long)(char)bVar21 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
          if (7 < bVar21) {
            puVar1 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar24 = (byte *)(lVar15 + 0x471);
          }
        }
        local_7c[0] = *pbVar24;
        if (7 < local_7c[0]) goto LAB_01dac1f0;
      }
      if (((param_1 & 1) == 0) && (lVar15 = *(long *)PTR_DAT_04bb46b0, lVar15 != 0)) {
        puVar16 = *(undefined8 **)(lVar15 + 0x10);
        if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
          local_88 = (**(code **)(*(long *)*puVar16 + 0x38))();
          if (local_88 != 0) {
            local_88 = local_88 + 0x70;
            goto LAB_01dac27c;
          }
        }
        else if (((puVar16 != (undefined8 *)0x0) && ((long *)puVar16[0x26] != (long *)0x0)) &&
                (local_88 = (**(code **)(*(long *)puVar16[0x26] + 0x38))(), local_88 != 0)) {
LAB_01dac27c:
          if ((*(long *)(local_88 + 0xd0) == 0) ||
             (puVar16 = *(undefined8 **)(*(long *)(local_88 + 0xd0) + 0x10),
             puVar16 == (undefined8 *)0x0)) {
            local_94 = 0;
          }
          else {
            local_94 = (**(code **)*puVar16)();
          }
          local_78 = puVar6 + 0x10;
          pcStack_70 = "InducedNpcNum";
          uVar11 = FUN_0274bce0(local_7c,&local_78);
          if (0 < (int)uVar11) {
            uVar18 = 0;
            pbVar24 = &DAT_05407648;
            do {
              if (((uVar18 < 3) && (uVar22 = (ulong)*pbVar24, uVar22 < 0x23)) &&
                 ((pbVar24[1] <= (byte)PTR_DAT_04bc27f0[uVar22] &&
                  ((*(uint *)(PTR_DAT_04bc2a20 + uVar22 * 4) >> (ulong)(pbVar24[1] & 0x1f) & 1) != 0
                  )))) {
                iVar13 = FUN_026b0f90(pbVar24);
                if (iVar13 == 1) {
                  if ((*(long *)(local_88 + 0xd0) != 0) &&
                     (plVar17 = *(long **)(*(long *)(local_88 + 0xd0) + 0x20),
                     plVar17 != (long *)0x0)) {
                    local_78 = *(undefined **)(local_88 + 0xb0);
                    pcStack_70 = *(char **)(local_88 + 0xb8);
                    local_68 = 0x1e3388;
                    (**(code **)(*plVar17 + 0x20))(plVar17,&local_78);
                  }
                  uVar22 = FUN_027e9ff0(*(long *)(local_88 + 0xb8) + *(long *)(local_88 + 0xb0),
                                        pbVar24);
                  if ((uVar22 & 1) != 0) goto LAB_01dac340;
                }
                if ((*(long *)(local_88 + 0xd0) != 0) &&
                   (plVar17 = *(long **)(*(long *)(local_88 + 0xd0) + 0x20), plVar17 != (long *)0x0)
                   ) {
                  local_78 = *(undefined **)(local_88 + 0xb0);
                  pcStack_70 = *(char **)(local_88 + 0xb8);
                  local_68 = 0x1e3388;
                  (**(code **)(*plVar17 + 0x20))(plVar17,&local_78);
                }
                lVar15 = *(long *)(local_88 + 0xb8) + *(long *)(local_88 + 0xb0);
                uVar12 = FUN_027dc5e8(lVar15);
                lVar15 = lVar15 + 0xbf670;
                lVar23 = lVar15 + (ulong)uVar12 * 0x13230;
                if (3 < uVar12) {
                  lVar23 = lVar15;
                }
                FUN_026b1890(lVar23,pbVar24);
                FUN_02690d60(lVar23);
                FUN_026b0ab8(lVar23);
              }
LAB_01dac340:
              uVar18 = uVar18 + 1;
              pbVar24 = pbVar24 + 0x13230;
            } while (uVar11 != uVar18);
          }
          uVar18 = (ulong)DAT_05440cd8;
          if (((uVar18 < 0x23) && (DAT_05440cd9 <= (byte)PTR_DAT_04bc27f0[uVar18])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) >> (ulong)(DAT_05440cd9 & 0x1f) & 1) != 0))
          {
            if ((*(long *)(local_88 + 0xd0) != 0) &&
               (plVar17 = *(long **)(*(long *)(local_88 + 0xd0) + 0x20), plVar17 != (long *)0x0)) {
              local_78 = *(undefined **)(local_88 + 0xb0);
              pcStack_70 = *(char **)(local_88 + 0xb8);
              local_68 = 0x1e3388;
              (**(code **)(*plVar17 + 0x20))(plVar17,&local_78);
            }
            lVar15 = *(long *)(local_88 + 0xb8) + *(long *)(local_88 + 0xb0);
            uVar11 = FUN_027dc5e8(lVar15);
            lVar15 = lVar15 + 0xbf670;
            lVar23 = lVar15 + (ulong)uVar11 * 0x13230;
            if (3 < uVar11) {
              lVar23 = lVar15;
            }
            FUN_026b1890(lVar23,&DAT_05440cd8);
            FUN_02690d60(lVar23);
            FUN_026b0ab8(lVar23);
          }
          if ((((local_94 & 1) != 0) && (*(long *)(local_88 + 0xd0) != 0)) &&
             (puVar16 = *(undefined8 **)(*(long *)(local_88 + 0xd0) + 0x18),
             puVar16 != (undefined8 *)0x0)) {
            (**(code **)*puVar16)();
          }
        }
      }
      local_78 = puVar6 + 0x10;
      pcStack_70 = "InducedNpcNum";
      FUN_0274bfe8(local_7c,&local_78,0);
      memset(&DAT_05407648,0,0x13230);
      FUN_0268abb0(&DAT_05407648);
      memset(&DAT_0541a878,0,0x13230);
      FUN_0268abb0(&DAT_0541a878);
      memset(&DAT_0542daa8,0,0x13230);
      FUN_0268abb0(&DAT_0542daa8);
      memset(&DAT_05440cd8,0,0x13230);
      FUN_0268abb0(&DAT_05440cd8);
    }
    lVar15 = *(long *)puVar9;
    pbVar24 = pbVar25;
    if (lVar15 == 0) {
      if (7 < *pbVar25) goto LAB_01dac644;
LAB_01dac6a8:
      bVar21 = *pbVar24;
      if (7 < bVar21) {
        bVar21 = 0xff;
      }
      local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar21);
    }
    else {
      if (*(int *)(lVar15 + 0x15c) != 0) {
        pbVar24 = (byte *)(lVar15 + 0x158);
      }
      if ((*pbVar24 < 8) ||
         (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar24 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar24 < 8))))
      goto LAB_01dac6a8;
LAB_01dac644:
      if (*(long **)puVar7 == (long *)0x0) {
LAB_01dac6a0:
        pbVar24 = PTR_DAT_04bb5038;
        goto LAB_01dac6a8;
      }
      lVar15 = **(long **)puVar7;
      bVar21 = *(byte *)(lVar15 + 0x473);
      pbVar24 = PTR_DAT_04bb5038;
      if ((long)(char)bVar21 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
        if (7 < bVar21) {
          puVar1 = (uint *)(lVar15 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar24 = (byte *)(lVar15 + 0x471);
        }
      }
      bVar21 = *pbVar24;
      bVar10 = 7 < bVar21;
      if (bVar10) {
        bVar21 = 0xff;
      }
      local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar21);
      if (bVar10) goto LAB_01dac6a0;
    }
    FUN_0267eb10(&local_78);
    lVar15 = *(long *)PTR_DAT_04bb30a0;
    *(undefined4 *)(lVar15 + 0x653f4) = 1;
    *(undefined8 *)(lVar15 + 0x653ec) = *(undefined8 *)(*(long *)puVar8 + 0x4060);
    lVar15 = *(long *)puVar9;
    if (lVar15 == 0) goto LAB_01dac6f8;
LAB_01dac138:
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar20 = (byte *)(lVar15 + 0x158);
    }
    if ((7 < *pbVar20) &&
       (((*(int *)(lVar15 + 0x15c) == 0 || (*(long *)PTR_DAT_04bb4718 == 0)) ||
        (pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < *pbVar20)))) goto LAB_01dac708;
LAB_01dac76c:
    bVar21 = *pbVar20;
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar21);
  }
  FUN_0264f5a0(&local_78);
  FUN_01525810(*(undefined8 *)PTR_DAT_04bb4c80);
  lVar15 = *(long *)puVar9;
  pbVar20 = pbVar25;
  if (lVar15 == 0) {
    if (7 < *pbVar25) goto LAB_01dac7fc;
LAB_01dac860:
    bVar21 = *pbVar20;
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar21);
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar20 = (byte *)(lVar15 + 0x158);
    }
    if ((*pbVar20 < 8) ||
       (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar20 < 8)))) goto LAB_01dac860;
LAB_01dac7fc:
    if (*(long **)puVar7 == (long *)0x0) {
LAB_01dac858:
      pbVar20 = PTR_DAT_04bb5038;
      goto LAB_01dac860;
    }
    lVar15 = **(long **)puVar7;
    bVar21 = *(byte *)(lVar15 + 0x473);
    pbVar20 = PTR_DAT_04bb5038;
    if ((long)(char)bVar21 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
      if (7 < bVar21) {
        puVar1 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar20 = (byte *)(lVar15 + 0x471);
      }
    }
    bVar21 = *pbVar20;
    bVar10 = 7 < bVar21;
    if (bVar10) {
      bVar21 = 0xff;
    }
    local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar21);
    if (bVar10) goto LAB_01dac858;
  }
  FUN_0253b9d0(&local_78);
  FUN_013d8a60(*(undefined8 *)PTR_DAT_04bb4798);
  FUN_013d6300(*(undefined8 *)PTR_DAT_04bb47a0);
  FUN_02971a60(*(undefined8 *)PTR_DAT_04bb47a8);
  FUN_029377c0(*(undefined8 *)PTR_DAT_04bb47b8);
  FUN_0142b16c(*(undefined8 *)PTR_DAT_04bb4208);
  if (*(long *)PTR_DAT_04bb4790 != 0) {
    FUN_018dc540();
  }
  if (iVar2 != 3) {
    lVar15 = *(long *)PTR_DAT_04bb4128;
    *(undefined4 *)(lVar15 + 0x2b4) = 7;
    *(undefined8 *)(lVar15 + 0x2b8) = 0;
    *(undefined8 *)(lVar15 + 0x2c0) = 0;
    *(undefined4 *)(lVar15 + 0x2c8) = 7;
    *(undefined4 *)(lVar15 + 0x2dc) = 7;
    *(undefined8 *)(lVar15 + 0x2e0) = 0;
    *(undefined8 *)(lVar15 + 0x2e8) = 0;
    *(undefined4 *)(lVar15 + 0x2f0) = 7;
    *(undefined4 *)(lVar15 + 0x304) = 7;
    *(undefined8 *)(lVar15 + 0x310) = 0;
    *(undefined8 *)(lVar15 + 0x308) = 0;
    *(undefined4 *)(lVar15 + 0x318) = 7;
    *(undefined4 *)(lVar15 + 0x32c) = 7;
    *(undefined8 *)(lVar15 + 0x330) = 0;
    *(undefined8 *)(lVar15 + 0x338) = 0;
    *(undefined8 *)(lVar15 + 0x340) = 7;
    *(undefined8 *)(lVar15 + 0x2a4) = 0;
    *(undefined8 *)(lVar15 + 0x2ac) = 0;
    *(undefined8 *)(lVar15 + 0x2cc) = 0;
    *(undefined8 *)(lVar15 + 0x2d4) = 0;
    *(undefined8 *)(lVar15 + 0x2f4) = 0;
    *(undefined8 *)(lVar15 + 0x2fc) = 0;
    *(undefined8 *)(lVar15 + 0x31c) = 0;
    *(undefined8 *)(lVar15 + 0x324) = 0;
    uVar3 = *(undefined4 *)PTR_DAT_04bb3238;
    *(undefined4 *)(lVar15 + 0x34c) = 0;
    *(undefined4 *)(lVar15 + 0x354) = 0;
    *(undefined4 *)(lVar15 + 0x35c) = 0;
    *(undefined4 *)(lVar15 + 0x364) = 0;
    *(undefined4 *)(lVar15 + 0x36c) = 0;
    *(undefined4 *)(lVar15 + 0x374) = 0;
    *(undefined2 *)(lVar15 + 0x270) = 0;
    *(undefined4 *)(lVar15 + 0x348) = uVar3;
    *(undefined4 *)(lVar15 + 0x350) = uVar3;
    *(undefined4 *)(lVar15 + 0x358) = uVar3;
    *(undefined4 *)(lVar15 + 0x360) = uVar3;
    *(undefined4 *)(lVar15 + 0x368) = uVar3;
    *(undefined4 *)(lVar15 + 0x370) = uVar3;
    *(undefined4 *)(lVar15 + 0x378) = uVar3;
  }
  lVar15 = *(long *)puVar9;
  if (lVar15 == 0) {
LAB_01dac9d4:
    if (7 < *pbVar25) {
LAB_01dac9e0:
      if (*(long **)puVar7 != (long *)0x0) {
        lVar15 = **(long **)puVar7;
        bVar21 = *(byte *)(lVar15 + 0x473);
        pbVar20 = PTR_DAT_04bb5038;
        if ((long)(char)bVar21 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
          if (7 < bVar21) {
            puVar1 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar20 = (byte *)(lVar15 + 0x471);
          }
        }
        bVar21 = *pbVar20;
        bVar10 = bVar21 < 8;
        if (!bVar10) {
          bVar21 = 0xff;
        }
        local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar21);
        if (bVar10) goto LAB_01daca58;
      }
      pbVar25 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar25 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar25) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar25 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01dac9d4;
      }
      goto LAB_01dac9e0;
    }
  }
  bVar21 = *pbVar25;
  if (7 < bVar21) {
    bVar21 = 0xff;
  }
  local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar21);
LAB_01daca58:
  FUN_027a6b20(&local_78);
  return;
}


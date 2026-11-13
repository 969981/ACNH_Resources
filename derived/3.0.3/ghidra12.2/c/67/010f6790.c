
void FUN_010f6790(long *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  uint uVar13;
  long *plVar14;
  short *psVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 local_1f8;
  undefined1 *local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4 [63];
  undefined1 local_1a5;
  undefined8 local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined1 local_18c [63];
  undefined1 local_14d;
  short *local_148;
  long lStack_140;
  short *local_138;
  long local_130;
  undefined *local_128;
  char *pcStack_120;
  undefined *local_118;
  undefined4 local_110;
  undefined *local_108;
  undefined *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f3;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_94 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_98 = 1;
  local_70 = 0;
  local_a0 = PTR_DAT_04bdf0c8 + 0x10;
  puStack_88 = PTR_DAT_04bdf1d8 + 0x10;
  local_90 = 0;
  local_110 = 1;
  local_128 = PTR_DAT_04bb2020 + 0x10;
  puStack_100 = PTR_DAT_04bb2120;
  local_d4 = 0;
  uStack_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_118 = PTR_DAT_04bdf0b0 + 0x10;
  uStack_d0 = (undefined4)param_2;
  local_cc = (undefined4)((ulong)param_2 >> 0x20);
  puStack_a8 = PTR_DAT_04bb2120;
  local_f4 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_b4 = 0;
  local_f8 = 0x1010100;
  local_f3 = 0x1010101;
  pcStack_120 = "EventFlow/Info/BindInfo.byml";
  local_108 = local_128;
  local_b0 = local_128;
  puVar9 = (undefined8 *)FUN_03f2dbac(&local_a0,&local_128,&local_118,0);
  if (((*PTR_DAT_04bb2828 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2828);
  }
  if ((puVar9 == (undefined8 *)0x0) ||
     (uVar10 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb2820), (uVar10 & 1) == 0)) goto LAB_010f69d8;
  psVar15 = (short *)puVar9[1];
  local_130 = 0;
  local_138 = psVar15;
  if (psVar15 != (short *)0x0) {
    uVar10 = FUN_03eaa5e0(psVar15);
    if ((uVar10 & 1) == 0) {
      psVar15 = (short *)0x0;
      local_138 = (short *)0x0;
      local_130 = 0;
    }
    else {
      uVar13 = *(uint *)(psVar15 + 6);
      uVar16 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
      if (*psVar15 != 0x5942) {
        uVar16 = uVar13;
      }
      if (uVar16 != 0) {
        local_130 = (long)psVar15 + (ulong)uVar16;
      }
    }
  }
  local_1a0 = (uint *)((ulong)local_1a0 & 0xffffff0000000000);
  uVar10 = FUN_03ea9450(&local_138,&local_1a0,"ActionBindData");
  if ((((uVar10 & 1) == 0) || (1 < local_1a0._4_1_ - 0xc0)) || (psVar15 == (short *)0x0))
  goto LAB_010f69d8;
  puVar2 = (uint *)((long)psVar15 + ((ulong)local_1a0 & 0xffffffff));
  if ((*puVar2 & 0xfe) == 0xc0) {
    uVar16 = *puVar2 >> 8;
    if (*psVar15 == 0x5942) {
      uVar16 = uVar16 & 0xff00 | *puVar2 >> 0x18 | (uVar16 & 0xff) << 0x10;
    }
    if (uVar16 != 0) {
      lVar17 = *(long *)PTR_DAT_04bb2698;
      if (lVar17 == 0) {
        pvVar12 = malloc((long)(int)(uVar16 * 0xd8));
      }
      else {
        if (param_1 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          puVar9 = (undefined8 *)(lVar17 + 8);
          if (lVar11 != 0) {
            puVar9 = (undefined8 *)(lVar11 + 0xa8);
          }
          param_1 = (long *)*puVar9;
          if (param_1 == (long *)0x0) goto LAB_010f6a88;
        }
        pvVar12 = (void *)(**(code **)(*param_1 + 0x30))(param_1,(long)(int)(uVar16 * 0xd8),8);
      }
      if (pvVar12 != (void *)0x0) {
        uVar13 = uVar16 - 1;
        DAT_050b4bf0 = pvVar12;
        DAT_050b4c00._4_4_ = uVar16;
        if (1 < uVar16) {
          if (uVar13 == 1) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            plVar14 = (long *)((long)pvVar12 + 0xd8);
            do {
              uVar10 = uVar10 + 2;
              plVar14[-0x1b] = (long)plVar14;
              *plVar14 = (long)(plVar14 + 0x1b);
              plVar14 = plVar14 + 0x36;
            } while (((ulong)uVar13 & 0xfffffffe) != uVar10);
          }
          if ((uVar13 & 1) != 0) {
            plVar14 = (long *)((long)pvVar12 + uVar10 * 0xd8);
            *plVar14 = (long)(plVar14 + 0x1b);
          }
        }
        *(undefined8 *)((long)pvVar12 + (long)(int)(uVar13 * 0x1b) * 8) = 0;
        DAT_050b4bf8 = pvVar12;
      }
    }
  }
LAB_010f6a88:
  uVar16 = 0;
  puVar1 = (uint *)(PTR_DAT_04bb2bc0 + 0x10);
  while( true ) {
    if ((*puVar2 & 0xfe) == 0xc0) {
      uVar13 = *puVar2 >> 8;
      if (*psVar15 == 0x5942) {
        uVar13 = uVar13 & 0xff00 | *puVar2 >> 0x18 | (uVar13 & 0xff) << 0x10;
      }
    }
    else {
      uVar13 = 0;
    }
    if (uVar13 <= uVar16) break;
    local_1f8 = (undefined *)((ulong)local_1f8 & 0xffffff0000000000);
    if ((char)*puVar2 == -0x3f) {
      local_198 = (undefined1 *)CONCAT71(local_198._1_7_,*psVar15 == 0x5942);
      local_1a0 = puVar2;
      uVar10 = FUN_03eaa938(&local_1a0,&local_1f8,uVar16);
      if ((uVar10 & 1) == 0) goto LAB_010f6b04;
LAB_010f6bbc:
      if (local_1f8._4_1_ - 0xc0 < 2) {
        lStack_140 = (long)psVar15 + ((ulong)local_1f8 & 0xffffffff);
      }
      else {
        if (local_1f8._4_1_ != 0xff) goto LAB_010f6b04;
        lStack_140 = 0;
      }
      local_1a0 = (uint *)((ulong)local_1a0 & 0xffffff0000000000);
      local_148 = psVar15;
      uVar10 = FUN_03ea9450(&local_148,&local_1a0,&DAT_040a5beb);
      if (((uVar10 & 1) == 0) || (local_1a0._4_1_ != -0x60)) goto LAB_010f6b04;
      sVar6 = *psVar15;
      uVar4 = *(uint *)(psVar15 + 4);
      uVar13 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
      if (sVar6 != 0x5942) {
        uVar13 = uVar4;
      }
      uVar18 = (ulong)uVar13;
      uVar13 = *(uint *)((long)psVar15 + (long)(int)local_1a0 * 4 + uVar18 + 4);
      local_1a0 = (uint *)((ulong)local_1a0 & 0xffffff0000000000);
      uVar10 = FUN_03ea9450(&local_148,&local_1a0,"Value");
      if (((uVar10 & 1) != 0) && (local_1a0._4_1_ == -0x60)) {
        uVar4 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
        uVar5 = *(uint *)(psVar15 + 4);
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        if (sVar6 != 0x5942) {
          uVar4 = uVar13;
        }
        puVar3 = (undefined1 *)((long)psVar15 + uVar4 + uVar18);
        uVar13 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
        if (*psVar15 != 0x5942) {
          uVar13 = uVar5;
        }
        uVar10 = (ulong)uVar13;
        uVar5 = *(uint *)((long)psVar15 + (long)(int)local_1a0 * 4 + uVar10 + 4);
        local_14d = 0;
        uVar13 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
        if (*psVar15 != 0x5942) {
          uVar13 = uVar5;
        }
        local_190 = 0x40;
        local_198 = local_18c;
        if (local_18c != puVar3) {
          lVar17 = 0;
          lVar11 = uVar4 + uVar18 + 1;
          do {
            lVar7 = lVar17 + lVar11;
            if (*(char *)((long)psVar15 + lVar7 + -1) == '\0') {
LAB_010f6d20:
              iVar8 = (int)lVar17;
              if (0x3f < iVar8) {
                iVar8 = 0x3f;
              }
              goto LAB_010f6d3c;
            }
            if (*(char *)((long)psVar15 + lVar17 + lVar11) == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_010f6d20;
            }
            if (*(char *)((long)psVar15 + lVar7 + 1) == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_010f6d20;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          iVar8 = 0;
LAB_010f6d3c:
          memcpy(local_18c,puVar3,(long)iVar8);
          local_18c[iVar8] = 0;
        }
        puVar3 = (undefined1 *)((long)psVar15 + uVar13 + uVar10);
        local_1a5 = 0;
        local_1e8 = 0x40;
        local_1f0 = local_1e4;
        local_1a0 = puVar1;
        if (local_1e4 != puVar3) {
          lVar17 = 0;
          lVar11 = uVar13 + uVar10 + 1;
          do {
            lVar7 = lVar17 + lVar11;
            if (*(char *)((long)psVar15 + lVar7 + -1) == '\0') {
LAB_010f6ddc:
              iVar8 = (int)lVar17;
              if (0x3f < iVar8) {
                iVar8 = 0x3f;
              }
              goto LAB_010f6acc;
            }
            if (*(char *)((long)psVar15 + lVar17 + lVar11) == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_010f6ddc;
            }
            if (*(char *)((long)psVar15 + lVar7 + 1) == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_010f6ddc;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          iVar8 = 0;
LAB_010f6acc:
          memcpy(local_1e4,puVar3,(long)iVar8);
          local_1e4[iVar8] = 0;
        }
        local_1f8 = PTR_DAT_04bb2bc0 + 0x10;
        FUN_010f6e30(&DAT_050b4be8,&local_1a0,&local_1f8);
        goto LAB_010f6b04;
      }
      uVar16 = uVar16 + 1;
    }
    else {
      if ((char)*puVar2 == -0x40) {
        local_198 = (undefined1 *)CONCAT71(local_198._1_7_,*psVar15 == 0x5942);
        local_1a0 = puVar2;
        uVar10 = FUN_03eaa544(&local_1a0,&local_1f8,uVar16);
        if ((uVar10 & 1) != 0) goto LAB_010f6bbc;
      }
LAB_010f6b04:
      uVar16 = uVar16 + 1;
    }
  }
LAB_010f69d8:
  FUN_03f2d448(&local_a0);
  return;
}


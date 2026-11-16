
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0251ee60(float param_1,undefined4 param_2,long param_3,byte *param_4,undefined4 param_5,
                 uint param_6)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  short *psVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  long *plVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  byte local_b8 [4];
  undefined4 local_b4;
  undefined2 local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  byte local_9c [4];
  undefined4 local_98;
  undefined2 local_94;
  
  FUN_02507c6c(local_9c,7,1,1,0);
  puVar5 = PTR_DAT_04bb5038;
  puVar4 = PTR_DAT_04bb3238;
  local_a8 = (float)*(int *)(param_3 + 0x14) * 5.0;
  lVar16 = *(long *)PTR_DAT_04bb39b0;
  local_ac = (float)*(int *)(param_3 + 0x10) * 5.0;
  local_a0 = (float)*(int *)(param_3 + 0x24) * 5.0 + 5.0;
  local_a4 = (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar16 == 0) {
LAB_0251ef48:
    if (7 < *pbVar14) {
LAB_0251ef54:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar16 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar16 + 0x473);
        pbVar14 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar16 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar14 = (byte *)(lVar16 + 0x471);
          }
        }
        uVar13 = (uint)*pbVar14;
        if (*pbVar14 < 8) goto LAB_0251efc4;
      }
      pbVar14 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar16 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar16 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar16 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar14 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0251ef48;
      }
      goto LAB_0251ef54;
    }
  }
  uVar13 = (uint)*pbVar14;
  if (7 < uVar13) {
    uVar13 = 0xff;
  }
LAB_0251efc4:
  uVar18 = (uint)local_9c[0];
  local_b4 = local_98;
  local_b0 = local_94;
  local_b8[0] = 0xff;
  if (7 < local_9c[0]) {
LAB_0251eff4:
    uVar8 = FUN_01735000(&local_ac,param_5,*(undefined4 *)puVar4,param_6 & 1);
    if ((((uVar8 & 1) == 0) && (uVar8 = FUN_01735e9c(param_2,&local_ac,param_5), (uVar8 & 1) == 0))
       && (uVar8 = FUN_0173654c(param_2,&local_ac,param_5), (uVar8 & 1) == 0)) {
      uVar13 = FUN_01736cb8(&local_ac,param_5);
    }
    else {
LAB_0251f040:
      uVar13 = 1;
    }
    return uVar13 & 1;
  }
  if (7 < uVar13) {
    uVar13 = 0xff;
  }
  puVar1 = PTR_DAT_04bb3780 + 0x10;
  plVar17 = (long *)PTR_DAT_04bb27c0;
  local_b8[0] = local_9c[0];
  do {
    if (7 < *param_4 || *param_4 != uVar18) {
      lVar16 = *plVar17;
      puVar2 = (uint *)puVar4;
      if (DAT_054f5738 != 0) {
        puVar2 = (uint *)(DAT_054f5738 + (ulong)uVar18 * 4 + 0xde8);
      }
      if (lVar16 == 0) {
LAB_0251f174:
        bVar6 = false;
      }
      else {
        uVar18 = *puVar2;
        if ((((uVar18 == 0) ||
             (plVar19 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                                  ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
            ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar19 + 0x46) != uVar18)) {
          plVar19 = (long *)0x0;
        }
        if (*(int *)(lVar16 + 0x288) == 1 || *(int *)(lVar16 + 0x288) == -1) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar16 = *plVar17;
          iVar7 = (**(code **)(*plVar9 + 0x60))();
          plVar17 = (long *)PTR_DAT_04bb27c0;
          if (iVar7 < 0x11) {
            uVar18 = 1;
          }
          else if (*(uint *)(lVar16 + 0x5e8) < 5) {
            uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
          }
          else {
            uVar18 = 0;
          }
        }
        else {
          uVar18 = 0;
        }
        if (plVar19 == (long *)0x0) goto LAB_0251f174;
        lVar16 = plVar19[0x2a];
        if (((*PTR_DAT_04bb3778 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb3770 = puVar1;
          __cxa_guard_release(PTR_DAT_04bb3778);
        }
        uVar8 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb3770);
        plVar17 = (long *)PTR_DAT_04bb27c0;
        bVar6 = false;
        uVar20 = 0;
        if ((int)lVar16 == 1) {
          uVar20 = uVar18;
        }
        if ((((uVar8 & 1) != 0) && (uVar20 != 0)) &&
           ((bVar6 = (int)plVar19[0x302] == 7, (param_6 & 1) != 0 &&
            (uVar8 = (**(code **)(*plVar19 + 400))(plVar19), (uVar8 & 1) != 0)))) {
          uVar18 = (uint)local_b8[0];
          goto joined_r0x0251f49c;
        }
      }
      if ((DAT_054f5738 == 0) || (uVar8 = (ulong)local_b8[0], 7 < uVar8)) {
        psVar15 = &DAT_054f0c08;
        if ((DAT_054f0c70 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(&DAT_054f0c70);
          if (iVar7 != 0) {
            DAT_054f0c6c = 0;
            DAT_054f0c1c._0_4_ = 0;
            DAT_054f0c1c._4_4_ = 0;
            DAT_054f0c68 = 1;
            DAT_054f0c24._0_4_ = 0;
            DAT_054f0c24._4_4_ = 0;
            DAT_054f0c2c._0_4_ = 0;
            DAT_054f0c2c._4_4_ = 0;
            _DAT_054f0c44 = 0;
            DAT_054f0c34._0_4_ = 0;
            DAT_054f0c34._4_4_ = 0;
            DAT_054f0c3c._0_4_ = 0;
            DAT_054f0c3c._4_4_ = 0;
            _DAT_054f0c08 = 0;
            _DAT_054f0c10 = 1;
            DAT_054f0c14._0_4_ = 0;
            DAT_054f0c14._4_4_ = 0;
            DAT_054f0c48 = 0;
            DAT_054f0c50 = 0;
            DAT_054f0c58 = 0;
            DAT_054f0c60 = 0;
            __cxa_guard_release(&DAT_054f0c70);
          }
          psVar15 = &DAT_054f0c08;
          plVar17 = (long *)PTR_DAT_04bb27c0;
        }
      }
      else {
        psVar15 = (short *)(DAT_054f5738 + uVar8 * 0xd0 +
                            (ulong)(*(uint *)(DAT_054f5738 + uVar8 * 4 + 0xd68) & 1) * 0x68 + 0x6e8)
        ;
      }
      fVar22 = 1.0;
      if ((((char)psVar15[0x32] != '\0') && (fVar22 = 1.0, *psVar15 == *(short *)PTR_DAT_04bb6298))
         && (fVar22 = 0.5, *(int *)(psVar15 + 0x30) != 7)) {
        fVar22 = 1.0;
      }
      uVar18 = (uint)local_b8[0];
      uVar20 = uVar18;
      if (7 < uVar18) {
        uVar20 = 0xff;
      }
      fVar27 = param_1;
      if (uVar20 != uVar13) {
        fVar27 = 1.0;
      }
      pfVar10 = (float *)FUN_0251b3b0(local_b8,0);
      if (pfVar10 != (float *)0x0) {
        lVar16 = FUN_0251e98c(1);
        pfVar11 = (float *)(**(code **)(*(long *)(lVar16 + 0x2a0) + 0xf0))(lVar16 + 0x2a0);
        if ((local_ac <= local_a4) && (local_a8 <= local_a0)) {
          fVar26 = *pfVar11 * 0.5;
          if (!bVar6) {
            fVar26 = *pfVar11;
          }
          fVar25 = *pfVar10;
          fVar24 = pfVar10[2];
          if (((local_ac <= fVar25) && (fVar25 <= local_a4)) &&
             ((local_a8 <= fVar24 && (fVar24 <= local_a0)))) goto LAB_0251f040;
          fVar23 = local_a4;
          if (fVar25 <= local_a4) {
            fVar23 = fVar25;
          }
          fVar21 = local_ac;
          if (local_ac <= fVar25) {
            fVar21 = fVar23;
          }
          fVar23 = local_a0;
          if (fVar24 <= local_a0) {
            fVar23 = fVar24;
          }
          fVar27 = fVar22 * fVar27 * fVar26 * 0.98;
          fVar22 = local_a8;
          if (local_a8 <= fVar24) {
            fVar22 = fVar23;
          }
          if ((fVar24 - fVar22) * (fVar24 - fVar22) + (fVar25 - fVar21) * (fVar25 - fVar21) <=
              fVar27 * fVar27) goto LAB_0251f040;
        }
      }
    }
joined_r0x0251f49c:
    if (7 < uVar18) goto LAB_0251eff4;
    uVar8 = (ulong)uVar18;
    if (uVar8 + 1 == 8) goto LAB_0251eff4;
    pbVar14 = puVar5 + uVar8 + 1;
    uVar12 = FUN_02507924(local_b8,pbVar14);
    if ((uVar12 & 1) == 0) {
      if (uVar8 + 2 == 8) goto LAB_0251eff4;
      pbVar14 = puVar5 + uVar8 + 2;
      uVar12 = FUN_02507924(local_b8,pbVar14);
      if ((uVar12 & 1) == 0) {
        if (uVar8 + 3 == 8) goto LAB_0251eff4;
        pbVar14 = puVar5 + uVar8 + 3;
        uVar12 = FUN_02507924(local_b8,pbVar14);
        if ((uVar12 & 1) == 0) {
          if (uVar8 + 4 == 8) goto LAB_0251eff4;
          pbVar14 = puVar5 + uVar8 + 4;
          uVar12 = FUN_02507924(local_b8,pbVar14);
          if ((uVar12 & 1) == 0) {
            if (uVar8 + 5 == 8) goto LAB_0251eff4;
            pbVar14 = puVar5 + uVar8 + 5;
            uVar12 = FUN_02507924(local_b8,pbVar14);
            if ((uVar12 & 1) == 0) {
              if (uVar8 + 6 == 8) goto LAB_0251eff4;
              pbVar14 = puVar5 + uVar8 + 6;
              uVar12 = FUN_02507924(local_b8,pbVar14);
              if ((uVar12 & 1) == 0) {
                if (uVar8 + 7 == 8) goto LAB_0251eff4;
                pbVar14 = puVar5 + uVar8 + 7;
                uVar12 = FUN_02507924(local_b8,pbVar14);
                if ((uVar12 & 1) == 0) {
                  if (uVar18 == 0) goto LAB_0251eff4;
                  pbVar14 = puVar5 + uVar8 + 8;
                  FUN_02507924(local_b8,pbVar14);
                }
              }
            }
          }
        }
      }
    }
    uVar18 = (uint)*pbVar14;
    if (7 < uVar18) goto LAB_0251eff4;
    local_b8[0] = *pbVar14;
  } while( true );
}


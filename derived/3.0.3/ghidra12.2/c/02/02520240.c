
/* WARNING: Removing unreachable block (ram,0x02520400) */
/* WARNING: Removing unreachable block (ram,0x02520c54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_02520240(float *param_1,float *param_2,uint *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  float *pfVar8;
  long lVar9;
  char *pcVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  ushort *puVar19;
  byte *pbVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined *puStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int iStack_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  ulong local_d8;
  undefined4 local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  int local_b0;
  int local_ac;
  
  puVar1 = PTR_DAT_04bb39b0;
  pbVar20 = PTR_DAT_04bb32e0;
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_025202ec;
LAB_0252034c:
    uVar11 = (uint)*pbVar12;
    if (7 < uVar11) {
      uVar11 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar14 + 0x158);
    }
    if ((*pbVar12 < 8) ||
       (((*(int *)(lVar14 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (pbVar12 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar12 < 8)))) goto LAB_0252034c;
LAB_025202ec:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02520344:
      pbVar12 = PTR_DAT_04bb5038;
      goto LAB_0252034c;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar14 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar21 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar21 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar21 & 8) != 0) {
        pbVar12 = (byte *)(lVar14 + 0x471);
      }
    }
    uVar11 = (uint)*pbVar12;
    if (7 < *pbVar12) goto LAB_02520344;
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar26 = __cxa_guard_acquire(&DAT_054f0960);
      puVar21 = (uint *)&DAT_054f0958;
      if (iVar26 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar21 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar21 = (uint *)(DAT_054f5738 + 0x204);
    if (uVar11 < 8) {
      puVar21 = puVar21 + (ulong)uVar11 * 2;
    }
  }
  lVar14 = *(long *)puVar1;
  if ((*puVar21 >> 2 & 1) == 0) {
    if (lVar14 == 0) {
LAB_0252043c:
      if (7 < *pbVar20) {
LAB_02520448:
        if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
          lVar14 = **(long **)PTR_DAT_04bb27d0;
          bVar5 = *(byte *)(lVar14 + 0x473);
          pbVar12 = PTR_DAT_04bb5038;
          if ((long)(char)bVar5 != 0xffffffffffffffff) {
            puVar21 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
            if (7 < bVar5) {
              puVar21 = (uint *)(lVar14 + 0x48);
            }
            if ((*puVar21 & 8) != 0) {
              pbVar12 = (byte *)(lVar14 + 0x471);
            }
          }
          uVar11 = (uint)*pbVar12;
          if (*pbVar12 < 8) goto LAB_025204b8;
        }
        pbVar20 = PTR_DAT_04bb5038;
      }
    }
    else {
      if (*(int *)(lVar14 + 0x15c) != 0) {
        pbVar20 = (byte *)(lVar14 + 0x158);
      }
      if (7 < *pbVar20) {
        if ((*(int *)(lVar14 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar20 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_0252043c;
        }
        goto LAB_02520448;
      }
    }
    uVar11 = (uint)*pbVar20;
    if (7 < uVar11) {
      uVar11 = 0xff;
    }
LAB_025204b8:
    if ((DAT_054f5738 == 0) || (7 < uVar11)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar26 = __cxa_guard_acquire(&DAT_054f0c70);
        puVar19 = &DAT_054f0c08;
        if (iVar26 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = 0;
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
      }
      else {
        puVar19 = &DAT_054f0c08;
      }
    }
    else {
      puVar19 = (ushort *)
                (DAT_054f5738 + (ulong)uVar11 * 0xd0 +
                 (ulong)(*(uint *)(DAT_054f5738 + (ulong)uVar11 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    puVar1 = PTR_DAT_04bb2d00;
    uVar7 = *(ushort *)PTR_DAT_04bb6298;
    if (((((char)puVar19[0x32] != '\0') && (*puVar19 == uVar7)) && (*(uint *)(puVar19 + 2) < 0x149))
       && (*(uint *)(puVar19 + 2) == 0xfe)) {
      local_f8 = 0;
      local_f0._4_4_ = 0;
      iStack_e8 = 0;
      puStack_100 = (undefined *)0x4120000041200000;
      local_f0._0_4_ = 0xc1200000;
      local_dc = 0xc1200000;
      local_e4 = 0;
      pfVar8 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_3 >> 0x14) & 0xff0));
      fVar27 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
      fVar28 = *pfVar8 + fVar27 * pfVar8[1];
      fVar27 = pfVar8[2] + fVar27 * pfVar8[3];
      fVar30 = fVar28 * 0.0;
      local_c8 = (undefined **)
                 CONCAT44(param_2[1] +
                          (fVar30 * 0.0 + 1.0) * 0.0 + fVar27 * 0.0 * 0.0 + fVar30 * 10.0,
                          *param_2 + fVar30 * 0.0 + fVar27 * 0.0 + (fVar28 + 0.0) * 10.0);
      local_c0._0_4_ = param_2[2] + (fVar27 * 0.0 * 0.0 - fVar28 * 0.0) + fVar27 * 10.0;
      uVar15 = FUN_016ec07c(0,&local_c8,1);
      if ((uVar15 & 1) == 0) {
        pfVar8 = (float *)(puVar1 + ((ulong)(*param_3 >> 0x14) & 0xff0));
        fVar27 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
        fVar28 = *pfVar8 + fVar27 * pfVar8[1];
        fVar27 = pfVar8[2] + fVar27 * pfVar8[3];
        fVar30 = fVar28 * 0.0;
        local_c8 = (undefined **)
                   CONCAT44(param_2[1] +
                            (fVar30 * 0.0 + 1.0) * 0.0 + fVar27 * 0.0 * 10.0 + fVar30 * 0.0,
                            *param_2 + fVar30 * 0.0 + fVar27 * 10.0 + (fVar28 + 0.0) * 0.0);
        local_c0._0_4_ = param_2[2] + (fVar27 * 0.0 * 0.0 - fVar28 * 10.0) + fVar27 * 0.0;
        uVar15 = FUN_016ec07c(0,&local_c8,1);
        if ((uVar15 & 1) == 0) {
          fVar28 = param_2[2];
          pfVar8 = (float *)(puVar1 + ((ulong)(*param_3 >> 0x14) & 0xff0));
          fVar27 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
          fVar29 = *pfVar8 + fVar27 * pfVar8[1];
          fVar30 = pfVar8[2] + fVar27 * pfVar8[3];
          fVar31 = fVar29 * 0.0;
          fVar27 = param_2[1] + (fVar31 * 0.0 + 1.0) * 0.0 + fVar30 * 0.0 * -10.0 + fVar31 * 0.0;
          local_c8 = (undefined **)
                     CONCAT44(fVar27,*param_2 + fVar31 * 0.0 + fVar30 * -10.0 + (fVar29 + 0.0) * 0.0
                             );
          local_c0._0_4_ = fVar28 + (fVar30 * 0.0 * 0.0 - fVar29 * -10.0) + fVar30 * 0.0;
          uVar15 = FUN_016ec07c(0,&local_c8,1);
          if ((uVar15 & 1) == 0) {
            uVar25 = FUN_016e4640(param_2,param_3,&local_e4);
            local_c8 = (undefined **)CONCAT44(fVar27,uVar25);
            local_c0._0_4_ = fVar28;
            uVar15 = FUN_016ec07c(0,&local_c8,1);
            if ((uVar15 & 1) == 0) {
              if (param_1 == (float *)0x0) {
                return 1;
              }
              *param_1 = *param_2;
              param_1[1] = param_2[1];
              param_1[2] = param_2[2];
              return 1;
            }
          }
        }
      }
      if (param_1 == (float *)0x0) {
        return 1;
      }
      param_1[2] = (float)local_c0;
      *(undefined ***)param_1 = local_c8;
      return 1;
    }
    if (uVar7 != 0xffff) {
      puVar21 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar7 & 0xffffffffU) * 8);
      if (0xff < uVar7) {
        puVar21 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar21 >> 1 & 1) != 0) {
        lVar14 = 0;
        puVar1 = PTR_DAT_04bb2010 + 0x10;
        ppuVar2 = (undefined **)(PTR_DAT_04bb2018 + 0x10);
        do {
          fVar28 = (float)(*param_3 + (int)(long)((float)(&DAT_0417ab70)[lVar14] * 11930465.0)) *
                   1.4629181e-09;
          fVar27 = sinf(fVar28);
          fVar28 = cosf(fVar28);
          uVar11 = 0;
          do {
            local_f0._0_4_ = SUB84(puVar1,0);
            local_f0._4_4_ = (undefined4)((ulong)puVar1 >> 0x20);
            local_c8 = (undefined **)puVar1;
            local_d8 = 0;
            fVar29 = *param_2 +
                     (fVar27 + 0.0 + fVar27 * 0.0 * 0.0 + fVar28 * 0.0) * (float)uVar11 * 2.1875;
            fVar30 = param_2[2] +
                     (fVar28 + (fVar28 * 0.0 * 0.0 - fVar27 * 0.0)) * (float)uVar11 * 2.1875;
            iVar24 = (int)((float)(int)(fVar29 + -7.5) / 5.0) - (uint)(fVar29 + -7.5 < 0.0);
            iVar23 = (int)((float)(int)(fVar30 + -7.5) / 5.0) - (uint)(fVar30 + -7.5 < 0.0);
            iVar26 = iVar23 + 3;
            local_f8 = CONCAT44(iVar23,iVar24);
            iStack_e8 = iVar24 + 3;
            local_e4 = CONCAT44(local_e4._4_4_,iVar26);
            local_c0 = (undefined8 *)
                       CONCAT44((int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0),
                                (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0));
            local_d0 = 0;
            local_cc = 0xc;
            local_d8 = 0x1000;
            local_cc = 0xc;
            local_d0 = 0;
            lVar16 = *(long *)PTR_DAT_04bb27c8;
            puStack_100 = puVar1;
            local_f0 = puVar1;
            if (lVar16 != 0) {
              if (*(long *)(lVar16 + 0xa8) != 0) {
                uVar15 = FUN_00949898(lVar16 + 0x28,&local_c8,&local_d8);
                if ((uVar15 & 1) == 0) {
                  iVar24 = (int)local_f8;
                  iVar23 = local_f8._4_4_;
                  iVar26 = (int)local_e4;
                }
                else {
                  iVar24 = (int)((float)(int)(fVar29 + -12.5) / 5.0) - (uint)(fVar29 + -12.5 < 0.0);
                  iVar23 = (int)((float)(int)(fVar30 + -12.5) / 5.0) - (uint)(fVar30 + -12.5 < 0.0);
                  iStack_e8 = iVar24 + 5;
                  local_f8 = CONCAT44(iVar23,iVar24);
                  local_e4 = CONCAT44(local_e4._4_4_,iVar23 + 5);
                  iVar26 = iVar23 + 5;
                }
              }
            }
            local_b0 = iVar24;
            local_ac = iVar23;
            iVar22 = iVar26 + 1;
            local_b8 = PTR_DAT_04bb2010 + 0x10;
            local_c8 = &puStack_100;
            local_c0 = &local_f0;
            if (iVar22 == iVar23) {
              if (iVar22 != iVar23) goto LAB_02520b44;
LAB_02520ad4:
            }
            else {
              do {
                uVar15 = FUN_00976490(&local_b8);
                if ((uVar15 & 1) == 0) goto LAB_02520904;
                if (local_b0 < *(int *)(local_c0 + 1)) {
                  local_b0 = local_b0 + 1;
                }
                else {
                  local_b0 = *(int *)(local_c8 + 1);
                  local_ac = local_ac + 1;
                }
              } while (iVar24 != local_b0 || iVar22 != local_ac);
              iVar22 = (int)local_e4 + 1;
              iVar24 = (int)local_f8;
              iVar23 = local_f8._4_4_;
              iVar26 = (int)local_e4;
              if (iVar22 == local_f8._4_4_) goto LAB_02520ad4;
LAB_02520b44:
              iVar26 = iVar24;
              do {
                fVar30 = (float)iVar26 * 0.5;
                uVar13 = 0;
                if (fVar30 != (float)(int)fVar30) {
                  uVar13 = (uint)(fVar30 < 0.0);
                }
                fVar29 = (float)iVar23 * 0.5;
                uVar17 = 0;
                if (fVar29 != (float)(int)fVar29) {
                  uVar17 = (uint)(fVar29 < 0.0);
                }
                local_c0 = (undefined8 *)CONCAT44((int)fVar29 - uVar17,(int)fVar30 - uVar13);
                local_c8 = ppuVar2;
                uVar15 = FUN_01318220(&local_c8);
                if ((uVar15 & 1) != 0) goto LAB_02520904;
                if (iVar26 < iStack_e8) {
                  iVar26 = iVar26 + 1;
                }
                else {
                  iVar23 = iVar23 + 1;
                  iVar26 = (int)local_f8;
                }
              } while ((iVar24 != iVar26) || (iVar22 != iVar23));
              iVar24 = (int)local_f8;
              iVar23 = local_f8._4_4_;
              iVar26 = (int)local_e4;
            }
            local_c8 = (undefined **)
                       CONCAT44(local_c8._4_4_,
                                ((float)iVar24 * 5.0 + (float)iStack_e8 * 5.0 + 5.0) * 0.5);
            local_c0 = (undefined8 *)
                       CONCAT44(local_c0._4_4_,
                                ((float)iVar23 * 5.0 + (float)iVar26 * 5.0 + 5.0) * 0.5);
            if ((*(long *)PTR_DAT_04bb2200 == 0) ||
               (lVar16 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar16 == 0)) {
LAB_025208f0:
              fVar30 = -100.0;
            }
            else {
              local_d8 = local_d8 & 0xffffffff00000000;
              lVar16 = *(long *)(lVar16 + 0x118);
              if (lVar16 == 0) goto LAB_025208f0;
              local_cc = 0;
              fVar30 = (float)FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_c8,&local_cc);
              if (local_cc != 5) {
                local_d8 = CONCAT44(local_d8._4_4_,local_cc);
                lVar9 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_cc);
                if (lVar9 != 0) {
                  pcVar10 = (char *)FUN_009823a0(lVar9,0xd,0x58da05ed,
                                                 *(undefined8 *)PTR_DAT_04bb5d10);
                  if ((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) {
                    fVar29 = 0.0;
                    if ((*(long *)(lVar16 + 0x280) != 0) &&
                       (lVar16 = *(long *)(*(long *)(lVar16 + 0x280) + 8), lVar16 != 0)) {
                      pfVar8 = (float *)(**(code **)(*(long *)(lVar16 + 0x458) + 0xf0))
                                                  (lVar16 + 0x458);
                      fVar29 = *pfVar8;
                    }
                    fVar30 = fVar30 + fVar29;
                    goto LAB_025208f8;
                  }
                }
                goto LAB_025208f0;
              }
              fVar30 = 0.0;
              if ((*(long *)(lVar16 + 0x280) != 0) &&
                 (lVar16 = *(long *)(*(long *)(lVar16 + 0x280) + 8), lVar16 != 0)) {
                pfVar8 = (float *)(**(code **)(*(long *)(lVar16 + 0x488) + 0xf0))(lVar16 + 0x488);
                fVar30 = *pfVar8;
              }
            }
LAB_025208f8:
            if (fVar30 < param_2[1]) {
              if (param_1 == (float *)0x0) {
                return 1;
              }
              param_1[1] = fVar30;
              *param_1 = (float)local_c8;
              param_1[2] = (float)local_c0;
              return 1;
            }
LAB_02520904:
            uVar11 = uVar11 + 1;
          } while (uVar11 != 0x10);
          lVar14 = lVar14 + 1;
          if (lVar14 == 0x10) {
            return 0;
          }
        } while( true );
      }
    }
    return 0;
  }
  if (lVar14 == 0) {
    bVar5 = *pbVar20;
joined_r0x02520d3c:
    uVar15 = (ulong)bVar5;
    if (7 < bVar5) {
LAB_02520d40:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar14 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar14 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar21 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar21 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar21 & 8) != 0) {
            pbVar12 = (byte *)(lVar14 + 0x471);
          }
        }
        uVar15 = (ulong)*pbVar12;
        if (*pbVar12 < 8) goto LAB_02520dac;
      }
      uVar15 = (ulong)(byte)*PTR_DAT_04bb5038;
      lVar14 = DAT_054f5738;
      if (7 < (byte)*PTR_DAT_04bb5038) goto joined_r0x02520eb0;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar20 = (byte *)(lVar14 + 0x158);
    }
    uVar15 = (ulong)*pbVar20;
    if (7 < *pbVar20) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        bVar5 = *(byte *)(DAT_054f5738 + 0x11a5);
        goto joined_r0x02520d3c;
      }
      goto LAB_02520d40;
    }
  }
LAB_02520dac:
  lVar14 = DAT_054f5738 + uVar15 * 0x80;
  uVar25 = *(undefined4 *)(PTR_DAT_04bc31b0 + uVar15 * 0x30 + 0x1f);
  uVar3 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar15 * 0x30 + 8);
  uVar4 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar15 * 0x30 + 0x10);
  *(undefined8 *)(lVar14 + 0x2f8) = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar15 * 0x30 + 0x18);
  *(undefined8 *)(lVar14 + 0x2f0) = uVar4;
  *(undefined8 *)(lVar14 + 0x2e8) = uVar3;
  *(undefined4 *)(lVar14 + 0x2ff) = uVar25;
  puVar1 = PTR_DAT_04bc31b8;
  uVar3 = *(undefined8 *)(PTR_DAT_04bc31b8 + uVar15 * 0x70 + 0x30);
  uVar4 = *(undefined8 *)(PTR_DAT_04bc31b8 + uVar15 * 0x70 + 0x38);
  uVar18 = *(undefined8 *)(PTR_DAT_04bc31b8 + uVar15 * 0x70 + 0x28);
  *(undefined8 *)(lVar14 + 800) = *(undefined8 *)(PTR_DAT_04bc31b8 + uVar15 * 0x70 + 0x20);
  *(undefined8 *)(lVar14 + 0x338) = uVar4;
  *(undefined8 *)(lVar14 + 0x330) = uVar3;
  *(undefined8 *)(lVar14 + 0x328) = uVar18;
  uVar3 = *(undefined8 *)(puVar1 + uVar15 * 0x70 + 0x48);
  uVar4 = *(undefined8 *)(puVar1 + uVar15 * 0x70 + 0x50);
  uVar18 = *(undefined8 *)(puVar1 + uVar15 * 0x70 + 0x56);
  *(undefined8 *)(lVar14 + 0x340) = *(undefined8 *)(puVar1 + uVar15 * 0x70 + 0x40);
  *(undefined8 *)(lVar14 + 0x356) = uVar18;
  *(undefined8 *)(lVar14 + 0x350) = uVar4;
  *(undefined8 *)(lVar14 + 0x348) = uVar3;
  uVar3 = *(undefined8 *)(puVar1 + uVar15 * 0x70 + 8);
  uVar4 = *(undefined8 *)(puVar1 + uVar15 * 0x70 + 0x10);
  *(undefined8 *)(lVar14 + 0x318) = *(undefined8 *)(puVar1 + uVar15 * 0x70 + 0x18);
  *(undefined8 *)(lVar14 + 0x310) = uVar4;
  *(undefined8 *)(lVar14 + 0x308) = uVar3;
joined_r0x02520eb0:
  if (param_1 == (float *)0x0) {
    return 1;
  }
  sVar6 = *(short *)(lVar14 + 800);
  iVar26 = *(int *)(lVar14 + 0x322);
  *param_1 = (float)*(int *)(lVar14 + 0x31c) * 0.001;
  param_1[1] = (float)(int)sVar6 * 0.25;
  param_1[2] = (float)iVar26 * 0.001;
  return 1;
}


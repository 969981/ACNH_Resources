
void FUN_036e6620(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 **ppuVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint *puVar13;
  int iVar14;
  undefined4 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined4 *puVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  undefined *local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  long local_120;
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 **local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [4];
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 **local_a8;
  undefined8 **ppuStack_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined *local_78;
  undefined8 local_70;
  
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) && ((*(byte *)(param_1 + 0x1a71) >> 2 & 1) == 0))
     || ((*(long *)PTR_DAT_04bc1530 == 0 ||
         (lVar22 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar22 == 0)))) {
    uVar9 = (uint)*(ushort *)(param_1 + 2);
  }
  else if ((*(long **)(lVar22 + 0x1790) == (long *)0x0) ||
          (puVar11 = (undefined8 *)**(long **)(lVar22 + 0x1790), puVar11 == (undefined8 *)0x0)) {
    uVar9 = (uint)*(ushort *)(*(long *)(lVar22 + 0x1778) + *(long *)(lVar22 + 6000) + 2);
  }
  else {
    uVar12 = (**(code **)*puVar11)();
    uVar9 = (uint)*(ushort *)(*(long *)(lVar22 + 0x1778) + *(long *)(lVar22 + 6000) + 2);
    if ((((uVar12 & 1) != 0) && (*(long *)(lVar22 + 0x1790) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar22 + 0x1790) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
  }
  puVar7 = PTR_DAT_04bb43c0;
  local_78 = PTR_DAT_04bcacf0 + 0x10;
  if (uVar9 - DAT_05abc378 < DAT_05abc358) {
    local_70 = *(undefined8 *)(DAT_05abc360 + (long)(int)(uVar9 - DAT_05abc378) * 8);
  }
  else {
    local_70 = 0;
  }
  local_a8 = &local_98;
  local_98 = &local_90;
  local_b8 = 0;
  local_b0 = (undefined8 *)0x0;
  local_90 = 0;
  if (local_88 != (undefined8 *)0x0) {
    local_b8 = 0x200000000;
    local_b0 = local_88;
  }
  ppuStack_a0 = local_a8;
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar20 = *(long **)(param_1 + 0x48);
    lVar22 = (long)*(int *)(param_1 + 0x40) << 3;
    do {
      lVar25 = *plVar20;
      lVar26 = *(long *)puVar7;
      uVar9 = FUN_0277d6c4(lVar25 + 8);
      if (*(long *)puVar7 != 0) {
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        if (((uVar9 < *(uint *)(lVar26 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) &&
           ((*(byte *)(lVar25 + 0x10) >> 2 & 1) != 0)) {
          if ((int)local_b8 < local_b8._4_4_) {
            local_118 = (undefined *)0xfffe;
            FUN_0277d4ac(&local_118);
            local_118 = *(undefined **)(lVar25 + 8);
            uVar12 = FUN_01b0a694(&local_118);
            ppuVar8 = local_a8;
            if ((uVar12 & 1) != 0) {
              if ((int)local_b8 < local_b8._4_4_) {
                if (local_a8 != (undefined8 **)0x0) {
                  local_a8 = (undefined8 **)*local_a8;
                }
                *(undefined2 *)ppuVar8 = (undefined2)local_118;
                *(undefined1 *)((long)ppuVar8 + 2) = local_118._2_1_;
                *(undefined1 *)((long)ppuVar8 + 3) = local_118._3_1_;
                *(uint *)((long)ppuVar8 + 4) = local_118._4_4_;
                if ((int)local_b8 < local_b8._4_4_) {
                  local_b0[(int)local_b8] = ppuVar8;
                  local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 + 1);
                }
              }
            }
          }
        }
      }
      puVar11 = local_b0;
      plVar20 = plVar20 + 1;
      lVar22 = lVar22 + -8;
    } while (lVar22 != 0);
    if (1 < (int)local_b8) {
      uVar24 = 0;
      uVar9 = (int)local_b8 - 1;
      do {
        if ((int)uVar9 <= (int)uVar24) break;
        uVar16 = (ulong)uVar24;
        uVar18 = (ulong)uVar9;
        uVar12 = uVar16;
        uVar9 = uVar24;
        do {
          puVar6 = puVar11 + uVar12;
          iVar10 = FUN_036e7114(*puVar6,puVar6[1]);
          if (0 < iVar10) {
            uVar19 = puVar6[1];
            uVar9 = (uint)uVar12;
            puVar6[1] = puVar11[uVar12];
            puVar11[uVar12] = uVar19;
          }
          uVar12 = uVar12 + 1;
        } while (uVar18 != uVar12);
        if ((int)uVar9 <= (int)uVar24) break;
        uVar12 = (ulong)uVar9;
        uVar24 = uVar9;
        do {
          puVar6 = puVar11 + uVar12;
          iVar10 = FUN_036e7114(*puVar6,puVar6[-1]);
          if (iVar10 < 0) {
            uVar19 = puVar6[-1];
            uVar24 = (uint)uVar12;
            puVar6[-1] = puVar11[uVar12];
            puVar11[uVar12] = uVar19;
          }
          uVar12 = uVar12 - 1;
        } while ((long)uVar16 < (long)uVar12);
      } while (uVar24 != uVar9);
    }
  }
  local_118 = (undefined *)0x0;
  local_110 = (undefined8 *)0x0;
  local_f8 = &local_f0;
  local_f0 = &local_e8;
  local_108 = &local_f8;
  local_e8 = &local_e0;
  local_e0 = 0;
  if (local_d8 != (undefined8 *)0x0) {
    local_118 = (undefined *)0x400000000;
    local_110 = local_d8;
  }
  if ((int)local_b8 != 0) {
    iVar10 = 0;
    iVar23 = 0;
    puVar6 = local_b0 + (int)local_b8;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    puVar4 = PTR_DAT_04bbc1a0 + 0x10;
    puVar5 = PTR_DAT_04bb2010 + 0x10;
    puVar11 = local_b0;
    local_100 = local_108;
    do {
      puVar21 = (undefined4 *)*puVar11;
      lVar22 = *(long *)puVar7;
      local_128 = *puVar21;
      local_124 = puVar21[1];
      local_120 = 0;
      local_130 = puVar3;
      uVar9 = FUN_0277d6c4(&local_128);
      if (*(long *)puVar7 != 0) {
        lVar22 = *(long *)(lVar22 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar22 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar22 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(puVar21);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
          if (uVar9 < *(uint *)(lVar22 + 0x1d8)) {
            lVar22 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar9 * 8);
            if (lVar22 != 0) {
              local_120 = lVar22;
            }
          }
        }
      }
      local_148 = 0;
      local_138 = 0;
      local_158 = puVar4;
      local_150 = puVar5;
      local_140 = puVar5;
      FUN_01afb480(&local_130,&local_158);
      iVar14 = ((int)local_138 - (int)local_148) + 1;
      iVar2 = (local_138._4_4_ - local_148._4_4_) + 1;
      if (iVar10 == iVar14) {
        if (iVar23 != iVar2) goto LAB_036e6a10;
LAB_036e6d04:
      }
      else {
LAB_036e6a10:
        uVar9 = local_118._4_4_;
        if ((iVar14 == 2) && (iVar2 == 2)) {
          if (0 < (int)local_118) {
            lVar22 = 0;
            puVar17 = local_108;
            do {
              local_108 = (undefined8 *)local_110[lVar22];
              lVar22 = lVar22 + 1;
              *local_108 = puVar17;
              puVar17 = local_108;
            } while (lVar22 < (int)local_118);
          }
          local_118 = (undefined *)((ulong)local_118._4_4_ << 0x20);
LAB_036e6aac:
          puVar17 = local_108;
          iVar10 = local_118._4_4_;
          if ((int)local_118._4_4_ < 1) {
            iVar23 = 0;
            if (0 < (int)local_118._4_4_) goto LAB_036e6b74;
LAB_036e6ae0:
            if (iVar10 <= iVar23) goto LAB_036e6ae8;
LAB_036e6bc8:
            puVar17 = local_108;
            if (local_108 != (undefined8 *)0x0) {
              local_108 = (undefined8 *)*local_108;
            }
            *(undefined4 *)puVar17 = 2;
            if ((int)local_118 < (int)local_118._4_4_) {
              local_110[(int)local_118] = puVar17;
              local_118._0_4_ = (int)local_118 + 1;
              if ((int)local_118._4_4_ <= (int)local_118) goto LAB_036e6c7c;
              goto LAB_036e6c1c;
            }
            if ((int)local_118 < (int)local_118._4_4_) goto LAB_036e6c1c;
          }
          else {
            if (local_108 != (undefined8 *)0x0) {
              local_108 = (undefined8 *)*local_108;
            }
            *(undefined4 *)puVar17 = 0;
            iVar23 = 0;
            if (0 < (int)local_118._4_4_) {
              *local_110 = puVar17;
              iVar23 = 1;
              local_118 = (undefined *)CONCAT44(local_118._4_4_,1);
              if (1 < (int)local_118._4_4_) goto LAB_036e6b74;
              goto LAB_036e6ae0;
            }
            if ((int)local_118._4_4_ < 1) goto LAB_036e6ae0;
LAB_036e6b74:
            puVar17 = local_108;
            if (local_108 != (undefined8 *)0x0) {
              local_108 = (undefined8 *)*local_108;
            }
            *(undefined4 *)puVar17 = 1;
            iVar10 = local_118._4_4_;
            if ((int)local_118 < (int)local_118._4_4_) {
              local_110[(int)local_118] = puVar17;
              iVar23 = (int)local_118 + 1;
              local_118 = (undefined *)CONCAT44(local_118._4_4_,iVar23);
              if ((int)local_118._4_4_ <= iVar23) goto LAB_036e6ae8;
              goto LAB_036e6bc8;
            }
            iVar23 = (int)local_118;
            if ((int)local_118 < (int)local_118._4_4_) goto LAB_036e6bc8;
LAB_036e6ae8:
            if (iVar23 < iVar10) {
LAB_036e6c1c:
              puVar17 = local_108;
              if (local_108 != (undefined8 *)0x0) {
                local_108 = (undefined8 *)*local_108;
              }
              uVar15 = 3;
              goto LAB_036e6c54;
            }
          }
        }
        else {
          if (0 < (int)local_118) {
            lVar22 = 0;
            puVar17 = local_108;
            do {
              local_108 = (undefined8 *)local_110[lVar22];
              lVar22 = lVar22 + 1;
              *local_108 = puVar17;
              puVar17 = local_108;
            } while (lVar22 < (int)local_118);
          }
          puVar17 = local_108;
          local_118 = (undefined *)((ulong)local_118._4_4_ << 0x20);
          if (iVar14 == 6 && iVar2 == 6) goto LAB_036e6aac;
          if ((int)uVar9 < 1) {
            if (0 < (int)uVar9) goto LAB_036e6c40;
            goto LAB_036e6c7c;
          }
          if (local_108 != (undefined8 *)0x0) {
            local_108 = (undefined8 *)*local_108;
          }
          *(undefined4 *)puVar17 = 0;
          if (0 < (int)uVar9) {
            *local_110 = puVar17;
            local_118 = (undefined *)CONCAT44(uVar9,1);
          }
          if ((int)uVar9 <= (int)(uint)(0 < (int)uVar9)) goto LAB_036e6c7c;
LAB_036e6c40:
          puVar17 = local_108;
          if (local_108 != (undefined8 *)0x0) {
            local_108 = (undefined8 *)*local_108;
          }
          uVar15 = 2;
LAB_036e6c54:
          *(undefined4 *)puVar17 = uVar15;
          if ((int)local_118 < (int)local_118._4_4_) {
            local_110[(int)local_118] = puVar17;
            local_118 = (undefined *)CONCAT44(local_118._4_4_,(int)local_118 + 1);
          }
        }
LAB_036e6c7c:
        puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar12 = (ulong)local_118 & 0xffffffff;
        iVar10 = iVar14;
        iVar23 = iVar2;
        if (1 < (int)local_118) {
          do {
            uVar24 = puVar13[3];
            uVar9 = *puVar13 ^ *puVar13 << 0xb;
            *puVar13 = puVar13[1];
            puVar13[1] = puVar13[2];
            uVar9 = uVar9 >> 8 ^ uVar24 >> 0x13 ^ uVar9 ^ uVar24;
            puVar13[2] = uVar24;
            puVar13[3] = uVar9;
            uVar18 = uVar12 - 1 & 0xffffffff;
            uVar19 = local_110[uVar18];
            uVar16 = uVar12 * uVar9 >> 0x1d & 0x7fffffff8;
            local_110[uVar18] = *(undefined8 *)((long)local_110 + uVar16);
            *(undefined8 *)((long)local_110 + uVar16) = uVar19;
            bVar1 = 2 < uVar12;
            uVar12 = uVar12 - 1;
          } while (bVar1);
          goto LAB_036e6d04;
        }
      }
      if ((int)local_118 != 0) {
        FUN_01afade0(&local_130,*(undefined4 *)*local_110);
        if (0 < (int)local_118) {
          puVar17 = (undefined8 *)*local_110;
          *puVar17 = local_108;
          local_108 = puVar17;
          if (0 < (int)local_118) {
            if ((int)local_118 - 1U == 0) {
              iVar14 = 1;
            }
            else {
              memmove(local_110,local_110 + 1,(ulong)((int)local_118 - 1U) << 3);
              iVar14 = (int)local_118;
            }
            local_118 = (undefined *)CONCAT44(local_118._4_4_,iVar14 + -1);
          }
        }
        *puVar21 = local_128;
        puVar21[1] = local_124;
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar6);
    if ((int)local_b8 != 0) {
      lVar22 = (long)(int)local_b8 << 3;
      iVar10 = 0;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      puVar4 = PTR_DAT_04bc0510 + 0x10;
      puVar5 = PTR_DAT_04bbc1a0 + 0x10;
      puVar11 = local_b0;
      do {
        plVar20 = (long *)*puVar11;
        local_130 = puVar3;
        if (iVar10 == 0) {
          FUN_03741f10(&local_118,&local_78);
          local_128 = (int)local_108;
          local_124 = local_108._4_4_;
LAB_036e6dbc:
          local_118 = (undefined *)((ulong)local_118 & 0xffffffff00000000);
          uVar9 = FUN_036e7344(plVar20,&local_130,&local_118);
          iVar10 = iVar10 + (uVar9 & 1);
        }
        else {
          FUN_03742290();
          local_128 = (int)local_108;
          local_124 = local_108._4_4_;
          if (iVar10 != 1) goto LAB_036e6dbc;
          lVar25 = *(long *)puVar7;
          local_150 = (undefined *)*plVar20;
          local_148 = 0;
          local_158 = puVar4;
          uVar9 = FUN_0277d6c4(&local_150);
          if (*(long *)puVar7 != 0) {
            lVar25 = *(long *)(lVar25 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar25 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              lVar25 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(plVar20);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
              if (uVar9 < *(uint *)(lVar25 + 0x1d8)) {
                lVar25 = *(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar9 * 8);
                if (lVar25 != 0) {
                  local_148 = lVar25;
                }
              }
            }
          }
          local_108 = (undefined8 *)0x0;
          local_110 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
          local_f8 = (undefined8 ***)0x0;
          local_118 = puVar5;
          local_100 = local_110;
          FUN_01afb480(&local_158,&local_118);
          if (((int)local_f8 - (int)local_108) + 1 < 5) {
            if ((local_f8._4_4_ - local_108._4_4_) + 1 < 5) goto LAB_036e6dbc;
          }
          iVar10 = 2;
        }
        puVar11 = puVar11 + 1;
        lVar22 = lVar22 + -8;
      } while (lVar22 != 0);
    }
  }
  return;
}


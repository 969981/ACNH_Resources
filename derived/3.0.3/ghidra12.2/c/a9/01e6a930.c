
uint FUN_01e6a930(long *param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  byte bVar15;
  uint *puVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  uint local_268;
  uint uStack_264;
  undefined8 local_260;
  uint local_258;
  undefined2 uStack_254;
  undefined2 uStack_252;
  undefined6 local_250;
  undefined2 uStack_24a;
  undefined8 local_248;
  undefined *puStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined4 local_224;
  uint uStack_220;
  uint local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined5 local_204;
  undefined3 uStack_1ff;
  undefined4 local_1fc;
  undefined1 uStack_1f8;
  undefined1 local_1f7;
  long *local_1f4;
  undefined4 local_1ec;
  undefined2 local_1e8;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined *local_1c0;
  uint *local_1b8;
  uint local_1b0;
  uint local_1ac [7];
  undefined1 local_18d;
  undefined *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [31];
  undefined1 local_155;
  undefined2 local_154;
  uint local_b8 [2];
  undefined8 local_b0;
  int *piStack_a8;
  int *local_a0;
  undefined **ppuStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined *local_80;
  long local_78;
  undefined2 local_70;
  int local_64;
  
  local_64 = param_3;
  local_78 = FUN_0265c3e0(*(undefined4 *)(param_1[1] + 0x508));
  puVar5 = PTR_DAT_04bc35d0;
  if (local_78 != 0) {
    local_70 = 0;
    local_80 = PTR_DAT_04bc35d0 + 0x10;
    if (*(long *)(local_78 + 0x28) == 0) {
      uVar6 = 0;
    }
    else {
      puVar10 = *(undefined8 **)(*(long *)(local_78 + 0x28) + 0x10);
      uVar6 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        uVar6 = (**(code **)*puVar10)();
      }
    }
    local_70 = CONCAT11(uVar6,(char)local_70) & 0x1ff;
    local_80 = PTR_DAT_04bb67a0 + 0x10;
    plVar11 = *(long **)(param_1[1] + 0x60);
    if (plVar11 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_052461c0), iVar8 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar11 = &DAT_05240280;
      }
      else {
        plVar11 = &DAT_05240280;
      }
    }
    plVar2 = param_1 + 0x1de2;
    plVar3 = param_1 + 0x2146;
    (**(code **)(*plVar11 + 0x348))(&local_260);
    puVar1 = PTR_DAT_04bb43c0;
    local_88 = 0;
    local_90 = (undefined4)local_260;
    uStack_8c = local_260._4_4_;
    lVar18 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(&local_90);
    if (*(long *)puVar1 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if (((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
         (lVar18 = *(long *)PTR_DAT_04bb43a8, lVar18 != 0)) {
        uVar12 = FUN_0277d6c4(&local_260);
        local_88 = lVar18 + (uVar12 & 0xffffffff) * 0x23;
        if (0x752 < ((uint)(uVar12 >> 3) & 0x1fffffff)) {
          local_88 = lVar18;
        }
      }
    }
    uVar12 = FUN_0220f914(0);
    lVar18 = local_78;
    if ((uVar12 & 1) == 0) {
      plVar11 = *(long **)(param_1[1] + 0x60);
      if (plVar11 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_052461c0);
          if (iVar8 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          plVar11 = &DAT_05240280;
        }
        else {
          plVar11 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar11 + 0x370))(local_b8);
      lVar19 = *(long *)puVar1;
      uVar7 = FUN_0277d6c4(local_b8);
      lVar18 = *(long *)puVar1;
      if (lVar18 == 0) {
LAB_01e6ade8:
        lVar18 = local_78;
        if ((*(long *)(local_78 + 0x28) != 0) &&
           (plVar11 = *(long **)(*(long *)(local_78 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
          local_260 = *(undefined **)(local_78 + 8);
          uVar13 = *(undefined8 *)(local_78 + 0x10);
          local_258 = (uint)uVar13;
          uStack_254 = (undefined2)((ulong)uVar13 >> 0x20);
          uStack_252 = (undefined2)((ulong)uVar13 >> 0x30);
          local_250 = 0x13230;
          uStack_24a = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_260);
        }
        lVar19 = local_78;
        if (*(char *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x1315b) != '\x12') {
          if ((*(long *)(local_78 + 0x28) != 0) &&
             (plVar11 = *(long **)(*(long *)(local_78 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
            local_260 = *(undefined **)(local_78 + 8);
            uVar13 = *(undefined8 *)(local_78 + 0x10);
            local_258 = (uint)uVar13;
            uStack_254 = (undefined2)((ulong)uVar13 >> 0x20);
            uStack_252 = (undefined2)((ulong)uVar13 >> 0x30);
            local_250 = 0x13230;
            uStack_24a = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11,&local_260);
          }
          if (*(char *)(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8) + 0x1315b) != '\x01')
          goto LAB_01e6b4c4;
        }
        if (param_1[1] == 0) {
LAB_01e6b07c:
          puVar16 = (uint *)PTR_DAT_04bc15a0;
LAB_01e6b084:
          uVar7 = *puVar16;
        }
        else {
          uVar7 = *(uint *)(param_1[1] + 0x508);
          if ((uVar7 < 10) && ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] != '\0')) {
            if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
              (&DAT_053fea30)[(ulong)uVar7 * 0xba0] = (&DAT_053fea30)[(ulong)uVar7 * 0xba0] & 0xfe;
            }
            else {
              lVar18 = *(long *)PTR_DAT_04bb3968;
              lVar19 = lVar18 + 0xe18 + (ulong)uVar7 * 0x28;
              pbVar14 = (byte *)(lVar19 + 8);
              if (*pbVar14 < 100) {
                local_250 = (undefined6)((ulong)*(long *)(lVar19 + 0x16) >> 0x10);
                uVar13 = *(undefined8 *)(lVar19 + 0x10);
                local_260 = (undefined *)((ulong)*(undefined **)pbVar14 & 0xffffffffcfffffff);
                local_258 = (uint)uVar13;
                uStack_254 = (undefined2)((ulong)uVar13 >> 0x20);
                uStack_252 = (undefined2)((ulong)uVar13 >> 0x30);
                if (*(undefined **)pbVar14 != local_260 ||
                    *(long *)(lVar19 + 0x16) != CONCAT62(local_250,uStack_252)) {
                  *(undefined **)pbVar14 = local_260;
                  *(undefined8 *)(lVar19 + 0x10) = uVar13;
                  *(undefined1 *)(lVar18 + 0xe18 + (ulong)uVar7 * 0x28 + 0x1e) = 1;
                  *(ulong *)(lVar19 + 0x16) = CONCAT62(local_250,uStack_252);
                }
              }
            }
          }
          if (((param_1[1] == 0) || (uVar7 = *(uint *)(param_1[1] + 0x508), 9 < uVar7)) ||
             ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] == '\0')) goto LAB_01e6b07c;
          if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
            if ((int)(&DAT_053fe898)[(ulong)uVar7 * 0x2e8] < 1) goto LAB_01e6b07c;
            uVar12 = (ulong)uVar7;
            iVar4 = (&DAT_053fe898)[(ulong)uVar7 * 0x2e8] + (&DAT_053fe894)[uVar12 * 0x2e8] + -1;
            iVar8 = 0;
            if ((int)(&DAT_053fe890)[uVar12 * 0x2e8] <= iVar4) {
              iVar8 = (&DAT_053fe890)[uVar12 * 0x2e8];
            }
            puVar16 = (uint *)((&DAT_053fe888)[uVar12 * 0x174] + (long)(iVar4 - iVar8) * 0x14 + 8);
            goto LAB_01e6b084;
          }
          uVar7 = *(byte *)(*(long *)PTR_DAT_04bb3968 + (ulong)uVar7 * 0x28 + 0xe23) & 3;
        }
        local_268 = 0;
        puVar16 = &local_268;
        if (uVar7 != 1) {
          puVar16 = (uint *)0x0;
        }
        FUN_01e6b6d8(param_1,0,1,puVar16);
        iVar8 = *param_2;
        if (iVar8 != 2) {
          if (iVar8 == 1) {
            local_260 = (undefined *)((ulong)local_260 & 0xffffffff00000000);
            local_238 = 0;
            local_224 = 0;
            uStack_220 = 0xfffe;
            local_21c = 0;
            puVar1 = PTR_DAT_04bbc1a0 + 0x10;
            puStack_240 = PTR_DAT_04bb2010 + 0x10;
            local_258 = (uint)puVar1;
            uStack_254 = (undefined2)((ulong)puVar1 >> 0x20);
            uStack_252 = (undefined2)((ulong)puVar1 >> 0x30);
            local_250 = SUB86(puStack_240,0);
            uStack_24a = (undefined2)((ulong)puStack_240 >> 0x30);
            local_248 = 0;
            FUN_0277d4ac(&uStack_220);
            local_204 = 0;
            uStack_1ff = 0;
            local_1fc = 0;
            uStack_1f8 = 0;
            local_208 = 0xbf800000;
            local_218 = 0x41c8000041800000;
            uStack_210 = 0xbf800000bf800000;
            local_1f4 = (long *)0xfffe;
            FUN_0277d4ac(&local_1f4);
            local_1ec = 0;
            local_1b0 = 0x20;
            local_180 = local_174;
            local_178 = 0x20;
            local_1b8 = local_1ac;
            local_18d = 0;
            local_1c0 = PTR_DAT_04bb2028 + 0x10;
            local_1ac[0] = local_1ac[0] & 0xffffff00;
            local_155 = 0;
            local_174[0] = 0;
            local_260 = (undefined *)((ulong)local_260 & 0xffffffff00000000);
            local_248 = 0;
            uStack_228 = 0;
            local_224 = 0;
            local_b0 = (long *)0xfffe;
            local_238 = 0;
            uStack_230 = 0;
            local_188 = local_1c0;
            FUN_0277d4ac(&local_b0);
            uStack_220 = (uint)local_b0;
            local_21c = local_b0._4_4_;
            local_218 = 0x41c8000041800000;
            uStack_210 = 0xbf800000bf800000;
            local_208 = 0xbf800000;
            local_204 = 0;
            uStack_1ff = 0;
            local_1fc = 0;
            uStack_1f8 = 0;
            local_b0 = (long *)0xfffe;
            FUN_0277d4ac(&local_b0);
            local_1ec = 0;
            local_1e8 = 0;
            local_1e4 = 0;
            local_1dc = 0;
            local_1d4 = 0;
            local_1cc = 0;
            local_1c4 = 0;
            local_1f4 = local_b0;
            *(undefined1 *)local_1b8 = 0;
            *local_180 = 0;
            local_1c4._0_2_ = CONCAT11(1,(undefined1)local_1c4);
            plVar11 = *(long **)(param_1[1] + 0x60);
            if (plVar11 == (long *)0x0) {
              if ((DAT_052461c0 & 1) == 0) {
                iVar8 = __cxa_guard_acquire(&DAT_052461c0);
                plVar11 = &DAT_05240280;
                if (iVar8 != 0) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
              }
              else {
                plVar11 = &DAT_05240280;
              }
            }
            (**(code **)(*plVar11 + 0x370))(&local_b0,plVar11);
            uVar13 = 0x13;
            puVar10 = &local_260;
            local_1f4 = local_b0;
            lVar18 = *param_1;
LAB_01e6b2a4:
            (**(code **)(lVar18 + 0x38))(param_1,uVar13,puVar10,1);
            goto LAB_01e6b2cc;
          }
          if (iVar8 != 0) goto LAB_01e6b2cc;
        }
        FUN_01e63f1c(&local_260);
        local_1f7 = 1;
        local_154 = 0x101;
        local_260 = (undefined *)CONCAT44(local_260._4_4_,0x13);
        local_1fc = 1;
        if (*param_2 == 0) {
          if ((int)*plVar2 < *(int *)((long)param_1 + 0xef14)) {
            FUN_021920b0(plVar2,&local_260);
          }
        }
        else {
          plVar11 = (long *)((long)param_1 + 0x1255c);
          if ((int)*plVar3 < 1) {
            plVar3 = param_1 + 0x1de2;
            plVar11 = param_1 + 0x24ab;
          }
          FUN_02192440(plVar3,(int)*plVar11 + param_3,&local_260);
        }
      }
      else {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((*(uint *)(lVar19 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01e6ade8;
        local_250 = 0;
        uStack_24a = 0;
        local_260 = PTR_DAT_04bc0510 + 0x10;
        local_258 = local_b8[0];
        uStack_254 = (undefined2)local_b8[1];
        uStack_252 = (undefined2)(local_b8[1] >> 0x10);
        uVar7 = FUN_0277d6c4(&local_258);
        if (*(long *)puVar1 == 0) {
LAB_01e6ada8:
          local_b0 = (long *)CONCAT44(local_b0._4_4_,0x14);
          local_268 = 0xbc;
        }
        else {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_01e6ada8;
          lVar18 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(local_b8);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar7) ||
             (puVar16 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar16 == (uint *)0x0)) goto LAB_01e6ada8;
          local_268 = 0;
          local_b0 = (long *)CONCAT44(local_b0._4_4_,0x14);
          uVar7 = *puVar16;
          if ((uVar7 != 0) && (puVar16 != (uint *)(ulong)uVar7)) {
            puVar17 = (uint *)((long)puVar16 - (long)(ulong)uVar7);
            local_268 = 0;
            if (*puVar17 != 0) {
              uVar7 = puVar17[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar18 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar17 + lVar18 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar18 != 0) {
                  uVar9 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar9 = (uint)((ulong)((long)puVar16 - lVar18) / (ulong)uVar7);
                  }
                  if (*puVar17 <= uVar9) {
                    uVar9 = 0xffffffff;
                  }
                  if ((uVar9 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_268 = (uint)*(ushort *)
                                         (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar9 * 2),
                     local_268 < 0xbd)) goto LAB_01e6adb4;
                }
              }
              local_268 = 0;
            }
          }
        }
LAB_01e6adb4:
        if (local_268 != (uint)local_b0) goto LAB_01e6ade8;
        if (*param_2 == 1) {
          lVar18 = *param_1;
          uVar13 = 0x12;
          puVar10 = (undefined8 *)0x0;
          goto LAB_01e6b2a4;
        }
      }
LAB_01e6b2cc:
      uVar7 = 1;
LAB_01e6b2d0:
      local_80 = puVar5 + 0x10;
      if (local_70._1_1_ != '\0') {
        lVar18 = *(long *)(local_78 + 0x28);
        if ((char)local_70 == '\0') {
          if (lVar18 == 0) goto LAB_01e6b510;
          puVar10 = *(undefined8 **)(lVar18 + 0x18);
        }
        else {
          if (lVar18 == 0) goto LAB_01e6b510;
          puVar10 = *(undefined8 **)(lVar18 + 8);
        }
        if (puVar10 != (undefined8 *)0x0) {
          (**(code **)*puVar10)();
        }
      }
      goto LAB_01e6b510;
    }
    if ((*(long *)(local_78 + 0x28) != 0) &&
       (plVar11 = *(long **)(*(long *)(local_78 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
      local_260 = *(undefined **)(local_78 + 8);
      uVar13 = *(undefined8 *)(local_78 + 0x10);
      local_258 = (uint)uVar13;
      uStack_254 = (undefined2)((ulong)uVar13 >> 0x20);
      uStack_252 = (undefined2)((ulong)uVar13 >> 0x30);
      local_250 = 0x13230;
      uStack_24a = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_260);
    }
    lVar19 = local_78;
    uVar7 = (uint)*(byte *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x1315b);
    local_b0 = (long *)CONCAT44(local_b0._4_4_,uVar7);
    if (uVar7 != 0x12) {
      if ((*(long *)(local_78 + 0x28) != 0) &&
         (plVar11 = *(long **)(*(long *)(local_78 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
        local_260 = *(undefined **)(local_78 + 8);
        uVar13 = *(undefined8 *)(local_78 + 0x10);
        local_258 = (uint)uVar13;
        uStack_254 = (undefined2)((ulong)uVar13 >> 0x20);
        uStack_252 = (undefined2)((ulong)uVar13 >> 0x30);
        local_250 = 0x13230;
        uStack_24a = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_260);
      }
      lVar18 = local_78;
      local_b8[0] = (uint)*(byte *)(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8) + 0x1315b);
      if (local_b8[0] != 1) {
        if ((*(long *)(local_78 + 0x28) != 0) &&
           (plVar11 = *(long **)(*(long *)(local_78 + 0x28) + 0x20), plVar11 != (long *)0x0)) {
          local_260 = *(undefined **)(local_78 + 8);
          uVar13 = *(undefined8 *)(local_78 + 0x10);
          local_258 = (uint)uVar13;
          uStack_254 = (undefined2)((ulong)uVar13 >> 0x20);
          uStack_252 = (undefined2)((ulong)uVar13 >> 0x30);
          local_250 = 0x13230;
          uStack_24a = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_260);
        }
        local_260 = PTR_DAT_04bb2020 + 0x10;
        local_258 = 0x406d3ab;
        uStack_254 = 0;
        uStack_252 = 0;
        iVar8 = FUN_02749340(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x1267c,&local_260);
        if (iVar8 != 0) goto LAB_01e6b4c4;
        local_a0 = &local_64;
        ppuStack_98 = &local_80;
        local_b0 = param_1;
        piStack_a8 = param_2;
        uVar7 = FUN_021ded20();
        puVar1 = PTR_DAT_04bb30a0;
        uVar9 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
        if ((uVar9 & 0xfffffffe) == 6) {
LAB_01e6abf0:
          uVar7 = FUN_01e7ad40(&local_b0);
        }
        else {
          puVar16 = (uint *)(param_1 + 0x15a7);
          uVar13 = FUN_01e26c54(param_1 + 0x1605);
          pbVar14 = (byte *)FUN_01e27050(uVar13,0x14,0x67850558,*(undefined8 *)PTR_DAT_04bc1588);
          if (pbVar14 == (byte *)0x0) {
            bVar15 = 2;
          }
          else {
            bVar15 = *pbVar14;
          }
          if (1 < bVar15) {
            bVar15 = 2;
          }
          if ((bVar15 == 1 && ((uVar7 ^ 0xffffffff) & 1) == 0) && (*puVar16 != 3))
          goto LAB_01e6abf0;
          plVar11 = (long *)FUN_016debb0(param_1[1]);
          (**(code **)(*plVar11 + 0x370))(local_b8);
          uVar12 = FUN_0277d9a8(local_b8);
          if ((uVar12 & 1) != 0) {
            FUN_01ad5d04(&local_260,local_b8);
            uVar12 = FUN_01ad6a30(&local_260,0x14);
            if ((uVar12 & 1) != 0) goto LAB_01e6b4c4;
          }
          if (*puVar16 == 3) {
            uVar9 = FUN_00a86724(*(undefined8 *)puVar1);
            if ((uVar9 & 0xfffffffe) != 6) {
              if ((uVar7 & 1) != 0) {
LAB_01e6b4b8:
                if (*puVar16 != 3) goto LAB_01e6abf0;
              }
              goto LAB_01e6b4c4;
            }
            goto LAB_01e6abf0;
          }
          if ((uVar7 & 1) != 0) {
            lVar18 = param_1[1];
            uVar7 = *(uint *)(lVar18 + 0x288);
            *(undefined4 *)(lVar18 + 0x288) = *(undefined4 *)(lVar18 + 0x28c);
            uVar7 = uVar7 ^ uVar7 << 0xb;
            *(undefined4 *)(lVar18 + 0x28c) = *(undefined4 *)(lVar18 + 0x290);
            uVar9 = *(uint *)(lVar18 + 0x294);
            *(uint *)(lVar18 + 0x290) = uVar9;
            uVar7 = uVar7 >> 8 ^ uVar9 >> 0x13 ^ uVar7 ^ uVar9;
            *(uint *)(lVar18 + 0x294) = uVar7;
            uVar12 = (ulong)*puVar16;
            if (3 < *puVar16) {
              uVar12 = 0;
            }
            if ((uint)(&DAT_04101d10)[uVar12] <= (uint)((ulong)uVar7 * 100 >> 0x20)) {
              uVar7 = FUN_00a86724(*(undefined8 *)puVar1);
              if ((uVar7 & 0xfffffffe) != 6) goto LAB_01e6b4b8;
              goto LAB_01e6abf0;
            }
          }
          iVar8 = *param_2;
          uVar7 = 1;
          if (iVar8 == 2) {
LAB_01e6b430:
            FUN_01e63f1c(&local_260);
            local_154 = CONCAT11(local_154._1_1_,1);
            local_260 = (undefined *)CONCAT44(local_260._4_4_,0x12);
            FUN_021e8820(&local_268,param_1[1]);
            local_1fc = 1;
            local_1b0 = local_268;
            local_1ac[0] = uStack_264;
            if (*param_2 == 0) {
              if ((int)*plVar2 < *(int *)((long)param_1 + 0xef14)) {
                FUN_021920b0(plVar2,&local_260);
              }
            }
            else {
              plVar11 = (long *)((long)param_1 + 0x1255c);
              if ((int)*plVar3 < 1) {
                plVar3 = param_1 + 0x1de2;
                plVar11 = param_1 + 0x24ab;
              }
              FUN_02192440(plVar3,(int)*plVar11 + local_64,&local_260);
            }
          }
          else if (iVar8 == 1) {
            FUN_01e7b7bc(&local_260);
            FUN_021e8820(&local_268,param_1[1]);
            uStack_220 = local_268;
            local_21c = uStack_264;
            (**(code **)(*param_1 + 0x38))(param_1,0x12,&local_260,1);
          }
          else if (iVar8 == 0) goto LAB_01e6b430;
        }
        goto LAB_01e6b2d0;
      }
    }
LAB_01e6b4c4:
    local_80 = puVar5 + 0x10;
    if (local_70._1_1_ != '\0') {
      lVar18 = *(long *)(local_78 + 0x28);
      if ((char)local_70 == '\0') {
        if (lVar18 != 0) {
          puVar10 = *(undefined8 **)(lVar18 + 0x18);
          goto joined_r0x01e6b4fc;
        }
      }
      else if (lVar18 != 0) {
        puVar10 = *(undefined8 **)(lVar18 + 8);
joined_r0x01e6b4fc:
        if (puVar10 != (undefined8 *)0x0) {
          (**(code **)*puVar10)();
        }
      }
    }
  }
  uVar7 = 0;
LAB_01e6b510:
  return uVar7 & 1;
}


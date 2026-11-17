
void FUN_03113780(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *****pppppuVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined *local_600;
  undefined8 uStack_5f8;
  undefined *local_5f0;
  undefined2 local_5e8;
  undefined2 uStack_5e6;
  undefined4 local_5e4;
  undefined4 uStack_5e0;
  undefined4 local_5dc;
  undefined *local_5d8;
  undefined8 uStack_5d0;
  undefined4 local_5c8;
  undefined1 local_5c4;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined4 local_5b0;
  undefined *local_5a8;
  undefined1 *puStack_5a0;
  undefined4 local_598;
  undefined1 local_594 [63];
  undefined1 local_555;
  undefined *local_550;
  undefined1 *puStack_548;
  undefined4 local_540;
  undefined1 local_53c [63];
  undefined1 local_4fd;
  undefined8 local_4f8;
  undefined *local_4f0;
  undefined8 uStack_4e8;
  undefined4 local_4e0;
  undefined1 local_4dc;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined4 local_4c8;
  undefined *local_4c0;
  undefined1 *puStack_4b8;
  undefined4 local_4b0;
  undefined1 local_4ac [63];
  undefined1 local_46d;
  undefined *local_468;
  undefined1 *puStack_460;
  undefined4 local_458;
  undefined1 local_454 [63];
  undefined1 local_415;
  undefined8 local_410;
  undefined *local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined1 local_3f4;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined *local_3d8;
  undefined1 *local_3d0;
  undefined4 local_3c8;
  undefined1 local_3c4 [63];
  undefined1 local_385;
  undefined *local_380;
  undefined1 *local_378;
  undefined4 local_370;
  undefined1 local_36c [63];
  undefined1 local_32d;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined *local_310;
  undefined1 *local_308;
  undefined4 local_300;
  undefined1 local_2fc [63];
  undefined1 local_2bd;
  undefined *local_2b8;
  undefined1 *local_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4 [63];
  undefined1 local_265;
  undefined *local_260;
  int local_258;
  undefined1 local_254;
  undefined8 local_250;
  undefined2 local_248;
  undefined8 local_240;
  undefined *local_238;
  undefined1 *local_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined *local_208;
  undefined1 *local_200;
  undefined4 local_1f8;
  undefined1 local_1f4 [63];
  undefined1 local_1b5;
  undefined *local_1b0;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [63];
  undefined1 local_15d;
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 *****local_c8;
  undefined8 *****pppppuStack_c0;
  undefined8 ****local_b8;
  undefined8 ***local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90 [5];
  undefined4 local_64;
  
  local_b8 = &local_b0;
  local_b0 = &local_a8;
  local_a0 = &local_98;
  local_a8 = &local_a0;
  uVar13 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_c8 = &local_b8;
  local_d0 = local_90;
  local_98 = 0;
  if (local_d0 != (undefined8 *)0x0) {
    iVar6 = 0;
    local_d8 = 0x500000000;
    pppppuStack_c0 = local_c8;
    do {
      iVar5 = FUN_0088aaf0(uVar13,param_2,iVar6);
      if (iVar5 == 0) {
        puVar1 = PTR_DAT_04bc4f00;
        iVar7 = (int)local_d8;
        goto joined_r0x0311389c;
      }
      uVar4 = FUN_0088b600(uVar13,param_2,iVar6);
      pppppuVar3 = local_c8;
      iVar7 = (int)local_d8;
      if ((int)local_d8 < local_d8._4_4_) {
        if (local_c8 != (undefined8 *****)0x0) {
          local_c8 = (undefined8 *****)*local_c8;
        }
        *(int *)pppppuVar3 = iVar5;
        *(float *)((long)pppppuVar3 + 4) = (float)uVar4;
        if ((int)local_d8 < local_d8._4_4_) {
          local_d0[(int)local_d8] = pppppuVar3;
          iVar7 = (int)local_d8 + 1;
          local_d8 = CONCAT44(local_d8._4_4_,iVar7);
        }
      }
      puVar1 = PTR_DAT_04bc4f00;
      if (uVar4 == 0) goto joined_r0x0311389c;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 5);
    iVar6 = 5;
joined_r0x0311389c:
    PTR_DAT_04bc4f00 = puVar1;
    if (iVar7 != 0) {
      plVar11 = *(long **)(param_1 + 0x50);
      if (plVar11 != (long *)0x0) {
        local_5e8 = 9;
        uStack_5e6 = 0;
        local_5f0 = puVar1 + 0x10;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_5f0);
        fVar15 = (float)(**(code **)(plVar11[3] + 0xb0))(plVar11[1]);
        plVar11 = *(long **)(param_1 + 0x50);
        local_5e8 = 0x14;
        uStack_5e6 = 0;
        if ((float)iVar6 <= fVar15) {
          fVar15 = (float)iVar6;
        }
        local_5f0 = puVar1 + 0x10;
        (**(code **)(*plVar11 + 0x18))(plVar11,&local_5f0);
        (**(code **)(plVar11[3] + 0x158))(fVar15,plVar11[1]);
        plVar11 = *(long **)(param_1 + 0x50);
        local_5e8 = 9;
        uStack_5e6 = 0;
        local_5f0 = PTR_DAT_04bc4e68 + 0x10;
        (**(code **)(*plVar11 + 0x18))(plVar11,&local_5f0);
        (**(code **)(plVar11[3] + 0x1d0))(plVar11[1]);
      }
      puVar2 = PTR_DAT_04bb2bc0;
      if (iVar6 == 0) {
        if ((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
          local_224 = 0;
          local_228 = 0x40;
          local_220 = 0xffffffff;
          local_230 = local_158;
          local_218 = 0xffffffff00000000;
          local_200 = local_1f4;
          local_210 = 0xffffffff;
          local_1f8 = 0x40;
          local_1b5 = 0;
          local_208 = PTR_DAT_04bb2bc0 + 0x10;
          local_1a8 = local_19c;
          local_1f4[0] = 0;
          local_1a0 = 0x40;
          local_15d = 0;
          local_19c[0] = 0;
          local_238 = PTR_DAT_04bb6b18 + 0x10;
          local_e0 = 0;
          local_e8 = 0;
          local_f0 = 0;
          local_f8 = 0;
          local_100 = 0;
          local_108 = 0;
          local_110 = 0;
          local_118 = 0;
          puVar10 = &local_d8;
          if (&local_d8 <= local_158 + 2) {
            puVar10 = (undefined8 *)(local_158 + 2);
          }
          local_120 = 0;
          local_128 = 0;
          local_130 = 0;
          local_138 = 0;
          local_140 = 0;
          local_148 = 0;
          local_150 = 0;
          local_158 = (undefined1  [8])0x0;
          local_1b0 = local_208;
          memset(local_230,0,(size_t)((long)puVar10 + (-0xe0 - (long)&local_238)));
          if ((int)local_d8 == 0) {
            puVar9 = (uint *)0x0;
          }
          else {
            puVar9 = (uint *)*local_d0;
          }
          if (*puVar9 < 0x14) {
            puVar10 = *(undefined8 **)(PTR_DAT_04bb5828 + (ulong)*puVar9 * 8 + 0x98);
          }
          else {
            puVar10 = &DAT_0407ebb1;
          }
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          local_5e8 = SUB82(puVar10,0);
          uStack_5e6 = (undefined2)((ulong)puVar10 >> 0x10);
          local_5e4 = (undefined4)((ulong)puVar10 >> 0x20);
          local_5f0 = puVar1;
          FUN_006f50a0(&local_238,&DAT_056f32e0,&local_5f0,0);
          puStack_5a0 = local_594;
          local_5e4 = 0;
          uStack_5e0 = 0;
          local_5a8 = puVar2 + 0x10;
          local_5e8 = 0x100;
          puStack_548 = local_53c;
          local_5dc = 0;
          local_5c8 = 0;
          local_5c4 = 0;
          local_5b0 = 0xffffffff;
          local_598 = 0x40;
          local_555 = 0;
          local_594[0] = 0;
          local_540 = 0x40;
          local_4fd = 0;
          local_53c[0] = 0;
          local_5c0 = 0xffffffff;
          uStack_5b8 = 0xffffffff00000000;
          local_5d8 = PTR_DAT_04bb2e00 + 0x10;
          local_3e8 = 0xffffffff00000000;
          puStack_460 = local_454;
          local_454[0] = 0;
          puStack_4b8 = local_4ac;
          local_4ac[0] = 0;
          local_4e0 = 0;
          local_4dc = 0;
          local_4c8 = 0xffffffff;
          local_4b0 = 0x40;
          local_46d = 0;
          local_458 = 0x40;
          local_415 = 0;
          local_4f8 = 0;
          local_3f8 = 0;
          local_3f4 = 0;
          local_3f0 = 0xffffffff;
          local_3e0 = 0xffffffff;
          local_3c8 = 0x40;
          local_385 = 0;
          local_370 = 0x40;
          local_32d = 0;
          local_410 = 0;
          local_318 = 0;
          local_320 = 0;
          local_328 = 0;
          local_300 = 0x40;
          local_2bd = 0;
          local_2a8 = 0x40;
          local_265 = 0;
          local_4d8 = 0xffffffff;
          uStack_4d0 = 0xffffffff00000000;
          uStack_5d0 = 0;
          local_3d0 = local_3c4;
          local_3c4[0] = 0;
          local_2fc[0] = 0;
          local_378 = local_36c;
          local_36c[0] = 0;
          uStack_4e8 = 0;
          uStack_400 = 0;
          local_308 = local_2fc;
          local_2b0 = local_2a4;
          local_2a4[0] = 0;
          local_258 = *(int *)PTR_DAT_04bc0b30;
          local_254 = 0;
          *(int *)PTR_DAT_04bc0b30 = local_258 + 1;
          local_260 = PTR_DAT_04bc0a78 + 0x10;
          local_5f0 = PTR_DAT_04bc0bf0 + 0x10;
          uVar13 = *(undefined8 *)(param_1 + 0x58);
          local_250 = 0;
          local_248 = 0;
          local_240 = 0;
          local_550 = local_5a8;
          local_4f0 = local_5d8;
          local_4c0 = local_5a8;
          local_468 = local_5a8;
          local_408 = local_5d8;
          local_3d8 = local_5a8;
          local_380 = local_5a8;
          local_310 = local_5a8;
          local_2b8 = local_5a8;
          uStack_5f8 = (**(code **)(**(long **)(param_1 + 0x48) + 0x170))();
          local_600 = puVar1;
          FUN_01bea210(&local_5f0,uVar13,&local_600,param_1 + 0x60);
          local_600 = (undefined *)CONCAT44(local_600._4_4_,0x15);
          if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar6 != 0)) {
            FUN_01bb25c8(PTR_DAT_04bc0a80);
            __cxa_guard_release(PTR_DAT_04bc0a88);
          }
          if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
            uVar12 = 0;
            do {
              if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar12 * 4) == 0x8c) goto LAB_03113d90;
              uVar12 = uVar12 + 1;
            } while (*(uint *)PTR_DAT_04bc0a80 != uVar12);
          }
          uVar12 = 0;
LAB_03113d90:
          local_64 = (undefined4)uVar12;
          FUN_01bae480(&local_260,&local_238,0,&local_64,(ulong)local_600 & 0xffffffff);
          FUN_01bea9c8(&local_5f0);
          FUN_01be9eb8(&local_5f0);
        }
      }
      else {
        uVar12 = local_d8 & 0xffffffff;
        if (0 < (int)local_d8) {
          uVar14 = 0;
          do {
            if ((long)(int)*(uint *)(param_1 + 8) <= (long)uVar14) {
              return;
            }
            if ((uVar14 < *(uint *)(param_1 + 8)) &&
               (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + uVar14 * 8), lVar8 != 0)) {
              plVar11 = *(long **)(lVar8 + 0x208);
              fVar15 = *(float *)(local_d0[uVar14] + 4);
              if (0.0 <= fVar15 && plVar11 != (long *)0x0) {
                local_5e8 = 9;
                uStack_5e6 = 0;
                local_5f0 = puVar1 + 0x10;
                (**(code **)(*plVar11 + 0x20))(plVar11,&local_5f0);
                fVar16 = (float)(**(code **)(plVar11[3] + 0xb0))(plVar11[1]);
                if (fVar15 <= fVar16) {
                  local_5f0 = puVar1 + 0x10;
                  local_5e8 = 0x14;
                  uStack_5e6 = 0;
                  (**(code **)(*plVar11 + 0x18))(plVar11,&local_5f0);
                  (**(code **)(plVar11[3] + 0x158))(fVar15,plVar11[1]);
                }
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar12 != uVar14);
        }
      }
    }
  }
  return;
}


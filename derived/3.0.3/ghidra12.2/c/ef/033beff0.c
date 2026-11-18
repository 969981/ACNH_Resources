
void FUN_033beff0(long param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 *__src;
  undefined8 *******pppppppuVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined8 ******ppppppuVar9;
  uint uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_3a0;
  undefined1 *local_398;
  undefined8 *******local_390;
  undefined8 *******local_388;
  undefined8 ******local_380 [2];
  undefined8 *****local_370 [2];
  undefined8 ****local_360 [2];
  undefined8 ***local_350 [2];
  undefined8 **local_340 [2];
  undefined8 *local_330 [2];
  undefined8 local_320 [2];
  undefined1 auStack_310 [56];
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined1 *local_2c8;
  undefined8 *******local_2c0;
  undefined8 *******local_2b8;
  undefined8 ******local_2b0 [2];
  undefined8 *****local_2a0 [2];
  undefined8 ****local_290 [2];
  undefined8 ***local_280 [2];
  undefined8 **local_270 [2];
  undefined8 *local_260 [2];
  undefined8 local_250 [2];
  undefined1 local_240 [56];
  undefined8 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined *local_1e8;
  undefined1 *puStack_1e0;
  int local_1d8;
  undefined1 auStack_1d4 [63];
  undefined1 local_195;
  undefined *local_190;
  undefined1 *local_188;
  undefined4 local_180;
  undefined1 local_17c [63];
  undefined1 local_13d;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 *local_58;
  
  if ((*(int *)(param_1 + 0x50) == 0xc) && (*(int *)(param_1 + 0x6c) == 0)) {
    local_1f8 = 0;
    uStack_1f4 = 0;
    local_208 = 0;
    local_200 = 0x3f800000;
    uStack_1fc = 0;
    local_1f0 = 0x40a00000;
    local_1d8 = 0x40;
    local_195 = 0;
    local_1e8 = PTR_DAT_04bb2f70 + 0x10;
    puStack_1e0 = auStack_1d4;
    (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
    __src = DAT_05743420;
    if (auStack_1d4 != DAT_05743420) {
      (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
      lVar6 = 0;
      do {
        if (DAT_05743420[lVar6] == '\0') goto LAB_033bf10c;
        if (DAT_05743420[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_033bf10c;
        }
        if (DAT_05743420[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_033bf10c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_033bf10c:
      iVar4 = (int)lVar6;
      if (local_1d8 <= (int)lVar6) {
        iVar4 = local_1d8 + -1;
      }
      memcpy(auStack_1d4,__src,(long)iVar4);
      auStack_1d4[iVar4] = 0;
    }
    local_188 = local_17c;
    local_180 = 0x40;
    local_13d = 0;
    local_17c[0] = 0;
    local_1e8 = PTR_DAT_04bb2bc0 + 0x10;
    local_190 = local_1e8;
    FUN_033bb4ec(param_1,&local_208,*param_2);
    local_250[0] = 0;
    local_2b8 = local_2b0;
    local_2b0[0] = local_2a0;
    local_2a0[0] = local_290;
    local_290[0] = local_280;
    local_260[0] = local_250;
    *(undefined4 *)(param_1 + 0xb0) = *param_2;
    iVar4 = DAT_04c9a0c8;
    puVar2 = PTR_DAT_04bb2200;
    local_280[0] = local_270;
    local_270[0] = local_260;
    local_2d0 = 0;
    local_2c8 = (undefined1 *)0x0;
    if (local_240 != (undefined1 *)0x0) {
      local_2d0 = 0x700000000;
      local_2c8 = local_240;
    }
    uVar5 = 0;
    local_2c0 = local_2b8;
    if (param_2[2] != 0) {
      plVar7 = *(long **)(param_2 + 4);
      uVar10 = 0;
      lVar6 = (long)(int)param_2[2] << 3;
      do {
        pppppppuVar3 = local_2c0;
        pfVar11 = (float *)*plVar7;
        fVar13 = *pfVar11;
        fVar12 = pfVar11[1];
        if (*(long *)PTR_DAT_04bb2200 != 0) {
          fVar13 = (fVar13 / 960.0) * 640.0;
          fVar12 = (fVar12 / 540.0) * 360.0;
        }
        if ((int)uVar10 < local_2d0._4_4_) {
          fVar14 = pfVar11[2];
          if (local_2c0 != (undefined8 *******)0x0) {
            local_2c0 = (undefined8 *******)*local_2c0;
          }
          *(float *)pppppppuVar3 = fVar13;
          *(float *)((long)pppppppuVar3 + 4) = fVar12;
          *(float *)(pppppppuVar3 + 1) = fVar14;
          uVar10 = (uint)local_2d0;
          uVar5 = (uint)local_2d0;
          if ((int)(uint)local_2d0 < local_2d0._4_4_) {
            *(undefined8 ********)(local_2c8 + (long)(int)(uint)local_2d0 * 8) = pppppppuVar3;
            uVar10 = (uint)local_2d0 + 1;
            local_2d0 = CONCAT44(local_2d0._4_4_,uVar10);
            uVar5 = uVar10;
          }
        }
        plVar7 = plVar7 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    local_3a0._4_4_ = 0;
    local_398 = (undefined1 *)0x0;
    local_388 = local_380;
    local_380[0] = local_370;
    local_370[0] = local_360;
    local_360[0] = local_350;
    local_350[0] = local_340;
    local_340[0] = local_330;
    local_330[0] = local_320;
    local_320[0] = 0;
    if (auStack_310 == (undefined1 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 7;
      local_3a0._4_4_ = 7;
      local_398 = auStack_310;
    }
    if ((int)uVar5 <= (int)uVar10) {
      uVar10 = uVar5;
    }
    local_3a0 = (ulong)local_3a0._4_4_ << 0x20;
    local_2d8 = local_200;
    local_390 = local_388;
    if ((0 < (int)uVar10) && (auStack_310 != (undefined1 *)0x0)) {
      lVar6 = 0;
      iVar8 = 0;
      do {
        pppppppuVar3 = local_390;
        if (iVar8 < (int)local_3a0._4_4_) {
          if (local_390 != (undefined8 *******)0x0) {
            local_390 = (undefined8 *******)*local_390;
          }
          ppppppuVar9 = (undefined8 ******)**(long **)(local_2c8 + lVar6);
          *(int *)(pppppppuVar3 + 1) = (int)(*(long **)(local_2c8 + lVar6))[1];
          *pppppppuVar3 = ppppppuVar9;
          iVar8 = (int)local_3a0;
          if ((int)local_3a0 < (int)local_3a0._4_4_) {
            *(undefined8 ********)(local_398 + (long)(int)local_3a0 * 8) = pppppppuVar3;
            iVar8 = (int)local_3a0 + 1;
            local_3a0 = CONCAT44(local_3a0._4_4_,iVar8);
          }
        }
        lVar6 = lVar6 + 8;
      } while ((ulong)uVar10 * 8 != lVar6);
    }
    local_2d4 = param_2[0x34];
    if (DAT_04c93e08 == 0) {
      *(int *)(param_1 + 0x6c) = DAT_04c9a0c8;
    }
    else {
      local_e8 = 0x80;
      local_60 = 7;
      local_5c = 0x201;
      puStack_f0 = local_e4;
      local_65 = 0;
      local_e4[0] = 0;
      local_10c = 0;
      local_f8 = PTR_DAT_04bb2d88 + 0x10;
      local_104 = 0;
      local_118 = 0;
      local_110 = 0;
      local_114 = local_2d8;
      local_128 = 0xd700000000;
      uStack_120 = 0;
      local_58 = (undefined1 *)&local_3a0;
      iVar4 = FUN_007402e0(DAT_04c93e08,&local_128,0,1);
      *(int *)(param_1 + 0x6c) = iVar4;
    }
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x70) = 3;
      *(undefined4 *)(param_1 + 0x88) = uStack_1f4;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(ulong *)(param_1 + 0x80) = CONCAT44(local_1f8,uStack_1fc);
      *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 1;
      lVar6 = *(long *)puVar2;
      if (lVar6 != 0) {
        if (*(long *)(lVar6 + 0x58) != 0) {
          FUN_01613a48(local_1f0,0x44200000,*(long *)(lVar6 + 0x58),2);
          lVar6 = *(long *)puVar2;
          if (lVar6 == 0) {
            return;
          }
        }
        ppuVar1 = &local_1e8;
        if (*(char *)(param_1 + 0x68) != '\0') {
          ppuVar1 = &local_190;
        }
        FUN_01640a40(*(undefined8 *)(lVar6 + 0x70),ppuVar1);
      }
    }
  }
  return;
}


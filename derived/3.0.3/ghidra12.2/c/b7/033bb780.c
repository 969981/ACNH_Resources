
void FUN_033bb780(long param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *__src;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined2 local_288;
  undefined1 local_286;
  undefined1 local_285;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 *local_260;
  undefined1 local_258;
  undefined1 local_256;
  undefined4 uStack_255;
  undefined4 uStack_251;
  undefined2 local_24c;
  undefined2 local_24a;
  undefined4 local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_238;
  undefined *local_230;
  undefined1 *puStack_228;
  undefined4 local_220;
  undefined1 local_21c [7];
  undefined1 local_215;
  undefined1 local_210;
  undefined4 local_20c;
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
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 **local_58;
  
  if (9 < *(uint *)(param_1 + 0x50) ||
      (1 << (ulong)(*(uint *)(param_1 + 0x50) & 0x1f) & 0x203U) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    return;
  }
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
    lVar8 = 0;
    do {
      if (DAT_05743420[lVar8] == '\0') goto LAB_033bb8ac;
      if (DAT_05743420[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_033bb8ac;
      }
      if (DAT_05743420[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_033bb8ac;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_033bb8ac:
    iVar5 = (int)lVar8;
    if (local_1d8 <= (int)lVar8) {
      iVar5 = local_1d8 + -1;
    }
    memcpy(auStack_1d4,__src,(long)iVar5);
    auStack_1d4[iVar5] = 0;
  }
  local_188 = local_17c;
  local_180 = 0x40;
  local_13d = 0;
  local_17c[0] = 0;
  local_1e8 = PTR_DAT_04bb2bc0 + 0x10;
  local_190 = local_1e8;
  FUN_033bb4ec(param_1,&local_208,*param_2);
  puVar4 = PTR_DAT_04bb37e0;
  puVar3 = PTR_DAT_04bb3238;
  puVar2 = PTR_DAT_04bb3170;
  local_260 = (undefined4 *)0x0;
  local_256 = 0;
  uStack_255 = 0;
  uStack_251 = 0;
  *(undefined4 *)(param_1 + 0xb0) = *param_2;
  local_24c = *(undefined2 *)puVar2;
  local_24a = 0x1ff;
  puStack_228 = local_21c;
  local_248 = *(undefined4 *)puVar3;
  local_220 = 8;
  local_285 = puVar4[3];
  local_215 = 0;
  local_21c[0] = 0;
  local_288 = *(undefined2 *)puVar4;
  local_286 = puVar4[2];
  local_268 = *(undefined4 *)puVar4;
  local_290 = *(undefined4 *)puVar4;
  local_2a8 = *(undefined4 *)puVar4;
  local_2a4 = *(undefined4 *)(puVar4 + 4);
  local_270 = *(undefined8 *)puVar4;
  local_278 = *(undefined8 *)puVar4;
  local_298 = *(undefined8 *)puVar4;
  local_2a0 = *(undefined8 *)puVar4;
  local_230 = PTR_DAT_04bb3768 + 0x10;
  local_210 = 0;
  local_20c = 0;
  local_284 = CONCAT17(local_285,CONCAT16(local_286,CONCAT24(local_288,local_2a4)));
  local_28c = local_2a4;
  local_27c = local_2a4;
  local_264 = local_2a4;
  if (*(char *)(param_2 + 1) != '\0') {
    local_2a8 = param_2[2];
    local_2a4 = param_2[3];
    local_2a0 = *(undefined8 *)(param_2 + 4);
    local_298 = *(undefined8 *)(param_2 + 6);
    local_290 = param_2[8];
    local_28c = param_2[9];
    local_288 = *(undefined2 *)(param_2 + 10);
    local_286 = *(undefined1 *)((long)param_2 + 0x2a);
    local_285 = *(undefined1 *)((long)param_2 + 0x2b);
    local_284 = *(undefined8 *)(param_2 + 0xb);
    local_27c = param_2[0xd];
    local_278 = *(undefined8 *)(param_2 + 0xe);
    local_270 = *(undefined8 *)(param_2 + 0x10);
    local_268 = param_2[0x12];
    local_264 = param_2[0x13];
    local_260 = &local_2a8;
  }
  local_258 = *(char *)(param_2 + 0x14) != '\0';
  if ((bool)local_258) {
    local_256 = *(undefined1 *)((long)param_2 + 0x52);
    uStack_255 = *(undefined4 *)((long)param_2 + 0x53);
    uStack_251 = *(undefined4 *)((long)param_2 + 0x57);
    local_24c = *(undefined2 *)(param_2 + 0x17);
  }
  local_244 = param_2[0x1a];
  local_110 = 0;
  local_e8 = 0x80;
  local_240 = *(undefined8 *)(param_2 + 0x1b);
  local_65 = 0;
  local_e4[0] = 0;
  puStack_f0 = local_e4;
  local_238 = param_2[0x1d];
  local_10c = 0;
  local_104 = 0;
  local_f8 = &DAT_048fc708;
  local_60 = 7;
  local_5c = 0x201;
  local_128 = 0x4100000000;
  uStack_120 = 0x461c4000;
  local_58 = &local_260;
  local_114 = local_200;
  local_118 = 0;
  iVar5 = FUN_007402e0(DAT_04c93e08,&local_128,0,0);
  *(int *)(param_1 + 0x6c) = iVar5;
  if (iVar5 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x7c) = local_208._4_4_;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)local_208;
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 1;
  *(ulong *)(param_1 + 0x80) = CONCAT44(local_1f8,uStack_1fc);
  *(undefined4 *)(param_1 + 0x88) = uStack_1f4;
  puVar2 = PTR_DAT_04bb2200;
  lVar8 = *(long *)PTR_DAT_04bb2200;
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x58) != 0) {
      FUN_01613a48(local_1f0,0x44200000,*(long *)(lVar8 + 0x58),2);
      lVar8 = *(long *)puVar2;
      if (lVar8 == 0) goto LAB_033bbbfc;
    }
    ppuVar1 = &local_1e8;
    if (*(char *)(param_1 + 0x68) != '\0') {
      ppuVar1 = &local_190;
    }
    FUN_01640a40(*(undefined8 *)(lVar8 + 0x70),ppuVar1);
  }
LAB_033bbbfc:
  *(undefined4 *)(param_1 + 0x11c4) = local_130;
  *(undefined8 *)(param_1 + 0x11bc) = local_138;
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_1 + 0x60);
    if (lVar8 == 0) {
      return;
    }
  }
  else {
    *(long *)(param_1 + 0x60) = lVar8;
  }
  if ((*(long **)(lVar8 + 0x1b0) != (long *)0x0) &&
     (uVar6 = (**(code **)(**(long **)(lVar8 + 0x1b0) + 0x58))(), (uVar6 & 1) != 0)) {
    plVar9 = *(long **)(param_1 + 0x60);
    plVar7 = (long *)plVar9[0x36];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      (**(code **)(*plVar9 + 0xa8))(plVar9);
    }
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 8;
  }
  return;
}


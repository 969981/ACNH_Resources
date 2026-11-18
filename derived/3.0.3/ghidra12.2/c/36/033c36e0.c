
void FUN_033c36e0(long param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 *__src;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined4 *local_2a8;
  undefined1 local_2a0;
  undefined1 local_29e;
  undefined4 uStack_29d;
  undefined4 uStack_299;
  undefined2 local_294;
  undefined2 local_292;
  undefined4 local_290;
  undefined2 local_28c;
  undefined1 local_28a;
  undefined1 local_289;
  undefined4 local_288;
  undefined2 local_284;
  undefined1 local_282;
  undefined1 local_281;
  undefined4 local_280;
  undefined *local_278;
  undefined1 *puStack_270;
  undefined4 local_268;
  undefined1 local_264 [7];
  undefined1 local_25d;
  undefined1 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined2 local_230;
  undefined1 local_22e;
  undefined1 local_22d;
  undefined8 local_22c;
  undefined4 local_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
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
  undefined *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 **local_58;
  
  if (*(int *)(param_1 + 0x50) == -1) {
    return;
  }
  if (*(int *)(param_1 + 0x50) != 0x12) {
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
    lVar6 = 0;
    do {
      if (DAT_05743420[lVar6] == '\0') goto LAB_033c3800;
      if (DAT_05743420[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_033c3800;
      }
      if (DAT_05743420[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_033c3800;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_033c3800:
    iVar3 = (int)lVar6;
    if (local_1d8 <= (int)lVar6) {
      iVar3 = local_1d8 + -1;
    }
    memcpy(auStack_1d4,__src,(long)iVar3);
    auStack_1d4[iVar3] = 0;
  }
  local_188 = local_17c;
  local_180 = 0x40;
  local_13d = 0;
  local_17c[0] = 0;
  local_1e8 = PTR_DAT_04bb2bc0 + 0x10;
  local_190 = local_1e8;
  FUN_033bb4ec(param_1,&local_208,*param_2);
  *(undefined4 *)(param_1 + 0xb0) = *param_2;
  local_250 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_24c = DAT_0558600c;
  local_248 = CONCAT44(DAT_0558600c,CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008)));
  local_240 = CONCAT44(DAT_0558600c,CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008)));
  local_238 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_234 = DAT_0558600c;
  local_230 = DAT_05586008;
  local_22e = DAT_0558600a;
  local_22d = DAT_0558600b;
  local_22c = CONCAT17(DAT_0558600b,CONCAT16(DAT_0558600a,CONCAT24(DAT_05586008,DAT_0558600c)));
  local_224 = DAT_0558600c;
  local_220 = CONCAT44(DAT_0558600c,CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008)));
  local_218 = CONCAT44(DAT_0558600c,CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008)));
  local_210 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_20c = DAT_0558600c;
  if (*(char *)(param_2 + 1) != '\0') {
    local_250 = param_2[2];
    local_24c = param_2[3];
    local_238 = param_2[8];
    local_234 = param_2[9];
    local_230 = *(undefined2 *)(param_2 + 10);
    local_248 = *(undefined8 *)(param_2 + 4);
    local_240 = *(undefined8 *)(param_2 + 6);
    local_22e = *(undefined1 *)((long)param_2 + 0x2a);
    local_22d = *(undefined1 *)((long)param_2 + 0x2b);
    local_22c = *(undefined8 *)(param_2 + 0xb);
    local_224 = param_2[0xd];
    local_220 = *(undefined8 *)(param_2 + 0xe);
    local_218 = *(undefined8 *)(param_2 + 0x10);
    local_210 = param_2[0x12];
    local_20c = param_2[0x13];
  }
  local_292 = 0x1ff;
  local_294 = *(undefined2 *)PTR_DAT_04bb3170;
  local_289 = DAT_0558600b;
  local_281 = DAT_0558600b;
  local_29e = 0;
  uStack_29d = 0;
  uStack_299 = 0;
  local_28c = DAT_05586008;
  local_28a = DAT_0558600a;
  local_288 = DAT_0558600c;
  local_284 = DAT_05586008;
  local_58 = &local_2a8;
  local_282 = DAT_0558600a;
  local_280 = DAT_0558600c;
  local_268 = 8;
  local_25d = 0;
  puStack_270 = local_264;
  local_264[0] = 0;
  local_290 = DAT_04c9a0c8;
  local_278 = PTR_DAT_04bb3768 + 0x10;
  local_2a8 = &local_250;
  local_2a0 = *(char *)(param_2 + 0x14) != '\0';
  if ((bool)local_2a0) {
    local_29e = *(undefined1 *)((long)param_2 + 0x52);
    uStack_29d = *(undefined4 *)((long)param_2 + 0x53);
    uStack_299 = *(undefined4 *)((long)param_2 + 0x57);
    local_294 = *(undefined2 *)(param_2 + 0x17);
  }
  local_254 = param_2[0x1a];
  local_110 = 0;
  local_65 = 0;
  local_e8 = 0x80;
  puStack_f0 = local_e4;
  local_e4[0] = 0;
  local_258 = 1;
  local_10c = 0;
  local_f8 = PTR_DAT_04bb2d88 + 0x10;
  local_104 = 0;
  local_114 = local_200;
  local_60 = 7;
  local_5c = 0x201;
  local_128 = 0x4100000000;
  uStack_120 = 0x461c4000;
  local_118 = 0;
  iVar3 = FUN_007402e0(DAT_04c93e08,&local_128,0,0);
  *(int *)(param_1 + 0x6c) = iVar3;
  if (iVar3 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x7c) = local_208._4_4_;
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 1;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)local_208;
  *(ulong *)(param_1 + 0x80) = CONCAT44(local_1f8,uStack_1fc);
  *(undefined4 *)(param_1 + 0x88) = uStack_1f4;
  puVar2 = PTR_DAT_04bb2200;
  lVar6 = *(long *)PTR_DAT_04bb2200;
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x58) != 0) {
      FUN_01613a48(local_1f0,0x44200000,*(long *)(lVar6 + 0x58),2);
      lVar6 = *(long *)puVar2;
      if (lVar6 == 0) goto LAB_033c3b44;
    }
    ppuVar1 = &local_1e8;
    if (*(char *)(param_1 + 0x68) != '\0') {
      ppuVar1 = &local_190;
    }
    FUN_01640a40(*(undefined8 *)(lVar6 + 0x70),ppuVar1);
  }
LAB_033c3b44:
  *(undefined4 *)(param_1 + 0x11c4) = local_130;
  *(undefined8 *)(param_1 + 0x11bc) = local_138;
  lVar6 = *(long *)(param_2 + 0x18);
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 0x60);
    if (lVar6 == 0) {
      return;
    }
  }
  else {
    *(long *)(param_1 + 0x60) = lVar6;
  }
  if ((*(long **)(lVar6 + 0x1b0) != (long *)0x0) &&
     (uVar4 = (**(code **)(**(long **)(lVar6 + 0x1b0) + 0x58))(), (uVar4 & 1) != 0)) {
    plVar7 = *(long **)(param_1 + 0x60);
    plVar5 = (long *)plVar7[0x36];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      (**(code **)(*plVar7 + 0xa8))(plVar7);
    }
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 8;
  }
  return;
}



void FUN_033bd5f0(long param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 *__src;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_270;
  undefined1 local_268;
  undefined8 local_266;
  undefined1 local_25e;
  undefined2 local_25c;
  undefined2 local_25a;
  undefined4 local_258;
  undefined2 local_254;
  undefined1 local_252;
  undefined1 local_251;
  undefined8 local_250;
  undefined4 local_248;
  undefined *local_240;
  undefined1 *puStack_238;
  undefined4 local_230;
  undefined1 local_22c [7];
  undefined1 local_225;
  undefined1 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined *local_1f8;
  undefined1 *puStack_1f0;
  int local_1e8;
  undefined1 auStack_1e4 [63];
  undefined1 local_1a5;
  undefined *local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined1 local_18c [63];
  undefined1 local_14d;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 *local_68;
  
  if (*(int *)(param_1 + 0x50) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    return;
  }
  if (param_2[1] == 0) {
    return;
  }
  local_208 = 0;
  uStack_204 = 0;
  local_218 = 0;
  local_210 = 0x3f800000;
  uStack_20c = 0;
  local_200 = 0x40a00000;
  local_1e8 = 0x40;
  local_1a5 = 0;
  local_1f8 = PTR_DAT_04bb2f70 + 0x10;
  puStack_1f0 = auStack_1e4;
  (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
  __src = DAT_05743420;
  if (auStack_1e4 != DAT_05743420) {
    (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
    lVar6 = 0;
    do {
      if (DAT_05743420[lVar6] == '\0') goto LAB_033bd71c;
      if (DAT_05743420[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_033bd71c;
      }
      if (DAT_05743420[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_033bd71c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_033bd71c:
    iVar3 = (int)lVar6;
    if (local_1e8 <= (int)lVar6) {
      iVar3 = local_1e8 + -1;
    }
    memcpy(auStack_1e4,__src,(long)iVar3);
    auStack_1e4[iVar3] = 0;
  }
  local_198 = local_18c;
  local_190 = 0x40;
  local_14d = 0;
  local_18c[0] = 0;
  local_1f8 = PTR_DAT_04bb2bc0 + 0x10;
  local_1a0 = local_1f8;
  FUN_033bb4ec(param_1,&local_218,*param_2);
  puVar2 = PTR_DAT_04bb3170;
  local_270 = 0;
  local_268 = 0;
  local_266 = 0;
  local_25a = 0xff;
  local_25e = 0;
  local_230 = 8;
  local_225 = 0;
  *(undefined4 *)(param_1 + 0xb0) = *param_2;
  local_22c[0] = 0;
  local_25c = *(undefined2 *)puVar2;
  local_240 = PTR_DAT_04bb3768 + 0x10;
  puStack_238 = local_22c;
  local_220 = 0;
  local_21c = 0;
  local_258 = param_2[1];
  local_f8 = 0x80;
  local_254 = *(undefined2 *)(param_2 + 4);
  local_252 = *(undefined1 *)((long)param_2 + 0x12);
  local_251 = *(undefined1 *)((long)param_2 + 0x13);
  local_250 = *(undefined8 *)(param_2 + 5);
  local_248 = param_2[7];
  puStack_100 = local_f4;
  local_120 = 0;
  local_75 = 0;
  local_f4[0] = 0;
  local_11c = 0;
  local_114 = 0;
  local_124 = local_210;
  local_108 = PTR_DAT_04bb2d88 + 0x10;
  local_70 = 7;
  local_6c = 0x201;
  local_138 = 0x4100000000;
  uStack_130 = 0x461c4000;
  local_128 = 0;
  local_68 = (undefined1 *)&local_270;
  iVar3 = FUN_007402e0(DAT_04c93e08,&local_138,0,0);
  *(int *)(param_1 + 0x6c) = iVar3;
  if (iVar3 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 2;
  *(undefined4 *)(param_1 + 0x7c) = local_218._4_4_;
  *(undefined4 *)(param_1 + 0x78) = (undefined4)local_218;
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 1;
  *(ulong *)(param_1 + 0x80) = CONCAT44(local_208,uStack_20c);
  *(undefined4 *)(param_1 + 0x88) = uStack_204;
  puVar2 = PTR_DAT_04bb2200;
  lVar6 = *(long *)PTR_DAT_04bb2200;
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x58) != 0) {
      FUN_01613a48(local_200,0x44200000,*(long *)(lVar6 + 0x58),2);
      lVar6 = *(long *)puVar2;
      if (lVar6 == 0) goto LAB_033bd914;
    }
    ppuVar1 = &local_1f8;
    if (*(char *)(param_1 + 0x68) != '\0') {
      ppuVar1 = &local_1a0;
    }
    FUN_01640a40(*(undefined8 *)(lVar6 + 0x70),ppuVar1);
  }
LAB_033bd914:
  *(undefined4 *)(param_1 + 0x11c4) = 0;
  *(undefined8 *)(param_1 + 0x11bc) = 0;
  lVar6 = *(long *)(param_2 + 2);
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


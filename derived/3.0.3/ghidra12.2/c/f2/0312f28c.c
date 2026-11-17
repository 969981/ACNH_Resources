
void FUN_0312f28c(long *param_1,ushort param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_418;
  undefined8 *puStack_410;
  undefined *local_408;
  char *local_400;
  undefined *puStack_3f8;
  undefined2 local_3f0;
  undefined8 local_3ec;
  undefined4 local_3e4;
  undefined *local_3e0;
  undefined8 uStack_3d8;
  undefined4 local_3d0;
  undefined1 local_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined *local_3b0;
  undefined1 *puStack_3a8;
  undefined4 local_3a0;
  undefined1 local_39c [63];
  undefined1 local_35d;
  undefined *local_358;
  undefined1 *puStack_350;
  undefined4 local_348;
  undefined1 local_344 [63];
  undefined1 local_305;
  undefined8 local_300;
  undefined *local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined *local_2c8;
  undefined1 *puStack_2c0;
  undefined4 local_2b8;
  undefined1 local_2b4 [63];
  undefined1 local_275;
  undefined *local_270;
  undefined1 *puStack_268;
  undefined4 local_260;
  undefined1 local_25c [63];
  undefined1 local_21d;
  undefined8 local_218;
  undefined *local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined *local_1e0;
  undefined1 *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc [63];
  undefined1 local_18d;
  undefined *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [63];
  undefined1 local_135;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  undefined *local_68;
  int local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 *local_38;
  
  *(ushort *)((long)param_1 + 0x2aa) = param_2;
  local_68 = PTR_DAT_04bc0a78;
  puVar2 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = &DAT_0407ebb1;
  if (param_2 < 0x80) {
    puVar4 = (undefined8 *)&DAT_040d97a2;
    switch(param_2) {
    case 1:
      break;
    case 2:
      puVar4 = (undefined8 *)&DAT_040affe1;
      break;
    default:
      goto switchD_0312f2f4_caseD_3;
    case 4:
switchD_0312f2f4_caseD_4:
      puVar4 = (undefined8 *)&DAT_0407bc05;
      break;
    case 8:
      puVar4 = (undefined8 *)&DAT_0406c2cf;
      break;
    case 0x10:
      puVar4 = (undefined8 *)&DAT_040a049e;
      break;
    case 0x20:
      puVar4 = (undefined8 *)&DAT_040aae8a;
      break;
    case 0x40:
      puVar4 = (undefined8 *)&DAT_040e5e0f;
    }
  }
  else if (param_2 < 0x400) {
    if (param_2 == 0x80) {
      puVar4 = (undefined8 *)&DAT_04097e6c;
    }
    else {
      if (param_2 == 0x100) goto switchD_0312f2f4_caseD_4;
      if (param_2 != 0x200) goto switchD_0312f2f4_caseD_3;
      puVar4 = (undefined8 *)&DAT_040d60e1;
    }
  }
  else if (param_2 < 0x1000) {
    if (param_2 == 0x400) {
      puVar4 = (undefined8 *)&DAT_04100084;
    }
    else {
      if (param_2 != 0x800) goto switchD_0312f2f4_caseD_3;
      puVar4 = (undefined8 *)&DAT_040db547;
    }
  }
  else if (param_2 == 0x1000) {
    puVar4 = (undefined8 *)&DAT_040bc41b;
  }
  else {
    if (param_2 != 0x2000) goto switchD_0312f2f4_caseD_3;
    puVar4 = (undefined8 *)&DAT_040a789e;
  }
  local_38 = puVar4;
switchD_0312f2f4_caseD_3:
  local_3ec = 0;
  local_3f0 = 0x100;
  local_3e4 = 0;
  local_3d0 = 0;
  puStack_3a8 = local_39c;
  local_3cc = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_3c8 = 0xffffffff;
  uStack_3c0 = 0xffffffff00000000;
  local_3b8 = 0xffffffff;
  local_3a0 = 0x40;
  local_35d = 0;
  local_39c[0] = 0;
  local_3b0 = PTR_DAT_04bb2bc0 + 0x10;
  local_348 = 0x40;
  local_305 = 0;
  local_344[0] = 0;
  puStack_350 = local_344;
  local_3e0 = PTR_DAT_04bb2e00 + 0x10;
  local_1f0 = 0xffffffff00000000;
  puStack_268 = local_25c;
  local_25c[0] = 0;
  local_2d0 = 0xffffffff;
  local_1f8 = 0xffffffff;
  local_1e8 = 0xffffffff;
  puStack_2c0 = local_2b4;
  local_2b4[0] = 0;
  local_2e8 = 0;
  local_2e4 = 0;
  local_2b8 = 0x40;
  local_275 = 0;
  local_260 = 0x40;
  local_21d = 0;
  local_300 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1fc = 0;
  local_1d0 = 0x40;
  local_18d = 0;
  local_178 = 0x40;
  local_135 = 0;
  local_218 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_108 = 0x40;
  local_c5 = 0;
  local_b0 = 0x40;
  local_6d = 0;
  local_2e0 = 0xffffffff;
  uStack_2d8 = 0xffffffff00000000;
  local_104[0] = 0;
  local_1d8 = local_1cc;
  local_1cc[0] = 0;
  local_110 = local_104;
  local_b8 = local_ac;
  local_180 = local_174;
  local_174[0] = 0;
  local_ac[0] = 0;
  uStack_3d8 = 0;
  uStack_2f0 = 0;
  local_60 = *(int *)PTR_DAT_04bc0b30;
  local_5c = 0;
  *(int *)PTR_DAT_04bc0b30 = local_60 + 1;
  local_68 = local_68 + 0x10;
  local_58 = 0;
  puStack_3f8 = PTR_DAT_04bc0bf0 + 0x10;
  lVar5 = param_1[0x56];
  local_50 = 0;
  local_48 = 0;
  local_400 = "PARTS_SortNoticeWindow";
  local_408 = puVar1;
  local_358 = local_3b0;
  local_2f8 = local_3e0;
  local_2c8 = local_3b0;
  local_270 = local_3b0;
  local_210 = local_3e0;
  local_1e0 = local_3b0;
  local_188 = local_3b0;
  local_118 = local_3b0;
  local_c0 = local_3b0;
  (**(code **)(puVar2 + 0x28))(&local_40);
  puStack_410 = local_38;
  local_418 = puVar1;
  FUN_01bea210(&puStack_3f8,lVar5,&local_408,&local_418);
  FUN_01bea9c8(&puStack_3f8);
  FUN_01be9eb8(&puStack_3f8);
  *(undefined4 *)(param_1 + 0x50) = 0x3c;
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x50))();
    (**(code **)(*(long *)param_1[0x36] + 0x20))((long *)param_1[0x36],0);
    plVar3 = (long *)param_1[0x36];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      (**(code **)(*param_1 + 0xa8))(param_1);
    }
  }
  if (param_1[0x70] != 0) {
    FUN_03d66950(param_1,&DAT_056f6058);
  }
  return;
}


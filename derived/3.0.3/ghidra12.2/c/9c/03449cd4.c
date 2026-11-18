
/* WARNING: Removing unreachable block (ram,0x03449ff8) */
/* WARNING: Removing unreachable block (ram,0x0344a014) */

void FUN_03449cd4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  undefined *local_e68;
  undefined2 local_e60;
  undefined **local_e58;
  undefined2 *puStack_e50;
  undefined4 local_e48;
  undefined2 local_e44 [255];
  undefined2 local_c46;
  undefined **local_c40;
  undefined2 *local_c38;
  undefined4 local_c30;
  undefined2 local_c2c [255];
  undefined2 local_a2e;
  undefined **local_a28;
  undefined2 *local_a20;
  undefined4 local_a18;
  undefined2 local_a14 [255];
  undefined2 local_816;
  undefined2 local_810 [46];
  undefined1 local_7b4;
  undefined1 local_758;
  undefined8 local_754;
  undefined4 local_74c;
  undefined1 local_748;
  undefined1 local_744;
  undefined8 local_742;
  undefined8 uStack_73a;
  undefined8 local_732;
  undefined8 uStack_72a;
  undefined8 local_722;
  undefined8 uStack_71a;
  undefined8 local_712;
  undefined8 uStack_70a;
  undefined8 local_702;
  undefined8 uStack_6fa;
  undefined8 local_6f2;
  undefined8 uStack_6ea;
  undefined1 auStack_6e2 [480];
  undefined8 local_502;
  undefined8 uStack_4fa;
  undefined8 local_4f2;
  undefined8 uStack_4ea;
  undefined8 local_4e2;
  undefined8 uStack_4da;
  undefined8 local_4d2;
  undefined8 uStack_4ca;
  undefined8 local_4c2;
  undefined8 uStack_4ba;
  undefined8 local_4b2;
  undefined8 uStack_4aa;
  undefined4 local_4a2;
  undefined4 local_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 local_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 local_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 local_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 local_460;
  undefined8 local_448;
  undefined1 local_43c;
  undefined4 local_438;
  uint local_430 [23];
  undefined1 local_3d4;
  undefined1 local_378;
  undefined8 local_374;
  undefined4 local_36c;
  undefined1 local_368;
  undefined1 local_364;
  undefined8 local_362;
  undefined8 local_35a;
  undefined8 local_352;
  undefined8 local_34a;
  undefined8 local_342;
  undefined8 local_33a;
  undefined8 local_332;
  undefined8 local_32a;
  undefined8 uStack_322;
  undefined8 local_31a;
  undefined8 uStack_312;
  undefined8 local_30a;
  undefined1 auStack_302 [480];
  undefined8 local_122;
  undefined8 uStack_11a;
  undefined8 local_112;
  undefined8 uStack_10a;
  undefined8 local_102;
  undefined8 uStack_fa;
  undefined8 local_f2;
  undefined8 uStack_ea;
  undefined8 local_e2;
  undefined8 uStack_da;
  undefined8 local_d2;
  undefined8 uStack_ca;
  undefined4 local_c2;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_64;
  
  local_c46 = 0;
  local_e44[0] = 0;
  local_c38 = local_c2c;
  local_c2c[0] = 0;
  local_e60 = 0x100;
  local_e48 = 0x100;
  puStack_e50 = local_e44;
  local_e68 = PTR_DAT_04bb8a58 + 0x10;
  local_c30 = 0x100;
  local_a2e = 0;
  local_a18 = 0x100;
  local_a20 = local_a14;
  local_a14[0] = 0;
  local_816 = 0;
  local_810[0] = 0;
  local_7b4 = 0;
  local_758 = 0;
  local_754 = 0xfffe00000000;
  local_74c = 0;
  local_c40 = &PTR_LAB_04957198;
  local_a28 = &PTR_LAB_04957198;
  local_e58 = &PTR_LAB_04957198;
  FUN_0277d4ac((long)&local_754 + 4);
  local_748 = 0;
  local_744 = 0;
  memset(&local_742,0,0x2a2);
  local_4a2 = CONCAT22(0xfffe,(undefined2)local_4a2);
  local_49c = 0;
  uStack_498 = 0;
  uStack_494 = 0;
  uStack_490 = 0;
  local_448 = 0xfffe;
  local_48c = 0;
  uStack_488 = 0;
  uStack_484 = 0;
  uStack_480 = 0;
  local_47c = 0;
  uStack_478 = 0;
  uStack_474 = 0;
  uStack_470 = 0;
  local_46c = 0;
  uStack_468 = 0;
  uStack_464 = 0;
  local_460 = 0;
  FUN_0277d4ac(&local_448);
  puVar2 = PTR_DAT_04bb2230;
  local_43c = 0;
  local_438 = 0;
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
  }
  if (*(char *)(lVar4 + 0xdc8) == '\0') {
    bVar3 = 1;
  }
  else {
    bVar3 = (**(code **)(*(long *)(lVar4 + 0xdc0) + 0x18))(lVar4 + 0xdc0);
    *(undefined1 *)(lVar4 + 0xdc8) = 0;
  }
  *(byte *)(lVar4 + 0xdc9) = bVar3 & 1;
  FUN_0338faf0(&local_e68,lVar4 + 0xdc0);
  if (*(char *)(param_1 + 9) != '\0') {
    local_430[0] = local_430[0] & 0xffff0000;
    local_3d4 = 0;
    local_378 = 0;
    local_374 = 0xfffe00000000;
    local_36c = 0;
    FUN_0277d4ac((long)&local_374 + 4);
    local_368 = 0;
    local_364 = 0;
    memset(&local_362,0,0x2a2);
    local_c2 = CONCAT22(0xfffe,(undefined2)local_c2);
    local_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    local_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    local_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    local_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    local_80 = 0;
    FUN_027adf94(local_810,local_430);
    local_744 = local_364;
    local_702 = uStack_322;
    uStack_6fa = local_31a;
    local_6f2 = uStack_312;
    uStack_6ea = local_30a;
    local_722 = local_342;
    uStack_71a = local_33a;
    local_712 = local_332;
    uStack_70a = local_32a;
    local_742 = local_362;
    uStack_73a = local_35a;
    local_732 = local_352;
    uStack_72a = local_34a;
    memcpy(auStack_6e2,auStack_302,0x1e0);
    *(undefined1 *)(param_1 + 9) = 0;
    local_4c2 = local_e2;
    uStack_4ba = uStack_da;
    local_4b2 = local_d2;
    uStack_4aa = uStack_ca;
    local_4e2 = local_102;
    uStack_4da = uStack_fa;
    local_4d2 = local_f2;
    uStack_4ca = uStack_ea;
    local_502 = local_122;
    uStack_4fa = uStack_11a;
    local_4f2 = local_112;
    uStack_4ea = uStack_10a;
    local_4a2 = local_c2;
    local_49c = local_bc;
    uStack_498 = uStack_b8;
    uStack_494 = uStack_b4;
    uStack_490 = uStack_b0;
    local_48c = local_ac;
    uStack_488 = uStack_a8;
    uStack_484 = uStack_a4;
    uStack_480 = uStack_a0;
    local_47c = local_9c;
    uStack_478 = uStack_98;
    uStack_474 = uStack_94;
    local_460 = local_80;
    uStack_468 = uStack_88;
    uStack_464 = uStack_84;
    uStack_470 = uStack_90;
    local_46c = local_8c;
  }
  (**(code **)*param_2)(param_2,local_810);
  lVar4 = 0;
  if (*(long *)puVar2 != 0) {
    lVar4 = *(long *)(*(long *)puVar2 + 0x28);
  }
  local_430[0] = (uint)*(byte *)(param_1 + 10);
  local_64 = 0xf;
  if ((local_430[0] == 0) && (DAT_05739db8 != 0)) {
    lVar1 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar1 = 0;
    }
    if (*(char *)(lVar1 + 0x86) != '\0') {
      *(undefined1 *)(lVar1 + 0x87) = 1;
    }
  }
  FUN_0338faf0(lVar4 + 0xdc0,&local_e68);
  return;
}


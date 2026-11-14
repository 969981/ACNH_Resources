
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01d778dc(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 local_160;
  undefined *local_158;
  undefined8 *puStack_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  undefined8 local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined6 uStack_68;
  undefined1 auStack_62 [2];
  undefined1 local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined2 local_56;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  uVar6 = FUN_01d77c78();
  if ((uVar6 & 1) == 0) {
    return 4;
  }
  local_144 = 0;
  local_148 = 0xb;
  local_140 = 0xffffffff;
  uStack_138 = 0xffffffff00000000;
  puStack_120 = local_114;
  puStack_150 = &local_78;
  local_130 = 0xffffffff;
  local_118 = 0x40;
  local_d5 = 0;
  local_114[0] = 0;
  local_128 = PTR_DAT_04bb2bc0 + 0x10;
  local_c0 = 0x40;
  local_7d = 0;
  local_bc[0] = 0;
  puStack_c8 = local_bc;
  uStack_68 = 0;
  local_158 = PTR_DAT_04bb5128 + 0x10;
  puVar1 = auStack_62;
  if (auStack_62 <= (undefined1 *)((long)&local_78 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_78 + 2U);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_6a = 0;
  local_d0 = local_128;
  memset(puStack_150,0,(ulong)(puVar1 + (-0xe1 - (long)&local_158)) & 0xfffffffffffffffc | 2);
  local_60 = 0;
  uStack_5f = 0;
  uStack_5e = 0;
  uStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0;
  uStack_59 = 0;
  uStack_58 = 0;
  local_56 = *(undefined2 *)PTR_DAT_04bb3170;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    uVar6 = FUN_01d77c78(param_1);
    puVar4 = PTR_DAT_04bb7bc0;
    if (((uVar6 & 1) == 0) || (*(char *)(param_1 + 0xc) != '\0')) {
      return 3;
    }
    bVar5 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
    *(byte *)(param_1 + 0xc) = bVar5 & 1;
    if ((bVar5 & 1) != 0) {
      return 3;
    }
    uVar3 = *(uint *)(param_1 + 4);
    uVar2 = *(uint *)(*(long *)puVar4 + 0x170);
    if (uVar2 == uVar3 || (uVar2 < uVar3 || (int)uVar2 < (int)uVar3)) {
      return 2;
    }
    lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0x178) + (long)(int)uVar3 * 8);
    break;
  case 1:
    uVar6 = FUN_01d77c78(param_1);
    puVar4 = PTR_DAT_04bb7bc0;
    if ((uVar6 & 1) == 0) {
      return 3;
    }
    if (*(char *)(param_1 + 0xc) != '\0') {
      return 3;
    }
    bVar5 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
    *(byte *)(param_1 + 0xc) = bVar5 & 1;
    if ((bVar5 & 1) != 0) {
      return 3;
    }
    uVar3 = *(uint *)(param_1 + 4);
    uVar2 = *(uint *)(*(long *)puVar4 + 0x180);
    if (uVar2 == uVar3 || (uVar2 < uVar3 || (int)uVar2 < (int)uVar3)) {
      return 2;
    }
    lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0x188) + (long)(int)uVar3 * 8);
    break;
  case 2:
    uVar6 = FUN_01d77c78(param_1);
    puVar4 = PTR_DAT_04bb7bc0;
    if ((uVar6 & 1) == 0) {
      return 3;
    }
    if (*(char *)(param_1 + 0xc) != '\0') {
      return 3;
    }
    bVar5 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
    *(byte *)(param_1 + 0xc) = bVar5 & 1;
    if ((bVar5 & 1) != 0) {
      return 3;
    }
    uVar6 = FUN_01e0634c(*(undefined8 *)puVar4,&local_160,*(undefined4 *)(param_1 + 4));
    if ((uVar6 & 1) == 0) {
      return 2;
    }
    goto LAB_01d77bb8;
  case 3:
    puVar9 = *(undefined8 **)(DAT_0538adc8 + 600);
    goto joined_r0x01d77b18;
  case 4:
    puVar9 = *(undefined8 **)(DAT_0538adc8 + 0x210);
joined_r0x01d77b18:
    if (puVar9 == (undefined8 *)0x0) {
      return 2;
    }
    local_160 = *puVar9;
    FUN_0082af18(&local_158,puVar9 + 1);
    (**(code **)(local_158 + 0x30))(&local_158,puVar9 + 1);
    local_60 = *(undefined1 *)(puVar9 + 0x20);
    uStack_5f = *(undefined1 *)((long)puVar9 + 0x101);
    uStack_5e = *(undefined1 *)((long)puVar9 + 0x102);
    uStack_5d = *(undefined1 *)((long)puVar9 + 0x103);
    uStack_5c = *(undefined1 *)((long)puVar9 + 0x104);
    uStack_5b = *(undefined1 *)((long)puVar9 + 0x105);
    uStack_5a = *(undefined1 *)((long)puVar9 + 0x106);
    uStack_59 = *(undefined1 *)((long)puVar9 + 0x107);
    uStack_58 = *(undefined1 *)(puVar9 + 0x21);
    local_56 = *(undefined2 *)((long)puVar9 + 0x10a);
    local_54 = *(undefined1 *)((long)puVar9 + 0x10c);
    local_50 = *(undefined4 *)(puVar9 + 0x22);
    uStack_4c = *(undefined4 *)((long)puVar9 + 0x114);
    local_48 = *(undefined4 *)(puVar9 + 0x23);
    goto LAB_01d77bb8;
  default:
    goto switchD_01d779dc_default;
  }
  if (lVar7 == 0) {
switchD_01d779dc_default:
    return 2;
  }
  FUN_01e06140(&local_160);
LAB_01d77bb8:
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  *param_2 = local_160;
  plVar8 = param_2 + 1;
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_158);
  (**(code **)(*plVar8 + 0x30))(plVar8,&local_158);
  *(uint *)((long)param_2 + 0x101) =
       CONCAT13(uStack_5c,CONCAT12(uStack_5d,CONCAT11(uStack_5e,uStack_5f)));
  *(uint *)((long)param_2 + 0x105) =
       CONCAT13(uStack_58,CONCAT12(uStack_59,CONCAT11(uStack_5a,uStack_5b)));
  *(undefined1 *)(param_2 + 0x20) = local_60;
  *(undefined2 *)((long)param_2 + 0x10a) = local_56;
  *(undefined1 *)((long)param_2 + 0x10c) = local_54;
  param_2[0x22] = CONCAT44(uStack_4c,local_50);
  *(undefined4 *)(param_2 + 0x23) = local_48;
  return 0;
}


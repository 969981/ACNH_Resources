
void FUN_00dec260(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  bool bVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined **local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined2 local_64;
  undefined8 local_60;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  uVar1 = DAT_05405f60;
  uVar4 = DAT_05405f5c._2_2_;
  sVar3 = (short)DAT_05405f5c;
  local_44 = param_2;
  switch(param_2) {
  case 0:
    FUN_00b68480(param_1,param_3);
    return;
  case 1:
    if (DAT_05739190 == 0) {
      lVar9 = 0;
      if (cRam0000000000000078 == '\0') goto LAB_00dec444;
LAB_00dec2e4:
      bVar7 = (**(code **)(*(long *)(lVar9 + 0x70) + 0x18))((long *)(lVar9 + 0x70));
      *(undefined1 *)(lVar9 + 0x78) = 0;
    }
    else {
      lVar9 = *(long *)(DAT_05739190 + 0x28);
      if (*(char *)(lVar9 + 0x78) != '\0') goto LAB_00dec2e4;
LAB_00dec444:
      bVar7 = 1;
    }
    *(byte *)(lVar9 + 0x79) = bVar7 & 1;
    plVar10 = (long *)(lVar9 + 0x88);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    if (*(char **)(lVar9 + 0x90) == "Player") {
LAB_00dec68c:
      local_4c = 0x29f5;
      FUN_0277d4ac(&local_4c);
    }
    else {
      uVar8 = 0;
      bVar6 = true;
      do {
        cVar2 = (*(char **)(lVar9 + 0x90))[uVar8];
        if (cVar2 != "Player"[uVar8]) break;
        if (cVar2 == '\0') {
          if (bVar6) goto LAB_00dec68c;
          break;
        }
        bVar6 = uVar8 < 0x80000;
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x80001);
      FUN_021f6050(&local_4c,plVar10);
    }
    if ((short)local_4c == -2) {
      return;
    }
    local_54 = 0xfffe;
    FUN_0277d4ac(&local_54);
    local_54 = local_4c;
    FUN_01b46be0(&local_98);
    local_60 = 0xfffe;
    local_98 = &PTR_LAB_04958c00;
    FUN_0277d4ac(&local_60);
    local_90 = *(undefined4 *)(param_1 + 8);
    uStack_8c = *(undefined4 *)(param_1 + 0xc);
    local_78 = *(undefined4 *)(param_1 + 0x20);
    uStack_74 = *(undefined4 *)(param_1 + 0x24);
    local_70 = *(undefined1 *)(param_1 + 0x28);
    local_6c = *(undefined4 *)(param_1 + 0x2c);
    uStack_68 = *(undefined4 *)(param_1 + 0x30);
    local_64 = *(undefined2 *)(param_1 + 0x34);
    uVar5 = (undefined4)local_54;
    uVar1 = local_54._4_4_;
    goto LAB_00dec660;
  case 2:
    if (DAT_05739190 == 0) {
      lVar9 = 0;
      if (DAT_00000028 == '\0') goto LAB_00dec4cc;
LAB_00dec31c:
      bVar7 = (**(code **)(*(long *)(lVar9 + 0x20) + 0x18))((long *)(lVar9 + 0x20));
      *(undefined1 *)(lVar9 + 0x28) = 0;
    }
    else {
      lVar9 = *(long *)(DAT_05739190 + 0x28);
      if (*(char *)(lVar9 + 0x28) != '\0') goto LAB_00dec31c;
LAB_00dec4cc:
      bVar7 = 1;
    }
    sVar3 = *(short *)(lVar9 + 0x2c);
    *(byte *)(lVar9 + 0x29) = bVar7 & 1;
    if (sVar3 == -2) {
      return;
    }
    uVar1 = *(undefined4 *)(lVar9 + 0x30);
    uVar4 = *(undefined2 *)(lVar9 + 0x2e);
    local_4c = 0xfffe;
    FUN_0277d4ac(&local_4c);
    local_4c._0_4_ = CONCAT22(uVar4,sVar3);
    local_4c = CONCAT44(uVar1,(undefined4)local_4c);
    FUN_01b46be0(&local_98);
    local_98 = &PTR_LAB_04958c78;
    break;
  case 3:
    if (DAT_05739190 == 0) {
      lVar9 = 0;
      if (DAT_00000028 == '\0') goto LAB_00dec530;
LAB_00dec354:
      bVar7 = (**(code **)(*(long *)(lVar9 + 0x20) + 0x18))((long *)(lVar9 + 0x20));
      *(undefined1 *)(lVar9 + 0x28) = 0;
    }
    else {
      lVar9 = *(long *)(DAT_05739190 + 0x28);
      if (*(char *)(lVar9 + 0x28) != '\0') goto LAB_00dec354;
LAB_00dec530:
      bVar7 = 1;
    }
    sVar3 = *(short *)(lVar9 + 0x2c);
    *(byte *)(lVar9 + 0x29) = bVar7 & 1;
    if (sVar3 == -2) {
      return;
    }
    uVar1 = *(undefined4 *)(lVar9 + 0x30);
    uVar4 = *(undefined2 *)(lVar9 + 0x2e);
    local_4c = 0xfffe;
    FUN_0277d4ac(&local_4c);
    local_4c._0_4_ = CONCAT22(uVar4,sVar3);
    local_4c = CONCAT44(uVar1,(undefined4)local_4c);
    FUN_01b46be0(&local_98);
    local_98 = &PTR_LAB_04958cd8;
    break;
  case 4:
    if (DAT_05739190 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(DAT_05739190 + 0x28);
    }
    if (*(char *)(lVar9 + 0x1d38) == '\0') {
      bVar7 = 1;
    }
    else {
      bVar7 = (**(code **)(*(long *)(lVar9 + 0x1d30) + 0x18))(lVar9 + 0x1d30);
      *(char *)(lVar9 + 0x1d38) = '\0';
    }
    sVar3 = *(short *)(lVar9 + 0x1d3c);
    *(byte *)(lVar9 + 0x1d39) = bVar7 & 1;
    if (sVar3 == -2) {
      return;
    }
    uVar1 = *(undefined4 *)(lVar9 + 0x1d40);
    uVar4 = *(undefined2 *)(lVar9 + 0x1d3e);
    local_4c = 0xfffe;
    FUN_0277d4ac(&local_4c);
    local_4c._0_4_ = CONCAT22(uVar4,sVar3);
    local_4c = CONCAT44(uVar1,(undefined4)local_4c);
    FUN_01b46be0(&local_98);
    local_98 = &PTR_LAB_04958d38;
    break;
  case 5:
    if ((short)DAT_05405f5c == -2) {
      return;
    }
    local_4c = 0xfffe;
    FUN_0277d4ac(&local_4c);
    local_4c._0_4_ = CONCAT22(uVar4,sVar3);
    local_4c = CONCAT44(uVar1,(undefined4)local_4c);
    FUN_01b46be0(&local_98);
    local_98 = &PTR_LAB_04958d98;
    break;
  case 6:
    if ((short)DAT_05405f5c == -2) {
      return;
    }
    local_4c = 0xfffe;
    FUN_0277d4ac(&local_4c);
    local_4c._0_4_ = CONCAT22(uVar4,sVar3);
    local_4c = CONCAT44(uVar1,(undefined4)local_4c);
    FUN_01b46be0(&local_98);
    local_98 = &PTR_LAB_04958df8;
    break;
  default:
    goto switchD_00dec2a4_default;
  }
  local_60 = 0xfffe;
  FUN_0277d4ac(&local_60);
  local_90 = *(undefined4 *)(param_1 + 8);
  uStack_8c = *(undefined4 *)(param_1 + 0xc);
  local_78 = *(undefined4 *)(param_1 + 0x20);
  uStack_74 = *(undefined4 *)(param_1 + 0x24);
  local_70 = *(undefined1 *)(param_1 + 0x28);
  local_6c = *(undefined4 *)(param_1 + 0x2c);
  uStack_68 = *(undefined4 *)(param_1 + 0x30);
  local_64 = *(undefined2 *)(param_1 + 0x34);
  uVar5 = (undefined4)local_4c;
  uVar1 = local_4c._4_4_;
LAB_00dec660:
  local_60 = CONCAT44(uVar1,uVar5);
  FUN_00b68480(&local_98,param_3);
switchD_00dec2a4_default:
  return;
}


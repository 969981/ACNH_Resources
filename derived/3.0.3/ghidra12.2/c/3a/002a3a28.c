
undefined8 FUN_002a3a28(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  int local_e0;
  ErrorResultVariant aEStack_dc [12];
  int local_d0;
  ErrorResultVariant aEStack_cc [12];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50 [4];
  undefined4 local_34;
  
  lVar4 = DAT_04c60f48;
  puVar8 = auStack_160;
  iVar5 = *(int *)(DAT_04c60f48 + 0xd4);
  (**(code **)(**(long **)(DAT_04c60f48 + 8) + 0x30))(local_50);
  local_d0 = 0;
  local_60 = 0xc406;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_d0);
  if (local_50[0] == local_60) {
    FUN_002296c4(auStack_70,local_50);
    puVar8 = auStack_70;
LAB_002a3aa4:
    FUN_0029c318(lVar4,3,8,puVar8);
    return 3;
  }
  local_d0 = 0;
  local_60 = 0xa471;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_d0);
  if (local_50[0] == local_60) {
    FUN_002296c4(auStack_80,local_50);
    puVar8 = auStack_80;
    uVar7 = 4;
LAB_002a3bd0:
    FUN_0029c318(lVar4,uVar7,8,puVar8);
    return 3;
  }
  local_d0 = 0;
  local_60 = 0xc420;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_d0);
  if (local_50[0] == local_60) {
    FUN_002296c4(auStack_90,local_50);
    uVar7 = 5;
    puVar8 = auStack_90;
    goto LAB_002a3bd0;
  }
  local_d0 = 0;
  local_60 = 0xc421;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_d0);
  if (local_50[0] == local_60) {
    FUN_002296c4(auStack_a0,local_50);
    puVar8 = auStack_a0;
    uVar7 = 6;
    goto LAB_002a3bd0;
  }
  local_d0 = 0;
  local_60 = 0xa46e;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_d0);
  if (local_50[0] == local_60) {
    FUN_002296c4(auStack_b0,local_50);
    puVar8 = auStack_b0;
    uVar7 = 7;
    goto LAB_002a3bd0;
  }
  FUN_002ba498(&local_60,DAT_04c61168);
  puVar3 = PTR_DAT_04bcd350;
  if (local_60 != 0) {
    local_d0 = 0xc406;
    local_e0 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_cc,(Result *)&local_e0);
    FUN_002296c4(auStack_c0,&local_d0);
    puVar8 = auStack_c0;
    goto LAB_002a3aa4;
  }
  if (*(int *)(lVar4 + 0xd8) != 1) {
    return 5;
  }
  iVar1 = *(int *)(lVar4 + 0x180 + (ulong)*(byte *)(lVar4 + 0x162) * 4);
  iVar2 = *(int *)(lVar4 + 0x180 + (ulong)((ulong)*(byte *)(lVar4 + 0x162) == 0) * 4);
  if (iVar5 != 4) {
    if (iVar5 == 3) {
      if (*(long *)(lVar4 + 0x70) == 0) {
        if (iVar2 != 0 || iVar1 != 0) {
          return 5;
        }
      }
      else {
        if (iVar2 != 0 || iVar1 != 0) {
          return 5;
        }
        if (*(char *)(*(long *)(lVar4 + 0x70) + 0xfa) != '\0') {
          return 5;
        }
      }
      local_e0 = 0;
      local_d0 = 0x8c56;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_cc,(Result *)&local_e0);
      FUN_002296c4(auStack_150,&local_d0);
      puVar8 = auStack_150;
      uVar7 = 2;
      goto LAB_002a3bd0;
    }
    if (iVar5 != 2) {
      local_e0 = 0;
      local_d0 = 0x8c56;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_cc,(Result *)&local_e0);
      if (local_50[0] != local_d0) {
        return 5;
      }
      local_d0 = 0x8c56;
      local_e0 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_cc,(Result *)&local_e0);
      FUN_002296c4(auStack_160,&local_d0);
      uVar7 = 2;
      iVar5 = 8;
      goto LAB_002a3ff8;
    }
  }
  FUN_0026bc0c(&local_d0,*(undefined8 *)PTR_DAT_04bcd350);
  local_34 = 0;
  local_e0 = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_dc,(Result *)&local_34);
  if (local_d0 != local_e0) {
    if (iVar5 == 4) {
      if ((iVar1 == 0) || (iVar2 == 0)) {
        local_e0 = 0;
        local_d0 = 0x8c56;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_cc,(Result *)&local_e0);
        FUN_002296c4(auStack_130,&local_d0);
        puVar8 = auStack_130;
LAB_002a3f04:
        FUN_0029c318(lVar4,2,8,puVar8);
      }
      else {
        uVar6 = (**(code **)(**(long **)(lVar4 + 8) + 0x70))(*(long **)(lVar4 + 8),iVar1,iVar2);
        if ((uVar6 & 1) != 0) {
          local_e0 = 0;
          local_d0 = 0x8c56;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_cc,(Result *)&local_e0);
          FUN_002296c4(auStack_140,&local_d0);
          puVar8 = auStack_140;
          goto LAB_002a3f04;
        }
      }
      if (DAT_04be24d9 == '\0') {
        return 5;
      }
      uVar6 = FUN_0029b71c(lVar4);
      goto joined_r0x002a3f2c;
    }
    if (iVar5 != 2) {
      return 5;
    }
    if (iVar1 == 0) {
      local_e0 = 0;
      local_d0 = 0x8c56;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_cc,(Result *)&local_e0);
      FUN_002296c4(auStack_110,&local_d0);
      puVar8 = auStack_110;
LAB_002a3f60:
      FUN_0029c318(lVar4,2,8,puVar8);
    }
    else {
      uVar6 = (**(code **)(**(long **)(lVar4 + 8) + 0x70))(*(long **)(lVar4 + 8),iVar1,0);
      if ((uVar6 & 1) != 0) {
        local_e0 = 0;
        local_d0 = 0x8c56;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_cc,(Result *)&local_e0);
        FUN_002296c4(auStack_120,&local_d0);
        puVar8 = auStack_120;
        goto LAB_002a3f60;
      }
    }
    if (DAT_04be24d9 == '\0') {
      return 5;
    }
    uVar6 = FUN_0029b264(lVar4);
joined_r0x002a3f2c:
    if ((uVar6 & 1) == 0) {
      return 5;
    }
    FUN_0029ceec(lVar4);
    FUN_0029c7b0();
    return 5;
  }
  iVar5 = FUN_0026bc60(*(undefined8 *)puVar3);
  if (iVar5 == 2) {
    local_d0 = 0;
    local_e0 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_cc,(Result *)&local_e0);
    FUN_002296c4(auStack_f0,&local_d0);
    puVar8 = auStack_f0;
    uVar7 = 0;
    iVar5 = 2;
    goto LAB_002a3ff8;
  }
  local_d0 = 0;
  local_e0 = 0x8c56;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_dc,(Result *)&local_d0);
  FUN_002296c4(&local_d0,&local_e0);
  switch(iVar5) {
  case 3:
    local_e0 = 0x8c78;
    break;
  case 4:
    local_e0 = 0x8c79;
    break;
  default:
    goto switchD_002a3e38_caseD_5;
  case 6:
    local_e0 = 0x8c77;
    break;
  case 7:
  case 9:
    local_e0 = 0x8c76;
    break;
  case 10:
    local_e0 = 0x8c7a;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_dc,(Result *)&local_34);
  FUN_00229780(&local_d0,&local_e0);
switchD_002a3e38_caseD_5:
  FUN_002296c4(auStack_100,&local_d0);
  puVar8 = auStack_100;
  uVar7 = 2;
LAB_002a3ff8:
  FUN_0029c318(lVar4,uVar7,iVar5,puVar8);
  return 5;
}


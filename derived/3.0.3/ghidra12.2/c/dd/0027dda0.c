
void FUN_0027dda0(undefined8 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  int local_138;
  ErrorResultVariant aEStack_134 [128];
  int local_b4;
  ErrorResultVariant aEStack_b0 [12];
  int local_a4;
  ErrorResultVariant aEStack_a0 [12];
  int local_94;
  ErrorResultVariant aEStack_90 [12];
  int local_84;
  ErrorResultVariant aEStack_80 [12];
  int local_74;
  ErrorResultVariant aEStack_70 [12];
  int local_64;
  ErrorResultVariant aEStack_60 [12];
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  int local_44 [4];
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bcd350;
  FUN_002296c4(local_44,*(long *)(*(long *)PTR_DAT_04bcd350 + 8) + 0xa4);
  switch(param_3 & 0xef) {
  case 2:
    local_54 = 0;
    local_138 = 0x6442;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_134,(Result *)&local_54);
    if (local_44[0] == local_138) goto switchD_0027de00_default;
    local_94 = 0;
    local_54 = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_94);
    if (local_44[0] == local_54) goto switchD_0027de00_default;
    local_94 = 0;
    local_64 = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_94);
    if (local_44[0] == local_64) goto switchD_0027de00_default;
    local_94 = 0;
    local_74 = 0x6443;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_94);
    if (local_44[0] == local_74) goto switchD_0027de00_default;
    local_94 = 0;
    local_84 = 0x6444;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_80,(Result *)&local_94);
    if (local_44[0] == local_84) goto switchD_0027de00_default;
    local_138 = 0x643f;
    break;
  case 3:
    local_54 = 0;
    local_138 = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_134,(Result *)&local_54);
    if (local_44[0] == local_138) goto switchD_0027de00_default;
    local_84 = 0;
    local_54 = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_84);
    if (local_44[0] == local_54) goto switchD_0027de00_default;
    local_84 = 0;
    local_64 = 0x6443;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_84);
    if (local_44[0] == local_64) goto switchD_0027de00_default;
    local_84 = 0;
    local_74 = 0x6444;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_84);
    if (local_44[0] == local_74) goto switchD_0027de00_default;
    local_138 = 0x6442;
    break;
  case 4:
  case 7:
    local_54 = 0;
    local_138 = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_134,(Result *)&local_54);
    if (local_44[0] == local_138) goto switchD_0027de00_default;
    local_138 = 0x6445;
    break;
  case 5:
    local_54 = 0;
    local_138 = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_134,(Result *)&local_54);
    if (local_44[0] == local_138) goto switchD_0027de00_default;
    local_64 = 0;
    local_54 = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_64);
    if (local_44[0] == local_54) goto switchD_0027de00_default;
    if ((param_4 & 1) != 0) goto LAB_0027e044;
LAB_0027e0a8:
    local_138 = 0x6443;
    break;
  case 6:
    local_54 = 0;
    local_138 = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_134,(Result *)&local_54);
    if (local_44[0] == local_138) goto switchD_0027de00_default;
    local_64 = 0;
    local_54 = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_64);
    if (local_44[0] == local_54) goto switchD_0027de00_default;
    if ((param_4 & 1) != 0) goto LAB_0027e0a8;
LAB_0027e044:
    local_138 = 0x6444;
    break;
  case 8:
    local_138 = 0x644a;
    break;
  case 9:
    local_138 = 0x6c0e;
    break;
  case 10:
    local_54 = 0;
    local_138 = 0x6442;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_134,(Result *)&local_54);
    if (local_44[0] == local_138) goto switchD_0027de00_default;
    local_34 = 0;
    local_54 = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
    if (local_44[0] == local_54) goto switchD_0027de00_default;
    local_34 = 0;
    local_64 = 0x6443;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_34);
    if (local_44[0] == local_64) goto switchD_0027de00_default;
    local_34 = 0;
    local_74 = 0x6444;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_34);
    if (local_44[0] == local_74) goto switchD_0027de00_default;
    local_34 = 0;
    local_84 = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_80,(Result *)&local_34);
    if (local_44[0] == local_84) goto switchD_0027de00_default;
    local_34 = 0;
    local_94 = 0x646a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_90,(Result *)&local_34);
    if (local_44[0] == local_94) goto switchD_0027de00_default;
    local_34 = 0;
    local_a4 = 0x6468;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_a0,(Result *)&local_34);
    if (local_44[0] == local_a4) goto switchD_0027de00_default;
    local_34 = 0;
    local_b4 = 0x6469;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_b0,(Result *)&local_34);
    if (local_44[0] == local_b4) goto switchD_0027de00_default;
    local_138 = 0x6467;
    break;
  case 0xb:
    local_54 = 0;
    local_138 = 0x6442;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_134,(Result *)&local_54);
    if (local_44[0] == local_138) goto switchD_0027de00_default;
    local_a4 = 0;
    local_54 = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_a4);
    if (local_44[0] == local_54) goto switchD_0027de00_default;
    local_a4 = 0;
    local_64 = 0x6443;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_a4);
    if (local_44[0] == local_64) goto switchD_0027de00_default;
    local_a4 = 0;
    local_74 = 0x6444;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_a4);
    if (local_44[0] == local_74) goto switchD_0027de00_default;
    local_a4 = 0;
    local_84 = 0x646a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_80,(Result *)&local_a4);
    if (local_44[0] == local_84) goto switchD_0027de00_default;
    local_a4 = 0;
    local_94 = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_90,(Result *)&local_a4);
    if (local_44[0] == local_94) goto switchD_0027de00_default;
    if ((param_4 & 1) != 0) goto LAB_0027e1cc;
LAB_0027e2e0:
    local_138 = 0x6468;
    break;
  case 0xc:
    local_54 = 0;
    local_138 = 0x6442;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_134,(Result *)&local_54);
    if (local_44[0] == local_138) goto switchD_0027de00_default;
    local_a4 = 0;
    local_54 = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_a4);
    if (local_44[0] == local_54) goto switchD_0027de00_default;
    local_a4 = 0;
    local_64 = 0x6443;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_a4);
    if (local_44[0] == local_64) goto switchD_0027de00_default;
    local_a4 = 0;
    local_74 = 0x6444;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_a4);
    if (local_44[0] == local_74) goto switchD_0027de00_default;
    local_a4 = 0;
    local_84 = 0x646a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_80,(Result *)&local_a4);
    if (local_44[0] == local_84) goto switchD_0027de00_default;
    local_a4 = 0;
    local_94 = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_90,(Result *)&local_a4);
    if (local_44[0] == local_94) goto switchD_0027de00_default;
    if ((param_4 & 1) != 0) goto LAB_0027e2e0;
LAB_0027e1cc:
    local_138 = 0x6469;
    break;
  case 0xd:
    local_54 = 0;
    local_138 = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_134,(Result *)&local_54);
    if (local_44[0] == local_138) goto switchD_0027de00_default;
    local_64 = 0;
    local_54 = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_64);
    if (local_44[0] == local_54) goto switchD_0027de00_default;
    local_138 = 0x646a;
    break;
  default:
    goto switchD_0027de00_default;
  }
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_134,(Result *)&local_54);
  FUN_00229780(*(long *)(*(long *)puVar1 + 8) + 0xa4,&local_138);
switchD_0027de00_default:
  plVar3 = (long *)FUN_002ba790(DAT_04c61168);
  lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,param_2);
  if (lVar4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_002b3fa8(&local_138);
    plVar3 = (long *)FUN_002ba788(DAT_04c61168);
    (**(code **)(*plVar3 + 0x20))(&local_54,plVar3,lVar4,&local_138);
    if (local_54 == 0) {
      uVar2 = FUN_002b43f4(&local_138);
    }
    else {
      uVar2 = 0xffffffff;
    }
    FUN_002b4104(&local_138);
  }
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 8) + 0xb4) = uVar2;
  return;
}


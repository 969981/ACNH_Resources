
undefined8 FUN_002a4004(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  int local_b0;
  ErrorResultVariant aEStack_ac [12];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40 [4];
  undefined4 local_24;
  
  puVar6 = auStack_e0;
  iVar2 = *(int *)(DAT_04c60f48 + 0xd4);
  (**(code **)(**(long **)(DAT_04c60f48 + 8) + 0x30))(local_40);
  local_b0 = 0;
  local_50 = 0xc406;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_b0);
  lVar3 = DAT_04c60f48;
  if (local_40[0] == local_50) {
    FUN_002296c4(auStack_60,local_40);
    puVar6 = auStack_60;
LAB_002a407c:
    uVar5 = 3;
LAB_002a41b0:
    iVar2 = 8;
    goto LAB_002a41b4;
  }
  local_b0 = 0;
  local_50 = 0xa471;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_b0);
  lVar3 = DAT_04c60f48;
  if (local_40[0] == local_50) {
    FUN_002296c4(auStack_70,local_40);
    puVar6 = auStack_70;
    uVar5 = 4;
    goto LAB_002a41b0;
  }
  local_b0 = 0;
  local_50 = 0xc420;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_b0);
  lVar3 = DAT_04c60f48;
  if (local_40[0] == local_50) {
    FUN_002296c4(auStack_80,local_40);
    uVar5 = 5;
    puVar6 = auStack_80;
    goto LAB_002a41b0;
  }
  local_b0 = 0;
  local_50 = 0xc421;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_b0);
  lVar3 = DAT_04c60f48;
  if (local_40[0] == local_50) {
    FUN_002296c4(auStack_90,local_40);
    puVar6 = auStack_90;
    uVar5 = 6;
    goto LAB_002a41b0;
  }
  local_b0 = 0;
  local_50 = 0xa46e;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_b0);
  lVar3 = DAT_04c60f48;
  puVar1 = PTR_DAT_04bcd350;
  if (local_40[0] == local_50) {
    FUN_002296c4(auStack_a0,local_40);
    puVar6 = auStack_a0;
    uVar5 = 7;
    goto LAB_002a41b0;
  }
  if (iVar2 != 2) {
LAB_002a4264:
    FUN_002ba498(&local_50,DAT_04c61168);
    lVar3 = DAT_04c60f48;
    if (local_50 == 0) {
      if ((DAT_04be24d9 != '\0') && (uVar4 = FUN_0029b264(DAT_04c60f48), (uVar4 & 1) != 0)) {
        FUN_0029c7b0(0);
      }
      return 5;
    }
    local_b0 = 0xc406;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_ac,(Result *)&local_24);
    FUN_002296c4(auStack_e0,&local_b0);
    goto LAB_002a407c;
  }
  FUN_0026bc0c(&local_50,*(undefined8 *)PTR_DAT_04bcd350);
  local_24 = 0;
  local_b0 = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_ac,(Result *)&local_24);
  if (local_50 != local_b0) goto LAB_002a4264;
  iVar2 = FUN_0026bc60(*(undefined8 *)puVar1);
  lVar3 = DAT_04c60f48;
  if (iVar2 == 2) {
    local_50 = 0;
    local_b0 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_b0);
    FUN_002296c4(auStack_c0,&local_50);
    puVar6 = auStack_c0;
    uVar5 = 0;
    iVar2 = 2;
    goto LAB_002a41b4;
  }
  local_50 = 0;
  local_b0 = 0x8c56;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_ac,(Result *)&local_50);
  FUN_002296c4(&local_50,&local_b0);
  switch(iVar2) {
  case 3:
    local_b0 = 0x8c78;
    break;
  case 4:
    local_b0 = 0x8c79;
    break;
  default:
    goto switchD_002a4338_caseD_5;
  case 6:
    local_b0 = 0x8c77;
    break;
  case 7:
  case 9:
    local_b0 = 0x8c76;
    break;
  case 10:
    local_b0 = 0x8c7a;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_ac,(Result *)&local_24);
  FUN_00229780(&local_50,&local_b0);
switchD_002a4338_caseD_5:
  lVar3 = DAT_04c60f48;
  FUN_002296c4(auStack_d0,&local_50);
  puVar6 = auStack_d0;
  uVar5 = 2;
LAB_002a41b4:
  FUN_0029c318(lVar3,uVar5,iVar2,puVar6);
  return 1;
}


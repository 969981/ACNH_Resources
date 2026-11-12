
void FUN_008e8120(float *param_1,long param_2,long *param_3)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  char *local_138;
  undefined **local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined *local_118;
  undefined ***pppuStack_110;
  undefined4 local_108;
  undefined **local_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined1 local_ec [31];
  undefined1 local_cd;
  undefined1 local_ad;
  char local_a8 [32];
  undefined *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_74 [31];
  undefined1 local_55;
  
  if (param_2 != 0) {
    (**(code **)(*param_3 + 0x10))(param_3,&DAT_040a90aa,1);
    local_cd = 0;
    local_f0 = 0x20;
    local_ec[0] = 0;
    local_100 = &PTR_LAB_048f9700;
    local_f8 = local_ec;
    uVar4 = FUN_038d1270((double)*param_1,&local_100,param_2);
    (*(code *)local_100[3])(&local_100);
    (**(code **)(*param_3 + 0x10))(param_3,local_f8,uVar4);
    (**(code **)(*param_3 + 0x10))(param_3,&DAT_0408f28c,1);
    local_f0 = 0x20;
    local_cd = 0;
    local_ec[0] = 0;
    local_100 = &PTR_LAB_048f9700;
    local_f8 = local_ec;
    uVar4 = FUN_038d1270((double)param_1[1],&local_100,param_2);
    (*(code *)local_100[3])(&local_100);
    (**(code **)(*param_3 + 0x10))(param_3,local_f8,uVar4);
                    /* WARNING: Could not recover jumptable at 0x008e826c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x10))(param_3,&DAT_04094801,1);
    return;
  }
  local_ad = 0;
  pppuStack_110 = &local_100;
  local_f0 = 0x40;
  local_f8 = local_ec;
  local_100 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
  local_130 = &local_118;
  local_120 = 0;
  local_108 = 0;
  local_ec[0] = 0;
  local_118 = PTR_DAT_04bd0dc8 + 0x10;
  local_138 = "(%@,%@)";
  local_128 = 0x700000000;
  uVar5 = FUN_038cf2b0(&local_138,local_a8);
  ppuVar2 = local_130;
  if ((uVar5 & 1) != 0) {
    local_55 = 0;
    local_78 = 0x20;
    local_74[0] = 0;
    local_80 = local_74;
    pcVar1 = "%f";
    if (local_a8[0] != '\0') {
      pcVar1 = local_a8;
    }
    local_88 = PTR_DAT_04bb2028 + 0x10;
    uVar4 = FUN_038d1270((double)*param_1,&local_88,pcVar1);
    (**(code **)(local_88 + 0x18))(&local_88);
    (**(code **)(*ppuVar2 + 0x10))(ppuVar2,local_80,uVar4);
  }
  uVar5 = FUN_038cf2b0(&local_138,local_a8);
  ppuVar2 = local_130;
  if ((uVar5 & 1) != 0) {
    local_55 = 0;
    local_78 = 0x20;
    local_74[0] = 0;
    local_80 = local_74;
    pcVar1 = "%f";
    if (local_a8[0] != '\0') {
      pcVar1 = local_a8;
    }
    local_88 = PTR_DAT_04bb2028 + 0x10;
    uVar4 = FUN_038d1270((double)param_1[1],&local_88,pcVar1);
    (**(code **)(local_88 + 0x18))(&local_88);
    (**(code **)(*ppuVar2 + 0x10))(ppuVar2,local_80,uVar4);
  }
  if (local_138 != (char *)0x0) {
    local_120 = 0;
    while ((int)local_128 < local_128._4_4_) {
      FUN_038cf2b0(&local_138,&local_88);
    }
  }
  (*(code *)local_100[3])(&local_100);
  puVar3 = local_f8;
  (*(code *)local_100[3])(&local_100);
  lVar6 = 0;
  do {
    if (local_f8[lVar6] == '\0') goto LAB_008e847c;
    if (local_f8[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_008e847c;
    }
    if (local_f8[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_008e847c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_008e847c:
  (**(code **)(*param_3 + 0x10))(param_3,puVar3,lVar6);
  return;
}


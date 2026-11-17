
undefined8 FUN_02ef7500(long param_1,byte *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  undefined *local_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined1 local_8d;
  undefined *local_88;
  char *pcStack_80;
  undefined4 local_78;
  char local_74 [8];
  char local_6c [5];
  char acStack_67 [3];
  char acStack_64 [5];
  undefined1 local_5f;
  undefined1 local_35;
  
  if (*(int *)(param_1 + 0x1f0) != -1 || *(int *)(param_1 + 500) != -1) {
    return 0;
  }
  uVar3 = FUN_0315608c();
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if ((DAT_056b6f18 != 0) && (*(int *)(DAT_056b6f18 + 0x588) != 0)) {
    return 0;
  }
  uVar3 = FUN_02204250();
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_022040b0();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    FUN_0252d11c(&local_e0);
    if (7 < (byte)local_e0) {
      return 0;
    }
    local_88 = PTR_DAT_04bb2020 + 0x10;
    pcStack_80 = "AlwJuneBrideDayCount";
    iVar2 = FUN_0274bce0(&local_e0,&local_88);
    if (iVar2 < 6) {
      return 0;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "JuneBrideCeremonyDemoAfterNow";
  local_88 = puVar1;
  iVar2 = FUN_02743000(&local_88);
  if (iVar2 == 0) {
    lVar4 = param_1 + 0x1f8;
    pcStack_80 = "AlwJuneBrideDayCount";
    local_88 = puVar1;
    iVar2 = FUN_0274bce0(lVar4,&local_88);
    if (iVar2 == 5) {
      uVar3 = FUN_02e542c0(lVar4,1);
    }
    else {
      uVar3 = FUN_02e5625c(lVar4);
    }
    if ((uVar3 & 1) == 0) {
      s_System_JuneBrideParty_040fa61f[0] = s_System_JuneBrideParty_040fa61f[0];
      s_System_JuneBrideParty_040fa61f[1] = s_System_JuneBrideParty_040fa61f[1];
      s_System_JuneBrideParty_040fa61f[2] = s_System_JuneBrideParty_040fa61f[2];
      s_System_JuneBrideParty_040fa61f[3] = s_System_JuneBrideParty_040fa61f[3];
      s_System_JuneBrideParty_040fa61f[4] = s_System_JuneBrideParty_040fa61f[4];
      s_System_JuneBrideParty_040fa61f[5] = s_System_JuneBrideParty_040fa61f[5];
      s_System_JuneBrideParty_040fa61f[6] = s_System_JuneBrideParty_040fa61f[6];
      s_System_JuneBrideParty_040fa61f[7] = s_System_JuneBrideParty_040fa61f[7];
      s_System_JuneBrideParty_040fa61f[8] = s_System_JuneBrideParty_040fa61f[8];
      s_System_JuneBrideParty_040fa61f[9] = s_System_JuneBrideParty_040fa61f[9];
      s_System_JuneBrideParty_040fa61f[10] = s_System_JuneBrideParty_040fa61f[10];
      s_System_JuneBrideParty_040fa61f[0xb] = s_System_JuneBrideParty_040fa61f[0xb];
      s_System_JuneBrideParty_040fa61f[0xc] = s_System_JuneBrideParty_040fa61f[0xc];
      s_System_JuneBrideParty_040fa61f[0xd] = s_System_JuneBrideParty_040fa61f[0xd];
      s_System_JuneBrideParty_040fa61f[0xe] = s_System_JuneBrideParty_040fa61f[0xe];
      s_System_JuneBrideParty_040fa61f[0xf] = s_System_JuneBrideParty_040fa61f[0xf];
      s_System_JuneBrideParty_040fa61f[0x10] = s_System_JuneBrideParty_040fa61f[0x10];
      s_System_JuneBrideParty_040fa61f[0x11] = s_System_JuneBrideParty_040fa61f[0x11];
      s_System_JuneBrideParty_040fa61f[0x12] = s_System_JuneBrideParty_040fa61f[0x12];
      s_System_JuneBrideParty_040fa61f[0x13] = s_System_JuneBrideParty_040fa61f[0x13];
      s_System_JuneBrideParty_040fa61f[0x14] = s_System_JuneBrideParty_040fa61f[0x14];
      return 0;
    }
  }
  uVar3 = FUN_02ef7758(0x9b,param_2);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x210) == -1) && (7 < *(byte *)(param_1 + 0x214))) {
    lVar4 = param_1 + 0x210;
  }
  else if ((*(int *)(param_1 + 0x224) == -1) && (7 < *(byte *)(param_1 + 0x228))) {
    lVar4 = param_1 + 0x224;
  }
  else if ((*(int *)(param_1 + 0x238) == -1) && (7 < *(byte *)(param_1 + 0x23c))) {
    lVar4 = param_1 + 0x238;
  }
  else {
    lVar4 = param_1 + 0x24c;
  }
  local_35 = 0;
  local_78 = 0x40;
  bVar5 = *param_2;
  local_5f = 0;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  *(byte *)(lVar4 + 4) = bVar5;
  local_74[0] = s_System_JuneBrideParty_040fa61f[0];
  local_74[1] = s_System_JuneBrideParty_040fa61f[1];
  local_74[2] = s_System_JuneBrideParty_040fa61f[2];
  local_74[3] = s_System_JuneBrideParty_040fa61f[3];
  local_74[4] = s_System_JuneBrideParty_040fa61f[4];
  local_74[5] = s_System_JuneBrideParty_040fa61f[5];
  local_74[6] = s_System_JuneBrideParty_040fa61f[6];
  local_74[7] = s_System_JuneBrideParty_040fa61f[7];
  local_6c[0] = s_System_JuneBrideParty_040fa61f[8];
  local_6c[1] = s_System_JuneBrideParty_040fa61f[9];
  local_6c[2] = s_System_JuneBrideParty_040fa61f[10];
  local_6c[3] = s_System_JuneBrideParty_040fa61f[0xb];
  local_6c[4] = s_System_JuneBrideParty_040fa61f[0xc];
  acStack_67[0] = s_System_JuneBrideParty_040fa61f[0xd];
  acStack_67[1] = s_System_JuneBrideParty_040fa61f[0xe];
  acStack_67[2] = s_System_JuneBrideParty_040fa61f[0xf];
  acStack_64[0] = s_System_JuneBrideParty_040fa61f[0x10];
  acStack_64[1] = s_System_JuneBrideParty_040fa61f[0x11];
  acStack_64[2] = s_System_JuneBrideParty_040fa61f[0x12];
  acStack_64[3] = s_System_JuneBrideParty_040fa61f[0x13];
  acStack_64[4] = s_System_JuneBrideParty_040fa61f[0x14];
  local_8d = 0;
  local_c8 = 0;
  pcStack_80 = local_74;
  local_e0 = PTR_DAT_04bb2bc0 + 0x10;
  local_d8 = (long)&uStack_d0 + 4;
  uStack_d0 = 0x746f6f5200000040;
  local_88 = local_e0;
  FUN_02ef79f0(param_1,&local_88,&local_e0,param_2,0);
  if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
    *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 6;
  }
  return 1;
}


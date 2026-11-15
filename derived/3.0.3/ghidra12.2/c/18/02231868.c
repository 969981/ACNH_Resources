
ulong FUN_02231868(undefined8 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined *local_f8;
  char *pcStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined *local_c8;
  char *pcStack_c0;
  undefined4 local_b8;
  char local_b4 [8];
  char local_ac [8];
  char local_a4 [8];
  char local_9c [8];
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_35;
  undefined4 local_30;
  undefined2 local_2c;
  undefined8 local_28;
  
  local_f8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_f0 = "TkkFirstLive";
  uVar1 = FUN_0273f0a0(&local_f8);
  if (((uVar1 & 1) == 0) ||
     (((DAT_0537d558 != 0 && (*(long *)(DAT_0537d558 + 0x28) != 0)) &&
      (*(int *)(DAT_0537d558 + 0x80) == 1)))) {
    uVar1 = (ulong)DAT_04c9a0c8;
  }
  else {
    local_35 = 0;
    local_b8 = 0x80;
    pcStack_c0 = local_b4;
    local_30 = 7;
    local_e8 = *(undefined4 *)(param_1 + 1);
    local_28 = 0;
    local_2c = 0;
    local_dc = 0;
    local_d4 = 0;
    local_c8 = PTR_DAT_04bb2d88 + 0x10;
    pcStack_f0 = (char *)*param_1;
    local_f8 = (undefined *)0xda00000000;
    uStack_e0 = *param_2;
    local_94 = 0x70;
    local_e4 = 0x3f800000;
    local_9c[0] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x18];
    local_9c[1] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x19];
    local_9c[2] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x1a];
    local_9c[3] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x1b];
    local_9c[4] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x1c];
    local_9c[5] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x1d];
    local_9c[6] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x1e];
    local_9c[7] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x1f];
    local_a4[0] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x10];
    local_a4[1] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x11];
    local_a4[2] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x12];
    local_a4[3] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x13];
    local_a4[4] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x14];
    local_a4[5] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x15];
    local_a4[6] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x16];
    local_a4[7] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0x17];
    local_ac[0] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[8];
    local_ac[1] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[9];
    local_ac[2] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[10];
    local_ac[3] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0xb];
    local_ac[4] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0xc];
    local_ac[5] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0xd];
    local_ac[6] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0xe];
    local_ac[7] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0xf];
    local_b4[0] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[0];
    local_b4[1] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[1];
    local_b4[2] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[2];
    local_b4[3] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[3];
    local_b4[4] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[4];
    local_b4[5] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[5];
    local_b4[6] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[6];
    local_b4[7] = s_StrcKppShip_None_None_StrcKppShi_04087ccd[7];
    local_93 = 0;
    uVar1 = FUN_007402e0(DAT_04c93e08,&local_f8,0,1);
    DAT_05461858 = (undefined4)uVar1;
  }
  return uVar1;
}


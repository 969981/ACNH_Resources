
bool FUN_0224bbc8(undefined8 *param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_140;
  float local_138;
  undefined4 uStack_134;
  float local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined *local_110;
  char *pcStack_108;
  undefined4 local_100;
  char local_fc [8];
  char local_f4 [8];
  char local_ec [8];
  char local_e4 [8];
  char local_dc [8];
  char local_d4 [8];
  char local_cc [8];
  char local_c4 [8];
  char local_bc [8];
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_7d;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined **local_50;
  uint local_48;
  uint local_44;
  undefined8 local_40;
  float local_38;
  
  local_40 = *param_1;
  local_38 = *(float *)(param_1 + 1);
  local_68 = (undefined *)((ulong)local_68 & 0xffffffffffffff00);
  if (*(long *)(DAT_04cfae30 + 0xa8) == 0) {
    uVar4 = 0xc3fa0000;
  }
  else {
    if (DAT_04c487d4 == -1) {
      uVar4 = 7;
    }
    else {
      local_140 = CONCAT44(local_140._4_4_,1);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar4 = 7;
      if ((*puVar1 & 2) != 0) {
        uVar4 = 5;
      }
    }
    local_140 = CONCAT44(local_140._4_4_,uVar4);
    uVar4 = FUN_00962700(*(long *)(DAT_04cfae30 + 0xa8),&local_40,&local_140,1,&local_68);
  }
  local_48 = (int)((float)(int)(float)local_40 / 5.0) - (uint)((float)local_40 < 0.0);
  local_44 = (int)((float)(int)local_38 / 5.0) - (uint)(local_38 < 0.0);
  local_50 = &PTR_FUN_04986b58;
  if ((local_48 & 1) != 0) {
    local_48 = local_48 - 1;
  }
  if ((local_44 & 1) != 0) {
    local_44 = local_44 - 1;
  }
  local_60 = 0;
  local_40._4_4_ = uVar4;
  if (DAT_05aed670 == 0) {
    puVar3 = &DAT_055c04a0;
  }
  else {
    puVar3 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar3 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar3 + 7);
  local_58 = FUN_017baf44();
  local_58 = local_58 & 1;
  local_68 = PTR_DAT_04bb6268 + 0x10;
  local_140 = 0xf61d;
  FUN_0277d4ac(&local_140);
  FUN_011f3390(&local_68,0,&local_140,&local_50);
  local_140 = 0x8500000000;
  pcStack_108 = local_fc;
  local_12c = 0x3f800000;
  local_100 = 0x80;
  local_78 = 7;
  local_7d = 0;
  local_b4 = 0x74;
  local_70 = 0;
  local_74 = 0;
  local_110 = PTR_DAT_04bb2d88 + 0x10;
  local_124 = 0;
  local_138 = (float)local_40;
  uStack_134 = local_40._4_4_;
  local_dc[0] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x20];
  local_dc[1] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x21];
  local_dc[2] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x22];
  local_dc[3] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x23];
  local_dc[4] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x24];
  local_dc[5] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x25];
  local_dc[6] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x26];
  local_dc[7] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x27];
  local_11c = 0;
  local_d4[0] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x28];
  local_d4[1] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x29];
  local_d4[2] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x2a];
  local_d4[3] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x2b];
  local_d4[4] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x2c];
  local_d4[5] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x2d];
  local_d4[6] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x2e];
  local_d4[7] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x2f];
  local_e4[0] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x18];
  local_e4[1] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x19];
  local_e4[2] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x1a];
  local_e4[3] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x1b];
  local_e4[4] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x1c];
  local_e4[5] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x1d];
  local_e4[6] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x1e];
  local_e4[7] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x1f];
  local_ec[0] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x10];
  local_ec[1] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x11];
  local_ec[2] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x12];
  local_ec[3] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x13];
  local_ec[4] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x14];
  local_ec[5] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x15];
  local_ec[6] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x16];
  local_ec[7] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x17];
  local_130 = local_38;
  local_f4[0] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[8];
  local_f4[1] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[9];
  local_f4[2] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[10];
  local_f4[3] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0xb];
  local_f4[4] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0xc];
  local_f4[5] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0xd];
  local_f4[6] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0xe];
  local_f4[7] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0xf];
  local_fc[0] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0];
  local_fc[1] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[1];
  local_fc[2] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[2];
  local_fc[3] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[3];
  local_fc[4] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[4];
  local_fc[5] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[5];
  local_fc[6] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[6];
  local_fc[7] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[7];
  local_bc[0] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x40];
  local_bc[1] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x41];
  local_bc[2] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x42];
  local_bc[3] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x43];
  local_bc[4] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x44];
  local_bc[5] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x45];
  local_bc[6] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x46];
  local_bc[7] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x47];
  local_c4[0] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x38];
  local_c4[1] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x39];
  local_c4[2] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x3a];
  local_c4[3] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x3b];
  local_c4[4] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x3c];
  local_c4[5] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x3d];
  local_c4[6] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x3e];
  local_c4[7] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x3f];
  local_cc[0] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x30];
  local_cc[1] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x31];
  local_cc[2] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x32];
  local_cc[3] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x33];
  local_cc[4] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x34];
  local_cc[5] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x35];
  local_cc[6] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x36];
  local_cc[7] = s_HaniwaKunDonation_ObjectHaniwaDo_040cac70[0x37];
  local_b3 = 0;
  DAT_05465dc0 = FUN_007402e0(DAT_04c93e08,&local_140,param_2,1);
  return DAT_05465dc0 != 0;
}


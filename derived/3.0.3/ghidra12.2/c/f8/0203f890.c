
bool FUN_0203f890(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_148;
  undefined1 *local_140;
  undefined8 local_138;
  uint local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined *local_118;
  char *pcStack_110;
  undefined4 local_108;
  char local_104 [8];
  char local_fc [8];
  char local_f4 [8];
  char local_ec [6];
  char acStack_e6 [2];
  char acStack_e4 [6];
  undefined1 local_de;
  undefined1 local_85;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_78;
  undefined *local_70;
  long *plStack_68;
  undefined4 local_60;
  long local_5c;
  char local_54 [8];
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_3d;
  int local_34;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b) {
    return false;
  }
  local_34 = DAT_05467d30;
  if ((DAT_05467d30 == 0) || (DAT_05467d30 == 4)) {
    return false;
  }
  local_130 = (uint)(uint3)local_130;
  local_140 = (undefined1 *)((long)&local_138 + 4);
  local_138 = CONCAT35(local_138._5_3_,8);
  local_148 = PTR_DAT_04bb3768 + 0x10;
  local_60 = 8;
  local_5c._1_7_ = (uint7)((ulong)local_5c >> 8) & 0xffffffffffff;
  local_5c = (ulong)local_5c._1_7_ << 8;
  plStack_68 = &local_5c;
  local_70 = local_148;
  if ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 0) ||
     ((DAT_05ab8198 != (ushort *)0x0 && ((*DAT_05ab8198 & 1) != 0)))) {
    uVar2 = FUN_0376ee00(&local_148,&local_70);
    if ((uVar2 & 1) != 0) {
      if ((int)local_138 < 4) {
        (**(code **)(local_148 + 0x18))(&local_148);
      }
      else {
        local_140[3] = 0;
      }
      (**(code **)(local_148 + 0x18))(&local_148);
      (**(code **)(local_148 + 0x18))(&local_148);
      if (local_140 == &DAT_040cec26) {
        return false;
      }
      uVar2 = 0;
      bVar1 = true;
      do {
        if (local_140[uVar2] != (&DAT_040cec26)[uVar2]) break;
        if (local_140[uVar2] == '\0') goto LAB_0203fae0;
        bVar1 = uVar2 < 0x80000;
        uVar2 = uVar2 + 1;
      } while (uVar2 != 0x80001);
    }
  }
  else {
    uVar2 = FUN_0376b510(&local_148,*(undefined2 *)(*(long *)PTR_DAT_04bb27f8 + 0x2a));
    if ((uVar2 & 1) != 0) {
      if ((int)local_138 < 4) {
        (**(code **)(local_148 + 0x18))(&local_148);
      }
      else {
        local_140[3] = 0;
      }
      (**(code **)(local_148 + 0x18))(&local_148);
      (**(code **)(local_148 + 0x18))(&local_148);
      if (local_140 == &DAT_040cec26) {
        return false;
      }
      uVar2 = 0;
      bVar1 = true;
      do {
        if (local_140[uVar2] != (&DAT_040cec26)[uVar2]) break;
        if (local_140[uVar2] == '\0') goto LAB_0203fae0;
        bVar1 = uVar2 < 0x80000;
        uVar2 = uVar2 + 1;
      } while (uVar2 != 0x80001);
    }
  }
LAB_0203fae4:
  local_4c = 0x6e657261;
  local_60 = 0x20;
  local_108 = 0x80;
  local_5c._0_1_ = s_AI_NPC_Tkk_Wherearen_0409250b[0];
  local_5c._1_1_ = s_AI_NPC_Tkk_Wherearen_0409250b[1];
  local_5c._2_1_ = s_AI_NPC_Tkk_Wherearen_0409250b[2];
  local_5c._3_1_ = s_AI_NPC_Tkk_Wherearen_0409250b[3];
  local_5c._4_1_ = s_AI_NPC_Tkk_Wherearen_0409250b[4];
  local_5c._5_1_ = s_AI_NPC_Tkk_Wherearen_0409250b[5];
  local_5c._6_1_ = s_AI_NPC_Tkk_Wherearen_0409250b[6];
  local_5c._7_1_ = s_AI_NPC_Tkk_Wherearen_0409250b[7];
  local_54[0] = s_AI_NPC_Tkk_Wherearen_0409250b[8];
  local_54[1] = s_AI_NPC_Tkk_Wherearen_0409250b[9];
  local_54[2] = s_AI_NPC_Tkk_Wherearen_0409250b[10];
  local_54[3] = s_AI_NPC_Tkk_Wherearen_0409250b[0xb];
  local_54[4] = s_AI_NPC_Tkk_Wherearen_0409250b[0xc];
  local_54[5] = s_AI_NPC_Tkk_Wherearen_0409250b[0xd];
  local_54[6] = s_AI_NPC_Tkk_Wherearen_0409250b[0xe];
  local_54[7] = s_AI_NPC_Tkk_Wherearen_0409250b[0xf];
  plStack_68 = &local_5c;
  local_70 = PTR_DAT_04bb2028 + 0x10;
  pcStack_110 = local_104;
  local_3d = 0;
  local_48 = 0;
  local_85 = 0;
  local_78 = 0;
  local_7c = 0;
  local_12c = 0;
  local_118 = PTR_DAT_04bb2d88 + 0x10;
  local_124 = 0;
  local_130 = 0;
  local_de = 0;
  local_80 = 7;
  local_148 = (undefined *)0xa00000000;
  local_140 = (undefined1 *)0x441a6000;
  local_138 = 0x3f80000043160000;
  local_fc[0] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[8];
  local_fc[1] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[9];
  local_fc[2] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[10];
  local_fc[3] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0xb];
  local_fc[4] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0xc];
  local_fc[5] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0xd];
  local_fc[6] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0xe];
  local_fc[7] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0xf];
  local_104[0] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0];
  local_104[1] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[1];
  local_104[2] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[2];
  local_104[3] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[3];
  local_104[4] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[4];
  local_104[5] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[5];
  local_104[6] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[6];
  local_104[7] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[7];
  local_f4[0] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x10];
  local_f4[1] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x11];
  local_f4[2] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x12];
  local_f4[3] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x13];
  local_f4[4] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x14];
  local_f4[5] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x15];
  local_f4[6] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x16];
  local_f4[7] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x17];
  local_ec[0] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x18];
  local_ec[1] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x19];
  local_ec[2] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x1a];
  local_ec[3] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x1b];
  local_ec[4] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x1c];
  local_ec[5] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x1d];
  acStack_e6[0] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x1e];
  acStack_e6[1] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x1f];
  acStack_e4[0] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x20];
  acStack_e4[1] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x21];
  acStack_e4[2] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x22];
  acStack_e4[3] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x23];
  acStack_e4[4] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x24];
  acStack_e4[5] = s_tkkB_AIC_DJKK_AIF_AI_NPC_Tkk_Whe_040681ce[0x25];
  if ((param_2 & 1) == 0) {
    lVar3 = FUN_0203e0f0(param_1 + 0x11058,&local_148);
    return lVar3 != 0;
  }
  FUN_0204b180(*(long *)PTR_DAT_04bb3968 + 0x3cc0,&local_148);
  return true;
LAB_0203fae0:
  if (bVar1) {
    return false;
  }
  goto LAB_0203fae4;
}


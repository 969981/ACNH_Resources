
void FUN_0203ddb0(long param_1)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  uint local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined *local_138;
  char *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined *local_108;
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  undefined *local_60;
  long local_58;
  undefined8 local_50;
  undefined1 local_45;
  
  if (DAT_04c487d4 == -1) {
    return;
  }
  puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar3 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar3 >> 3 & 1) == 0) {
    return;
  }
  local_138 = PTR_DAT_04bb2020 + 0x10;
  local_130 = "TkkFirstLive";
  uVar6 = FUN_0273f0a0(&local_138);
  if ((uVar6 & 1) == 0) {
    return;
  }
  local_45 = 0;
  local_50 = 0x70706b00000008;
  local_58 = (long)&local_50 + 4;
  local_60 = PTR_DAT_04bb3768 + 0x10;
  FUN_0220b660(&local_60);
  local_120 = 0;
  local_130 = (char *)0x0;
  local_128 = 0x3f80000000000000;
  local_100 = local_f4;
  local_138 = (undefined *)0xa00000000;
  local_f8 = 0x80;
  local_75 = 0;
  local_f4[0] = 0;
  local_108 = PTR_DAT_04bb2d88 + 0x10;
  local_68 = 0;
  local_6c = 0;
  local_11c = 0;
  local_114 = 0;
  local_70 = 7;
  uVar6 = FUN_016cf630();
  if ((uVar6 & 1) != 0) {
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    local_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    uVar6 = FUN_0220b170(&local_168);
    if ((uVar6 & 1) != 0) {
      (**(code **)(local_60 + 0x18))(&local_60);
      FUN_006d8678(&local_1a0,"%s/AIC:Demo",local_58);
      puVar5 = local_100;
      (**(code **)(CONCAT44(uStack_19c,local_1a0) + 0x18))(&local_1a0);
      puVar4 = (undefined1 *)CONCAT44(uStack_194,local_198);
      if (puVar5 != puVar4) {
        (**(code **)(CONCAT44(uStack_19c,local_1a0) + 0x18))(&local_1a0);
        lVar7 = 0;
        do {
          if (*(char *)(CONCAT44(uStack_194,local_198) + lVar7) == '\0') goto LAB_0203e078;
          lVar1 = CONCAT44(uStack_194,local_198) + lVar7;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_0203e078;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_0203e078;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_0203e078:
        iVar2 = (int)lVar7;
        if (local_f8 <= (int)lVar7) {
          iVar2 = local_f8 + -1;
        }
        memcpy(puVar5,puVar4,(long)iVar2);
        puVar5[iVar2] = 0;
      }
      local_130 = (char *)local_150;
      local_128 = CONCAT44(local_128._4_4_,(undefined4)local_148);
      local_120 = uStack_140._4_4_;
      goto LAB_0203e0b8;
    }
  }
  (**(code **)(local_60 + 0x18))(&local_60);
  FUN_006d8678(&local_1a0,"%s/AIC:Special/AIF:AI_NPC_Kpp",local_58);
  puVar5 = local_100;
  (**(code **)(CONCAT44(uStack_19c,local_1a0) + 0x18))(&local_1a0);
  puVar4 = (undefined1 *)CONCAT44(uStack_194,local_198);
  if (puVar5 != puVar4) {
    (**(code **)(CONCAT44(uStack_19c,local_1a0) + 0x18))(&local_1a0);
    lVar7 = 0;
    do {
      if (*(char *)(CONCAT44(uStack_194,local_198) + lVar7) == '\0') goto LAB_0203e020;
      lVar1 = CONCAT44(uStack_194,local_198) + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0203e020;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0203e020;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0203e020:
    iVar2 = (int)lVar7;
    if (local_f8 <= (int)lVar7) {
      iVar2 = local_f8 + -1;
    }
    memcpy(puVar5,puVar4,(long)iVar2);
    puVar5[iVar2] = 0;
  }
  FUN_0125ec00(&local_1a0);
  uStack_19c = 0;
  local_130 = (char *)(ulong)local_1a0;
  local_128 = CONCAT44(local_128._4_4_,local_198);
LAB_0203e0b8:
  lVar7 = FUN_0203e0f0(param_1 + 0x11058,&local_138);
  if (lVar7 != 0) {
    FUN_0203d900(param_1,&local_138);
  }
  return;
}


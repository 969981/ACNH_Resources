
void FUN_02040920(undefined8 param_1)

{
  undefined *puVar1;
  uint *puVar2;
  short sVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined *local_260;
  char *pcStack_258;
  undefined *local_250;
  undefined1 *local_248;
  undefined4 local_240;
  undefined1 local_23c [127];
  undefined1 local_1bd;
  long local_1b8;
  undefined1 *local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined *local_110;
  undefined1 *local_108;
  int local_100;
  undefined1 local_fc [127];
  undefined1 local_7d;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  
  puVar11 = PTR_DAT_04bb2d88;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      local_128 = 0;
      local_140 = 0xa00000000;
      local_138 = 0;
      local_130 = 0x3f80000000000000;
      local_100 = 0x80;
      local_7d = 0;
      local_fc[0] = 0;
      puVar1 = PTR_DAT_04bb2d88 + 0x10;
      uVar12 = 0x2aaaaac0;
      local_78 = 7;
      local_70 = 0;
      local_74 = 0;
      local_14c = 0;
      local_144 = 0;
      local_124 = 0;
      uStack_11c = 0;
      local_110 = puVar1;
      local_108 = local_fc;
      FUN_0071b954(&local_1a8,"P_EventNone_Npc_%d",0);
      (**(code **)(local_1a8 + 0x18))(&local_1a8);
      uVar7 = FUN_006bd550(local_1a0,0);
      uVar9 = FUN_0118b0a0(&local_14c,uVar7);
      if ((uVar9 & 1) != 0) {
        uVar7 = FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_14c,0);
        local_14c = CONCAT44(uVar7,(undefined4)local_14c);
        FUN_0118b220(&local_1b8,&local_1a8);
        local_240 = 0x80;
        local_1bd = 0;
        local_23c[0] = 0;
        local_260 = PTR_DAT_04bb2020 + 0x10;
        pcStack_258 = "TapDreamFirstTalkDone";
        local_250 = puVar1;
        local_248 = local_23c;
        iVar8 = FUN_02743000(&local_260);
        if (iVar8 != 0) {
          uVar12 = 0;
        }
        (**(code **)(local_1b8 + 0x18))(&local_1b8);
        (**(code **)(local_1b8 + 0x18))(&local_1b8);
        if (local_1b0 == &DAT_0409b7d5) {
LAB_02040b20:
          (**(code **)(local_1b8 + 0x18))(&local_1b8);
          FUN_038d1270(&local_250,"%s/AIC:Special/AIF:AI_NPC_Tap",local_1b0);
          puVar5 = local_108;
          local_138 = local_14c;
          local_130 = CONCAT44(local_130._4_4_,local_144);
          local_128 = uVar12;
          (**(code **)(local_250 + 0x18))(&local_250);
          puVar4 = local_248;
          if (puVar5 != local_248) {
            (**(code **)(local_250 + 0x18))(&local_250);
            lVar10 = 0;
            do {
              if (local_248[lVar10] == '\0') goto LAB_02040bdc;
              if (local_248[lVar10 + 1] == '\0') {
                lVar10 = lVar10 + 1;
                goto LAB_02040bdc;
              }
              if (local_248[lVar10 + 2] == '\0') {
                lVar10 = lVar10 + 2;
                goto LAB_02040bdc;
              }
              lVar10 = lVar10 + 3;
            } while (lVar10 != 0x80001);
            lVar10 = 0;
LAB_02040bdc:
            iVar8 = (int)lVar10;
            if (local_100 <= (int)lVar10) {
              iVar8 = local_100 + -1;
            }
            memcpy(puVar5,puVar4,(long)iVar8);
            puVar5[iVar8] = 0;
          }
          FUN_02030e80(param_1,&local_140);
          puVar11 = PTR_DAT_04bb2d88;
        }
        else {
          uVar9 = 0;
          bVar6 = true;
          do {
            if (local_1b0[uVar9] != (&DAT_0409b7d5)[uVar9]) break;
            if (local_1b0[uVar9] == '\0') {
              if (bVar6) goto LAB_02040b20;
              break;
            }
            bVar6 = uVar9 < 0x80000;
            uVar9 = uVar9 + 1;
          } while (uVar9 != 0x80001);
        }
      }
      uVar12 = 0x2aaaaac0;
      local_140 = 0xa00000000;
      local_138 = 0;
      local_130 = 0x3f80000000000000;
      local_128 = 0;
      local_100 = 0x80;
      local_7d = 0;
      local_fc[0] = 0;
      local_78 = 7;
      local_70 = 0;
      local_74 = 0;
      local_14c = 0;
      local_144 = 0;
      local_124 = 0;
      uStack_11c = 0;
      local_110 = puVar1;
      local_108 = local_fc;
      FUN_0071b954(&local_1a8,"P_EventNone_Npc_%d",1);
      (**(code **)(local_1a8 + 0x18))(&local_1a8);
      uVar7 = FUN_006bd550(local_1a0,0);
      uVar9 = FUN_0118b0a0(&local_14c,uVar7);
      if ((uVar9 & 1) != 0) {
        uVar7 = FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_14c,0);
        local_14c = CONCAT44(uVar7,(undefined4)local_14c);
        FUN_0118b220(&local_1b8,&local_1a8);
        local_1bd = 0;
        local_240 = 0x80;
        local_250 = puVar11 + 0x10;
        local_23c[0] = 0;
        local_260 = PTR_DAT_04bb2020 + 0x10;
        pcStack_258 = "TapDreamFirstTalkDone";
        local_248 = local_23c;
        iVar8 = FUN_02743000(&local_260);
        if (iVar8 != 0) {
          uVar12 = 0;
        }
        (**(code **)(local_1b8 + 0x18))(&local_1b8);
        (**(code **)(local_1b8 + 0x18))(&local_1b8);
        if (local_1b0 == &DAT_0409b7d5) {
LAB_02040d80:
          (**(code **)(local_1b8 + 0x18))(&local_1b8);
          FUN_038d1270(&local_250,"%s/AIC:Special/AIF:AI_NPC_Tap",local_1b0);
          puVar5 = local_108;
          local_138 = local_14c;
          local_130 = CONCAT44(local_130._4_4_,local_144);
          local_128 = uVar12;
          (**(code **)(local_250 + 0x18))(&local_250);
          puVar4 = local_248;
          if (puVar5 != local_248) {
            (**(code **)(local_250 + 0x18))(&local_250);
            lVar10 = 0;
            do {
              if (local_248[lVar10] == '\0') goto LAB_02040e3c;
              if (local_248[lVar10 + 1] == '\0') {
                lVar10 = lVar10 + 1;
                goto LAB_02040e3c;
              }
              if (local_248[lVar10 + 2] == '\0') {
                lVar10 = lVar10 + 2;
                goto LAB_02040e3c;
              }
              lVar10 = lVar10 + 3;
            } while (lVar10 != 0x80001);
            lVar10 = 0;
LAB_02040e3c:
            iVar8 = (int)lVar10;
            if (local_100 <= (int)lVar10) {
              iVar8 = local_100 + -1;
            }
            memcpy(puVar5,puVar4,(long)iVar8);
            puVar5[iVar8] = 0;
          }
          FUN_02030e80(param_1,&local_140);
        }
        else {
          uVar9 = 0;
          bVar6 = true;
          do {
            if (local_1b0[uVar9] != (&DAT_0409b7d5)[uVar9]) {
              return;
            }
            if (local_1b0[uVar9] == '\0') {
              if (!bVar6) {
                return;
              }
              goto LAB_02040d80;
            }
            bVar6 = uVar9 < 0x80000;
            uVar9 = uVar9 + 1;
          } while (uVar9 != 0x80001);
        }
      }
    }
  }
  return;
}


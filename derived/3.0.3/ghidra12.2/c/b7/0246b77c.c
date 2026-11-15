
/* WARNING: Removing unreachable block (ram,0x0246b7fc) */

void FUN_0246b77c(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  float *pfVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  float fVar10;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined **local_100;
  char *local_f8;
  int local_f0;
  char local_ec [6];
  char acStack_e6 [2];
  char acStack_e4 [6];
  undefined1 local_de;
  undefined1 local_ad;
  undefined **local_a8;
  char *local_a0;
  int local_98;
  char local_94 [7];
  char cStack_8d;
  char acStack_8c [7];
  undefined1 local_85;
  undefined1 local_55;
  
  fVar10 = -20.0;
  bVar1 = *(char *)(param_1 + 0x66d) == '\0' ||
          *(int *)(param_1 + 0x660) < *(int *)(param_1 + 0x668);
  puVar3 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4c8);
  }
  if ((DAT_05231900 != 0) && (*(long *)(DAT_05231900 + 0x50) != 0)) {
    local_130 = local_130 & 0xffffffff00000000;
    lVar9 = *(long *)(*(long *)(DAT_05231900 + 0x50) + 0x118);
    if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + 0x280);
      fVar10 = 0.0;
      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 8), lVar9 != 0)) {
        pfVar6 = (float *)(**(code **)(*(long *)(lVar9 + 0x488) + 0xf0))(lVar9 + 0x488);
        fVar10 = *pfVar6;
      }
      lVar9 = FUN_0251e98c(1);
      pfVar6 = (float *)(**(code **)(*(long *)(lVar9 + 0x1560) + 0xf0))(lVar9 + 0x1560);
      fVar10 = fVar10 + *pfVar6;
    }
  }
  *(float *)((long)puVar3 + 0x27c) = fVar10;
  if (*(int *)(param_1 + 0x178) != 1) {
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar7 = FUN_016ec07c(0,puVar3 + 0x4f,1);
    if ((uVar7 & 1) == 0) {
      FUN_0236a88c(param_1,6,1,0);
      return;
    }
    uVar7 = FUN_02468110(param_1,1);
    if ((uVar7 & 1) == 0) {
      local_108 = 0;
      local_ad = 0;
      local_120 = 0;
      local_118 = 0x3dcccccd3dcccccd;
      local_94[0] = s_PlayerSwimStand_0407d193[0];
      local_94[1] = s_PlayerSwimStand_0407d193[1];
      local_94[2] = s_PlayerSwimStand_0407d193[2];
      local_94[3] = s_PlayerSwimStand_0407d193[3];
      local_94[4] = s_PlayerSwimStand_0407d193[4];
      local_94[5] = s_PlayerSwimStand_0407d193[5];
      local_94[6] = s_PlayerSwimStand_0407d193[6];
      local_130 = 0;
      local_128 = 0;
      local_110 = 0x3dcccccd00000000;
      local_f8 = local_ec;
      local_f0 = 0x40;
      local_a0 = local_94;
      cStack_8d = s_PlayerSwimStand_0407d193[7];
      acStack_8c[0] = s_PlayerSwimStand_0407d193[8];
      acStack_8c[1] = s_PlayerSwimStand_0407d193[9];
      acStack_8c[2] = s_PlayerSwimStand_0407d193[10];
      acStack_8c[3] = s_PlayerSwimStand_0407d193[0xb];
      acStack_8c[4] = s_PlayerSwimStand_0407d193[0xc];
      acStack_8c[5] = s_PlayerSwimStand_0407d193[0xd];
      acStack_8c[6] = s_PlayerSwimStand_0407d193[0xe];
      local_de = 0;
      local_ec[0] = s_CommonSwimWait_0409cb5c[0];
      local_ec[1] = s_CommonSwimWait_0409cb5c[1];
      local_ec[2] = s_CommonSwimWait_0409cb5c[2];
      local_ec[3] = s_CommonSwimWait_0409cb5c[3];
      local_ec[4] = s_CommonSwimWait_0409cb5c[4];
      local_ec[5] = s_CommonSwimWait_0409cb5c[5];
      acStack_e6[0] = s_CommonSwimWait_0409cb5c[6];
      acStack_e6[1] = s_CommonSwimWait_0409cb5c[7];
      acStack_e4[0] = s_CommonSwimWait_0409cb5c[8];
      acStack_e4[1] = s_CommonSwimWait_0409cb5c[9];
      acStack_e4[2] = s_CommonSwimWait_0409cb5c[10];
      acStack_e4[3] = s_CommonSwimWait_0409cb5c[0xb];
      acStack_e4[4] = s_CommonSwimWait_0409cb5c[0xc];
      acStack_e4[5] = s_CommonSwimWait_0409cb5c[0xd];
      local_98 = 0x40;
      local_55 = 0;
      local_85 = 0;
      local_100 = &PTR_LAB_048fb9f8;
      local_a8 = &PTR_LAB_048fb9f8;
      lVar9 = FUN_0251e98c(1);
      puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x1710) + 0xf0))(lVar9 + 0x1710);
      local_130 = CONCAT44(local_130._4_4_,*puVar8);
      lVar9 = FUN_0251e98c(1);
      puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x1740) + 0xf0))(lVar9 + 0x1740);
      local_130 = CONCAT44(*puVar8,(undefined4)local_130);
      lVar9 = FUN_0251e98c(1);
      puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 6000) + 0xf0))(lVar9 + 6000);
      local_128 = CONCAT44(local_128._4_4_,*puVar8);
      lVar9 = FUN_0251e98c(1);
      puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x17a0) + 0xf0))(lVar9 + 0x17a0);
      local_128 = CONCAT44(*puVar8,(undefined4)local_128);
      lVar9 = FUN_0251e98c(1);
      puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x17d0) + 0xf0))(lVar9 + 0x17d0);
      local_120 = CONCAT44(local_120._4_4_,*puVar8);
      lVar9 = FUN_0251e98c(1);
      puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x17d0) + 0xf0))(lVar9 + 0x17d0);
      local_118 = CONCAT44(local_118._4_4_,*puVar8);
      lVar9 = FUN_0251e98c(1);
      puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x16e0) + 0xf0))(lVar9 + 0x16e0);
      local_118 = CONCAT44(*puVar8,(undefined4)local_118);
      lVar9 = FUN_0251e98c(1);
      puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x1680) + 0xf0))(lVar9 + 0x1680);
      local_110 = CONCAT44(local_110._4_4_,*puVar8);
      lVar9 = FUN_0251e98c(1);
      puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x16b0) + 0xf0))(lVar9 + 0x16b0);
      pcVar4 = local_f8;
      local_110 = CONCAT44(*puVar8,(undefined4)local_110);
      local_108 = bVar1;
      if (local_f8 != "CommonSwimWait") {
        iVar2 = 0xe;
        if (local_f0 < 0xf) {
          iVar2 = local_f0 + -1;
        }
        memcpy(local_f8,"CommonSwimWait",(long)iVar2);
        pcVar4[iVar2] = '\0';
      }
      pcVar4 = local_a0;
      if (local_a0 != "PlayerSwimStand") {
        iVar2 = 0xf;
        if (local_98 < 0x10) {
          iVar2 = local_98 + -1;
        }
        memcpy(local_a0,"PlayerSwimStand",(long)iVar2);
        pcVar4[iVar2] = '\0';
      }
      uVar7 = FUN_02464b10(param_1,&local_130);
      if (((((uVar7 & 1) == 0) || (uVar7 = FUN_02468110(param_1,0), (uVar7 & 1) == 0)) &&
          (uVar7 = FUN_02467c08(param_1,1,0), (uVar7 & 1) == 0)) &&
         (FUN_0231e48c(param_1), *(char *)(param_1 + 0x66d) != '\0')) {
        uVar5 = (**(code **)(*(long *)(param_1 + 0x658) + (ulong)*(byte *)(param_1 + 0x66c) * 8))
                          (param_1 + 0x658);
        *(undefined4 *)(param_1 + 0x660) = uVar5;
      }
    }
  }
  return;
}


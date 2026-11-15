
void FUN_02448c08(long param_1,short *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  undefined4 local_198 [2];
  char *local_190;
  int local_188;
  char *local_138;
  int local_130;
  char *local_e0;
  int local_d8;
  undefined1 local_90;
  undefined1 local_87;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  ushort local_48 [2];
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x178) == 0 && *param_2 != -2) {
    local_48[0] = 0x4c7b;
    uVar3 = FUN_0261217c(local_48);
    if ((uVar3 & 1) != 0) {
      if (local_48[0] < 0x800) {
        uVar6 = (uint)local_48[0];
        lVar7 = *(long *)PTR_DAT_04bb46f0;
        lVar1 = lVar7 + 0xe99e0;
        if ((*(byte *)(lVar1 + (ulong)(local_48[0] >> 3)) >> (ulong)(uVar6 & 7) & 1) != 0) {
          bVar5 = *(byte *)(param_1 + 0x1ee8);
          if (7 < bVar5) {
            bVar5 = 0xff;
          }
          local_198[0] = CONCAT31(local_198[0]._1_3_,bVar5);
          uVar4 = FUN_02583354(DAT_055021a0,local_198,1);
          FUN_02632500(lVar7,uVar6,uVar4,lVar1,PTR_DAT_04bc3588);
        }
      }
      local_44 = 3;
      *(byte *)(param_1 + 0x18f4) = *(byte *)(param_1 + 0x18f4) & 0xf7;
      local_198[0] = 3;
      FUN_0257a010(local_198);
      if (local_e0 != "PlayerShowAfterLearning") {
        iVar2 = 0x17;
        if (local_d8 < 0x18) {
          iVar2 = local_d8 + -1;
        }
        memcpy(local_e0,"PlayerShowAfterLearning",(long)iVar2);
        local_e0[iVar2] = '\0';
      }
      if (local_190 != "Player_DIYRecipeDemo") {
        iVar2 = 0x14;
        if (local_188 < 0x15) {
          iVar2 = local_188 + -1;
        }
        memcpy(local_190,"Player_DIYRecipeDemo",(long)iVar2);
        local_190[iVar2] = '\0';
      }
      if (local_138 != "RememberCookingRecipe") {
        iVar2 = 0x15;
        if (local_130 < 0x16) {
          iVar2 = local_130 + -1;
        }
        memcpy(local_138,"RememberCookingRecipe",(long)iVar2);
        local_138[iVar2] = '\0';
      }
      local_74 = *(undefined4 *)param_2;
      local_70 = *(undefined4 *)(param_2 + 2);
      local_6c = 1;
      local_90 = 1;
      local_87 = 1;
      FUN_024780c0(param_1,0,0,local_198,0,0);
      FUN_02332b04(param_1,0,0);
    }
  }
  return;
}



bool FUN_023bc384(long param_1,short *param_2)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte bVar10;
  long lVar11;
  undefined4 local_1c8 [2];
  char *local_1c0;
  int local_1b8;
  char *local_168;
  int local_160;
  char *local_110;
  int local_108;
  undefined1 local_c0;
  undefined1 local_b7;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 auStack_78 [8];
  undefined *local_70;
  short local_68;
  short local_66;
  undefined4 local_64;
  long local_60;
  undefined4 local_54;
  
  puVar2 = PTR_DAT_04bb43c0;
  bVar4 = *(int *)(param_1 + 0x178) == 0;
  local_68 = *param_2;
  bVar5 = local_68 != -2;
  if (bVar4 && bVar5) {
    local_66 = param_2[1];
    local_60 = 0;
    local_64 = *(undefined4 *)(param_2 + 2);
    local_70 = PTR_DAT_04bc0510 + 0x10;
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_68);
    if (*(long *)puVar2 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_2);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
           (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8), lVar11 != 0)) {
          local_60 = lVar11;
        }
      }
    }
    uVar7 = FUN_01b0c3c8(&local_70);
    puVar2 = PTR_DAT_04bb46f0;
    uVar8 = FUN_02622888(*(undefined8 *)PTR_DAT_04bb46f0,param_2);
    if ((uVar8 & 1) == 0) {
      lVar11 = *(long *)puVar2;
      bVar10 = *(byte *)(param_1 + 0x1ee8);
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      local_1c8[0] = CONCAT31(local_1c8[0]._1_3_,bVar10);
      uVar9 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_1c8,1);
      FUN_02632500(lVar11,uVar7,uVar9,lVar11 + 0xe98e0,PTR_DAT_04bb8758);
    }
    lVar11 = *(long *)puVar2;
    FUN_0262eb00(auStack_78,lVar11,uVar7,lVar11 + 0xe98e0);
    local_54 = 3;
    *(byte *)(param_1 + 0x18f4) = *(byte *)(param_1 + 0x18f4) & 0xf7;
    local_1c8[0] = 3;
    FUN_0257a010(local_1c8);
    pcVar3 = local_110;
    if (local_110 != "PlayerGetShow") {
      iVar1 = 0xd;
      if (local_108 < 0xe) {
        iVar1 = local_108 + -1;
      }
      memcpy(local_110,"PlayerGetShow",(long)iVar1);
      pcVar3[iVar1] = '\0';
    }
    if (local_1c0 != "Player_DIYRecipeDemo") {
      iVar1 = 0x14;
      if (local_1b8 < 0x15) {
        iVar1 = local_1b8 + -1;
      }
      memcpy(local_1c0,"Player_DIYRecipeDemo",(long)iVar1);
      local_1c0[iVar1] = '\0';
    }
    if (local_168 != "RememberDIYRecipe") {
      iVar1 = 0x11;
      if (local_160 < 0x12) {
        iVar1 = local_160 + -1;
      }
      memcpy(local_168,"RememberDIYRecipe",(long)iVar1);
      local_168[iVar1] = '\0';
    }
    local_a4 = *(undefined4 *)param_2;
    local_a0 = *(undefined4 *)(param_2 + 2);
    local_9c = 1;
    local_c0 = 1;
    local_b7 = 1;
    FUN_02332b04(param_1,0,0);
    if (local_110 != "PlayerShowAfterLearning") {
      iVar1 = 0x17;
      if (local_108 < 0x18) {
        iVar1 = local_108 + -1;
      }
      memcpy(local_110,"PlayerShowAfterLearning",(long)iVar1);
      local_110[iVar1] = '\0';
    }
    FUN_024780c0(param_1,0,0,local_1c8,0,0);
  }
  return bVar4 && bVar5;
}



uint FUN_00773420(void)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  byte local_80 [4];
  undefined8 local_7c;
  undefined4 local_74;
  undefined *local_70;
  char *pcStack_68;
  undefined4 local_60;
  char local_5c [8];
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_3d;
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "BuiltTownOffice";
  local_70 = puVar1;
  uVar6 = FUN_0273f0a0(&local_70);
  if ((uVar6 & 1) != 0) {
    local_30 = 0x40bf4f1;
    local_2c = 0;
    local_38 = puVar1;
    uVar6 = FUN_0273f0a0(&local_38);
    if ((uVar6 & 1) == 0) {
      local_24 = 0;
      local_2c = 0x3f800000;
      uStack_28 = 0x3f800000;
      local_60 = 0x20;
      local_54 = 0x6b6c;
      local_30 = 0;
      local_38 = (undefined *)0x100000000;
      pcStack_68 = local_5c;
      local_3d = 0;
      local_52 = 0;
      local_5c[0] = s_GrowUpTalk_040d4249[0];
      local_5c[1] = s_GrowUpTalk_040d4249[1];
      local_5c[2] = s_GrowUpTalk_040d4249[2];
      local_5c[3] = s_GrowUpTalk_040d4249[3];
      local_5c[4] = s_GrowUpTalk_040d4249[4];
      local_5c[5] = s_GrowUpTalk_040d4249[5];
      local_5c[6] = s_GrowUpTalk_040d4249[6];
      local_5c[7] = s_GrowUpTalk_040d4249[7];
      local_70 = PTR_DAT_04bb2028 + 0x10;
      uVar4 = FUN_0291dd50(&local_70,0,&local_38);
      goto LAB_007736a8;
    }
  }
  local_60 = 0x20;
  pcStack_68 = local_5c;
  local_54 = 100;
  local_5c[0] = s_MainField_040d969e[0];
  local_5c[1] = s_MainField_040d969e[1];
  local_5c[2] = s_MainField_040d969e[2];
  local_5c[3] = s_MainField_040d969e[3];
  local_5c[4] = s_MainField_040d969e[4];
  local_5c[5] = s_MainField_040d969e[5];
  local_5c[6] = s_MainField_040d969e[6];
  local_5c[7] = s_MainField_040d969e[7];
  local_3d = 0;
  local_70 = PTR_DAT_04bb2028 + 0x10;
  local_4 = 0;
  local_30 = 0;
  local_24 = 0;
  local_74 = *(undefined4 *)(*(long *)PTR_DAT_04bb5c90 + 0x48);
  local_7c = *(undefined8 *)(*(long *)PTR_DAT_04bb5c90 + 0x40);
  local_38 = (undefined *)0x100000000;
  local_2c = 0x3f800000;
  uStack_28 = 0x3f800000;
  if (((*PTR_DAT_04bb3998 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar5 != 0))
  {
    FUN_00773950(PTR_DAT_04bb3990);
    __cxa_guard_release(PTR_DAT_04bb3998);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
    uVar6 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar6 * 4) == 0x144f907a) goto LAB_00773530;
      uVar6 = uVar6 + 1;
    } while (*(uint *)PTR_DAT_04bb3990 != uVar6);
  }
  uVar6 = 0;
LAB_00773530:
  local_8 = (undefined4)uVar6;
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
LAB_00773594:
    if (*pbVar7 < 8) goto LAB_0077360c;
LAB_007735a0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00773604:
      pbVar7 = PTR_DAT_04bb5038;
      goto LAB_0077360c;
    }
    lVar8 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar8 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar2 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x471);
      }
    }
    local_80[0] = *pbVar7;
    if (7 < local_80[0]) goto LAB_00773604;
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00773594;
      }
      goto LAB_007735a0;
    }
LAB_0077360c:
    local_80[0] = *pbVar7;
    if (7 < local_80[0]) {
      local_80[0] = 0xff;
    }
  }
  uVar4 = FUN_02917ecc(&local_70,&local_7c,&local_4,&local_8,local_80,&local_38);
LAB_007736a8:
  return uVar4 & 1;
}


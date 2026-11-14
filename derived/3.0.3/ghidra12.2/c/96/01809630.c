
void FUN_01809630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined1 *param_10)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  char *__dest;
  char *pcVar9;
  float fVar10;
  undefined *local_110;
  char *local_108;
  int local_100;
  char local_fc [127];
  undefined1 local_7d;
  undefined4 local_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined8 local_70;
  
  puVar2 = PTR_DAT_04bb5ce0;
  lVar7 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar7 == 0) {
LAB_018096e0:
    iVar8 = 4;
  }
  else {
    iVar8 = *(int *)(lVar7 + 0xe48);
    if (iVar8 != 0x14) {
      FUN_017f3710(lVar7 + 0xda0);
      lVar7 = *(long *)puVar2;
      if (lVar7 == 0) goto LAB_018096e0;
      iVar8 = *(int *)(lVar7 + 0xe48);
    }
    if (iVar8 != 0x14) {
      FUN_017f3710(lVar7 + 0xda0);
      lVar7 = *(long *)puVar2;
      if (lVar7 == 0) goto LAB_018096e0;
    }
    iVar8 = *(int *)(lVar7 + 0xf68) * 2 + 4;
  }
  FUN_0179e460(param_1,param_2,param_6,0);
  FUN_0179f0d0(param_1,param_3,param_7);
  FUN_0179f740(param_1,param_4,param_8);
  FUN_017a1380(param_1,param_5,param_9);
  puVar2 = PTR_DAT_04bb2720;
  local_108 = local_fc;
  local_100 = 0x80;
  local_7d = 0;
  local_fc[0] = '\0';
  local_110 = PTR_DAT_04bb2d88 + 0x10;
  local_70 = 0;
  uStack_74 = 0;
  local_78 = 7;
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else if (*(long *)(lVar7 + 0x330) == 0) {
    iVar6 = 0;
  }
  else {
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
    iVar4 = FUN_006bd550(*puVar5,0);
    iVar6 = 0;
    if (iVar4 == 0x758f7eaf) {
      iVar6 = 0;
      if (*(long *)puVar2 != 0) {
        lVar7 = *(long *)(*(long *)puVar2 + 0x330);
        iVar6 = 0;
        if (lVar7 != 0) {
          iVar6 = *(int *)(lVar7 + 0x248);
        }
      }
    }
  }
  pcVar9 = local_108;
  fVar10 = (float)(10 - iVar8) * -5.0 + 160.0 + 50.0;
  if (iVar6 == 0) {
    if ((*(long *)PTR_DAT_04bb5ce0 == 0) || (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5e) == '\0'))
    {
      if (local_108 != "RoomMdlStairsNml/STAIRS:") {
        iVar8 = 0x18;
        if (local_100 < 0x19) {
          iVar8 = local_100 + -1;
        }
        memcpy(local_108,"RoomMdlStairsNml/STAIRS:",(long)iVar8);
        pcVar9[iVar8] = '\0';
      }
      uVar1 = *(undefined4 *)(param_1 + 0x230);
      *param_10 = 1;
      if (*(int *)(param_10 + 0x14) == 0) {
        *(undefined4 *)(param_10 + 0x14) = *(undefined4 *)(param_1 + 0x230);
      }
      *(undefined4 *)(param_10 + 0x10) = 8;
      puVar3 = PTR_DAT_04bbe468;
      puVar2 = PTR_LAB_04bbe458;
      *(undefined4 *)(param_10 + 200) = uVar1;
      *(undefined4 *)(param_10 + 0xcc) = 8;
      *(undefined **)(param_10 + 0x88) = puVar2;
      *(undefined8 *)(param_10 + 0x90) = 0;
      *(undefined8 *)(param_10 + 0xec) = 0;
      *(undefined8 *)(param_10 + 0xe4) = 0;
      __dest = *(char **)(param_10 + 0x100);
      *(undefined4 *)(param_10 + 0xd0) = 0x43200000;
      *(undefined4 *)(param_10 + 0xe0) = 0;
      *(undefined4 *)(param_10 + 0xdc) = 0x3f800000;
      *(undefined **)(param_10 + 0x78) = puVar3 + 0x10;
      *(undefined1 **)(param_10 + 0x80) = param_10;
      *(ulong *)(param_10 + 0xd4) = (ulong)(uint)fVar10 << 0x20;
      (**(code **)(local_110 + 0x18))(&local_110);
      pcVar9 = local_108;
      if (__dest == local_108) goto LAB_01809c38;
      (**(code **)(local_110 + 0x18))(&local_110);
      lVar7 = 0;
      do {
        if (local_108[lVar7] == '\0') goto LAB_01809c0c;
        if (local_108[lVar7 + 1] == '\0') goto LAB_01809c00;
        if (local_108[lVar7 + 2] == '\0') goto LAB_01809c08;
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
    }
    else {
      if (local_108 != "RoomMdlStairsNmlUp/STAIRS:") {
        iVar8 = 0x1a;
        if (local_100 < 0x1b) {
          iVar8 = local_100 + -1;
        }
        memcpy(local_108,"RoomMdlStairsNmlUp/STAIRS:",(long)iVar8);
        pcVar9[iVar8] = '\0';
      }
      uVar1 = *(undefined4 *)(param_1 + 0x230);
      *param_10 = 1;
      if (*(int *)(param_10 + 0x14) == 0) {
        *(undefined4 *)(param_10 + 0x14) = *(undefined4 *)(param_1 + 0x230);
      }
      *(undefined4 *)(param_10 + 0x10) = 8;
      puVar3 = PTR_DAT_04bbe468;
      puVar2 = PTR_LAB_04bbe458;
      *(undefined4 *)(param_10 + 200) = uVar1;
      *(undefined4 *)(param_10 + 0xcc) = 8;
      *(undefined **)(param_10 + 0x88) = puVar2;
      *(undefined8 *)(param_10 + 0x90) = 0;
      *(undefined8 *)(param_10 + 0xec) = 0;
      *(undefined8 *)(param_10 + 0xe4) = 0;
      __dest = *(char **)(param_10 + 0x100);
      *(undefined4 *)(param_10 + 0xd0) = 0x43200000;
      *(undefined4 *)(param_10 + 0xe0) = 0;
      *(undefined4 *)(param_10 + 0xdc) = 0x3f800000;
      *(undefined **)(param_10 + 0x78) = puVar3 + 0x10;
      *(undefined1 **)(param_10 + 0x80) = param_10;
      *(ulong *)(param_10 + 0xd4) = (ulong)(uint)fVar10 << 0x20;
      (**(code **)(local_110 + 0x18))(&local_110);
      pcVar9 = local_108;
      if (__dest == local_108) goto LAB_01809c38;
      (**(code **)(local_110 + 0x18))(&local_110);
      lVar7 = 0;
      do {
        if (local_108[lVar7] == '\0') goto LAB_01809c0c;
        if (local_108[lVar7 + 1] == '\0') goto LAB_01809c00;
        if (local_108[lVar7 + 2] == '\0') goto LAB_01809c08;
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
    }
  }
  else {
    if (local_108 != "RoomMdlStairsDown/STAIRS:") {
      iVar8 = 0x19;
      if (local_100 < 0x1a) {
        iVar8 = local_100 + -1;
      }
      memcpy(local_108,"RoomMdlStairsDown/STAIRS:",(long)iVar8);
      pcVar9[iVar8] = '\0';
    }
    uVar1 = *(undefined4 *)(param_1 + 0x230);
    *param_10 = 1;
    if (*(int *)(param_10 + 0x14) == 0) {
      *(undefined4 *)(param_10 + 0x14) = *(undefined4 *)(param_1 + 0x230);
    }
    *(undefined4 *)(param_10 + 0x10) = 8;
    puVar3 = PTR_DAT_04bbe468;
    puVar2 = PTR_LAB_04bbe458;
    *(undefined4 *)(param_10 + 200) = uVar1;
    *(undefined4 *)(param_10 + 0xcc) = 8;
    *(undefined **)(param_10 + 0x88) = puVar2;
    *(undefined8 *)(param_10 + 0x90) = 0;
    *(undefined8 *)(param_10 + 0xec) = 0;
    *(undefined8 *)(param_10 + 0xe4) = 0;
    __dest = *(char **)(param_10 + 0x100);
    *(undefined4 *)(param_10 + 0xd0) = 0x43200000;
    *(undefined4 *)(param_10 + 0xe0) = 0;
    *(undefined4 *)(param_10 + 0xdc) = 0x3f800000;
    *(undefined **)(param_10 + 0x78) = puVar3 + 0x10;
    *(undefined1 **)(param_10 + 0x80) = param_10;
    *(ulong *)(param_10 + 0xd4) = (ulong)(uint)fVar10 << 0x20;
    (**(code **)(local_110 + 0x18))(&local_110);
    pcVar9 = local_108;
    if (__dest == local_108) goto LAB_01809c38;
    (**(code **)(local_110 + 0x18))(&local_110);
    lVar7 = 0;
    do {
      if (local_108[lVar7] == '\0') goto LAB_01809c0c;
      if (local_108[lVar7 + 1] == '\0') goto LAB_01809c00;
      if (local_108[lVar7 + 2] == '\0') goto LAB_01809c08;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
  }
  lVar7 = 0;
  goto LAB_01809c0c;
LAB_01809c00:
  lVar7 = lVar7 + 1;
  goto LAB_01809c0c;
LAB_01809c08:
  lVar7 = lVar7 + 2;
LAB_01809c0c:
  iVar8 = (int)lVar7;
  if (*(int *)(param_10 + 0x108) <= (int)lVar7) {
    iVar8 = *(int *)(param_10 + 0x108) + -1;
  }
  memcpy(__dest,pcVar9,(long)iVar8);
  __dest[iVar8] = '\0';
LAB_01809c38:
  *(ulong *)(param_10 + 400) = CONCAT26(uStack_72,CONCAT24(uStack_74,local_78));
  *(undefined8 *)(param_10 + 0x198) = local_70;
  return;
}



void FUN_01808c00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined1 *param_10,undefined1 *param_11)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  float fVar12;
  undefined *local_120;
  char *local_118;
  int local_110;
  char local_10c [127];
  undefined1 local_8d;
  undefined4 local_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined8 local_80;
  
  puVar2 = PTR_DAT_04bb5ce0;
  lVar9 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar9 == 0) {
LAB_01808cb4:
    uVar8 = 4;
  }
  else {
    iVar6 = *(int *)(lVar9 + 0xe48);
    if (iVar6 != 0x14) {
      FUN_017f3710(lVar9 + 0xda0);
      lVar9 = *(long *)puVar2;
      if (lVar9 == 0) goto LAB_01808cb4;
      iVar6 = *(int *)(lVar9 + 0xe48);
    }
    if (iVar6 != 0x14) {
      FUN_017f3710(lVar9 + 0xda0);
      lVar9 = *(long *)puVar2;
      if (lVar9 == 0) goto LAB_01808cb4;
    }
    uVar8 = *(int *)(lVar9 + 0xf68) * 2 + 4;
  }
  lVar9 = *(long *)PTR_DAT_04bb2720;
  iVar6 = 0;
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar5 = FUN_006bd550(*puVar7,0);
      iVar6 = 0;
      if (iVar5 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)PTR_DAT_04bb2720 != 0) {
          lVar9 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
          iVar6 = 0;
          if (lVar9 != 0) {
            iVar6 = *(int *)(lVar9 + 0x248);
          }
        }
      }
    }
  }
  FUN_0179e460(param_1,param_2,param_6,iVar6 == 0);
  FUN_0179f0d0(param_1,param_3,param_7);
  FUN_0179f740(param_1,param_4,param_8);
  FUN_017a1380(param_1,param_5,param_9);
  puVar3 = PTR_DAT_04bb2720;
  puVar2 = PTR_DAT_04bb2640;
  local_118 = local_10c;
  local_110 = 0x80;
  local_8d = 0;
  local_10c[0] = '\0';
  local_120 = PTR_DAT_04bb2d88 + 0x10;
  local_80 = 0;
  uStack_84 = 0;
  local_88 = 7;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x330) == 0)) {
LAB_01808ff0:
    pcVar11 = local_118;
    if (local_118 != "RoomMdlStairsNml/STAIRS:") {
      iVar6 = 0x18;
      if (local_110 < 0x19) {
        iVar6 = local_110 + -1;
      }
      memcpy(local_118,"RoomMdlStairsNml/STAIRS:",(long)iVar6);
      pcVar11[iVar6] = '\0';
    }
    uVar1 = *(undefined4 *)(param_1 + 0x230);
    *param_11 = 1;
    if (*(int *)(param_11 + 0x14) == 0) {
      *(undefined4 *)(param_11 + 0x14) = *(undefined4 *)(param_1 + 0x230);
    }
    *(undefined4 *)(param_11 + 0x10) = 8;
    puVar3 = PTR_DAT_04bbe468;
    puVar2 = PTR_LAB_04bbe458;
    *(undefined4 *)(param_11 + 200) = uVar1;
    *(undefined4 *)(param_11 + 0xcc) = 8;
    *(undefined **)(param_11 + 0x88) = puVar2;
    *(undefined8 *)(param_11 + 0x90) = 0;
    *(undefined8 *)(param_11 + 0xec) = 0;
    *(undefined4 *)(param_11 + 0xd0) = 0x43200000;
    *(undefined4 *)(param_11 + 0xe0) = 0x80000000;
    *(undefined **)(param_11 + 0x78) = puVar3 + 0x10;
    *(undefined1 **)(param_11 + 0x80) = param_11;
    pcVar10 = *(char **)(param_11 + 0x100);
    *(undefined8 *)(param_11 + 0xe4) = 0;
    *(ulong *)(param_11 + 0xd4) = (ulong)(uint)((float)uVar8 * -5.0 + 160.0) << 0x20;
    *(undefined4 *)(param_11 + 0xdc) = 0x3f800000;
    (**(code **)(local_120 + 0x18))(&local_120);
    pcVar11 = local_118;
    if (pcVar10 != local_118) {
      (**(code **)(local_120 + 0x18))(&local_120);
      lVar9 = 0;
      do {
        if (local_118[lVar9] == '\0') goto LAB_018091a4;
        if (local_118[lVar9 + 1] == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_018091a4;
        }
        if (local_118[lVar9 + 2] == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_018091a4;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_018091a4:
      iVar6 = (int)lVar9;
      if (*(int *)(param_11 + 0x108) <= (int)lVar9) {
        iVar6 = *(int *)(param_11 + 0x108) + -1;
      }
      memcpy(pcVar10,pcVar11,(long)iVar6);
      pcVar10[iVar6] = '\0';
    }
    pcVar11 = local_118;
    *(ulong *)(param_11 + 400) = CONCAT26(uStack_82,CONCAT24(uStack_84,local_88));
    *(undefined8 *)(param_11 + 0x198) = local_80;
    if (*(long *)PTR_DAT_04bb5ce0 == 0) {
      fVar12 = (float)(10 - uVar8) * -5.0 + 160.0 + 50.0;
    }
    else {
      fVar12 = (float)(10 - uVar8) * -5.0 + 160.0 + 50.0;
      if (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5e) != '\0') {
        if (local_118 != "RoomMdlStairsNmlUp/STAIRS:") {
          iVar6 = 0x1a;
          if (local_110 < 0x1b) {
            iVar6 = local_110 + -1;
          }
          memcpy(local_118,"RoomMdlStairsNmlUp/STAIRS:",(long)iVar6);
          pcVar11[iVar6] = '\0';
        }
        uVar1 = *(undefined4 *)(param_1 + 0x230);
        *param_10 = 1;
        if (*(int *)(param_10 + 0x14) == 0) {
          *(undefined4 *)(param_10 + 0x14) = *(undefined4 *)(param_1 + 0x230);
        }
        *(undefined4 *)(param_10 + 0x10) = 8;
        puVar2 = PTR_LAB_04bbe458;
        *(undefined4 *)(param_10 + 200) = uVar1;
        *(undefined4 *)(param_10 + 0xcc) = 8;
        *(undefined **)(param_10 + 0x88) = puVar2;
        *(undefined8 *)(param_10 + 0x90) = 0;
        *(undefined4 *)(param_10 + 0xe0) = 0;
        *(undefined8 *)(param_10 + 0xec) = 0;
        pcVar10 = *(char **)(param_10 + 0x100);
        *(undefined8 *)(param_10 + 0xe4) = 0;
        *(undefined4 *)(param_10 + 0xd0) = 0x43200000;
        *(undefined4 *)(param_10 + 0xdc) = 0x3f800000;
        *(undefined **)(param_10 + 0x78) = puVar3 + 0x10;
        *(undefined1 **)(param_10 + 0x80) = param_10;
        *(ulong *)(param_10 + 0xd4) = (ulong)(uint)fVar12 << 0x20;
        (**(code **)(local_120 + 0x18))(&local_120);
        pcVar11 = local_118;
        if (pcVar10 == local_118) goto LAB_018095f8;
        (**(code **)(local_120 + 0x18))(&local_120);
        lVar9 = 0;
        do {
          if (local_118[lVar9] == '\0') goto LAB_018095cc;
          if (local_118[lVar9 + 1] == '\0') goto LAB_018095c0;
          if (local_118[lVar9 + 2] == '\0') goto LAB_018095c8;
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        goto LAB_01809498;
      }
    }
    if (local_118 != "RoomMdlStairsNml/STAIRS:") {
      iVar6 = 0x18;
      if (local_110 < 0x19) {
        iVar6 = local_110 + -1;
      }
      memcpy(local_118,"RoomMdlStairsNml/STAIRS:",(long)iVar6);
      pcVar11[iVar6] = '\0';
    }
    uVar1 = *(undefined4 *)(param_1 + 0x230);
    *param_10 = 1;
    if (*(int *)(param_10 + 0x14) == 0) {
      *(undefined4 *)(param_10 + 0x14) = *(undefined4 *)(param_1 + 0x230);
    }
    *(undefined4 *)(param_10 + 0x10) = 8;
    puVar2 = PTR_LAB_04bbe458;
    *(undefined4 *)(param_10 + 200) = uVar1;
    *(undefined4 *)(param_10 + 0xcc) = 8;
    *(undefined **)(param_10 + 0x88) = puVar2;
    *(undefined8 *)(param_10 + 0x90) = 0;
    *(undefined4 *)(param_10 + 0xe0) = 0;
    *(undefined8 *)(param_10 + 0xec) = 0;
    pcVar10 = *(char **)(param_10 + 0x100);
    *(undefined8 *)(param_10 + 0xe4) = 0;
    *(undefined4 *)(param_10 + 0xd0) = 0x43200000;
    *(undefined4 *)(param_10 + 0xdc) = 0x3f800000;
    *(undefined **)(param_10 + 0x78) = puVar3 + 0x10;
    *(undefined1 **)(param_10 + 0x80) = param_10;
    *(ulong *)(param_10 + 0xd4) = (ulong)(uint)fVar12 << 0x20;
    (**(code **)(local_120 + 0x18))(&local_120);
    pcVar11 = local_118;
    if (pcVar10 == local_118) goto LAB_018095f8;
    (**(code **)(local_120 + 0x18))(&local_120);
    lVar9 = 0;
    do {
      if (local_118[lVar9] == '\0') goto LAB_018095cc;
      if (local_118[lVar9 + 1] == '\0') goto LAB_018095c0;
      if (local_118[lVar9 + 2] == '\0') goto LAB_018095c8;
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
  }
  else {
    puVar7 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
    iVar6 = FUN_006bd550(*puVar7,0);
    if ((iVar6 != 0x758f7eaf) ||
       (((lVar9 = *(long *)puVar3, lVar9 == 0 || (*(long *)(lVar9 + 0x330) == 0)) ||
        (*(int *)(*(long *)(lVar9 + 0x330) + 0x248) == 0)))) goto LAB_01808ff0;
    puVar7 = (undefined8 *)
             (**(code **)(**(long **)puVar2 + 0x18))
                       (*(long **)puVar2,*(undefined4 *)(lVar9 + 0x338));
    iVar6 = FUN_006bd550(*puVar7,0);
    pcVar11 = local_118;
    bVar4 = false;
    if (iVar6 == 0x758f7eaf) {
      lVar9 = *(long *)puVar3;
      bVar4 = false;
      if (lVar9 != 0) {
        lVar9 = *(long *)(lVar9 + 0x330);
        bVar4 = false;
        if (lVar9 != 0) {
          bVar4 = *(int *)(lVar9 + 0x248) == 1;
        }
      }
    }
    fVar12 = (float)(10 - uVar8) * -5.0 + 160.0 + 50.0;
    if (bVar4) {
      if (local_118 != "RoomMdlStairsNml/STAIRS:") {
        iVar6 = 0x18;
        if (local_110 < 0x19) {
          iVar6 = local_110 + -1;
        }
        memcpy(local_118,"RoomMdlStairsNml/STAIRS:",(long)iVar6);
        pcVar11[iVar6] = '\0';
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
      pcVar10 = *(char **)(param_10 + 0x100);
      *(undefined4 *)(param_10 + 0xd0) = 0x43200000;
      *(undefined4 *)(param_10 + 0xe0) = 0;
      *(undefined4 *)(param_10 + 0xdc) = 0x3f800000;
      *(undefined **)(param_10 + 0x78) = puVar3 + 0x10;
      *(undefined1 **)(param_10 + 0x80) = param_10;
      *(ulong *)(param_10 + 0xd4) = (ulong)(uint)fVar12 << 0x20;
      (**(code **)(local_120 + 0x18))(&local_120);
      pcVar11 = local_118;
      if (pcVar10 == local_118) goto LAB_018095f8;
      (**(code **)(local_120 + 0x18))(&local_120);
      lVar9 = 0;
      do {
        if (local_118[lVar9] == '\0') goto LAB_018095cc;
        if (local_118[lVar9 + 1] == '\0') goto LAB_018095c0;
        if (local_118[lVar9 + 2] == '\0') goto LAB_018095c8;
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
    }
    else {
      if (local_118 != "RoomMdlStairsDown/STAIRS:") {
        iVar6 = 0x19;
        if (local_110 < 0x1a) {
          iVar6 = local_110 + -1;
        }
        memcpy(local_118,"RoomMdlStairsDown/STAIRS:",(long)iVar6);
        pcVar11[iVar6] = '\0';
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
      pcVar10 = *(char **)(param_10 + 0x100);
      *(undefined4 *)(param_10 + 0xd0) = 0x43200000;
      *(undefined4 *)(param_10 + 0xe0) = 0;
      *(undefined4 *)(param_10 + 0xdc) = 0x3f800000;
      *(undefined **)(param_10 + 0x78) = puVar3 + 0x10;
      *(undefined1 **)(param_10 + 0x80) = param_10;
      *(ulong *)(param_10 + 0xd4) = (ulong)(uint)fVar12 << 0x20;
      (**(code **)(local_120 + 0x18))(&local_120);
      pcVar11 = local_118;
      if (pcVar10 == local_118) goto LAB_018095f8;
      (**(code **)(local_120 + 0x18))(&local_120);
      lVar9 = 0;
      do {
        if (local_118[lVar9] == '\0') goto LAB_018095cc;
        if (local_118[lVar9 + 1] == '\0') goto LAB_018095c0;
        if (local_118[lVar9 + 2] == '\0') goto LAB_018095c8;
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
    }
  }
LAB_01809498:
  lVar9 = 0;
  goto LAB_018095cc;
LAB_018095c0:
  lVar9 = lVar9 + 1;
  goto LAB_018095cc;
LAB_018095c8:
  lVar9 = lVar9 + 2;
LAB_018095cc:
  iVar6 = (int)lVar9;
  if (*(int *)(param_10 + 0x108) <= (int)lVar9) {
    iVar6 = *(int *)(param_10 + 0x108) + -1;
  }
  memcpy(pcVar10,pcVar11,(long)iVar6);
  pcVar10[iVar6] = '\0';
LAB_018095f8:
  *(ulong *)(param_10 + 400) = CONCAT26(uStack_82,CONCAT24(uStack_84,local_88));
  *(undefined8 *)(param_10 + 0x198) = local_80;
  return;
}


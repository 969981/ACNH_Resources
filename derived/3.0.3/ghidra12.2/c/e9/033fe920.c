
ulong FUN_033fe920(undefined8 param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  undefined8 local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "WHEREAREN_Unlock_RoomSizeModeUnlock";
  uVar5 = FUN_0274bce0(param_1,&local_30);
  puVar3 = PTR_DAT_04bc39f8;
  puVar2 = PTR_DAT_04bb6298;
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  uVar7 = *(ushort *)PTR_DAT_04bb6298;
  if (uVar7 == 0xffff) {
    return 0;
  }
  local_30._4_4_ = (undefined4)((ulong)local_30 >> 0x20);
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar7 * 8);
  if (0xff < uVar7) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 & 1) == 0) {
    return 0;
  }
  if ((*puVar1 >> 0x19 & 1) == 0) {
    local_30._0_4_ = 6;
    if ((*puVar1 >> 6 & 1) != 0) {
      return 1;
    }
    uVar5 = FUN_0180c600();
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    uVar7 = *(ushort *)puVar2;
    if (uVar7 == 0xffff) goto LAB_033fead0;
    puVar1 = (uint *)(puVar3 + (ulong)(uint)(int)(short)uVar7 * 8);
    if (0xff < uVar7) {
      puVar1 = (uint *)puVar3;
    }
    if ((*puVar1 >> 0x15 & 1) != 0) {
      return 1;
    }
  }
  else {
    lVar9 = *(long *)PTR_DAT_04bb27f8;
    if ((lVar9 != 0) &&
       ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)
        ))) {
      if (*(int *)(lVar9 + 0x14) == 4) {
        return 1;
      }
      if (*(int *)(lVar9 + 0x14) == 5) {
        return 1;
      }
    }
  }
  local_30._0_4_ = 0x1b;
  puVar1 = (uint *)(puVar3 + ((long)(short)uVar7 & 0xffffffffU) * 8);
  if (0xff < uVar7) {
    puVar1 = (uint *)puVar3;
  }
  if ((*puVar1 >> 0x1b & 1) != 0) {
    return 1;
  }
LAB_033fead0:
  puVar2 = PTR_DAT_04bb2720;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  iVar8 = 0;
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x330) == 0) {
      iVar8 = 0;
    }
    else {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      iVar8 = 0;
      if (iVar4 == 0x758f7eaf) {
        iVar8 = 0;
        if (*(long *)puVar2 != 0) {
          lVar9 = *(long *)(*(long *)puVar2 + 0x330);
          iVar8 = 0;
          if (lVar9 != 0) {
            iVar8 = *(int *)(lVar9 + 0x244);
          }
        }
      }
    }
  }
  puVar3 = PTR_DAT_04bbe4b0;
  if (((*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar8) && (*(long *)PTR_DAT_04bb4938 != 0)) &&
     (*(int *)(*(long *)PTR_DAT_04bb4938 + 0x98) != 0)) {
    return 1;
  }
  lVar9 = *(long *)puVar2;
  iVar8 = 0;
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x330) == 0) {
      iVar8 = 0;
    }
    else {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      iVar8 = 0;
      if (iVar4 == 0x758f7eaf) {
        iVar8 = 0;
        if (*(long *)puVar2 != 0) {
          lVar9 = *(long *)(*(long *)puVar2 + 0x330);
          iVar8 = 0;
          if (lVar9 != 0) {
            iVar8 = *(int *)(lVar9 + 0x244);
          }
        }
      }
    }
  }
  return (ulong)(*(int *)(puVar3 + 0xd0) == iVar8);
}


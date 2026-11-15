
bool FUN_022cf570(long param_1,byte *param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  bool bVar5;
  undefined4 uVar6;
  ulong uVar7;
  char *pcVar8;
  byte local_4c [4];
  byte local_48 [4];
  byte local_44 [4];
  byte local_28 [4];
  undefined4 local_24;
  
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar6 = FUN_022cdafc(param_2);
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  iVar2 = *(int *)(param_1 + 0x2c);
  local_28[0] = *param_2;
  bVar5 = iVar2 == 0;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  uVar7 = FUN_0150e210(param_1,local_28,0);
  if ((uVar7 & 1) == 0) {
    local_44[0] = *param_2;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    uVar7 = FUN_0150fac0(param_1,local_44);
    if ((uVar7 & 1) == 0) {
      local_48[0] = *param_2;
      if (7 < local_48[0]) {
        local_48[0] = 0xff;
      }
      uVar7 = FUN_01510344(param_1,local_48);
      if ((uVar7 & 1) == 0) {
        local_4c[0] = *param_2;
        if (7 < local_4c[0]) {
          local_4c[0] = 0xff;
        }
        uVar7 = FUN_01510674(param_1,local_4c);
        if ((uVar7 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
          return false;
        }
        if (DAT_04c487d4 == -1) {
          return bVar5;
        }
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((puVar1[1] & 1) == 0) {
          return bVar5;
        }
        local_24 = 0;
        if ((*puVar1 & 1) == 0) {
          return bVar5;
        }
        uVar7 = FUN_0252c550(0);
        if ((uVar7 & 1) == 0) {
          return bVar5;
        }
        if (iVar2 != 0) {
          return bVar5;
        }
        if (*(int *)(param_1 + 0x2c) == 0) {
          uVar6 = 6;
          goto LAB_022cf8c8;
        }
      }
      else {
        if (DAT_04c487d4 == -1) {
          return bVar5;
        }
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((puVar1[1] & 1) == 0) {
          return bVar5;
        }
        local_24 = 0;
        if ((*puVar1 & 1) == 0) {
          return bVar5;
        }
        uVar7 = FUN_0252c550(0);
        if ((uVar7 & 1) == 0) {
          return bVar5;
        }
        if (iVar2 != 0) {
          return bVar5;
        }
        if (*(int *)(param_1 + 0x2c) == 0) {
          uVar6 = 7;
LAB_022cf8c8:
          *(undefined4 *)(param_1 + 0x2c) = uVar6;
          return false;
        }
      }
    }
    else {
      if (DAT_04c487d4 == -1) {
        return bVar5;
      }
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((puVar1[1] & 1) == 0) {
        return bVar5;
      }
      local_24 = 0;
      if ((*puVar1 & 1) == 0) {
        return bVar5;
      }
      uVar7 = FUN_0252c550(0);
      if ((uVar7 & 1) == 0) {
        return bVar5;
      }
      if (iVar2 != 0) {
        return bVar5;
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
        uVar6 = 5;
        goto LAB_022cf8c8;
      }
    }
  }
  else {
    if (1 < *(int *)(param_1 + 0x2c) - 2U) {
      if (*(int *)(param_1 + 0x2c) != 1) {
        return bVar5;
      }
      if (DAT_04c487d4 == -1) {
        return bVar5;
      }
      local_24 = 3;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 3 & 1) == 0) {
        return bVar5;
      }
      if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
        return bVar5;
      }
      pcVar8 = (char *)FUN_02582a24(param_2);
      plVar4 = DAT_0537d558;
      cVar3 = *pcVar8;
      uVar7 = FUN_01d3e29c(*DAT_0537d558 + 8);
      pcVar8 = (char *)(*plVar4 + 0x472);
      if ((uVar7 & 1) == 0) {
        pcVar8 = PTR_DAT_04bc1220;
      }
      if (cVar3 == *pcVar8) {
        return bVar5;
      }
    }
    uVar7 = FUN_0277e294(param_1);
    if ((uVar7 & 1) != 0) {
      return bVar5;
    }
  }
  return true;
}


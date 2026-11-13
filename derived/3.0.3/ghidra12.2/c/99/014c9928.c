
void FUN_014c9928(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_38 = (undefined4)param_3;
  *(undefined2 *)(param_1 + 0xa2c) = 0;
  puVar3 = PTR_DAT_04bb6298;
  puVar7 = PTR_DAT_04bb2020;
  switch(local_38) {
  case 1:
    *(undefined1 *)(param_1 + 0xa2c) = 0x41;
    goto LAB_014c9a18;
  case 2:
    *(undefined1 *)(param_1 + 0xa2c) = 0x5e;
    uVar5 = FUN_01810f30();
    if (((uVar5 & 1) != 0) && (iVar4 = FUN_022043e0(), iVar4 < 7)) {
      *(byte *)(param_1 + 0xa2c) = *(byte *)(param_1 + 0xa2c) & 0xfd;
    }
    puVar7 = PTR_DAT_04bb2020;
    *(byte *)(param_1 + 0xa2d) = *(byte *)(param_1 + 0xa2d) | 1;
LAB_014c9a18:
    local_30 = puVar7 + 0x10;
    pcStack_28 = "UnlockInterior_CeilingFurniture";
    iVar4 = FUN_0274bce0(param_2,&local_30);
    if (iVar4 != 0) {
      *(byte *)(param_1 + 0xa2c) = *(byte *)(param_1 + 0xa2c) | 0x80;
    }
LAB_014c9a44:
    uVar5 = FUN_033fe920(param_1 + 0x5d0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    bVar6 = *(byte *)(param_1 + 0xa2c) | 0x20;
    break;
  case 3:
    switch((int)((ulong)param_3 >> 0x20)) {
    case 1:
    case 4:
      *(undefined2 *)(param_1 + 0xa2c) = 0x118;
      uVar5 = FUN_033fe920(param_1 + 0x5d0);
      bVar6 = *(byte *)(param_1 + 0xa2c) | 0x20;
      if ((uVar5 & 1) == 0) {
        bVar6 = *(byte *)(param_1 + 0xa2c);
      }
      local_30 = PTR_DAT_04bb2020 + 0x10;
      *(byte *)(param_1 + 0xa2c) = bVar6 | 0x40;
      pcStack_28 = "UnlockInterior_CeilingFurniture";
      iVar4 = FUN_0274bce0(param_2,&local_30);
      if (iVar4 == 0) {
        return;
      }
      bVar6 = *(byte *)(param_1 + 0xa2c) | 0x80;
      break;
    case 2:
      *(undefined2 *)(param_1 + 0xa2c) = 0xfd18;
      return;
    case 3:
      *(undefined2 *)(param_1 + 0xa2c) = 0x118;
      goto LAB_014c9a44;
    case 5:
      *(undefined1 *)(param_1 + 0xa2c) = 0x10;
      sVar2 = *(short *)puVar3;
      if (sVar2 != -1) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
        if (0xff < (uint)(int)sVar2) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x1a & 1) != 0) {
          local_30 = (undefined *)((ulong)local_30 & 0xffffffff00000000);
          uVar5 = FUN_0290cbcc(&local_30);
          if ((uVar5 & 1) != 0) {
            local_40[0] = 7;
            uVar5 = FUN_0290cbcc(local_40);
            if ((uVar5 & 1) == 0) {
              return;
            }
          }
        }
      }
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "Unlock_Amiibo";
      iVar4 = FUN_02758850(&local_30);
      if (iVar4 == 0) {
        return;
      }
      bVar6 = *(byte *)(param_1 + 0xa2c) | 2;
      break;
    default:
      goto switchD_014c9970_default;
    }
    break;
  case 4:
    *(undefined1 *)(param_1 + 0xa2c) = 0x40;
    local_30 = puVar7 + 0x10;
    pcStack_28 = "UnlockInterior_CeilingFurniture";
    iVar4 = FUN_0274bce0(param_2,&local_30);
    bVar6 = *(byte *)(param_1 + 0xa2c);
    if (iVar4 != 0) {
      bVar6 = *(byte *)(param_1 + 0xa2c) | 0x80;
    }
    *(byte *)(param_1 + 0xa2d) = *(byte *)(param_1 + 0xa2d) | 1;
    bVar6 = bVar6 | 0x28;
    break;
  case 5:
  case 6:
    *(undefined1 *)(param_1 + 0xa2c) = 0x40;
    local_30 = puVar7 + 0x10;
    pcStack_28 = "UnlockInterior_CeilingFurniture";
    iVar4 = FUN_0274bce0(param_2,&local_30);
    bVar6 = *(byte *)(param_1 + 0xa2c);
    if (iVar4 != 0) {
      bVar6 = *(byte *)(param_1 + 0xa2c) | 0x80;
    }
    *(byte *)(param_1 + 0xa2c) = bVar6 | 8;
    *(byte *)(param_1 + 0xa2d) = *(byte *)(param_1 + 0xa2d) | 1;
    goto LAB_014c9a44;
  default:
    goto switchD_014c9970_default;
  }
  *(byte *)(param_1 + 0xa2c) = bVar6;
switchD_014c9970_default:
  return;
}


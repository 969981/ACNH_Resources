
undefined8 FUN_01c84918(long param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_18 [4];
  uint local_14;
  
  plVar1 = (long *)(param_1 + 8) + param_3;
  if (0x16 < param_3) {
    plVar1 = (long *)(param_1 + 8);
  }
  if ((*plVar1 == 0) || (*(int *)(param_1 + 0xc0) != 0)) {
LAB_01c84954:
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xd4) = 0;
    lVar6 = *(long *)(*(long *)PTR_DAT_04bb21d0 + 0xf88);
    local_14 = param_3;
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      local_18[0] = 0;
      uVar4 = FUN_01c94e4c(lVar6,local_18);
      if ((uVar4 & 1) != 0) {
        pcVar2 = (char *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x225) * 0x20 + 0x28);
        if (7 < *(byte *)(lVar6 + 0x225)) {
          pcVar2 = PTR_DAT_04bb5018;
        }
        if (*pcVar2 != '\0') {
          *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 1;
        }
      }
    }
    if ((*(byte *)(param_2 + 2) >> 1 & 1) != 0) {
      local_18[0] = 1;
      uVar4 = FUN_01c94e4c(lVar6,local_18);
      if ((uVar4 & 1) != 0) {
        pcVar2 = (char *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x225) * 0x20 + 0x28);
        if (7 < *(byte *)(lVar6 + 0x225)) {
          pcVar2 = PTR_DAT_04bb5018;
        }
        if (*pcVar2 != '\x01') {
          *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 2;
        }
      }
    }
    if ((*(byte *)(param_2 + 2) >> 2 & 1) != 0) {
      local_18[0] = 2;
      uVar4 = FUN_01c94e4c(lVar6,local_18);
      if ((uVar4 & 1) != 0) {
        pcVar2 = (char *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x225) * 0x20 + 0x28);
        if (7 < *(byte *)(lVar6 + 0x225)) {
          pcVar2 = PTR_DAT_04bb5018;
        }
        if (*pcVar2 != '\x02') {
          *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 4;
        }
      }
    }
    if ((*(byte *)(param_2 + 2) >> 3 & 1) != 0) {
      local_18[0] = 3;
      uVar4 = FUN_01c94e4c(lVar6,local_18);
      if ((uVar4 & 1) != 0) {
        pcVar2 = (char *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x225) * 0x20 + 0x28);
        if (7 < *(byte *)(lVar6 + 0x225)) {
          pcVar2 = PTR_DAT_04bb5018;
        }
        if (*pcVar2 != '\x03') {
          *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 8;
        }
      }
    }
    if ((*(byte *)(param_2 + 2) >> 4 & 1) != 0) {
      local_18[0] = 4;
      uVar4 = FUN_01c94e4c(lVar6,local_18);
      if ((uVar4 & 1) != 0) {
        pcVar2 = (char *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x225) * 0x20 + 0x28);
        if (7 < *(byte *)(lVar6 + 0x225)) {
          pcVar2 = PTR_DAT_04bb5018;
        }
        if (*pcVar2 != '\x04') {
          *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 0x10;
        }
      }
    }
    if ((*(byte *)(param_2 + 2) >> 5 & 1) != 0) {
      local_18[0] = 5;
      uVar4 = FUN_01c94e4c(lVar6,local_18);
      if ((uVar4 & 1) != 0) {
        pcVar2 = (char *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x225) * 0x20 + 0x28);
        if (7 < *(byte *)(lVar6 + 0x225)) {
          pcVar2 = PTR_DAT_04bb5018;
        }
        if (*pcVar2 != '\x05') {
          *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 0x20;
        }
      }
    }
    if ((*(byte *)(param_2 + 2) >> 6 & 1) != 0) {
      local_18[0] = 6;
      uVar4 = FUN_01c94e4c(lVar6,local_18);
      if ((uVar4 & 1) != 0) {
        pcVar2 = (char *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x225) * 0x20 + 0x28);
        if (7 < *(byte *)(lVar6 + 0x225)) {
          pcVar2 = PTR_DAT_04bb5018;
        }
        if (*pcVar2 != '\x06') {
          *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 0x40;
        }
      }
    }
    if (*(char *)(param_2 + 2) < '\0') {
      local_18[0] = 7;
      uVar4 = FUN_01c94e4c(lVar6,local_18);
      if ((uVar4 & 1) == 0) goto LAB_01c84c0c;
      pcVar2 = (char *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x225) * 0x20 + 0x28);
      if (7 < *(byte *)(lVar6 + 0x225)) {
        pcVar2 = PTR_DAT_04bb5018;
      }
      if (*pcVar2 == '\a') goto LAB_01c84c0c;
      *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 0x80;
    }
    else {
LAB_01c84c0c:
      if (*(int *)(param_1 + 0xd4) == 0) goto LAB_01c84954;
    }
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0xc0) = 1;
    *(uint *)(param_1 + 0xc4) = local_14;
    *(undefined8 *)(param_1 + 200) = *param_2;
    uVar5 = param_2[1];
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(int *)(param_1 + 0xd0) = (int)uVar5;
  }
  return uVar3;
}


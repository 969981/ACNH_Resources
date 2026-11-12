
bool FUN_00722a34(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int local_28;
  int local_24;
  
  iVar1 = *(int *)(param_1 + 0x2d8);
  if (((DAT_04c92da0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c92da0), iVar2 != 0)) {
    FUN_007300f0();
    __cxa_guard_release(&DAT_04c92da0);
  }
  if ((DAT_04c92d90 == 1) && (*DAT_04c92d98 != iVar1)) {
    if (DAT_04c92d98[1] == iVar1) {
      local_24 = 1;
    }
    else if (DAT_04c92d98[2] == iVar1) {
      local_24 = 2;
    }
    else if (DAT_04c92d98[3] == iVar1) {
      local_24 = 3;
    }
    else if (DAT_04c92d98[4] == iVar1) {
      local_24 = 4;
    }
    else if (DAT_04c92d98[5] == iVar1) {
      local_24 = 5;
    }
    else if (DAT_04c92d98[6] == iVar1) {
      local_24 = 6;
    }
    else if (DAT_04c92d98[7] == iVar1) {
      local_24 = 7;
    }
    else if (DAT_04c92d98[8] == iVar1) {
      local_24 = 8;
    }
    else if (DAT_04c92d98[9] == iVar1) {
      local_24 = 9;
    }
    else if (DAT_04c92d98[10] == iVar1) {
      local_24 = 10;
    }
    else if (DAT_04c92d98[0xb] == iVar1) {
      local_24 = 0xb;
    }
    else if (DAT_04c92d98[0xc] == iVar1) {
      local_24 = 0xc;
    }
    else if (DAT_04c92d98[0xd] == iVar1) {
      local_24 = 0xd;
    }
    else if (DAT_04c92d98[0xe] == iVar1) {
      local_24 = 0xe;
    }
    else {
      if (DAT_04c92d98[0xf] != iVar1) goto LAB_00722a84;
      local_24 = 0xf;
    }
  }
  else {
LAB_00722a84:
    local_24 = 0;
  }
  iVar1 = FUN_00737da8((long)*(char *)(param_1 + 0x2ec));
  local_28 = 0;
  if (iVar1 != -1) {
    local_28 = iVar1;
  }
  if (((DAT_04c92da0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c92da0), iVar1 != 0)) {
    FUN_007300f0();
    __cxa_guard_release(&DAT_04c92da0);
  }
  uVar4 = (ulong)local_24;
  if ((DAT_04c92d90 & uVar4 < 0x10) == 0) {
    uVar4 = 0;
  }
  iVar1 = local_24;
  if ((1 << (ulong)(DAT_04c92d98[uVar4] & 0x1f) & 0xcc00U) != 0) {
    if (((DAT_04c92da0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c92da0), iVar1 != 0)) {
      FUN_007300f0();
      __cxa_guard_release(&DAT_04c92da0);
    }
    if ((DAT_04c92d90 == 1) && (*DAT_04c92d98 != 3)) {
      if (DAT_04c92d98[1] == 3) {
        iVar1 = 1;
      }
      else if (DAT_04c92d98[2] == 3) {
        iVar1 = 2;
      }
      else if (DAT_04c92d98[3] == 3) {
        iVar1 = 3;
      }
      else if (DAT_04c92d98[4] == 3) {
        iVar1 = 4;
      }
      else if (DAT_04c92d98[5] == 3) {
        iVar1 = 5;
      }
      else if (DAT_04c92d98[6] == 3) {
        iVar1 = 6;
      }
      else if (DAT_04c92d98[7] == 3) {
        iVar1 = 7;
      }
      else if (DAT_04c92d98[8] == 3) {
        iVar1 = 8;
      }
      else if (DAT_04c92d98[9] == 3) {
        iVar1 = 9;
      }
      else if (DAT_04c92d98[10] == 3) {
        iVar1 = 10;
      }
      else if (DAT_04c92d98[0xb] == 3) {
        iVar1 = 0xb;
      }
      else if (DAT_04c92d98[0xc] == 3) {
        iVar1 = 0xc;
      }
      else if (DAT_04c92d98[0xd] == 3) {
        iVar1 = 0xd;
      }
      else if (DAT_04c92d98[0xe] == 3) {
        iVar1 = 0xe;
      }
      else {
        if (DAT_04c92d98[0xf] != 3) goto LAB_00722b00;
        iVar1 = 0xf;
      }
    }
    else {
LAB_00722b00:
      iVar1 = 0;
    }
    local_24 = iVar1;
    iVar2 = FUN_00737da8(*(int *)(param_1 + 0x2dc) % 5 + 1);
    local_28 = 0;
    if (iVar2 != -1) {
      local_28 = iVar2;
    }
  }
  if (((DAT_04c92da0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c92da0), iVar2 != 0)) {
    FUN_007300f0();
    __cxa_guard_release(&DAT_04c92da0);
  }
  if (DAT_04c92d90 == 1) {
    if (*DAT_04c92d98 == 1) {
      iVar2 = 0;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[1] == 1) {
      iVar2 = 1;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[2] == 1) {
      iVar2 = 2;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[3] == 1) {
      iVar2 = 3;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[4] == 1) {
      iVar2 = 4;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[5] == 1) {
      iVar2 = 5;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[6] == 1) {
      iVar2 = 6;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[7] == 1) {
      iVar2 = 7;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[8] == 1) {
      iVar2 = 8;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[9] == 1) {
      iVar2 = 9;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[10] == 1) {
      iVar2 = 10;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[0xb] == 1) {
      iVar2 = 0xb;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[0xc] == 1) {
      iVar2 = 0xc;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[0xd] == 1) {
      iVar2 = 0xd;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[0xe] == 1) {
      iVar2 = 0xe;
      goto LAB_00722ee0;
    }
    if (DAT_04c92d98[0xf] == 1) {
      iVar2 = 0xf;
      goto LAB_00722ee0;
    }
  }
  iVar2 = -1;
LAB_00722ee0:
  if (iVar1 != iVar2) {
    if (((DAT_04c92da0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c92da0), iVar1 != 0)) {
      FUN_007300f0();
      __cxa_guard_release(&DAT_04c92da0);
    }
    uVar4 = (ulong)local_24;
    if ((DAT_04c92d90 & uVar4 < 0x10) == 0) {
      uVar4 = 0;
    }
    if ((*(uint *)(param_1 + 0x27c) >> (ulong)(DAT_04c92d98[uVar4] & 0x1f) & 1) != 0) {
      if (((DAT_04c92da0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c92da0), iVar1 != 0)) {
        FUN_007300f0();
        __cxa_guard_release(&DAT_04c92da0);
      }
      uVar4 = (ulong)local_24;
      if ((DAT_04c92d90 & uVar4 < 0x10) == 0) {
        uVar4 = 0;
      }
      if (((1 << (ulong)(DAT_04c92d98[uVar4] & 0x1f) & 0x1cU) == 0) ||
         (uVar3 = FUN_00723098(&local_28),
         (*(uint *)(param_1 + 0x280) >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
        if (*(char *)(param_1 + 0x2a0) == '\0') {
          return true;
        }
        return *(int *)(param_1 + 0x2a4) <= *(int *)(param_1 + 0x2d0) &&
               *(int *)(param_1 + 0x2d0) < *(int *)(param_1 + 0x2a8);
      }
    }
  }
  return false;
}


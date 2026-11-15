
bool FUN_01e339e8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  if ((*(byte **)PTR_DAT_04bb38d0 != (byte *)0x0) && (3 < (**(byte **)PTR_DAT_04bb38d0 >> 2 & 0xf)))
  {
    return false;
  }
  if (*(short *)(param_1 + 0x570) != 0) {
    lVar5 = *(long *)PTR_DAT_04bb32e8;
    lVar2 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(param_1 + 0x570));
    lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar5 + 0x4060));
    if ((lVar2 <= lVar3) &&
       (lVar3 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(lVar5 + 0x4060)), lVar3 != lVar2)) {
      return true;
    }
  }
  if ((((*(int *)(param_1 + 0x420) != 0x1e) && (*(int *)(param_1 + 0x420) != 0x31)) &&
      (uVar1 = FUN_00a86724(DAT_04da7238), 3 < uVar1)) ||
     (lVar2 = DAT_053e0208,
     *(char *)(DAT_053e0208 + 0x11d0) != '\0' && *(int *)(DAT_053e0208 + 0x11d4) == -1)) {
    return true;
  }
  iVar6 = 0;
  if ((DAT_053fee41 != '\0') && (DAT_053feb0a != 0)) {
    uVar4 = FUN_0219e890(&DAT_053fe348);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(lVar2 + 0x11d4) == (int)DAT_053fee40) {
        return true;
      }
      iVar6 = 0;
    }
    else {
      iVar6 = 1;
    }
  }
  if ((DAT_053ff9e1 != '\0') && (DAT_053ff6aa != 0)) {
    uVar4 = FUN_0219e890(&DAT_053feee8);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(lVar2 + 0x11d4) == (int)DAT_053ff9e0) {
        return true;
      }
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  if ((DAT_05400581 != '\0') && (DAT_0540024a != 0)) {
    uVar4 = FUN_0219e890(&DAT_053ffa88);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(lVar2 + 0x11d4) == (int)DAT_05400580) {
        return true;
      }
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  if ((DAT_05401121 != '\0') && (DAT_05400dea != 0)) {
    uVar4 = FUN_0219e890(&DAT_05400628);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(lVar2 + 0x11d4) == (int)DAT_05401120) {
        return true;
      }
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  if ((DAT_05401cc1 != '\0') && (DAT_0540198a != 0)) {
    uVar4 = FUN_0219e890(&DAT_054011c8);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(lVar2 + 0x11d4) == (int)DAT_05401cc0) {
        return true;
      }
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  if ((DAT_05402861 != '\0') && (DAT_0540252a != 0)) {
    uVar4 = FUN_0219e890(&DAT_05401d68);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(lVar2 + 0x11d4) == (int)DAT_05402860) {
        return true;
      }
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  if ((DAT_05403401 != '\0') && (DAT_054030ca != 0)) {
    uVar4 = FUN_0219e890(&DAT_05402908);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(lVar2 + 0x11d4) == (int)DAT_05403400) {
        return true;
      }
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  if ((DAT_05403fa1 != '\0') && (DAT_05403c6a != 0)) {
    uVar4 = FUN_0219e890(&DAT_054034a8);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(lVar2 + 0x11d4) == (int)DAT_05403fa0) {
        return true;
      }
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  if ((DAT_05404b41 != '\0') && (DAT_0540480a != 0)) {
    uVar4 = FUN_0219e890(&DAT_05404048);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(lVar2 + 0x11d4) == (int)DAT_05404b40) {
        return true;
      }
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  if ((DAT_054056e1 != '\0') && (DAT_054053aa != 0)) {
    uVar4 = FUN_0219e890(&DAT_05404be8);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(lVar2 + 0x11d4) == (int)DAT_054056e0) {
        return true;
      }
    }
    else {
      iVar6 = 1;
    }
  }
  return iVar6 == 0;
}


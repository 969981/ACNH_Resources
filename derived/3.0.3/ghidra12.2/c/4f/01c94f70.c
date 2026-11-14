
byte * FUN_01c94f70(long param_1,byte *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  bVar3 = *param_2;
  lVar5 = 0x18;
  plVar1 = (long *)(param_1 + 0x18);
  if ((param_3 & 1) == 0) {
    lVar5 = 0x120;
    plVar1 = (long *)(param_1 + 0x120);
  }
  bVar4 = 7 < bVar3;
  if (bVar4) {
    bVar3 = 0xff;
  }
  plVar2 = plVar1 + ((long)(char)bVar3 & 0xffffffffU) * 4;
  if (bVar4) {
    plVar2 = plVar1;
  }
  lVar6 = *plVar2;
  if (lVar6 == 0) {
    return &DAT_0548e140;
  }
  if ((char)plVar2[1] != '\0') {
    if (*(long *)(param_1 + lVar5) == lVar6 && (char)plVar1[1] == '\0') {
      lVar5 = 0;
    }
    else if (plVar1[4] == lVar6 && (char)plVar1[5] == '\0') {
      lVar5 = 1;
    }
    else if (plVar1[8] == lVar6 && (char)plVar1[9] == '\0') {
      lVar5 = 2;
    }
    else if (plVar1[0xc] == lVar6 && (char)plVar1[0xd] == '\0') {
      lVar5 = 3;
    }
    else if ((plVar1[0x10] == lVar6) && ((char)plVar1[0x11] == '\0')) {
      lVar5 = 4;
    }
    else if ((plVar1[0x14] == lVar6) && ((char)plVar1[0x15] == '\0')) {
      lVar5 = 5;
    }
    else if ((plVar1[0x18] == lVar6) && ((char)plVar1[0x19] == '\0')) {
      lVar5 = 6;
    }
    else {
      if (plVar1[0x1c] != lVar6) {
        return PTR_DAT_04bb32e0;
      }
      if ((char)plVar1[0x1d] != '\0') {
        return PTR_DAT_04bb32e0;
      }
      lVar5 = 7;
    }
    param_2 = &DAT_0548e168 + lVar5;
  }
  return param_2;
}



undefined4 FUN_036721f0(short *param_1,ulong param_2)

{
  char *__s1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_2 < 4) {
    return 7;
  }
  if (*param_1 == 0x454e && (char)param_1[1] == 'S') {
    return 0;
  }
  if (*param_1 == 0x4446 && (char)param_1[1] == 'S') {
    return 3;
  }
  uVar5 = param_2 % 0xffdc;
  if (((param_2 < 0xe) || (uVar5 != 0 && (param_2 & 0xffff) != 0)) || ((char)*param_1 != '\x01')) {
LAB_036722c4:
    if (param_2 < 0x18) {
      return 7;
    }
  }
  else {
    if (uVar5 == 0) {
      if (param_2 < 0x4b) goto LAB_036722c4;
      if (((char)param_1[0x1c] != '\x02') || ((char)param_1[0x1d] != '\x03')) goto LAB_036722cc;
      lVar6 = 0x4a;
    }
    else {
      if ((param_2 < 0x51) || ((param_2 & 0xffff) != 0)) goto LAB_036722c4;
      if (((char)param_1[0x1d] != '\x02') || ((char)param_1[0x1f] != '\x03')) goto LAB_036722cc;
      lVar6 = 0x50;
    }
    if (*(char *)((long)param_1 + lVar6) == '\x04') {
      uVar4 = 5;
      if (uVar5 == 0) {
        uVar4 = 2;
      }
      return uVar4;
    }
  }
LAB_036722cc:
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 < param_2) {
    uVar2 = *(uint *)(param_1 + 6);
    if (uVar2 <= uVar1) {
      return 7;
    }
    if (param_2 <= uVar2) {
      return 7;
    }
    __s1 = (char *)((long)param_1 + (ulong)uVar1);
    iVar3 = strcmp(__s1,"NES");
    if (iVar3 == 0) {
      return 1;
    }
    iVar3 = FUN_0367239c(__s1,uVar2 - uVar1);
    if (iVar3 == 0) {
      return 4;
    }
    if (iVar3 == 1) {
      return 6;
    }
  }
  return 7;
}


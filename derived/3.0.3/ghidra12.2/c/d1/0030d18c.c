
undefined8 FUN_0030d18c(long *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = param_1[6];
  cVar1 = *(char *)((long)param_1 + 0x31);
  cVar2 = *(char *)((long)param_1 + 0x32);
  cVar3 = *(char *)((long)param_1 + 0x33);
  cVar4 = *(char *)((long)param_1 + 0x35);
  cVar5 = *(char *)((long)param_1 + 0x34);
  if ((cVar4 == '\0' && cVar5 == '\0') &&
      ((cVar3 == '\0' && cVar2 == '\0') && (cVar1 == '\0' && (char)lVar6 == '\0'))) {
    if (*(uint *)(param_1 + 0xc5) != 0) {
      return 1;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0xc5) & 1) != 0) {
      return 1;
    }
    uVar7 = (**(code **)(*param_1 + 0x38))(param_1,1);
    if (((uVar7 & 1) != 0) || ((int)param_1[0xc5] != 0)) {
      return 0;
    }
  }
  uVar7 = (**(code **)(*param_1 + 0x38))(param_1,1);
  if (((uVar7 & 1) == 0) &&
     ((cVar4 == '\0' && cVar5 == '\0') &&
      ((cVar3 == '\0' && cVar2 == '\0') && (cVar1 == '\0' && (char)lVar6 == '\0')))) {
    return 0;
  }
  return 1;
}


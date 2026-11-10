
undefined8 FUN_00165ac4(long *param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_2e0 [672];
  
  if (((int)param_1[0x2f] == 2) && (*(char *)((long)param_1 + (long)param_2 + 0x418) == '\0')) {
    pcVar1 = (char *)((long)param_1 + (long)param_2 + 0x418);
    uVar4 = FUN_00144178(param_1,param_2,pcVar1);
    if ((int)uVar4 != 0) {
      *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) | 1;
      return uVar4;
    }
    if (*pcVar1 == '\0') {
      return 0;
    }
  }
  if (((*(uint *)((long)param_1 + 0x41c) ^ 0xffffffff) & 0x4020) != 0) {
    return 0;
  }
  lVar5 = *param_1;
  uVar4 = *(undefined8 *)(lVar5 + 0x1e8);
  memset(auStack_2e0,0,0x2a0);
  *(undefined1 **)(lVar5 + 0x1e8) = auStack_2e0;
  FUN_00158f30(param_1,0);
  if ((*(uint *)((long)param_1 + 0x41c) >> 2 & 1) == 0) {
    if (param_2 == 1) {
      lVar5 = param_1[0x1d];
LAB_00165b5c:
      uVar3 = (uint)*(ushort *)(param_1 + 0x34);
      goto LAB_00165ba0;
    }
    lVar5 = param_1[0x1a];
  }
  else {
    lVar5 = param_1[0x20];
    if (param_2 == 1) goto LAB_00165b5c;
  }
  if ((*(uint *)((long)param_1 + 0x41c) >> 3 & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 0x33);
  }
  else {
    uVar3 = *(uint *)((long)param_1 + 0x19c);
  }
LAB_00165ba0:
  uVar2 = FUN_00165bf0(param_1,param_2,lVar5,uVar3);
  *(undefined8 *)(*param_1 + 0x1e8) = uVar4;
  if ((int)uVar2 == 0) {
    FUN_00143300(param_1[0x8f]);
    param_1[0x8f] = 0;
    return 0;
  }
  return uVar2;
}


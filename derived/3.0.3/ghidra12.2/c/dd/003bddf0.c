
undefined8 FUN_003bddf0(long *param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  
  if (*(char *)((long)param_1 + 9) == '\0') {
    return 0;
  }
  if ((short)param_1[0x27] < *(short *)((long)param_1 + 0x136)) {
    *(short *)(param_1 + 0x27) = (short)param_1[0x27] + 1;
    sVar2 = *(short *)((long)param_1 + 0x13e);
    if (*(short *)((long)param_1 + 0x13c) <= sVar2) goto LAB_003bde2c;
LAB_003bdeb4:
    *(short *)((long)param_1 + 0x13e) = sVar2 + 1;
    sVar2 = *(short *)((long)param_1 + 0x144);
    if (*(short *)((long)param_1 + 0x142) <= sVar2) goto LAB_003bde3c;
LAB_003bdecc:
    *(short *)((long)param_1 + 0x144) = sVar2 + 1;
    sVar2 = *(short *)((long)param_1 + 0x14a);
    if ((short)param_1[0x29] <= sVar2) goto LAB_003bde4c;
LAB_003bdee4:
    *(short *)((long)param_1 + 0x14a) = sVar2 + 1;
    sVar2 = (short)param_1[0x2a];
    if (sVar2 < *(short *)((long)param_1 + 0x14e)) {
LAB_003bdefc:
      *(short *)(param_1 + 0x2a) = sVar2 + 1;
      cVar1 = (char)param_1[0x25];
      goto joined_r0x003bdf08;
    }
  }
  else {
    sVar2 = *(short *)((long)param_1 + 0x13e);
    if (sVar2 < *(short *)((long)param_1 + 0x13c)) goto LAB_003bdeb4;
LAB_003bde2c:
    sVar2 = *(short *)((long)param_1 + 0x144);
    if (sVar2 < *(short *)((long)param_1 + 0x142)) goto LAB_003bdecc;
LAB_003bde3c:
    sVar2 = *(short *)((long)param_1 + 0x14a);
    if (sVar2 < (short)param_1[0x29]) goto LAB_003bdee4;
LAB_003bde4c:
    sVar2 = (short)param_1[0x2a];
    if (sVar2 < *(short *)((long)param_1 + 0x14e)) goto LAB_003bdefc;
  }
  cVar1 = (char)param_1[0x25];
joined_r0x003bdf08:
  if (cVar1 == '\0') {
    iVar3 = *(int *)((long)param_1 + 0x124);
  }
  else {
    if (param_1[0x3c] != 0) {
      return 1;
    }
    *(undefined1 *)(param_1 + 0x25) = 0;
    iVar3 = *(int *)((long)param_1 + 0x124);
  }
  if (iVar3 < 1) {
    if (param_1[0xe] == 0) {
      return 1;
    }
  }
  else {
    *(int *)((long)param_1 + 0x124) = iVar3 + -1;
    if (iVar3 + -1 != 0) {
      return 1;
    }
    if (param_1[0xe] == 0) {
      return 1;
    }
  }
  uVar4 = 0;
  while ((*(int *)((long)param_1 + 0x124) == 0 && (char)param_1[0x25] == '\0' &&
         ((uint)(uVar4 >> 4) < 0x271))) {
    uVar4 = (ulong)((int)uVar4 + 1);
    iVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2 & 1);
    if (iVar3 == 1) {
      return 0xffffffff;
    }
  }
  return 1;
}



void FUN_0363cb50(long param_1,undefined8 param_2,undefined8 *param_3,char *param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  *param_3 = &LAB_0363cec0;
  if ((DAT_04c4a704 & 1) == 0) {
    uVar5 = 0;
joined_r0x0363cbac:
    if ((DAT_04c4a704 >> 1 & 1) == 0) {
      uVar7 = 0;
      uVar6 = (ulong)(DAT_04c4a704 >> 2) & 1;
    }
    else {
      uVar6 = 0;
      if (param_4[1] == '\0') {
        uVar7 = 0;
        goto joined_r0x0363cc30;
      }
      uVar7 = 1;
    }
    uVar1 = (ulong)DAT_04c4a6fc;
    uVar2 = (ulong)DAT_04c4a700;
    if (200 < DAT_04c4a700) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    iVar4 = memcmp((void *)(param_1 + uVar1),&DAT_04c4a56c,uVar2);
    if (iVar4 != 0) goto LAB_0363ceb8;
    memcpy((void *)(param_1 + uVar1),&DAT_04c4a634,uVar2);
  }
  else {
    if (*param_4 != '\0') {
      uVar5 = 1;
      goto joined_r0x0363cbac;
    }
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
joined_r0x0363cc30:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar7;
    param_5[2] = uVar6;
  }
  if ((DAT_04c4a8a0 & 1) == 0) {
    uVar5 = 0;
joined_r0x0363cc68:
    if ((DAT_04c4a8a0 >> 1 & 1) == 0) {
      uVar7 = 0;
      uVar6 = (ulong)(DAT_04c4a8a0 >> 2) & 1;
    }
    else {
      uVar6 = 0;
      if (param_4[1] == '\0') {
        uVar7 = 0;
        goto joined_r0x0363ccec;
      }
      uVar7 = 1;
    }
    uVar1 = (ulong)DAT_04c4a898;
    uVar2 = (ulong)DAT_04c4a89c;
    if (200 < DAT_04c4a89c) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    iVar4 = memcmp((void *)(param_1 + uVar1),&DAT_04c4a708,uVar2);
    if (iVar4 != 0) goto LAB_0363ceb8;
    memcpy((void *)(param_1 + uVar1),&DAT_04c4a7d0,uVar2);
  }
  else {
    if (*param_4 != '\0') {
      uVar5 = 1;
      goto joined_r0x0363cc68;
    }
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
joined_r0x0363ccec:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar7;
    param_5[2] = uVar6;
  }
  if ((DAT_04c4aa3c & 1) == 0) {
    uVar5 = 0;
joined_r0x0363cd24:
    if ((DAT_04c4aa3c >> 1 & 1) == 0) {
      uVar7 = 0;
      uVar6 = (ulong)(DAT_04c4aa3c >> 2) & 1;
    }
    else {
      uVar6 = 0;
      if (param_4[1] == '\0') {
        uVar7 = 0;
        goto joined_r0x0363cda8;
      }
      uVar7 = 1;
    }
    uVar1 = (ulong)DAT_04c4aa34;
    uVar2 = (ulong)DAT_04c4aa38;
    if (200 < DAT_04c4aa38) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    iVar4 = memcmp((void *)(param_1 + uVar1),&DAT_04c4a8a4,uVar2);
    if (iVar4 != 0) goto LAB_0363ceb8;
    memcpy((void *)(param_1 + uVar1),&DAT_04c4a96c,uVar2);
  }
  else {
    if (*param_4 != '\0') {
      uVar5 = 1;
      goto joined_r0x0363cd24;
    }
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
joined_r0x0363cda8:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar7;
    param_5[2] = uVar6;
  }
  if ((DAT_04c4abd8 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    if (*param_4 == '\0') {
      uVar5 = 0;
      uVar7 = 0;
      uVar6 = 0;
      goto joined_r0x0363ceb0;
    }
    uVar5 = 1;
  }
  if ((DAT_04c4abd8 >> 1 & 1) == 0) {
    uVar7 = 0;
    uVar6 = (ulong)(DAT_04c4abd8 >> 2) & 1;
  }
  else {
    uVar6 = 0;
    if (param_4[1] == '\0') {
      uVar7 = 0;
      goto joined_r0x0363ceb0;
    }
    uVar7 = 1;
  }
  uVar1 = (ulong)DAT_04c4abd0;
  uVar2 = (ulong)DAT_04c4abd4;
  if (200 < DAT_04c4abd4) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  iVar4 = memcmp((void *)(param_1 + uVar1),&DAT_04c4aa40,uVar2);
  if (iVar4 != 0) {
LAB_0363ceb8:
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0x8002,0x363ceb8);
    (*pcVar3)();
  }
  memcpy((void *)(param_1 + uVar1),&DAT_04c4ab08,uVar2);
joined_r0x0363ceb0:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar7;
    param_5[2] = uVar6;
  }
  return;
}



void FUN_0363d110(long param_1,undefined8 param_2,undefined8 *param_3,char *param_4,
                 undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  *param_3 = &LAB_0363d7a0;
  if ((DAT_04c4ad74 & 1) == 0) {
    uVar5 = 0;
joined_r0x0363d16c:
    if ((DAT_04c4ad74 >> 1 & 1) == 0) {
      uVar7 = 0;
      uVar6 = (ulong)(DAT_04c4ad74 >> 2) & 1;
    }
    else {
      uVar6 = 0;
      if (param_4[1] == '\0') {
        uVar7 = 0;
        goto joined_r0x0363d1f0;
      }
      uVar7 = 1;
    }
    uVar1 = (ulong)DAT_04c4ad6c;
    uVar2 = (ulong)DAT_04c4ad70;
    if (200 < DAT_04c4ad70) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    iVar4 = memcmp((void *)(param_1 + uVar1),&DAT_04c4abdc,uVar2);
    if (iVar4 != 0) goto LAB_0363d798;
    memcpy((void *)(param_1 + uVar1),&DAT_04c4aca4,uVar2);
  }
  else {
    if (*param_4 != '\0') {
      uVar5 = 1;
      goto joined_r0x0363d16c;
    }
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
joined_r0x0363d1f0:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar7;
    param_5[2] = uVar6;
  }
  if ((DAT_04c4af10 & 1) == 0) {
    uVar5 = 0;
joined_r0x0363d228:
    if ((DAT_04c4af10 >> 1 & 1) == 0) {
      uVar7 = 0;
      uVar6 = (ulong)(DAT_04c4af10 >> 2) & 1;
    }
    else {
      uVar6 = 0;
      if (param_4[1] == '\0') {
        uVar7 = 0;
        goto joined_r0x0363d2ac;
      }
      uVar7 = 1;
    }
    uVar1 = (ulong)DAT_04c4af08;
    uVar2 = (ulong)DAT_04c4af0c;
    if (200 < DAT_04c4af0c) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    iVar4 = memcmp((void *)(param_1 + uVar1),&DAT_04c4ad78,uVar2);
    if (iVar4 != 0) goto LAB_0363d798;
    memcpy((void *)(param_1 + uVar1),&DAT_04c4ae40,uVar2);
  }
  else {
    if (*param_4 != '\0') {
      uVar5 = 1;
      goto joined_r0x0363d228;
    }
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
joined_r0x0363d2ac:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar7;
    param_5[2] = uVar6;
  }
  if ((DAT_04c4b0ac & 1) == 0) {
    uVar5 = 0;
joined_r0x0363d2e4:
    if ((DAT_04c4b0ac >> 1 & 1) == 0) {
      uVar7 = 0;
      uVar6 = (ulong)(DAT_04c4b0ac >> 2) & 1;
    }
    else {
      uVar6 = 0;
      if (param_4[1] == '\0') {
        uVar7 = 0;
        goto joined_r0x0363d368;
      }
      uVar7 = 1;
    }
    uVar1 = (ulong)DAT_04c4b0a4;
    uVar2 = (ulong)DAT_04c4b0a8;
    if (200 < DAT_04c4b0a8) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    iVar4 = memcmp((void *)(param_1 + uVar1),&DAT_04c4af14,uVar2);
    if (iVar4 != 0) goto LAB_0363d798;
    memcpy((void *)(param_1 + uVar1),&DAT_04c4afdc,uVar2);
  }
  else {
    if (*param_4 != '\0') {
      uVar5 = 1;
      goto joined_r0x0363d2e4;
    }
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
joined_r0x0363d368:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar7;
    param_5[2] = uVar6;
  }
  if ((DAT_04c4b248 & 1) == 0) {
    uVar5 = 0;
joined_r0x0363d3a0:
    if ((DAT_04c4b248 >> 1 & 1) == 0) {
      uVar7 = 0;
      uVar6 = (ulong)(DAT_04c4b248 >> 2) & 1;
    }
    else {
      uVar6 = 0;
      if (param_4[1] == '\0') {
        uVar7 = 0;
        goto joined_r0x0363d424;
      }
      uVar7 = 1;
    }
    uVar1 = (ulong)DAT_04c4b240;
    uVar2 = (ulong)DAT_04c4b244;
    if (200 < DAT_04c4b244) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    iVar4 = memcmp((void *)(param_1 + uVar1),&DAT_04c4b0b0,uVar2);
    if (iVar4 != 0) goto LAB_0363d798;
    memcpy((void *)(param_1 + uVar1),&DAT_04c4b178,uVar2);
  }
  else {
    if (*param_4 != '\0') {
      uVar5 = 1;
      goto joined_r0x0363d3a0;
    }
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
joined_r0x0363d424:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar7;
    param_5[2] = uVar6;
  }
  if ((DAT_04c4b3e4 & 1) == 0) {
    uVar5 = 0;
joined_r0x0363d45c:
    if ((DAT_04c4b3e4 >> 1 & 1) == 0) {
      uVar7 = 0;
      uVar6 = (ulong)(DAT_04c4b3e4 >> 2) & 1;
    }
    else {
      uVar6 = 0;
      if (param_4[1] == '\0') {
        uVar7 = 0;
        goto joined_r0x0363d4e0;
      }
      uVar7 = 1;
    }
    uVar1 = (ulong)DAT_04c4b3dc;
    uVar2 = (ulong)DAT_04c4b3e0;
    if (200 < DAT_04c4b3e0) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    iVar4 = memcmp((void *)(param_1 + uVar1),&DAT_04c4b24c,uVar2);
    if (iVar4 != 0) goto LAB_0363d798;
    memcpy((void *)(param_1 + uVar1),&DAT_04c4b314,uVar2);
  }
  else {
    if (*param_4 != '\0') {
      uVar5 = 1;
      goto joined_r0x0363d45c;
    }
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
joined_r0x0363d4e0:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar7;
    param_5[2] = uVar6;
  }
  if ((DAT_04c4b580 & 1) == 0) {
    uVar5 = 0;
joined_r0x0363d518:
    if ((DAT_04c4b580 >> 1 & 1) == 0) {
      uVar7 = 0;
      uVar6 = (ulong)(DAT_04c4b580 >> 2) & 1;
    }
    else {
      uVar6 = 0;
      if (param_4[1] == '\0') {
        uVar7 = 0;
        goto joined_r0x0363d59c;
      }
      uVar7 = 1;
    }
    uVar1 = (ulong)DAT_04c4b578;
    uVar2 = (ulong)DAT_04c4b57c;
    if (200 < DAT_04c4b57c) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    iVar4 = memcmp((void *)(param_1 + uVar1),&DAT_04c4b3e8,uVar2);
    if (iVar4 != 0) goto LAB_0363d798;
    memcpy((void *)(param_1 + uVar1),&DAT_04c4b4b0,uVar2);
  }
  else {
    if (*param_4 != '\0') {
      uVar5 = 1;
      goto joined_r0x0363d518;
    }
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
joined_r0x0363d59c:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar7;
    param_5[2] = uVar6;
  }
  if ((DAT_04c4b71c & 1) == 0) {
    uVar5 = 0;
joined_r0x0363d5d4:
    if ((DAT_04c4b71c >> 1 & 1) == 0) {
      uVar7 = 0;
      uVar6 = (ulong)(DAT_04c4b71c >> 2) & 1;
    }
    else {
      uVar6 = 0;
      if (param_4[1] == '\0') {
        uVar7 = 0;
        goto joined_r0x0363d658;
      }
      uVar7 = 1;
    }
    uVar1 = (ulong)DAT_04c4b714;
    uVar2 = (ulong)DAT_04c4b718;
    if (200 < DAT_04c4b718) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    iVar4 = memcmp((void *)(param_1 + uVar1),&DAT_04c4b584,uVar2);
    if (iVar4 != 0) goto LAB_0363d798;
    memcpy((void *)(param_1 + uVar1),&DAT_04c4b64c,uVar2);
  }
  else {
    if (*param_4 != '\0') {
      uVar5 = 1;
      goto joined_r0x0363d5d4;
    }
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
  }
joined_r0x0363d658:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar7;
    param_5[2] = uVar6;
  }
  if ((DAT_04c4b8b8 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    if (*param_4 == '\0') {
      uVar5 = 0;
      uVar7 = 0;
      uVar6 = 0;
      goto joined_r0x0363d790;
    }
    uVar5 = 1;
  }
  if ((DAT_04c4b8b8 >> 1 & 1) == 0) {
    uVar7 = 0;
    uVar6 = (ulong)(DAT_04c4b8b8 >> 2) & 1;
  }
  else {
    uVar6 = 0;
    if (param_4[1] == '\0') {
      uVar7 = 0;
      goto joined_r0x0363d790;
    }
    uVar7 = 1;
  }
  uVar1 = (ulong)DAT_04c4b8b0;
  uVar2 = (ulong)DAT_04c4b8b4;
  if (200 < DAT_04c4b8b4) {
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  iVar4 = memcmp((void *)(param_1 + uVar1),&DAT_04c4b720,uVar2);
  if (iVar4 != 0) {
LAB_0363d798:
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0x8002,0x363d798);
    (*pcVar3)();
  }
  memcpy((void *)(param_1 + uVar1),&DAT_04c4b7e8,uVar2);
joined_r0x0363d790:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar5;
    param_5[1] = uVar7;
    param_5[2] = uVar6;
  }
  return;
}


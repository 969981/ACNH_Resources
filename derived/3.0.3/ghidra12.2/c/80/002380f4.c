
int FUN_002380f4(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  byte local_34;
  byte local_33;
  
  memcpy(&local_34,(void *)(param_3 + 0x5fc),4);
  if (*(int *)(param_3 + 0x5fc) == -1) {
    memset(&local_34,0xff,4);
    lVar2 = FUN_002ba790(DAT_04c61168);
    lVar2 = *(long *)(lVar2 + 0x98);
  }
  else {
    lVar2 = FUN_002ba790(DAT_04c61168);
    lVar2 = *(long *)(lVar2 + 0x98);
  }
  if (lVar2 == 0) {
    return 0;
  }
  cVar1 = *(char *)(lVar2 + 0x38);
  if (cVar1 == '\0') {
    iVar4 = 0;
LAB_002381f0:
    if ((local_34 >> 1 & 1) != 0) {
      uVar3 = FUN_0021fea0(param_1 + 0x40);
      if ((uVar3 & 1) != 0) {
        FUN_0021f54c(param_2,param_1 + 0x40);
        iVar4 = iVar4 + 1;
        param_2 = param_2 + 0x20;
      }
    }
    if (cVar1 != '\x02') goto LAB_00238228;
LAB_00238260:
    lVar2 = param_2;
    if ((local_34 >> 3 & 1) != 0) {
      uVar3 = FUN_0021fea0(param_1 + 0x80);
      if ((uVar3 & 1) != 0) {
        lVar2 = param_2 + 0x20;
        FUN_0021f54c(param_2,param_1 + 0x80);
        iVar4 = iVar4 + 1;
      }
    }
    lVar5 = lVar2;
    if (cVar1 != '\x04') goto LAB_00238298;
LAB_002382d0:
    lVar2 = lVar5;
    if ((local_34 >> 5 & 1) != 0) {
      uVar3 = FUN_0021fea0(param_1 + 0xc0);
      if ((uVar3 & 1) != 0) {
        lVar2 = lVar5 + 0x20;
        FUN_0021f54c(lVar5,param_1 + 0xc0);
        iVar4 = iVar4 + 1;
      }
    }
    lVar5 = lVar2;
    if (cVar1 != '\x06') goto LAB_00238308;
LAB_00238340:
    lVar2 = lVar5;
    if ((char)local_34 < '\0') {
      uVar3 = FUN_0021fea0(param_1 + 0x100);
      if ((uVar3 & 1) != 0) {
        lVar2 = lVar5 + 0x20;
        FUN_0021f54c(lVar5,param_1 + 0x100);
        iVar4 = iVar4 + 1;
      }
    }
    lVar5 = lVar2;
    if (cVar1 != '\b') goto LAB_00238378;
LAB_002383b0:
    lVar2 = lVar5;
    if ((local_33 >> 1 & 1) != 0) {
      uVar3 = FUN_0021fea0(param_1 + 0x140);
      if ((uVar3 & 1) != 0) {
        lVar2 = lVar5 + 0x20;
        FUN_0021f54c(lVar5,param_1 + 0x140);
        iVar4 = iVar4 + 1;
      }
    }
    lVar5 = lVar2;
    if (cVar1 != '\n') goto LAB_002383e8;
LAB_00238420:
    lVar2 = lVar5;
    if ((local_33 >> 3 & 1) != 0) {
      uVar3 = FUN_0021fea0(param_1 + 0x180);
      if ((uVar3 & 1) != 0) {
        lVar2 = lVar5 + 0x20;
        FUN_0021f54c(lVar5,param_1 + 0x180);
        iVar4 = iVar4 + 1;
      }
    }
    lVar5 = lVar2;
    if (cVar1 != '\f') goto LAB_00238458;
LAB_00238490:
    lVar2 = lVar5;
    if ((local_33 >> 5 & 1) != 0) {
      uVar3 = FUN_0021fea0(param_1 + 0x1c0);
      if ((uVar3 & 1) != 0) {
        lVar2 = lVar5 + 0x20;
        FUN_0021f54c(lVar5,param_1 + 0x1c0);
        iVar4 = iVar4 + 1;
      }
    }
    lVar5 = lVar2;
    if (cVar1 == '\x0e') goto LAB_00238500;
  }
  else {
    if (cVar1 == -3) {
      return 0;
    }
    if ((local_34 & 1) == 0) {
LAB_002381e4:
      iVar4 = 0;
    }
    else {
      uVar3 = FUN_0021fea0(param_1 + 0x20);
      if ((uVar3 & 1) == 0) goto LAB_002381e4;
      FUN_0021f54c(param_2,param_1 + 0x20);
      iVar4 = 1;
      param_2 = param_2 + 0x20;
    }
    if (cVar1 != '\x01') goto LAB_002381f0;
LAB_00238228:
    lVar2 = param_2;
    if ((local_34 >> 2 & 1) != 0) {
      uVar3 = FUN_0021fea0(param_1 + 0x60);
      if ((uVar3 & 1) != 0) {
        lVar2 = param_2 + 0x20;
        FUN_0021f54c(param_2,param_1 + 0x60);
        iVar4 = iVar4 + 1;
      }
    }
    param_2 = lVar2;
    if (cVar1 != '\x03') goto LAB_00238260;
LAB_00238298:
    lVar5 = lVar2;
    if ((local_34 >> 4 & 1) != 0) {
      uVar3 = FUN_0021fea0(param_1 + 0xa0);
      if ((uVar3 & 1) != 0) {
        lVar5 = lVar2 + 0x20;
        FUN_0021f54c(lVar2,param_1 + 0xa0);
        iVar4 = iVar4 + 1;
      }
    }
    lVar2 = lVar5;
    if (cVar1 != '\x05') goto LAB_002382d0;
LAB_00238308:
    lVar5 = lVar2;
    if ((local_34 >> 6 & 1) != 0) {
      uVar3 = FUN_0021fea0(param_1 + 0xe0);
      if ((uVar3 & 1) != 0) {
        lVar5 = lVar2 + 0x20;
        FUN_0021f54c(lVar2,param_1 + 0xe0);
        iVar4 = iVar4 + 1;
      }
    }
    lVar2 = lVar5;
    if (cVar1 != '\a') goto LAB_00238340;
LAB_00238378:
    lVar5 = lVar2;
    if ((local_33 & 1) != 0) {
      uVar3 = FUN_0021fea0(param_1 + 0x120);
      if ((uVar3 & 1) != 0) {
        lVar5 = lVar2 + 0x20;
        FUN_0021f54c(lVar2,param_1 + 0x120);
        iVar4 = iVar4 + 1;
      }
    }
    lVar2 = lVar5;
    if (cVar1 != '\t') goto LAB_002383b0;
LAB_002383e8:
    lVar5 = lVar2;
    if ((local_33 >> 2 & 1) != 0) {
      uVar3 = FUN_0021fea0(param_1 + 0x160);
      if ((uVar3 & 1) != 0) {
        lVar5 = lVar2 + 0x20;
        FUN_0021f54c(lVar2,param_1 + 0x160);
        iVar4 = iVar4 + 1;
      }
    }
    lVar2 = lVar5;
    if (cVar1 != '\v') goto LAB_00238420;
LAB_00238458:
    lVar5 = lVar2;
    if ((local_33 >> 4 & 1) != 0) {
      uVar3 = FUN_0021fea0(param_1 + 0x1a0);
      if ((uVar3 & 1) != 0) {
        lVar5 = lVar2 + 0x20;
        FUN_0021f54c(lVar2,param_1 + 0x1a0);
        iVar4 = iVar4 + 1;
      }
    }
    lVar2 = lVar5;
    if (cVar1 != '\r') goto LAB_00238490;
  }
  lVar5 = lVar2;
  if ((local_33 >> 6 & 1) != 0) {
    uVar3 = FUN_0021fea0(param_1 + 0x1e0);
    if ((uVar3 & 1) != 0) {
      lVar5 = lVar2 + 0x20;
      FUN_0021f54c(lVar2,param_1 + 0x1e0);
      iVar4 = iVar4 + 1;
    }
  }
  if (cVar1 == '\x0f') {
    return iVar4;
  }
LAB_00238500:
  if ((char)local_33 < '\0') {
    uVar3 = FUN_0021fea0(param_1 + 0x200);
    if ((uVar3 & 1) != 0) {
      FUN_0021f54c(lVar5,param_1 + 0x200);
      return iVar4 + 1;
    }
  }
  return iVar4;
}


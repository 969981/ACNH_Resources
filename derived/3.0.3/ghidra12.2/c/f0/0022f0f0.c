
undefined8 FUN_0022f0f0(void)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  
  bVar1 = FUN_0026bfe0(DAT_04c603c8);
  if (0x1f < bVar1) {
    return 0xfd;
  }
  bVar2 = FUN_0026be6c(DAT_04c603c8);
  if (bVar1 != bVar2) {
    return 0xfd;
  }
  if (bVar1 == 0) {
    uVar3 = FUN_00269a70(DAT_04c603c8,1);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
LAB_0022f198:
    uVar3 = FUN_00269a70(DAT_04c603c8,2);
    if ((uVar3 & 1) != 0) {
      return 2;
    }
    if (bVar1 == 3) goto LAB_0022f1b8;
    uVar3 = FUN_00269a70(DAT_04c603c8,3);
    if ((uVar3 & 1) != 0) {
      return 3;
    }
    if (bVar1 != 4) goto LAB_0022f1b8;
    uVar3 = FUN_00269a70(DAT_04c603c8,5);
    if ((uVar3 & 1) != 0) {
      return 5;
    }
LAB_0022f244:
    uVar3 = FUN_00269a70(DAT_04c603c8,6);
    if ((uVar3 & 1) != 0) {
      return 6;
    }
    if (bVar1 == 7) goto LAB_0022f29c;
    uVar3 = FUN_00269a70(DAT_04c603c8,7);
    if ((uVar3 & 1) != 0) {
      return 7;
    }
    if (bVar1 != 8) goto LAB_0022f29c;
    uVar3 = FUN_00269a70(DAT_04c603c8,9);
    if ((uVar3 & 1) != 0) {
      return 9;
    }
LAB_0022f2bc:
    uVar3 = FUN_00269a70(DAT_04c603c8,10);
    if ((uVar3 & 1) != 0) {
      return 10;
    }
    if (bVar1 == 0xb) goto LAB_0022f348;
    uVar3 = FUN_00269a70(DAT_04c603c8,0xb);
    if ((uVar3 & 1) != 0) {
      return 0xb;
    }
    if (bVar1 != 0xc) goto LAB_0022f348;
    uVar3 = FUN_00269a70(DAT_04c603c8,0xd);
    if ((uVar3 & 1) != 0) {
      return 0xd;
    }
LAB_0022f3a0:
    uVar3 = FUN_00269a70(DAT_04c603c8,0xe);
    if ((uVar3 & 1) != 0) {
      return 0xe;
    }
    if (bVar1 == 0xf) goto LAB_0022f3f8;
    uVar3 = FUN_00269a70(DAT_04c603c8,0xf);
    if ((uVar3 & 1) != 0) {
      return 0xf;
    }
    if (bVar1 != 0x10) goto LAB_0022f3f8;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x11);
    if ((uVar3 & 1) != 0) {
      return 0x11;
    }
LAB_0022f450:
    uVar3 = FUN_00269a70(DAT_04c603c8,0x12);
    if ((uVar3 & 1) != 0) {
      return 0x12;
    }
    if (bVar1 == 0x13) goto LAB_0022f4a8;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x13);
    if ((uVar3 & 1) != 0) {
      return 0x13;
    }
    if (bVar1 != 0x14) goto LAB_0022f4a8;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x15);
    if ((uVar3 & 1) != 0) {
      return 0x15;
    }
LAB_0022f500:
    uVar3 = FUN_00269a70(DAT_04c603c8,0x16);
    if ((uVar3 & 1) != 0) {
      return 0x16;
    }
    if (bVar1 == 0x17) goto LAB_0022f520;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x17);
    if ((uVar3 & 1) != 0) {
      return 0x17;
    }
    if (bVar1 != 0x18) goto LAB_0022f520;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x19);
    if ((uVar3 & 1) != 0) {
      return 0x19;
    }
LAB_0022f5ac:
    uVar3 = FUN_00269a70(DAT_04c603c8,0x1a);
    if ((uVar3 & 1) != 0) {
      return 0x1a;
    }
    if (bVar1 == 0x1b) goto LAB_0022f5cc;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x1b);
    if ((uVar3 & 1) != 0) {
      return 0x1b;
    }
    if (bVar1 != 0x1c) goto LAB_0022f5cc;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x1d);
    if ((uVar3 & 1) != 0) {
      return 0x1d;
    }
  }
  else {
    uVar3 = FUN_00269a70(DAT_04c603c8,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    if (bVar1 == 1) goto LAB_0022f198;
    uVar3 = FUN_00269a70(DAT_04c603c8,1);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    if (bVar1 != 2) goto LAB_0022f198;
    uVar3 = FUN_00269a70(DAT_04c603c8,3);
    if ((uVar3 & 1) != 0) {
      return 3;
    }
LAB_0022f1b8:
    uVar3 = FUN_00269a70(DAT_04c603c8,4);
    if ((uVar3 & 1) != 0) {
      return 4;
    }
    if (bVar1 == 5) goto LAB_0022f244;
    uVar3 = FUN_00269a70(DAT_04c603c8,5);
    if ((uVar3 & 1) != 0) {
      return 5;
    }
    if (bVar1 != 6) goto LAB_0022f244;
    uVar3 = FUN_00269a70(DAT_04c603c8,7);
    if ((uVar3 & 1) != 0) {
      return 7;
    }
LAB_0022f29c:
    uVar3 = FUN_00269a70(DAT_04c603c8,8);
    if ((uVar3 & 1) != 0) {
      return 8;
    }
    if (bVar1 == 9) goto LAB_0022f2bc;
    uVar3 = FUN_00269a70(DAT_04c603c8,9);
    if ((uVar3 & 1) != 0) {
      return 9;
    }
    if (bVar1 != 10) goto LAB_0022f2bc;
    uVar3 = FUN_00269a70(DAT_04c603c8,0xb);
    if ((uVar3 & 1) != 0) {
      return 0xb;
    }
LAB_0022f348:
    uVar3 = FUN_00269a70(DAT_04c603c8,0xc);
    if ((uVar3 & 1) != 0) {
      return 0xc;
    }
    if (bVar1 == 0xd) goto LAB_0022f3a0;
    uVar3 = FUN_00269a70(DAT_04c603c8,0xd);
    if ((uVar3 & 1) != 0) {
      return 0xd;
    }
    if (bVar1 != 0xe) goto LAB_0022f3a0;
    uVar3 = FUN_00269a70(DAT_04c603c8,0xf);
    if ((uVar3 & 1) != 0) {
      return 0xf;
    }
LAB_0022f3f8:
    uVar3 = FUN_00269a70(DAT_04c603c8,0x10);
    if ((uVar3 & 1) != 0) {
      return 0x10;
    }
    if (bVar1 == 0x11) goto LAB_0022f450;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x11);
    if ((uVar3 & 1) != 0) {
      return 0x11;
    }
    if (bVar1 != 0x12) goto LAB_0022f450;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x13);
    if ((uVar3 & 1) != 0) {
      return 0x13;
    }
LAB_0022f4a8:
    uVar3 = FUN_00269a70(DAT_04c603c8,0x14);
    if ((uVar3 & 1) != 0) {
      return 0x14;
    }
    if (bVar1 == 0x15) goto LAB_0022f500;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x15);
    if ((uVar3 & 1) != 0) {
      return 0x15;
    }
    if (bVar1 != 0x16) goto LAB_0022f500;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x17);
    if ((uVar3 & 1) != 0) {
      return 0x17;
    }
LAB_0022f520:
    uVar3 = FUN_00269a70(DAT_04c603c8,0x18);
    if ((uVar3 & 1) != 0) {
      return 0x18;
    }
    if (bVar1 == 0x19) goto LAB_0022f5ac;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x19);
    if ((uVar3 & 1) != 0) {
      return 0x19;
    }
    if (bVar1 != 0x1a) goto LAB_0022f5ac;
    uVar3 = FUN_00269a70(DAT_04c603c8,0x1b);
    if ((uVar3 & 1) != 0) {
      return 0x1b;
    }
LAB_0022f5cc:
    uVar3 = FUN_00269a70(DAT_04c603c8,0x1c);
    if ((uVar3 & 1) != 0) {
      return 0x1c;
    }
    if (bVar1 != 0x1d) {
      uVar3 = FUN_00269a70(DAT_04c603c8,0x1d);
      if ((uVar3 & 1) != 0) {
        return 0x1d;
      }
      if (bVar1 == 0x1e) goto LAB_0022f664;
    }
  }
  uVar3 = FUN_00269a70(DAT_04c603c8,0x1e);
  if ((uVar3 & 1) != 0) {
    return 0x1e;
  }
  if (bVar1 == 0x1f) {
    return 0xfd;
  }
LAB_0022f664:
  uVar3 = FUN_00269a70(DAT_04c603c8,0x1f);
  if ((uVar3 & 1) == 0) {
    return 0xfd;
  }
  return 0x1f;
}


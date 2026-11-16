
void FUN_029f9380(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 8);
  uVar6 = *(uint *)(*(long *)PTR_DAT_04bd1e70 + 4);
  lVar3 = *(long *)PTR_DAT_04bb29d0;
  *(undefined4 *)(*(long *)(param_1 + 0x88) + 8) = 0;
  lVar5 = *(long *)(param_1 + 0x88);
  lVar3 = (long)(lVar3 * (lVar4 + (ulong)uVar6) * 5) / 1000;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  uVar6 = 6;
  *(long *)(lVar5 + 0x20) = lVar3;
  do {
    uVar8 = uVar6 - 5;
    uVar7 = uVar8;
    if (*(uint *)(param_1 + 0x80) <= uVar8) {
      uVar7 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x88) + (ulong)uVar7 * 0x80 + 8) = 0;
    if (*(uint *)(param_1 + 0x80) <= uVar8) {
      uVar8 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x88) + (ulong)uVar8 * 0x80;
    *(long *)(lVar4 + 0x20) = lVar3;
    *(uint *)(lVar4 + 0x18) = -(uint)(*(int *)(lVar4 + 0x14) < 1);
    uVar8 = uVar6 - 4;
    uVar7 = uVar8;
    if (*(uint *)(param_1 + 0x80) <= uVar8) {
      uVar7 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x88) + (ulong)uVar7 * 0x80 + 8) = 0;
    if (*(uint *)(param_1 + 0x80) <= uVar8) {
      uVar8 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x88) + (ulong)uVar8 * 0x80;
    *(long *)(lVar4 + 0x20) = lVar3;
    *(uint *)(lVar4 + 0x18) = -(uint)(*(int *)(lVar4 + 0x14) < 1);
    uVar8 = uVar6 - 3;
    uVar7 = uVar8;
    if (*(uint *)(param_1 + 0x80) <= uVar8) {
      uVar7 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x88) + (ulong)uVar7 * 0x80 + 8) = 0;
    if (*(uint *)(param_1 + 0x80) <= uVar8) {
      uVar8 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x88) + (ulong)uVar8 * 0x80;
    *(long *)(lVar4 + 0x20) = lVar3;
    *(uint *)(lVar4 + 0x18) = -(uint)(*(int *)(lVar4 + 0x14) < 1);
    uVar8 = uVar6 - 2;
    uVar7 = uVar8;
    if (*(uint *)(param_1 + 0x80) <= uVar8) {
      uVar7 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x88) + (ulong)uVar7 * 0x80 + 8) = 0;
    if (*(uint *)(param_1 + 0x80) <= uVar8) {
      uVar8 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x88) + (ulong)uVar8 * 0x80;
    *(long *)(lVar4 + 0x20) = lVar3;
    *(uint *)(lVar4 + 0x18) = -(uint)(*(int *)(lVar4 + 0x14) < 1);
    uVar8 = uVar6 - 1;
    uVar7 = uVar8;
    if (*(uint *)(param_1 + 0x80) <= uVar8) {
      uVar7 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x88) + (ulong)uVar7 * 0x80 + 8) = 0;
    if (*(uint *)(param_1 + 0x80) <= uVar8) {
      uVar8 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x88) + (ulong)uVar8 * 0x80;
    *(long *)(lVar4 + 0x20) = lVar3;
    *(uint *)(lVar4 + 0x18) = -(uint)(*(int *)(lVar4 + 0x14) < 1);
    uVar7 = uVar6;
    if (*(uint *)(param_1 + 0x80) <= uVar6) {
      uVar7 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x88) + (ulong)uVar7 * 0x80 + 8) = 0;
    uVar7 = uVar6;
    if (*(uint *)(param_1 + 0x80) <= uVar6) {
      uVar7 = 0;
    }
    uVar6 = uVar6 + 6;
    lVar4 = *(long *)(param_1 + 0x88) + (ulong)uVar7 * 0x80;
    *(long *)(lVar4 + 0x20) = lVar3;
    *(uint *)(lVar4 + 0x18) = -(uint)(*(int *)(lVar4 + 0x14) < 1);
  } while (uVar6 != 0x36);
  lVar4 = 0;
  lVar5 = 0x1880;
  if (*(uint *)(param_1 + 0x80) < 0x32) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x1880;
  if (*(uint *)(param_1 + 0x80) < 0x32) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x1900;
  if (*(uint *)(param_1 + 0x80) < 0x33) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x1900;
  if (*(uint *)(param_1 + 0x80) < 0x33) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x1980;
  if (*(uint *)(param_1 + 0x80) < 0x34) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x1980;
  if (*(uint *)(param_1 + 0x80) < 0x34) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x1a00;
  if (*(uint *)(param_1 + 0x80) < 0x35) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x1a00;
  if (*(uint *)(param_1 + 0x80) < 0x35) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x1a80;
  if (*(uint *)(param_1 + 0x80) < 0x36) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x1a80;
  if (*(uint *)(param_1 + 0x80) < 0x36) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x1b00;
  if (*(uint *)(param_1 + 0x80) < 0x37) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x1b00;
  if (*(uint *)(param_1 + 0x80) < 0x37) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x1b80;
  if (*(uint *)(param_1 + 0x80) < 0x38) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x1b80;
  if (*(uint *)(param_1 + 0x80) < 0x38) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x1c00;
  if (*(uint *)(param_1 + 0x80) < 0x39) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x1c00;
  if (*(uint *)(param_1 + 0x80) < 0x39) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x1c80;
  if (*(uint *)(param_1 + 0x80) < 0x3a) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x1c80;
  if (*(uint *)(param_1 + 0x80) < 0x3a) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x1d00;
  if (*(uint *)(param_1 + 0x80) < 0x3b) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x1d00;
  if (*(uint *)(param_1 + 0x80) < 0x3b) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  do {
    uVar7 = *(uint *)(param_1 + 0x80);
    uVar6 = (uint)lVar4 + 0x3b;
    lVar5 = *(long *)(param_1 + 0x88);
    if ((uint)lVar4 < 0x10) {
      uVar8 = uVar6;
      if (uVar7 <= uVar6) {
        uVar8 = 0;
      }
      *(undefined4 *)(lVar5 + (ulong)uVar8 * 0x80 + 8) = (&DAT_0417e368)[lVar4];
      uVar7 = *(uint *)(param_1 + 0x80);
      lVar5 = *(long *)(param_1 + 0x88);
    }
    lVar4 = lVar4 + 1;
    if (uVar7 <= uVar6) {
      uVar6 = 0;
    }
    lVar5 = lVar5 + (ulong)uVar6 * 0x80;
    *(long *)(lVar5 + 0x20) = lVar3;
    *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  } while ((int)lVar4 != 0x10);
  lVar4 = 0;
  do {
    uVar7 = *(uint *)(param_1 + 0x80);
    uVar6 = (uint)lVar4 + 0x4b;
    lVar5 = *(long *)(param_1 + 0x88);
    if ((uint)lVar4 < 0xe) {
      uVar8 = uVar6;
      if (uVar7 <= uVar6) {
        uVar8 = 0;
      }
      *(undefined4 *)(lVar5 + (ulong)uVar8 * 0x80 + 8) = (&DAT_0417e3a8)[lVar4];
      uVar7 = *(uint *)(param_1 + 0x80);
      lVar5 = *(long *)(param_1 + 0x88);
    }
    lVar4 = lVar4 + 1;
    if (uVar7 <= uVar6) {
      uVar6 = 0;
    }
    lVar5 = lVar5 + (ulong)uVar6 * 0x80;
    *(long *)(lVar5 + 0x20) = lVar3;
    *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  } while ((int)lVar4 != 0xe);
  lVar4 = 0;
  lVar5 = 0x2c80;
  if (*(uint *)(param_1 + 0x80) < 0x5a) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0x11;
  lVar5 = 0x2c80;
  if (*(uint *)(param_1 + 0x80) < 0x5a) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x2d00;
  if (*(uint *)(param_1 + 0x80) < 0x5b) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0x11;
  lVar5 = 0x2d00;
  if (*(uint *)(param_1 + 0x80) < 0x5b) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x2d80;
  if (*(uint *)(param_1 + 0x80) < 0x5c) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0x11;
  lVar5 = 0x2d80;
  if (*(uint *)(param_1 + 0x80) < 0x5c) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x2e00;
  if (*(uint *)(param_1 + 0x80) < 0x5d) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0x11;
  lVar5 = 0x2e00;
  if (*(uint *)(param_1 + 0x80) < 0x5d) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x2e80;
  if (*(uint *)(param_1 + 0x80) < 0x5e) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0x11;
  lVar5 = 0x2e80;
  if (*(uint *)(param_1 + 0x80) < 0x5e) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x2f00;
  if (*(uint *)(param_1 + 0x80) < 0x5f) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0x11;
  lVar5 = 0x2f00;
  if (*(uint *)(param_1 + 0x80) < 0x5f) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x2f80;
  if (*(uint *)(param_1 + 0x80) < 0x60) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x2f80;
  if (*(uint *)(param_1 + 0x80) < 0x60) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x3000;
  if (*(uint *)(param_1 + 0x80) < 0x61) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x3000;
  if (*(uint *)(param_1 + 0x80) < 0x61) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x3080;
  if (*(uint *)(param_1 + 0x80) < 0x62) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0x22;
  lVar5 = 0x3080;
  if (*(uint *)(param_1 + 0x80) < 0x62) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x3100;
  if (*(uint *)(param_1 + 0x80) < 99) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 10;
  lVar5 = 0x3100;
  if (*(uint *)(param_1 + 0x80) < 99) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x3180;
  if (*(uint *)(param_1 + 0x80) < 100) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0xf;
  lVar5 = 0x3180;
  if (*(uint *)(param_1 + 0x80) < 100) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x3200;
  if (*(uint *)(param_1 + 0x80) < 0x65) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0x23;
  lVar5 = 0x3200;
  if (*(uint *)(param_1 + 0x80) < 0x65) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x3280;
  if (*(uint *)(param_1 + 0x80) < 0x66) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0x24;
  lVar5 = 0x3280;
  if (*(uint *)(param_1 + 0x80) < 0x66) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x3300;
  if (*(uint *)(param_1 + 0x80) < 0x67) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0x25;
  lVar5 = 0x3300;
  if (*(uint *)(param_1 + 0x80) < 0x67) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x3380;
  if (*(uint *)(param_1 + 0x80) < 0x68) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x3380;
  if (*(uint *)(param_1 + 0x80) < 0x68) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x3400;
  if (*(uint *)(param_1 + 0x80) < 0x69) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0x28;
  lVar5 = 0x3400;
  if (*(uint *)(param_1 + 0x80) < 0x69) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x3480;
  if (*(uint *)(param_1 + 0x80) < 0x6a) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x3480;
  if (*(uint *)(param_1 + 0x80) < 0x6a) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x3500;
  if (*(uint *)(param_1 + 0x80) < 0x6b) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x3500;
  if (*(uint *)(param_1 + 0x80) < 0x6b) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  lVar5 = 0x3580;
  if (*(uint *)(param_1 + 0x80) < 0x6c) {
    lVar5 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 + 8) = 0;
  lVar5 = 0x3580;
  if (*(uint *)(param_1 + 0x80) < 0x6c) {
    lVar5 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x88) + lVar5;
  *(long *)(lVar5 + 0x20) = lVar3;
  *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  uVar6 = 0x6e;
  do {
    uVar8 = *(uint *)(param_1 + 0x80);
    uVar7 = uVar6 - 2;
    uVar2 = (uint)lVar4;
    lVar5 = *(long *)(param_1 + 0x88);
    if (uVar2 < 5) {
      uVar1 = uVar7;
      if (uVar8 <= uVar7) {
        uVar1 = 0;
      }
      *(undefined4 *)(lVar5 + (ulong)uVar1 * 0x80 + 8) = (&DAT_0417e3e0)[lVar4];
      uVar8 = *(uint *)(param_1 + 0x80);
      lVar5 = *(long *)(param_1 + 0x88);
    }
    if (uVar8 <= uVar7) {
      uVar7 = 0;
    }
    lVar5 = lVar5 + (ulong)uVar7 * 0x80;
    *(long *)(lVar5 + 0x20) = lVar3;
    *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
    uVar7 = uVar6 - 1;
    uVar8 = *(uint *)(param_1 + 0x80);
    lVar5 = *(long *)(param_1 + 0x88);
    if (uVar2 < 5) {
      uVar1 = uVar7;
      if (uVar8 <= uVar7) {
        uVar1 = 0;
      }
      *(undefined4 *)(lVar5 + (ulong)uVar1 * 0x80 + 8) = (&DAT_0417e3e0)[lVar4];
      uVar8 = *(uint *)(param_1 + 0x80);
      lVar5 = *(long *)(param_1 + 0x88);
    }
    if (uVar8 <= uVar7) {
      uVar7 = 0;
    }
    lVar5 = lVar5 + (ulong)uVar7 * 0x80;
    *(long *)(lVar5 + 0x20) = lVar3;
    *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
    uVar7 = *(uint *)(param_1 + 0x80);
    lVar5 = *(long *)(param_1 + 0x88);
    if (uVar2 < 5) {
      uVar8 = uVar6;
      if (uVar7 <= uVar6) {
        uVar8 = 0;
      }
      *(undefined4 *)(lVar5 + (ulong)uVar8 * 0x80 + 8) = (&DAT_0417e3e0)[lVar4];
      uVar7 = *(uint *)(param_1 + 0x80);
      lVar5 = *(long *)(param_1 + 0x88);
    }
    lVar4 = lVar4 + 1;
    uVar8 = uVar6;
    if (uVar7 <= uVar6) {
      uVar8 = 0;
    }
    uVar6 = uVar6 + 3;
    lVar5 = lVar5 + (ulong)uVar8 * 0x80;
    *(long *)(lVar5 + 0x20) = lVar3;
    *(uint *)(lVar5 + 0x18) = -(uint)(*(int *)(lVar5 + 0x14) < 1);
  } while ((int)lVar4 != 6);
  lVar4 = 0x3f00;
  if (*(uint *)(param_1 + 0x80) < 0x7f) {
    lVar4 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar4 + 8) = 0x2e;
  lVar4 = 0x3f00;
  if (*(uint *)(param_1 + 0x80) < 0x7f) {
    lVar4 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x88) + lVar4;
  *(long *)(lVar4 + 0x20) = lVar3;
  *(uint *)(lVar4 + 0x18) = -(uint)(*(int *)(lVar4 + 0x14) < 1);
  lVar4 = 0x3f80;
  if (*(uint *)(param_1 + 0x80) < 0x80) {
    lVar4 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar4 + 8) = 0x13;
  lVar4 = 0x3f80;
  if (*(uint *)(param_1 + 0x80) < 0x80) {
    lVar4 = 0;
  }
  lVar4 = *(long *)(param_1 + 0x88) + lVar4;
  *(long *)(lVar4 + 0x20) = lVar3;
  *(uint *)(lVar4 + 0x18) = -(uint)(*(int *)(lVar4 + 0x14) < 1);
  *(undefined4 *)
   (*(long *)(param_1 + 0x88) + (ulong)(0x80 < *(uint *)(param_1 + 0x80)) * 0x4000 + 8) = 0x2e;
  lVar4 = *(long *)(param_1 + 0x88) + (ulong)(0x80 < *(uint *)(param_1 + 0x80)) * 0x4000;
  *(long *)(lVar4 + 0x20) = lVar3;
  *(uint *)(lVar4 + 0x18) = -(uint)(*(int *)(lVar4 + 0x14) < 1);
  return;
}


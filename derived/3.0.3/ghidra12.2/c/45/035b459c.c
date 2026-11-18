
ulong FUN_035b459c(byte *param_1,int param_2)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = 0xff;
  switch(param_2) {
  case 0:
    uVar2 = (ulong)(param_1[0x41] | 0xffffffc0);
    break;
  case 1:
    uVar2 = FUN_03608598(param_1 + 0x2440);
    return uVar2;
  case 2:
    uVar5 = (uint)param_1[0x2449];
    uVar3 = 0x7c;
    if ((param_1[0xcc3] & 4) != 0) {
      uVar3 = 0x7e;
    }
    goto LAB_035b4b98;
  case 4:
    uVar2 = (ulong)param_1[0x2405];
    break;
  case 5:
    uVar2 = (ulong)param_1[0x2406];
    break;
  case 6:
    uVar2 = (ulong)param_1[0x2407];
    break;
  case 7:
    uVar2 = (ulong)(param_1[0x2408] | 0xfffffff8);
    break;
  case 0xf:
    uVar2 = (ulong)(param_1[0x81] | 0xffffffe0);
    break;
  case 0x10:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    uVar2 = (ulong)(param_1[0x133f] | 0xffffff80);
    break;
  case 0x11:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    lVar4 = 0x1545;
    goto LAB_035b4780;
  case 0x12:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    uVar2 = (ulong)param_1[0x1340];
    break;
  case 0x13:
  case 0x18:
  case 0x1b:
  case 0x1d:
  case 0x20:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
      uVar2 = 0xff;
    }
    break;
  case 0x14:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    lVar4 = 0x1534;
    goto LAB_035b48cc;
  case 0x16:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    lVar4 = 0x157d;
LAB_035b4780:
    uVar2 = (ulong)((uint)param_1[lVar4 + -0x200] << 6 | 0x3f);
    break;
  case 0x17:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    uVar2 = (ulong)param_1[0x1378];
    break;
  case 0x19:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    lVar4 = 0x156c;
    goto LAB_035b48cc;
  case 0x1a:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    uVar5 = 0x7f;
    if (param_1[0x1389] != 0) {
      uVar5 = 0xffffffff;
    }
    uVar2 = (ulong)uVar5;
    break;
  case 0x1c:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    uVar2 = (ulong)((uint)param_1[0x13be] << 5 | 0xffffff9f);
    break;
  case 0x1e:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    lVar4 = 0x15a4;
    goto LAB_035b48cc;
  case 0x21:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    uVar2 = (ulong)param_1[0x13ef];
    break;
  case 0x22:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    uVar2 = (ulong)((uint)param_1[0x13f3] << 3 | (uint)param_1[0x13f2] << 4 | param_1[0x13f4] & 7);
    break;
  case 0x23:
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    lVar4 = 0x15e4;
LAB_035b48cc:
    uVar2 = (ulong)((uint)param_1[lVar4 + -0x200] << 6 | 0xffffffbf);
    break;
  case 0x24:
    uVar2 = (ulong)param_1[0x13f8];
    break;
  case 0x25:
    uVar2 = (ulong)param_1[0x13f9];
    break;
  case 0x26:
    FUN_03610e30(param_1 + 0xf00);
    if ((param_1[0x1318] == 0) || (param_1[0x133a] != 0)) {
      uVar5 = *(long *)(param_1 + 0x1320) == *(long *)(param_1 + -0xf0) | 0x70;
    }
    else {
      uVar5 = 0x71;
    }
    uVar3 = 8;
    if (param_1[0x13ea] != 0 || param_1[0x13c8] == 0) {
      uVar3 = 0;
    }
    uVar3 = param_1[0x13fa] & 0xffffff80 | uVar5 | uVar3;
    uVar5 = 4;
    if (param_1[0x13aa] != 0 || param_1[5000] == 0) {
      uVar5 = 0;
    }
    uVar6 = 2;
    if (param_1[0x1372] != 0 || param_1[0x1350] == 0) {
      uVar6 = 0;
    }
    uVar5 = uVar5 | uVar6;
LAB_035b4b98:
    uVar2 = (ulong)(uVar3 | uVar5);
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
    uVar2 = (ulong)(param_2 - 0x30);
    if (*(int *)(param_1 + 0x130c) != 0) {
      FUN_03611480(param_1 + 0xf00);
    }
    if ((param_1[5000] != 0) && (param_1[0x13aa] == 0)) {
      if (param_1[0x13c1] != 0) {
        return 0xff;
      }
      uVar2 = (ulong)(param_1[0x13ac] >> 1) & 0xf;
    }
    uVar2 = (ulong)param_1[uVar2 + 0x13ad];
    break;
  case 0x40:
    uVar2 = (ulong)param_1[0xc0];
    break;
  case 0x41:
    bVar1 = param_1[0xc1];
    uVar5 = bVar1 & 0x7c;
    if ((bVar1 & 3) != 2 || 0xa1 < param_1[-0x3a]) {
      uVar5 = (uint)bVar1;
    }
    uVar2 = (ulong)(uVar5 | 0xffffff80);
    break;
  case 0x42:
    uVar2 = (ulong)param_1[0xc2];
    break;
  case 0x43:
    uVar2 = (ulong)param_1[0xc3];
    break;
  case 0x44:
    uVar2 = (ulong)param_1[0xc4];
    break;
  case 0x45:
    uVar2 = (ulong)param_1[0xc5];
    break;
  case 0x46:
    uVar5 = 0;
    if (param_1[-0x32] != 0 || param_1[-0x12e] != 3) {
      uVar5 = (uint)param_1[-0x40];
    }
    uVar2 = (ulong)uVar5;
    break;
  case 0x47:
    uVar2 = (ulong)param_1[0xc6];
    break;
  case 0x48:
    uVar2 = (ulong)param_1[199];
    break;
  case 0x49:
    uVar2 = (ulong)param_1[200];
    break;
  case 0x4a:
    uVar2 = (ulong)param_1[0xc9];
    break;
  case 0x4b:
    uVar2 = (ulong)param_1[0xca];
    break;
  case 0x4c:
    uVar5 = (uint)param_1[0xcc3];
    if ((param_1[0xcc3] & 4) != 0 || param_1[0xcc0] != 0) {
      uVar5 = 0xffffffff;
    }
    uVar2 = (ulong)uVar5;
    break;
  case 0x4d:
    uVar2 = (ulong)(*param_1 | 0x7e);
    break;
  case 0x4f:
    uVar2 = (ulong)(param_1[0xcc1] | 0xfffffffe);
    break;
  case 0x55:
    uVar2 = (ulong)(param_1[-0x3b] & 0x7f | (uint)(param_1[-0x34] == 0) << 7);
    break;
  case 0x56:
    uVar2 = FUN_035b7cf0(param_1 + 0x3ec0);
    return uVar2;
  case 0x68:
    uVar2 = (ulong)(param_1[0xcb] | 0x40);
    break;
  case 0x69:
    if (((param_1[0xcc3] >> 2 & 1) == 0) && (param_1[0xd1] != 0)) {
      uVar2 = (ulong)param_1[((ulong)param_1[0xcb] & 0x3f) + 0xe6];
    }
    break;
  case 0x6a:
    uVar2 = (ulong)(param_1[0xcc] | 0x40);
    break;
  case 0x6b:
    if (((param_1[0xcc3] >> 2 & 1) == 0) && (param_1[0xd1] != 0)) {
      uVar2 = (ulong)param_1[((ulong)param_1[0xcc] & 0x3f) + 0x12e];
    }
    break;
  case 0x6c:
    uVar5 = param_1[0xcc4] | 0xfffffffe;
    if ((param_1[0xcc3] & 4) != 0) {
      uVar5 = 0xffffffff;
    }
    uVar2 = (ulong)uVar5;
    break;
  case 0x70:
    uVar2 = (ulong)(param_1[0xcc2] | 0xfffffff8);
    break;
  case 0x72:
    if (2 < param_1[-0x12e]) {
      uVar2 = (ulong)param_1[1];
    }
    break;
  case 0x73:
    if (2 < param_1[-0x12e]) {
      uVar2 = (ulong)param_1[2];
    }
    break;
  case 0x74:
    uVar2 = (ulong)param_1[3];
    break;
  case 0x75:
    if (2 < param_1[-0x12e]) {
      uVar2 = (ulong)(param_1[4] | 0xffffff8f);
    }
    break;
  case 0x76:
    uVar2 = FUN_03610eb8(param_1 + 0xf00);
    return uVar2;
  case 0x77:
    uVar2 = FUN_03610fb0(param_1 + 0xf00);
    return uVar2;
  }
  return uVar2;
}


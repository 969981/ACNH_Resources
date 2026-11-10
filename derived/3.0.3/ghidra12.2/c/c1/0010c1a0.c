
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0010c1a0(long param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  
  if (param_1 == 0) {
    return 0xae29;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0x8f29;
  }
  switch(param_3 & 0xff) {
  case 0:
    if (param_4 < 0x135) {
      return 0x9329;
    }
    uVar3 = (param_4 - 0x50) / 0xe5;
    break;
  case 1:
    if (param_4 < 0x74) {
      return 0x9329;
    }
    uVar3 = (param_4 - 0x50) / 0x24;
    break;
  case 2:
    if (param_4 < 0x7a) {
      return 0x9329;
    }
    uVar3 = (param_4 - 0x50) / 0x2a;
    break;
  case 3:
    if (param_4 < 0x1a5) {
      return 0x9329;
    }
    uVar3 = (param_4 - 0x50) / 0x155;
    break;
  case 4:
    if (param_4 < 0xea) {
      return 0x9329;
    }
    uVar3 = (param_4 - 0x50) / 0x9a;
    break;
  default:
    return 0x9629;
  }
  if (uVar3 >> 0xf != 0) {
    return 0x9329;
  }
  iVar2 = param_4 - 0x48;
  *param_2 = 0;
  if ((param_3 & 0xff) == 4) {
    param_2[1] = 0x400;
    uVar5 = 2;
  }
  else {
    uVar5 = 2;
    if ((param_3 & 0xfe) == 2) {
      uVar5 = 3;
    }
    *(undefined1 *)((long)param_2 + 5) = uVar5;
    uVar5 = 2;
    if (1 < (param_3 - 1 & 0xff)) {
      uVar5 = 3;
    }
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined2 *)((long)param_2 + 6) = 0;
  }
  *(undefined1 *)((long)param_2 + 9) = uVar5;
  *(undefined1 *)(param_2 + 2) = 0x80;
  *(char *)(param_2 + 3) = (char)((uint)iVar2 >> 0x18);
  *(char *)((long)param_2 + 0xd) = (char)((uint)iVar2 >> 0x10);
  *(char *)((long)param_2 + 0xf) = (char)iVar2;
  *(char *)((long)param_2 + 0xe) = (char)((uint)iVar2 >> 8);
  *(undefined8 *)(param_2 + 4) = 0x6e0000002c000000;
  *(undefined8 *)(param_2 + 6) = 0x6e000000;
  uVar1 = uVar3 * 4 + 0x4c;
  *(char *)(param_2 + 8) = (char)(uVar1 >> 0x18);
  *(char *)((long)param_2 + 0x21) = (char)(uVar1 >> 0x10);
  *(char *)((long)param_2 + 0x22) = (char)(uVar1 >> 8);
  *(char *)(param_2 + 10) = (char)(uVar3 >> 0x18);
  *(char *)((long)param_2 + 0x29) = (char)(uVar3 >> 0x10);
  *(char *)((long)param_2 + 0x2a) = (char)(uVar3 >> 8);
  *(undefined2 *)((long)param_2 + 10) = 0;
  *(char *)((long)param_2 + 0x23) = (char)uVar1;
  param_2[9] = 0;
  uVar5 = (undefined1)(0x20e12020 >> (ulong)((param_3 - 1 & 3) << 3));
  if (3 < (param_3 - 1 & 0xff)) {
    uVar5 = 0xe1;
  }
  *(char *)((long)param_2 + 0x2b) = (char)uVar3;
  *(undefined2 *)(param_2 + 0xb) = 0;
  *(undefined1 *)((long)param_2 + 0x2e) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined1 *)((long)param_2 + 0x2f) = uVar5;
  if ((param_3 & 0xff) == 4) {
    iVar2 = uVar1 + uVar3 * 0x26;
    *(char *)(param_2 + 0xe) = (char)((uint)iVar2 >> 0x18);
    *(char *)((long)param_2 + 0x39) = (char)((uint)iVar2 >> 0x10);
    *(char *)((long)param_2 + 0x3a) = (char)((uint)iVar2 >> 8);
    *(char *)((long)param_2 + 0x3b) = (char)iVar2;
  }
  else if ((param_3 & 0xff) == 3) {
    lVar4 = (ulong)uVar1 + (ulong)uVar3 * 0xe1;
    *(char *)(param_2 + 0xe) = (char)((ulong)lVar4 >> 0x18);
    *(char *)((long)param_2 + 0x39) = (char)((ulong)lVar4 >> 0x10);
    *(char *)((long)param_2 + 0x3a) = (char)((ulong)lVar4 >> 8);
    *(char *)((long)param_2 + 0x3b) = (char)lVar4;
  }
  else {
    param_2[0xe] = 0;
  }
  iVar2 = uVar3 * 2 + 0x4a;
  param_2[0xf] = 0x48000000;
  *(char *)(param_2 + 0x10) = (char)((uint)iVar2 >> 0x18);
  *(char *)((long)param_2 + 0x41) = (char)((uint)iVar2 >> 0x10);
  *(char *)((long)param_2 + 0x42) = (char)((uint)iVar2 >> 8);
  *(char *)((long)param_2 + 0x43) = (char)iVar2;
  if (((param_3 & 0xff) == 4) || ((param_3 & 0xff) == 2)) {
    iVar2 = uVar1 + uVar3 * 0x20;
    *(char *)(param_2 + 0x11) = (char)((uint)iVar2 >> 0x18);
    *(char *)((long)param_2 + 0x45) = (char)((uint)iVar2 >> 0x10);
    *(char *)((long)param_2 + 0x46) = (char)((uint)iVar2 >> 8);
    *(char *)((long)param_2 + 0x47) = (char)iVar2;
  }
  else {
    param_2[0x11] = 0;
  }
  *(undefined4 *)((long)param_2 + ((ulong)param_4 - 4)) = 0x43444a4e;
  FUN_0011d5a0(param_2);
  FUN_0011bcc0(param_1);
  *param_2 = 0x43444a4e;
  return 0;
}


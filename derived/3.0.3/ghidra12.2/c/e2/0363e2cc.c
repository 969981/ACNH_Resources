
void FUN_0363e2cc(long *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  
  bVar3 = (byte)param_3;
  switch(param_2) {
  case 0x4000:
    lVar4 = param_1[1];
    uVar2 = 0;
    goto LAB_0363e3fc;
  case 0x4001:
    lVar4 = param_1[1];
    uVar2 = 0;
    goto LAB_0363e418;
  case 0x4002:
    lVar4 = param_1[1];
    iVar1 = *(int *)(lVar4 + 0x218c);
    if (iVar1 != 0) {
      uVar2 = FUN_0365c1e0(param_1,lVar4 + 0x204c,iVar1);
      uVar2 = FUN_0365c1e0(uVar2,lVar4 + 0x2098,iVar1);
      uVar2 = FUN_0365c320(uVar2,lVar4 + 0x20e4,iVar1);
      FUN_0365c470(uVar2,lVar4 + 0x2114,iVar1);
      *(undefined4 *)(lVar4 + 0x218c) = 0;
      *(int *)(lVar4 + 0x2038) = *(int *)(lVar4 + 0x2038) + iVar1;
    }
    *(byte *)(lVar4 + 0x2084) = bVar3;
    break;
  case 0x4003:
    lVar4 = param_1[1];
    uVar2 = 0;
    goto LAB_0363e49c;
  case 0x4004:
    lVar4 = param_1[1];
    uVar2 = 1;
LAB_0363e3fc:
    FUN_0365b604(lVar4,uVar2,param_3);
    return;
  case 0x4005:
    lVar4 = param_1[1];
    uVar2 = 1;
LAB_0363e418:
    FUN_0365b6d4(lVar4,uVar2,param_3);
    return;
  case 0x4006:
    lVar4 = param_1[1];
    iVar1 = *(int *)(lVar4 + 0x218c);
    if (iVar1 != 0) {
      uVar2 = FUN_0365c1e0(param_1,lVar4 + 0x204c,iVar1);
      uVar2 = FUN_0365c1e0(uVar2,lVar4 + 0x2098,iVar1);
      uVar2 = FUN_0365c320(uVar2,lVar4 + 0x20e4,iVar1);
      FUN_0365c470(uVar2,lVar4 + 0x2114,iVar1);
      *(undefined4 *)(lVar4 + 0x218c) = 0;
      *(int *)(lVar4 + 0x2038) = *(int *)(lVar4 + 0x2038) + iVar1;
    }
    *(byte *)(lVar4 + 0x20d0) = bVar3;
    break;
  case 0x4007:
    lVar4 = param_1[1];
    uVar2 = 1;
LAB_0363e49c:
    FUN_0365b790(lVar4,uVar2,param_3);
    return;
  case 0x4008:
    lVar4 = param_1[1];
    iVar1 = *(int *)(lVar4 + 0x218c);
    if (iVar1 != 0) {
      uVar2 = FUN_0365c1e0(param_1,lVar4 + 0x204c,iVar1);
      uVar2 = FUN_0365c1e0(uVar2,lVar4 + 0x2098,iVar1);
      uVar2 = FUN_0365c320(uVar2,lVar4 + 0x20e4,iVar1);
      FUN_0365c470(uVar2,lVar4 + 0x2114,iVar1);
      *(undefined4 *)(lVar4 + 0x218c) = 0;
      *(int *)(lVar4 + 0x2038) = *(int *)(lVar4 + 0x2038) + iVar1;
    }
    *(uint *)(lVar4 + 0x20f4) = param_3 & 0x7f;
    bVar3 = (byte)(param_3 >> 7) & 1;
    *(byte *)(lVar4 + 0x20f8) = bVar3;
    *(byte *)(lVar4 + 0x20ed) = bVar3;
    break;
  case 0x4009:
  case 0x400d:
    break;
  case 0x400a:
    lVar4 = param_1[1];
    iVar1 = *(int *)(lVar4 + 0x218c);
    if (iVar1 != 0) {
      uVar2 = FUN_0365c1e0(param_1,lVar4 + 0x204c,iVar1);
      uVar2 = FUN_0365c1e0(uVar2,lVar4 + 0x2098,iVar1);
      uVar2 = FUN_0365c320(uVar2,lVar4 + 0x20e4,iVar1);
      FUN_0365c470(uVar2,lVar4 + 0x2114,iVar1);
      *(undefined4 *)(lVar4 + 0x218c) = 0;
      *(int *)(lVar4 + 0x2038) = *(int *)(lVar4 + 0x2038) + iVar1;
    }
    *(byte *)(lVar4 + 0x2104) = bVar3;
    break;
  case 0x400b:
    FUN_0365b88c(param_1[1],param_3);
    return;
  case 0x400c:
    FUN_0365b970(param_1[1],param_3);
    return;
  case 0x400e:
    lVar4 = param_1[1];
    iVar1 = *(int *)(lVar4 + 0x218c);
    if (iVar1 != 0) {
      uVar2 = FUN_0365c1e0(param_1,lVar4 + 0x204c,iVar1);
      uVar2 = FUN_0365c1e0(uVar2,lVar4 + 0x2098,iVar1);
      uVar2 = FUN_0365c320(uVar2,lVar4 + 0x20e4,iVar1);
      FUN_0365c470(uVar2,lVar4 + 0x2114,iVar1);
      *(undefined4 *)(lVar4 + 0x218c) = 0;
      *(int *)(lVar4 + 0x2038) = *(int *)(lVar4 + 0x2038) + iVar1;
    }
    *(uint *)(lVar4 + 0x213c) = (uint)*(ushort *)(PTR_DAT_04bcaa68 + (ulong)(param_3 & 0xf) * 2);
    *(uint *)(lVar4 + 0x2144) = param_3 >> 7 & 1;
    break;
  case 0x400f:
    FUN_0365ba18(param_1[1],param_3);
    return;
  case 0x4010:
    lVar4 = param_1[1];
    *(uint *)(lVar4 + 0x2170) = (uint)*(ushort *)(PTR_DAT_04bcaa70 + (ulong)(param_3 & 0xf) * 2);
    *(byte *)(lVar4 + 0x2186) = (byte)(param_3 >> 6) & 1;
    *(byte *)(lVar4 + 0x2184) = (byte)(param_3 >> 7) & 1;
    if ((param_3 >> 7 & 1) == 0) {
      *(undefined1 *)(lVar4 + 0x2185) = 0;
    }
    break;
  case 0x4011:
    *(uint *)(param_1[1] + 0x217c) = param_3 & 0x7f;
    break;
  case 0x4012:
    *(uint *)(param_1[1] + 0x2150) = param_3 * 0x40 + 0xc000;
    break;
  case 0x4013:
    *(uint *)(param_1[1] + 0x2154) = param_3 << 4 | 1;
    break;
  case 0x4014:
    lVar4 = *param_1;
    *(uint *)(lVar4 + 0x7c) = param_3 << 8;
    *(undefined1 *)(lVar4 + 0x80) = 1;
    break;
  case 0x4015:
    FUN_0365bbe0(param_1[1],param_3);
    return;
  case 0x4016:
    lVar4 = param_1[2];
    *(uint *)(lVar4 + 0x20) = param_3 & 1;
    if ((param_3 & 1) != 0) {
      *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(lVar4 + 8);
      *(undefined4 *)(lVar4 + 0x10) = 0;
      *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(lVar4 + 0x14);
      *(undefined4 *)(lVar4 + 0x1c) = 0;
    }
    break;
  case 0x4017:
    FUN_0365bcec(param_1[1],param_3);
    return;
  default:
    switch(param_2) {
    case 0x2000:
      lVar4 = *param_1;
      *(uint *)(lVar4 + 0xf330) = param_3;
      *(undefined8 *)(lVar4 + 0xf328) = *(undefined8 *)(lVar4 + 0x70);
      if (*(uint *)(lVar4 + 0x1c) < 7 && (1 << (ulong)(*(uint *)(lVar4 + 0x1c) & 0x1f) & 0x61U) != 0
         ) {
        *(byte *)(lVar4 + 0x39) = bVar3;
      }
      else {
        *(byte *)(lVar4 + 0x39) = bVar3 & 0xfc | *(byte *)(lVar4 + 0x39) & 3;
      }
      *(uint *)(lVar4 + 0x40) =
           *(uint *)(lVar4 + 0x40) & 0xfffff000 |
           *(uint *)(lVar4 + 0x40) & 0x3ff | (param_3 & 3) << 10;
      if ((param_3 >> 7 & 1) == 0) {
        if ((*(uint *)(lVar4 + 100) < *(uint *)(lVar4 + 0x68)) &&
           (*(uint *)(lVar4 + 0x68) <= *(uint *)(lVar4 + 100) + 2)) {
          **(uint **)(lVar4 + 0x88) = **(uint **)(lVar4 + 0x88) & 0xfffffffe;
        }
      }
      break;
    case 0x2001:
      FUN_036483c0(*param_1,param_3);
      return;
    case 0x2002:
      lVar4 = *param_1;
      *(uint *)(lVar4 + 0xf330) = param_3;
      *(undefined8 *)(lVar4 + 0xf328) = *(undefined8 *)(lVar4 + 0x70);
      break;
    case 0x2003:
      lVar4 = *param_1;
      *(uint *)(lVar4 + 0xf330) = param_3;
      *(undefined8 *)(lVar4 + 0xf328) = *(undefined8 *)(lVar4 + 0x70);
      *(uint *)(lVar4 + 0x5c) = param_3 & 0xff;
      break;
    case 0x2004:
      lVar4 = *param_1;
      *(uint *)(lVar4 + 0xf330) = param_3;
      *(undefined8 *)(lVar4 + 0xf328) = *(undefined8 *)(lVar4 + 0x70);
      *(byte *)(*(long *)(*(long *)(lVar4 + 0x90) + 0x28) + (ulong)*(uint *)(lVar4 + 0x5c)) = bVar3;
      *(uint *)(lVar4 + 0x5c) = *(int *)(lVar4 + 0x5c) + 1U & 0xff;
      break;
    case 0x2005:
      lVar4 = *param_1;
      *(uint *)(lVar4 + 0xf330) = param_3;
      *(undefined8 *)(lVar4 + 0xf328) = *(undefined8 *)(lVar4 + 0x70);
      if (*(byte *)(lVar4 + 0x3c) == 0) {
        uVar5 = (param_3 & 7) << 0xc | (param_3 >> 3) << 5 | *(uint *)(lVar4 + 0x40) & 0xc1f;
      }
      else {
        *(byte *)(lVar4 + 0x5a) = bVar3 & 7;
        *(byte *)(lVar4 + 0x59) = bVar3 & 7;
        uVar5 = *(uint *)(lVar4 + 0x40) & 0xffe0 | param_3 >> 3;
      }
      *(uint *)(lVar4 + 0x40) = uVar5;
      *(byte *)(lVar4 + 0x3c) = *(byte *)(lVar4 + 0x3c) ^ 1;
      break;
    case 0x2006:
      lVar4 = *param_1;
      *(uint *)(lVar4 + 0xf330) = param_3;
      *(undefined8 *)(lVar4 + 0xf328) = *(undefined8 *)(lVar4 + 0x70);
      if (*(char *)(lVar4 + 0x3c) == '\0') {
        uVar5 = *(uint *)(lVar4 + 0x40) & 0xff00 | param_3 & 0xff;
        *(undefined1 *)(lVar4 + 0x58) = 1;
        *(uint *)(lVar4 + 0x40) = uVar5;
        *(uint *)(lVar4 + 0x4c) = uVar5;
        bVar3 = 0;
      }
      else {
        *(uint *)(lVar4 + 0x40) = *(uint *)(lVar4 + 0x40) & 0xff | (param_3 & 0x3f) << 8;
        if ((((param_3 >> 4 & 1) == 0) || ((*(byte *)(lVar4 + 0x45) >> 4 & 1) != 0)) ||
           (*(int *)(*(long *)(lVar4 + 0x90) + 0x298) != 4)) {
          bVar3 = 1;
        }
        else {
          FUN_0364d444(*(long *)(lVar4 + 0x90) + 0x1c68);
          bVar3 = *(byte *)(lVar4 + 0x3c);
        }
        *(byte *)(lVar4 + 0x39) = *(byte *)(lVar4 + 0x39) & 0xfc | (byte)(param_3 >> 2) & 3;
      }
      *(byte *)(lVar4 + 0x3c) = bVar3 ^ 1;
      break;
    case 0x2007:
      FUN_036486a4(*param_1,param_3);
      return;
    }
  }
  return;
}


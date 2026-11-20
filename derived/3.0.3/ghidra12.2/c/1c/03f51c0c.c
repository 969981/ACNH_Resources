
uint FUN_03f51c0c(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0xffffffff;
  switch(*(ushort *)(param_1 + 0x207a) & 0x7f) {
  case 1:
    return *(uint *)(param_1 + 0x201c);
  case 2:
    return *(uint *)(param_1 + 0x2018);
  case 3:
    return (uint)*(byte *)(param_1 + 0x2020);
  default:
    goto switchD_03f51c44_caseD_4;
  case 8:
    return *(uint *)(param_1 + 0x2028);
  case 0xc:
    return *(uint *)(param_1 + 0x2034);
  case 0x50:
    return 0;
  case 0x51:
    return 0xffffff;
  case 0x52:
    return 0xff00;
  case 0x53:
    return 0xff0000;
  case 0x54:
    return 0xffff;
  case 0x55:
    return 0xffff00;
  case 0x56:
    return 0x800000;
  case 0x57:
    return 0x7fffff;
  case 0x58:
    return 0x8000;
  case 0x59:
    return 0x7fff;
  case 0x5a:
    return 0xff7fff;
  case 0x5b:
    return 0xffff7f;
  case 0x5c:
    return 0x10000;
  case 0x5d:
    return 0xfeffff;
  case 0x5e:
    return 0x100;
  case 0x5f:
    return 0xfeff;
  case 0x60:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7f80;
    break;
  case 0x61:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7f83;
    break;
  case 0x62:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7f86;
    break;
  case 99:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7f89;
    break;
  case 100:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7f8c;
    break;
  case 0x65:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7f8f;
    break;
  case 0x66:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7f92;
    break;
  case 0x67:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7f95;
    break;
  case 0x68:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7f98;
    break;
  case 0x69:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7f9b;
    break;
  case 0x6a:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7f9e;
    break;
  case 0x6b:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7fa1;
    break;
  case 0x6c:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7fa4;
    break;
  case 0x6d:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7fa7;
    break;
  case 0x6e:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7faa;
    break;
  case 0x6f:
    lVar2 = *(long *)(param_1 + 0x2008);
    lVar3 = 0x7fad;
  }
  uVar1 = (uint)*(uint3 *)(lVar2 + lVar3);
switchD_03f51c44_caseD_4:
  return uVar1;
}


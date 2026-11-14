
undefined8 FUN_018bba44(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0xfffe) {
    return 3;
  }
  uVar1 = FUN_01a1159c(*(undefined8 *)PTR_DAT_04bb4008);
  if (uVar1 < 0x19) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x80001aU) != 0) {
      return 1;
    }
    if (uVar1 == 0x18) {
      return 2;
    }
  }
  uVar2 = 0;
  switch(*param_1) {
  case 0x247:
  case 0x256:
  case 0x262:
  case 0x263:
    uVar2 = 1;
    break;
  case 0x248:
  case 0x24a:
  case 0x25f:
  case 0x260:
  case 0x26c:
  case 0x26f:
  case 0x271:
  case 0x272:
  case 0x273:
  case 0x27c:
  case 0x287:
    break;
  default:
    uVar1 = *param_1 - 0xd95;
    if ((uVar1 < 8) && ((1 << (ulong)(uVar1 & 0x1f) & 199U) != 0)) {
      return 0;
    }
  case 0x249:
  case 0x24b:
  case 0x24c:
  case 0x24d:
  case 0x24e:
  case 0x24f:
  case 0x250:
  case 0x251:
  case 0x252:
  case 0x253:
  case 0x254:
  case 0x255:
  case 599:
  case 600:
  case 0x259:
  case 0x25a:
  case 0x25b:
  case 0x25c:
  case 0x25d:
  case 0x25e:
  case 0x261:
  case 0x264:
  case 0x265:
  case 0x266:
  case 0x267:
  case 0x268:
  case 0x269:
  case 0x26a:
  case 0x26b:
  case 0x26d:
  case 0x26e:
  case 0x270:
  case 0x274:
  case 0x275:
  case 0x276:
  case 0x277:
  case 0x278:
  case 0x279:
  case 0x27a:
  case 0x27b:
  case 0x27d:
  case 0x27e:
  case 0x27f:
  case 0x280:
  case 0x281:
  case 0x282:
  case 0x283:
  case 0x284:
  case 0x285:
  case 0x286:
    uVar2 = 3;
  }
  return uVar2;
}


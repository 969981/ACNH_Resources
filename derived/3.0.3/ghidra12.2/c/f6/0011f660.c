
uint FUN_0011f660(long param_1,undefined1 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    switch(param_2) {
    case 0:
      uVar1 = (uint)*(ushort *)(param_1 + 0x28);
      break;
    case 1:
      uVar1 = (uint)*(ushort *)(param_1 + 0x2c);
      break;
    case 2:
      uVar1 = (uint)*(ushort *)(param_1 + 0x2e);
      break;
    case 3:
      uVar1 = (uint)*(ushort *)(param_1 + 0x2a);
      break;
    case 4:
      uVar1 = (uint)*(ushort *)(param_1 + 0x30);
      break;
    case 5:
      uVar1 = (uint)*(ushort *)(param_1 + 0x32);
      break;
    case 6:
      uVar1 = (uint)*(ushort *)(param_1 + 0x36);
      break;
    case 7:
      uVar1 = (uint)*(ushort *)(param_1 + 0x38);
      break;
    case 8:
      uVar1 = (uint)*(ushort *)(param_1 + 0x3a);
      break;
    case 9:
      uVar1 = (uint)*(ushort *)(param_1 + 0x3c);
      break;
    case 10:
      uVar1 = (uint)*(ushort *)(param_1 + 0x3e);
      break;
    case 0xb:
      uVar1 = (uint)*(ushort *)(param_1 + 0x40);
      break;
    case 0xc:
      uVar1 = (uint)*(ushort *)(param_1 + 0x42);
      break;
    case 0xd:
      uVar1 = (uint)*(ushort *)(param_1 + 0x44);
      break;
    case 0xe:
      uVar1 = (uint)*(ushort *)(param_1 + 0x34);
      break;
    case 0xf:
      uVar1 = (uint)*(ushort *)(param_1 + 0x52);
      break;
    case 0x10:
      uVar1 = (uint)*(ushort *)(param_1 + 0x54);
      break;
    default:
      return 0;
    }
    uVar1 = uVar1 >> 8 | (uVar1 & 0xff00ff) << 8;
  }
  return uVar1;
}


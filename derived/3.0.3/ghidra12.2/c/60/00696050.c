
bool FUN_00696050(long param_1,ulong param_2)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return true;
  }
  bVar2 = false;
  uVar3 = 0;
  do {
    bVar1 = *(byte *)(param_1 + uVar3);
    if (9 < bVar1 - 0x30 && 0x19 < (bVar1 & 0xffffffdf) - 0x41) {
      switch(bVar1) {
      case 0x21:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x3a:
      case 0x3b:
      case 0x3d:
      case 0x3f:
      case 0x40:
      case 0x5f:
      case 0x7e:
        break;
      default:
        goto switchD_006960b8_caseD_22;
      }
    }
    uVar3 = uVar3 + 1;
    bVar2 = param_2 <= uVar3;
  } while (param_2 != uVar3);
switchD_006960b8_caseD_22:
  return bVar2;
}


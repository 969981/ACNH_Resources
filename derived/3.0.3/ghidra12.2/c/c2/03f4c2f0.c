
void FUN_03f4c2f0(long param_1,undefined4 param_2,byte *param_3,ulong param_4)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  switch(param_2) {
  case 0x41:
    break;
  default:
    return;
  case 0x44:
    *(byte **)(param_1 + 0x40) = param_3;
    return;
  case 0x47:
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      iVar3 = ((uint)*param_3 << (ulong)(uVar7 & 0x1f)) + iVar3;
    }
    *(int *)(param_1 + 0x10) = iVar3;
    return;
  case 0x50:
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      iVar3 = ((uint)*param_3 << (ulong)(uVar7 & 0x1f)) + iVar3;
    }
    *(int *)(param_1 + 0x3c) = iVar3;
    return;
  case 0x53:
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      iVar3 = ((uint)*param_3 << (ulong)(uVar7 & 0x1f)) + iVar3;
    }
    *(int *)(param_1 + 0x2c) = iVar3;
    return;
  case 0x55:
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      iVar3 = ((uint)*param_3 << (ulong)(uVar7 & 0x1f)) + iVar3;
    }
    *(int *)(param_1 + 0x38) = iVar3;
    return;
  case 0x61:
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      iVar3 = ((uint)*param_3 << (ulong)(uVar7 & 0x1f)) + iVar3;
    }
    *(int *)(param_1 + 0x30) = iVar3;
    return;
  case 99:
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      cVar2 = '\0';
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        cVar2 = (char)iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      cVar2 = (*param_3 << (ulong)(uVar7 & 0x1f)) + cVar2;
    }
    *(int *)(param_1 + 0x28) = (int)cVar2;
    return;
  case 100:
    if (param_4 == 0) {
      iVar3 = 0;
    }
    else {
      if (param_4 == 1) {
        uVar7 = 0;
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
        uVar6 = param_4 & 0xfffffffffffffffe;
        pbVar1 = param_3;
        uVar4 = 8;
        do {
          uVar7 = uVar4;
          param_3 = pbVar1 + 2;
          uVar6 = uVar6 - 2;
          iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                  ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
          pbVar1 = param_3;
          uVar4 = uVar7 + 0x10;
        } while (uVar6 != 0);
        uVar7 = uVar7 + 8;
      }
      if ((param_4 & 1) != 0) {
        iVar3 = ((uint)*param_3 << (ulong)(uVar7 & 0x1f)) + iVar3;
      }
    }
    *(int *)(param_1 + 0x50) = iVar3;
    return;
  case 0x65:
    if (param_4 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      cVar2 = '\0';
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        cVar2 = (char)iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      cVar2 = (*param_3 << (ulong)(uVar7 & 0x1f)) + cVar2;
    }
    *(char *)(param_1 + 0x18) = cVar2;
    return;
  case 0x68:
    if (param_4 == 0) {
      *(undefined1 *)(param_1 + 0x20) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      cVar2 = '\0';
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        cVar2 = (char)iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      cVar2 = (*param_3 << (ulong)(uVar7 & 0x1f)) + cVar2;
    }
    *(char *)(param_1 + 0x20) = cVar2;
    return;
  case 0x6a:
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      iVar3 = ((uint)*param_3 << (ulong)(uVar7 & 0x1f)) + iVar3;
    }
    *(int *)(param_1 + 0x24) = iVar3;
    return;
  case 0x6d:
    if (param_4 == 0) {
      uVar4 = 0;
    }
    else {
      if (param_4 == 1) {
        uVar5 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        uVar6 = param_4 & 0xfffffffffffffffe;
        pbVar1 = param_3;
        uVar7 = 8;
        do {
          uVar5 = uVar7;
          param_3 = pbVar1 + 2;
          uVar6 = uVar6 - 2;
          uVar4 = ((uint)pbVar1[1] << (ulong)(uVar5 & 0x1f)) +
                  ((uint)*pbVar1 << (ulong)(uVar5 - 8 & 0x1f)) + uVar4;
          pbVar1 = param_3;
          uVar7 = uVar5 + 0x10;
        } while (uVar6 != 0);
        uVar5 = uVar5 + 8;
      }
      if ((param_4 & 1) != 0) {
        uVar4 = ((uint)*param_3 << (ulong)(uVar5 & 0x1f)) + uVar4;
      }
    }
    uVar7 = uVar4 >> 3 & 0x10;
    if ((uVar4 & 1) != 0) {
      uVar7 = 0x10;
    }
    *(uint *)(param_1 + 0x4c) = (uVar4 & 2) << 4 | uVar4 & 0x33 | uVar7;
    return;
  case 0x70:
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      iVar3 = ((uint)*param_3 << (ulong)(uVar7 & 0x1f)) + iVar3;
    }
    *(int *)(param_1 + 0x1c) = iVar3;
    return;
  case 0x72:
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      iVar3 = ((uint)*param_3 << (ulong)(uVar7 & 0x1f)) + iVar3;
    }
    *(int *)(param_1 + 0x48) = iVar3;
    return;
  case 0x74:
    if (param_4 == 0) {
      *(undefined1 *)(param_1 + 0x21) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      cVar2 = '\0';
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        cVar2 = (char)iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      cVar2 = (*param_3 << (ulong)(uVar7 & 0x1f)) + cVar2;
    }
    *(char *)(param_1 + 0x21) = cVar2;
    return;
  case 0x76:
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      return;
    }
    if (param_4 == 1) {
      uVar7 = 0;
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar6 = param_4 & 0xfffffffffffffffe;
      pbVar1 = param_3;
      uVar4 = 8;
      do {
        uVar7 = uVar4;
        param_3 = pbVar1 + 2;
        uVar6 = uVar6 - 2;
        iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
                ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
        pbVar1 = param_3;
        uVar4 = uVar7 + 0x10;
      } while (uVar6 != 0);
      uVar7 = uVar7 + 8;
    }
    if ((param_4 & 1) != 0) {
      iVar3 = ((uint)*param_3 << (ulong)(uVar7 & 0x1f)) + iVar3;
    }
    *(int *)(param_1 + 0x14) = iVar3;
    return;
  }
  if (param_4 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
  if (param_4 == 1) {
    uVar7 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    uVar6 = param_4 & 0xfffffffffffffffe;
    pbVar1 = param_3;
    uVar4 = 8;
    do {
      uVar7 = uVar4;
      param_3 = pbVar1 + 2;
      uVar6 = uVar6 - 2;
      iVar3 = ((uint)pbVar1[1] << (ulong)(uVar7 & 0x1f)) +
              ((uint)*pbVar1 << (ulong)(uVar7 - 8 & 0x1f)) + iVar3;
      pbVar1 = param_3;
      uVar4 = uVar7 + 0x10;
    } while (uVar6 != 0);
    uVar7 = uVar7 + 8;
  }
  if ((param_4 & 1) != 0) {
    iVar3 = ((uint)*param_3 << (ulong)(uVar7 & 0x1f)) + iVar3;
  }
  *(int *)(param_1 + 0x34) = iVar3;
  return;
}


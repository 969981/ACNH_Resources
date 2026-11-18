
ulong FUN_0363e07c(long *param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  if ((int)param_2 < 0x4015) {
    switch(param_2) {
    case 0x2000:
    case 0x2001:
    case 0x2003:
    case 0x2005:
    case 0x2006:
      lVar4 = *param_1;
      uVar7 = 0;
      if ((ulong)(*(long *)(lVar4 + 0x70) - *(long *)(lVar4 + 0xf328)) < 0x2b9fa) {
        uVar7 = *(uint *)(lVar4 + 0xf330);
      }
      return (ulong)uVar7;
    case 0x2002:
      lVar4 = *param_1;
      bVar2 = *(byte *)(lVar4 + 0x3b);
      *(undefined1 *)(lVar4 + 0x3c) = 1;
      lVar8 = *(long *)(lVar4 + 0x70);
      lVar9 = *(long *)(lVar4 + 0xf328);
      uVar5 = *(uint *)(lVar4 + 0xf330);
      *(byte *)(lVar4 + 0x3b) = bVar2 & 0x7f;
      uVar7 = *(uint *)(lVar4 + 0x68);
      if ((*(uint *)(lVar4 + 100) < uVar7) && (uVar7 <= *(uint *)(lVar4 + 100) + 2)) {
        **(uint **)(lVar4 + 0x88) = **(uint **)(lVar4 + 0x88) & 0xfffffffe;
        uVar7 = *(uint *)(lVar4 + 0x68);
      }
      *(uint *)(lVar4 + 0x60) = uVar7;
      uVar7 = 0;
      if ((ulong)(lVar8 - lVar9) < 0x2b9fa) {
        uVar7 = uVar5 & 0x1f;
      }
      return (ulong)(uVar7 | bVar2);
    case 0x2004:
      lVar4 = *param_1;
      bVar2 = *(byte *)(*(long *)(*(long *)(lVar4 + 0x90) + 0x28) + (ulong)*(uint *)(lVar4 + 0x5c));
      *(undefined8 *)(lVar4 + 0xf328) = *(undefined8 *)(lVar4 + 0x70);
      uVar5 = (uint)bVar2;
      uVar7 = uVar5 & 0xffffffe3;
      if ((*(uint *)(lVar4 + 0x5c) & 3) != 2) {
        uVar7 = uVar5;
      }
      *(uint *)(lVar4 + 0xf330) = uVar7;
      return (ulong)uVar7;
    case 0x2007:
      uVar3 = FUN_036484e8(*param_1);
      return uVar3;
    }
switchD_0363e0a8_default:
    return (ulong)(param_2 >> 8);
  }
  if (param_2 == 0x4015) {
    uVar3 = FUN_0365baec(param_1[1]);
    return uVar3;
  }
  if (param_2 != 0x4017) {
    if (param_2 == 0x4016) {
      lVar4 = param_1[2];
      if (*(char *)(lVar4 + 0x24) == '\0') {
        uVar5 = *(uint *)(lVar4 + 0x10);
        uVar6 = (*(uint *)(lVar4 + 0xc) | *(uint *)(lVar4 + 0x18)) >> 0x12 & 1;
        uVar7 = 1;
        if (uVar5 < 8) {
          uVar7 = *(uint *)(lVar4 + 0xc) >> (ulong)(uVar5 & 0x1f) & 1;
        }
        iVar1 = *(int *)(lVar4 + 0x20);
      }
      else {
        uVar5 = *(uint *)(lVar4 + 0x10);
        if (uVar5 < 0x10) {
          uVar6 = 0;
          uVar7 = *(uint *)(lVar4 + 0xc) >> (ulong)(uVar5 & 0x1f) & 1;
          iVar1 = *(int *)(lVar4 + 0x20);
        }
        else {
          uVar6 = 0;
          uVar7 = 1;
          iVar1 = *(int *)(lVar4 + 0x20);
        }
      }
      if (iVar1 == 0) {
        *(uint *)(lVar4 + 0x10) = uVar5 + 1;
      }
      return (ulong)(uVar7 | uVar6 << 2 | 0x40);
    }
    goto switchD_0363e0a8_default;
  }
  lVar4 = param_1[2];
  uVar7 = *(uint *)(lVar4 + 0x1c);
  if (*(char *)(lVar4 + 0x24) == '\0') {
    if (uVar7 < 8) {
      uVar5 = *(uint *)(lVar4 + 0x18) >> (ulong)(uVar7 & 0x1f) & 1;
      goto LAB_0363e298;
    }
  }
  else if (uVar7 != 0x12) {
    uVar5 = *(uint *)(lVar4 + 0x18) >> (ulong)(uVar7 & 0x1f) & 1;
    if (0xf < uVar7) {
      uVar5 = 1;
    }
    if (0x17 < uVar7) {
      uVar5 = 1;
    }
    goto LAB_0363e298;
  }
  uVar5 = 1;
LAB_0363e298:
  if (*(int *)(lVar4 + 0x20) == 0) {
    *(uint *)(lVar4 + 0x1c) = uVar7 + 1;
    return (ulong)(uVar5 | 0x40);
  }
  return (ulong)(uVar5 | 0x40);
}


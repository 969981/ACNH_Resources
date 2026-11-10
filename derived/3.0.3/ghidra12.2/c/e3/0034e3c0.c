
ulong FUN_0034e3c0(long param_1,ulong param_2,uint param_3,char *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  
  lVar7 = *(long *)(param_1 + 0xd8);
  if (lVar7 == 0) {
    uVar10 = FUN_00348ee0(*(undefined8 *)(param_1 + 0xd0),param_2,param_3,param_4);
    return uVar10;
  }
  lVar9 = *(long *)(lVar7 + 0x110);
  uVar10 = (ulong)*(uint *)(*(long *)(lVar7 + 0x188) + 4);
  uVar3 = *(uint *)(*(long *)(lVar7 + 0x188) + 0x68);
  uVar4 = FUN_0034cdc0(param_2 & 0xffffffff);
  if (7 < param_3) {
    return 0xffffffff;
  }
  lVar1 = lVar9 + uVar10;
  lVar2 = lVar1 + (ulong)uVar3;
  switch(param_3) {
  case 0:
    uVar3 = *(uint *)(*(long *)(lVar7 + 0x188) + 0x3c);
    uVar6 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      puVar8 = (uint *)(*(uint *)(*(long *)(lVar7 + 0x188) + 0x40) + uVar10 + lVar9 + 0x34);
      while ((((*puVar8 & 1 << (ulong)(uVar4 & 0x1f)) == 0 ||
              (iVar5 = strncmp(param_4,(char *)(lVar2 + (ulong)puVar8[-0xd]),(ulong)puVar8[-0xc]),
              iVar5 != 0)) || ((int)puVar8[-1] < 0))) {
        uVar6 = uVar6 - 1;
        puVar8 = puVar8 + 0x17;
        if (uVar6 == 0) {
          return 0xffffffff;
        }
      }
      return (ulong)puVar8[-1];
    }
    break;
  case 1:
    uVar3 = *(uint *)(*(long *)(lVar7 + 0x188) + 0x44);
    uVar10 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      puVar8 = (uint *)(lVar1 + (ulong)*(uint *)(*(long *)(lVar7 + 0x188) + 0x48));
      while ((((puVar8[0xe] & 1 << (ulong)(uVar4 & 0x1f)) == 0 ||
              (iVar5 = strncmp(param_4,(char *)(lVar2 + (ulong)*puVar8),(ulong)puVar8[1]),
              iVar5 != 0)) || ((int)puVar8[0xc] < 0))) {
        uVar10 = uVar10 - 1;
        puVar8 = puVar8 + 0x17;
        if (uVar10 == 0) {
          return 0xffffffff;
        }
      }
      return (ulong)puVar8[0xc];
    }
    break;
  case 2:
    uVar3 = *(uint *)(*(long *)(lVar7 + 0x188) + 0x34);
    uVar10 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      puVar8 = (uint *)(lVar1 + (ulong)*(uint *)(*(long *)(lVar7 + 0x188) + 0x38));
      while ((((char)puVar8[0x19] != '\0' || (0x23 < puVar8[10] - 0x42 && 3 < puVar8[10] - 0x87)) ||
             (((puVar8[0x11] & 1 << (ulong)(uVar4 & 0x1f)) == 0 ||
              ((iVar5 = strncmp(param_4,(char *)(lVar2 + (ulong)*puVar8),(ulong)puVar8[1]),
               iVar5 != 0 || ((int)puVar8[(ulong)uVar4 + 0x12] < 0))))))) {
        puVar8 = puVar8 + 0x29;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return 0xffffffff;
        }
      }
      return (ulong)puVar8[(ulong)uVar4 + 0x12];
    }
    break;
  case 3:
    uVar3 = *(uint *)(*(long *)(lVar7 + 0x188) + 0x2c);
    uVar10 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      puVar8 = (uint *)(lVar1 + (ulong)*(uint *)(*(long *)(lVar7 + 0x188) + 0x30));
      while ((((puVar8[0xc] & 1 << (ulong)(uVar4 & 0x1f)) == 0 ||
              (iVar5 = strncmp(param_4,(char *)(lVar2 + (ulong)*puVar8),(ulong)puVar8[1]),
              iVar5 != 0)) || ((int)puVar8[(ulong)uVar4 + 0xd] < 0))) {
        puVar8 = puVar8 + 0x1b;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return 0xffffffff;
        }
      }
      return (ulong)puVar8[(ulong)uVar4 + 0xd];
    }
    break;
  case 4:
    uVar3 = *(uint *)(*(long *)(lVar7 + 0x188) + 0x4c);
    uVar10 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      puVar8 = (uint *)(lVar1 + (ulong)*(uint *)(*(long *)(lVar7 + 0x188) + 0x50));
      while ((((puVar8[0x12] & 1 << (ulong)(uVar4 & 0x1f)) == 0 ||
              (iVar5 = strncmp(param_4,(char *)(lVar2 + (ulong)*puVar8),(ulong)puVar8[1]),
              iVar5 != 0)) || ((int)puVar8[(ulong)uVar4 + 0xc] < 0))) {
        puVar8 = puVar8 + 0x1b;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return 0xffffffff;
        }
      }
      return (ulong)puVar8[(ulong)uVar4 + 0xc];
    }
    break;
  case 5:
    uVar3 = *(uint *)(*(long *)(lVar7 + 0x188) + 0x34);
    uVar10 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      puVar8 = (uint *)(lVar1 + (ulong)*(uint *)(*(long *)(lVar7 + 0x188) + 0x38));
      while (((((char)puVar8[0x19] != '\0' || (0x20 < puVar8[10] - 0x66)) ||
              ((puVar8[0x11] & 1 << (ulong)(uVar4 & 0x1f)) == 0)) ||
             ((iVar5 = strncmp(param_4,(char *)(lVar2 + (ulong)*puVar8),(ulong)puVar8[1]),
              iVar5 != 0 || ((int)puVar8[(ulong)uVar4 + 0x12] < 0))))) {
        puVar8 = puVar8 + 0x29;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return 0xffffffff;
        }
      }
      return (ulong)puVar8[(ulong)uVar4 + 0x12];
    }
    break;
  case 6:
    uVar3 = *(uint *)(*(long *)(lVar7 + 0x188) + 0x34);
    uVar10 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      puVar8 = (uint *)(lVar1 + (ulong)*(uint *)(*(long *)(lVar7 + 0x188) + 0x38));
      while ((((char)puVar8[0x19] != '\0' || (0x27 < puVar8[10] - 0x8c)) ||
             (((puVar8[0x11] & 1 << (ulong)(uVar4 & 0x1f)) == 0 ||
              ((iVar5 = strncmp(param_4,(char *)(lVar2 + (ulong)*puVar8),(ulong)puVar8[1]),
               iVar5 != 0 || ((int)puVar8[(ulong)uVar4 + 0x12] < 0))))))) {
        puVar8 = puVar8 + 0x29;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return 0xffffffff;
        }
      }
      return (ulong)puVar8[(ulong)uVar4 + 0x12];
    }
    break;
  case 7:
    uVar3 = *(uint *)(*(long *)(lVar7 + 0x188) + 0x34);
    uVar10 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      puVar8 = (uint *)(lVar1 + (ulong)*(uint *)(*(long *)(lVar7 + 0x188) + 0x38));
      while (((((char)puVar8[0x19] != '\0' || (puVar8[10] != 0x8b)) ||
              ((puVar8[0x11] & 1 << (ulong)(uVar4 & 0x1f)) == 0)) ||
             ((iVar5 = strncmp(param_4,(char *)(lVar2 + (ulong)*puVar8),(ulong)puVar8[1]),
              iVar5 != 0 || ((int)puVar8[(ulong)uVar4 + 0x12] < 0))))) {
        puVar8 = puVar8 + 0x29;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          return 0xffffffff;
        }
      }
      return (ulong)puVar8[(ulong)uVar4 + 0x12];
    }
  }
  return 0xffffffff;
}



uint FUN_0171ed40(uint *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  undefined8 *puVar11;
  
  lVar3 = DAT_0524a598;
  if (DAT_0524a598 == 0) {
    return 0;
  }
  uVar6 = *param_1;
  FUN_006bd550("invalid_name",0);
  uVar5 = *(uint *)(lVar3 + 0x1e8);
  uVar7 = (ulong)uVar5;
  if (*(char *)(lVar3 + 0x1f9) == '\0') {
    if (0 < (int)uVar5) {
      puVar11 = *(undefined8 **)(lVar3 + 0x1f0);
      uVar5 = 0xffffffff;
      do {
        puVar9 = (uint *)*puVar11;
        if (uVar6 == puVar9[8]) goto LAB_0171ee2c;
        puVar11 = puVar11 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      goto LAB_0171ee30;
    }
  }
  else if (uVar5 != 0) {
    if ((int)uVar5 < 2) {
      lVar8 = *(long *)(lVar3 + 0x1f0);
      uVar4 = 0;
    }
    else {
      iVar10 = uVar5 - 1;
      lVar8 = *(long *)(lVar3 + 0x1f0);
      uVar4 = 0;
      do {
        iVar1 = iVar10 + uVar4;
        if (iVar1 < 0 != SCARRY4(iVar10,uVar4)) {
          iVar1 = iVar1 + 1;
        }
        uVar5 = iVar1 >> 1;
        uVar2 = *(uint *)(*(long *)(lVar8 + (long)(int)uVar5 * 8) + 0x20);
        if (uVar6 == uVar2) goto LAB_0171ee24;
        if (uVar2 < uVar6) {
          uVar4 = uVar5 + 1;
        }
        else {
          iVar10 = uVar5 - 1;
        }
      } while ((int)uVar4 < iVar10);
    }
    uVar5 = uVar4;
    if (uVar6 == *(uint *)(*(long *)(lVar8 + (long)(int)uVar4 * 8) + 0x20)) {
LAB_0171ee24:
      if (-1 < (int)uVar5) {
        puVar9 = *(uint **)(lVar8 + (ulong)uVar5 * 8);
LAB_0171ee2c:
        uVar5 = *puVar9;
      }
      goto LAB_0171ee30;
    }
  }
  uVar5 = 0xffffffff;
LAB_0171ee30:
  uVar6 = *(uint *)(lVar3 + 0x1c0);
  if ((int)uVar6 < 1) {
    uVar6 = 0;
    if (*(long *)(lVar3 + 0xb0) != 0) {
      puVar9 = *(uint **)(*(long *)(lVar3 + 0xb0) + 8);
      uVar6 = 0;
      if (puVar9 != (uint *)0x0) {
        uVar6 = *puVar9;
      }
    }
  }
  if (uVar6 <= uVar5) {
    uVar5 = 0;
  }
  return uVar5;
}


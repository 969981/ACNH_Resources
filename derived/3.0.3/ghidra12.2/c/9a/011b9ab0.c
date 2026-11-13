
void FUN_011b9ab0(undefined8 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  uint *puVar10;
  
  *param_1 = &PTR_LAB_04986938;
  param_1[1] = 0;
  lVar6 = DAT_050d57c8;
  FUN_006bd550("invalid_name",0);
  uVar3 = *(uint *)(lVar6 + 0x888);
  uVar7 = (ulong)uVar3;
  if (*(char *)(lVar6 + 0x899) == '\0') {
    if ((int)uVar3 < 1) {
      return;
    }
    puVar5 = *(undefined8 **)(lVar6 + 0x890);
    while (puVar10 = (uint *)*puVar5, puVar10[8] != param_2) {
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return;
      }
    }
  }
  else {
    if (uVar3 == 0) {
      return;
    }
    if ((int)uVar3 < 2) {
      lVar8 = *(long *)(lVar6 + 0x890);
      uVar3 = 0;
    }
    else {
      iVar9 = uVar3 - 1;
      lVar8 = *(long *)(lVar6 + 0x890);
      uVar3 = 0;
      do {
        iVar1 = iVar9 + uVar3;
        if (iVar1 < 0 != SCARRY4(iVar9,uVar3)) {
          iVar1 = iVar1 + 1;
        }
        uVar4 = iVar1 >> 1;
        uVar2 = *(uint *)(*(long *)(lVar8 + (long)(int)uVar4 * 8) + 0x20);
        if (uVar2 == param_2) {
          if ((int)uVar4 < 0) {
            return;
          }
          goto LAB_011b9ba8;
        }
        if (uVar2 < param_2) {
          uVar3 = uVar4 + 1;
        }
        else {
          iVar9 = uVar4 - 1;
        }
      } while ((int)uVar3 < iVar9);
    }
    if (*(uint *)(*(long *)(lVar8 + (long)(int)uVar3 * 8) + 0x20) != param_2) {
      return;
    }
    uVar4 = uVar3;
    if ((int)uVar3 < 0) {
      return;
    }
LAB_011b9ba8:
    puVar10 = *(uint **)(lVar8 + (ulong)uVar4 * 8);
  }
  uVar3 = *puVar10;
  if ((int)uVar3 < 0) {
    return;
  }
  if ((int)*(uint *)(lVar6 + 0x860) < 1) {
    if ((((*(long *)(lVar6 + 0x750) != 0) &&
         (puVar10 = *(uint **)(*(long *)(lVar6 + 0x750) + 8), puVar10 != (uint *)0x0)) &&
        ((*(uint *)(lVar6 + 0x768) <= uVar3 ||
         (*(char *)(*(long *)(lVar6 + 0x770) + (ulong)uVar3) != '\0')))) &&
       (((uVar3 < *puVar10 && (puVar10[1] != 0)) && ((ushort)puVar10[2] != 0)))) {
      iVar9 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      lVar6 = (ulong)(puVar10[1] * uVar3 + (uint)(ushort)puVar10[2] * 8 + iVar9) + (long)puVar10;
      goto LAB_011b9c50;
    }
  }
  else if (uVar3 < *(uint *)(lVar6 + 0x860)) {
    if (*(uint *)(lVar6 + 0x850) <= uVar3) {
      uVar3 = 0;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x858) + (ulong)uVar3 * 8);
    goto LAB_011b9c50;
  }
  lVar6 = 0;
LAB_011b9c50:
  param_1[1] = lVar6;
  return;
}


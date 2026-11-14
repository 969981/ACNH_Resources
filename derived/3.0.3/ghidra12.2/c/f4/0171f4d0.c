
ulong FUN_0171f4d0(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  uint *puVar10;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = FUN_006bd550(param_2[1],0);
  FUN_006bd550("invalid_name",0);
  uVar5 = *(uint *)(param_1 + 0x1e8);
  uVar6 = (ulong)uVar5;
  if (*(char *)(param_1 + 0x1f9) == '\0') {
    if (0 < (int)uVar5) {
      puVar9 = *(undefined8 **)(param_1 + 0x1f0);
      while (puVar10 = (uint *)*puVar9, uVar4 != puVar10[8]) {
        puVar9 = puVar9 + 1;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return 0xffffffff;
        }
      }
LAB_0171f5dc:
      return (ulong)*puVar10;
    }
  }
  else if (uVar5 != 0) {
    if ((int)uVar5 < 2) {
      lVar7 = *(long *)(param_1 + 0x1f0);
      uVar6 = 0;
    }
    else {
      iVar8 = uVar5 - 1;
      lVar7 = *(long *)(param_1 + 0x1f0);
      uVar6 = 0;
      do {
        uVar5 = (uint)uVar6;
        iVar1 = iVar8 + uVar5;
        if (iVar1 < 0 != SCARRY4(iVar8,uVar5)) {
          iVar1 = iVar1 + 1;
        }
        uVar2 = iVar1 >> 1;
        uVar3 = *(uint *)(*(long *)(lVar7 + (long)(int)uVar2 * 8) + 0x20);
        if (uVar4 == uVar3) {
          uVar6 = (ulong)uVar2;
          goto LAB_0171f5d4;
        }
        if (uVar3 < uVar4) {
          uVar5 = uVar2 + 1;
        }
        else {
          iVar8 = uVar2 - 1;
        }
        uVar6 = (ulong)uVar5;
      } while ((int)uVar5 < iVar8);
    }
    if (uVar4 == *(uint *)(*(long *)(lVar7 + (long)(int)uVar6 * 8) + 0x20)) {
LAB_0171f5d4:
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      puVar10 = *(uint **)(lVar7 + uVar6 * 8);
      goto LAB_0171f5dc;
    }
  }
  return 0xffffffff;
}


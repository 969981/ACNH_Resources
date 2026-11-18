
void FUN_032fbc30(long param_1)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  if (*(int *)(param_1 + 0x490) < 1 && *(int *)(param_1 + 0x494) < 1) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x474);
  if (((int)uVar1 < *(int *)(param_1 + 0x494)) || (*(int *)(param_1 + 0x490) < (int)uVar1)) {
    lVar6 = *(long *)(lVar5 + 0x6e0);
    if (*(int *)(lVar5 + 0xcf4) == *(int *)(lVar5 + 0xcf8)) {
joined_r0x032fbc7c:
      if (lVar6 == 0) {
        return;
      }
      if (*(long *)(lVar6 + 8) == 0) {
        return;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar6 + 8) + 0x338);
      FUN_03289894(uVar9,0);
      uVar4 = 0;
      goto LAB_032fbd50;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x3c) < 0x2f) &&
       ((1L << ((ulong)*(uint *)(param_1 + 0x3c) & 0x3f) & 0x420c0020c83fU) != 0)) {
      if ((int)uVar1 < 1) {
LAB_032fbd28:
        lVar6 = *(long *)(lVar5 + 0x6e0);
        goto joined_r0x032fbc7c;
      }
      uVar7 = 0;
      bVar8 = true;
      do {
        while ((sVar2 = *(short *)(*(long *)(param_1 + 0x468) + uVar7 * 2), sVar2 == 0x3000 ||
               (sVar2 == 0x20))) {
          uVar7 = uVar7 + 1;
          if (uVar1 == uVar7) {
            if (bVar8) goto LAB_032fbd28;
            goto LAB_032fbd5c;
          }
        }
        bVar8 = false;
        bVar3 = (ulong)uVar1 - 1 != uVar7;
        uVar7 = uVar7 + 1;
      } while (bVar3);
    }
LAB_032fbd5c:
    lVar6 = *(long *)(lVar5 + 0x6e0);
  }
  if ((lVar6 == 0) || (*(long *)(lVar6 + 8) == 0)) {
    return;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar6 + 8) + 0x338);
  FUN_03289894(uVar9,1);
  uVar4 = 1;
LAB_032fbd50:
  FUN_0328a2b0(uVar9,uVar4);
  return;
}


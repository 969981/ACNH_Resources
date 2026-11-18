
void FUN_03351c40(long param_1)

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
  
  if (*(int *)(param_1 + 0x1360) < 1) {
    return;
  }
  uVar1 = *(uint *)((long)*(long **)(param_1 + 0x430) + 0xc);
  lVar5 = *(long *)(DAT_05355a60 + 0x20);
  if (((int)uVar1 < *(int *)(DAT_05355a60 + 0x494)) || (*(int *)(param_1 + 0x1360) < (int)uVar1)) {
    lVar6 = *(long *)(lVar5 + 0x6e0);
    if (*(int *)(lVar5 + 0xcf4) == *(int *)(lVar5 + 0xcf8)) {
joined_r0x03351c98:
      if (lVar6 == 0) {
        return;
      }
      if (*(long *)(lVar6 + 8) == 0) {
        return;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar6 + 8) + 0x338);
      FUN_03289894(uVar9,0);
      uVar4 = 0;
      goto LAB_03351d70;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x1390) < 0x2f) &&
       ((1L << ((ulong)*(uint *)(param_1 + 0x1390) & 0x3f) & 0x420c0020c83fU) != 0)) {
      if ((int)uVar1 < 1) {
LAB_03351d48:
        lVar6 = *(long *)(lVar5 + 0x6e0);
        goto joined_r0x03351c98;
      }
      uVar7 = 0;
      bVar8 = true;
      do {
        while ((sVar2 = *(short *)(**(long **)(param_1 + 0x430) + uVar7 * 2), sVar2 == 0x3000 ||
               (sVar2 == 0x20))) {
          uVar7 = uVar7 + 1;
          if (uVar1 == uVar7) {
            if (bVar8) goto LAB_03351d48;
            goto LAB_03351d7c;
          }
        }
        bVar8 = false;
        bVar3 = (ulong)uVar1 - 1 != uVar7;
        uVar7 = uVar7 + 1;
      } while (bVar3);
    }
LAB_03351d7c:
    lVar6 = *(long *)(lVar5 + 0x6e0);
  }
  if ((lVar6 == 0) || (*(long *)(lVar6 + 8) == 0)) {
    return;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar6 + 8) + 0x338);
  FUN_03289894(uVar9,1);
  uVar4 = 1;
LAB_03351d70:
  FUN_0328a2b0(uVar9,uVar4);
  return;
}


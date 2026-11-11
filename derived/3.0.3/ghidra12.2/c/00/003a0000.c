
ulong FUN_003a0000(long param_1,long *param_2,uint *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar5 = (uint *)*param_2;
  uVar6 = (ulong)*(byte *)(param_1 + 0xeb);
  uVar2 = uVar6 + *(byte *)(param_1 + 0xea);
  uVar9 = param_2[1] - (long)puVar5 >> 2;
  if (uVar6 != 0 && uVar2 <= uVar9) {
    uVar10 = 0;
    if (uVar2 != 0) {
      uVar10 = uVar9 / uVar2;
    }
    do {
      uVar9 = uVar10 >> 1;
      uVar7 = puVar5[uVar9 * uVar2];
      if (uVar7 == *param_3) {
        uVar4 = 0;
        do {
          if (uVar6 - 1 == uVar4) goto LAB_003a00a0;
          uVar1 = uVar4 + 1;
          uVar7 = *(uint *)((long)puVar5 + uVar4 * 4 + uVar2 * 4 * uVar9 + 4);
          lVar3 = uVar4 + 1;
          uVar4 = uVar1;
        } while (uVar7 == param_3[lVar3]);
        uVar8 = param_3[lVar3];
        if (uVar1 < uVar6) goto LAB_003a010c;
      }
      else {
        uVar8 = *param_3;
LAB_003a010c:
        if (uVar7 < uVar8) {
          puVar5 = puVar5 + uVar9 * uVar2 + uVar2;
          uVar9 = uVar10 + ~uVar9;
        }
      }
LAB_003a00a0:
      uVar10 = uVar9;
    } while (uVar9 != 0);
  }
  if (puVar5 == (uint *)param_2[1]) {
    return 0xffffffff;
  }
  if (*(byte *)(param_1 + 0xeb) != 0) {
    uVar7 = *param_3;
    uVar8 = *puVar5;
    if (uVar7 == uVar8) {
      uVar9 = 0;
      do {
        if (uVar6 - 1 == uVar9) goto LAB_003a013c;
        uVar10 = uVar9 + 1;
        uVar7 = param_3[uVar9 + 1];
        uVar8 = puVar5[uVar9 + 1];
        uVar9 = uVar10;
      } while (uVar7 == uVar8);
      if (uVar6 <= uVar10) goto LAB_003a013c;
    }
    if (uVar7 < uVar8) {
      return 0xffffffff;
    }
  }
LAB_003a013c:
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar6 = (ulong)((long)((long)puVar5 -
                          (*(long *)(param_1 + 0x90) + (ulong)*(byte *)(param_1 + 0xea) * 4)) >> 2)
            / uVar2;
  }
  return uVar6;
}


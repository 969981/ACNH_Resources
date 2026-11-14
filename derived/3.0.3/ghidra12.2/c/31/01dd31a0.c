
undefined4 FUN_01dd31a0(long param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((((*(int *)(param_1 + 8) != 0) ||
       (*(undefined1 *)(param_1 + 0x160) = 0, *(char *)(param_1 + 0x161) == '\0')) ||
      (*(char *)(param_1 + 0x162) == '\0')) || (*(char *)(param_1 + 0x163) != '\0')) {
    return 0;
  }
  if ((*(int *)(DAT_05358908 + 0x78) == 0) || (1 < *(int *)(DAT_05358908 + 0xc4) - 1U)) {
    uVar4 = *param_2;
    uVar3 = 0;
    if (uVar4 != 0) {
      if (*(int *)(param_1 + 0x108) != 0) {
        uVar7 = 0;
        do {
          uVar8 = *(ulong *)(*(long *)(param_1 + 0x110) +
                            (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3));
          if (uVar8 == uVar4) goto LAB_01dd31fc;
          uVar1 = uVar7 + 1;
          uVar7 = uVar1 & 0xffffffff;
        } while (uVar8 - 1 < uVar4 && *(int *)(param_1 + 0x108) != (int)uVar1);
      }
      iVar2 = *(int *)(*(long *)(param_1 + 0xd8) + 0x28);
      if (iVar2 != 0) {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x30);
        lVar6 = (long)iVar2 << 3;
        do {
          if (*(ulong *)*puVar5 < uVar4) break;
          if (*(ulong *)*puVar5 == uVar4) goto LAB_01dd31fc;
          puVar5 = puVar5 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      *(ulong *)(param_1 + 0x98) = uVar4;
      FUN_03ebb160(param_1,5);
      uVar3 = 1;
    }
  }
  else {
LAB_01dd31fc:
    uVar3 = 0;
  }
  return uVar3;
}


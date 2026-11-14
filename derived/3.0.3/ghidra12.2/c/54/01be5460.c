
void FUN_01be5460(long *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  
  (**(code **)(param_1[0x1c] + 0x18))(param_1 + 0x1c);
  lVar12 = 0;
  do {
    if (*(short *)(param_1[0x1d] + lVar12 * 2) == 0) goto LAB_01be54e0;
    lVar3 = param_1[0x1d] + lVar12 * 2;
    if (*(short *)(lVar3 + 2) == 0) {
      lVar12 = lVar12 + 1;
      goto LAB_01be54e0;
    }
    if (*(short *)(lVar3 + 4) == 0) {
      lVar12 = lVar12 + 2;
      goto LAB_01be54e0;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_01be54e0:
  uVar11 = (uint)lVar12;
  uVar7 = (**(code **)(*param_1 + 0x20))(param_1);
  if (param_3 < uVar7) {
    uVar8 = uVar11 + param_3;
    if (uVar7 <= uVar8) {
      uVar11 = uVar7 + ~param_3;
      uVar8 = uVar11;
      if (*(uint *)(param_1 + 0x1f) <= uVar11) {
        uVar8 = 0;
      }
      *(undefined2 *)(param_1[0x20] + (long)(int)uVar8 * 2) = 0;
      uVar8 = uVar7 - 1;
    }
    uVar5 = *(uint *)(param_1 + 0x1f);
    uVar6 = uVar7 - (param_3 + param_2);
    uVar1 = (uVar8 - uVar7) + uVar5;
    uVar2 = uVar5 + ~uVar6;
    if (uVar5 < uVar7 + ~uVar8) {
      uVar1 = 0xffffffff;
    }
    uVar9 = (ulong)uVar1;
    if (uVar5 < uVar6) {
      uVar2 = 0xffffffff;
    }
    uVar8 = (uVar11 - uVar7) + uVar5;
    if (uVar5 < uVar7 + ~uVar11) {
      uVar8 = 0xffffffff;
    }
    uVar10 = (ulong)uVar8;
    uVar11 = uVar5 + ~(uVar7 - param_2);
    if (uVar5 < uVar7 - param_2) {
      uVar11 = 0xffffffff;
    }
    if ((uVar2 != uVar1) && (uVar11 != uVar8)) {
      lVar12 = param_1[0x20];
      do {
        *(undefined2 *)(lVar12 + (-(uVar9 >> 0x1f) & 0xfffffffe00000000 | uVar9 << 1)) =
             *(undefined2 *)(lVar12 + (-(uVar10 >> 0x1f) & 0xfffffffe00000000 | uVar10 << 1));
        if (uVar2 == (uint)(uVar9 + 0xffffffff)) {
          return;
        }
        uVar4 = uVar10 + 0xffffffff;
        uVar9 = uVar9 + 0xffffffff & 0xffffffff;
        uVar10 = uVar4 & 0xffffffff;
      } while (uVar11 != (uint)uVar4);
    }
  }
  return;
}


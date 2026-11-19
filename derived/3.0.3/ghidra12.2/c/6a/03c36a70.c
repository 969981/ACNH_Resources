
undefined8 FUN_03c36a70(long *param_1,long *param_2,size_t param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  *param_1 = *param_1 + param_3;
  uVar4 = *(uint *)(param_1 + 9);
  uVar5 = (ulong)uVar4;
  if (uVar5 + param_3 < 0x20) {
    memcpy((void *)((long)param_1 + uVar5 + 0x28),param_2,param_3);
    uVar5 = (ulong)(uint)((int)param_1[9] + (int)param_3);
  }
  else {
    plVar2 = (long *)((long)param_2 + param_3);
    if (uVar4 != 0) {
      memcpy((void *)((long)param_1 + uVar5 + 0x28),param_2,(ulong)(0x20 - uVar4));
      uVar5 = param_1[1] + param_1[5] * -0x3d4d51c2d82b14b1;
      uVar6 = param_1[2] + param_1[6] * -0x3d4d51c2d82b14b1;
      uVar8 = param_1[3] + param_1[7] * -0x3d4d51c2d82b14b1;
      uVar10 = param_1[4] + param_1[8] * -0x3d4d51c2d82b14b1;
      param_1[1] = (uVar5 >> 0x21 | uVar5 * 0x80000000) * -0x61c8864e7a143579;
      param_1[2] = (uVar6 >> 0x21 | uVar6 * 0x80000000) * -0x61c8864e7a143579;
      lVar11 = param_1[9];
      *(undefined4 *)(param_1 + 9) = 0;
      param_2 = (long *)((long)param_2 + (ulong)(0x20 - (int)lVar11));
      param_1[3] = (uVar8 >> 0x21 | uVar8 * 0x80000000) * -0x61c8864e7a143579;
      param_1[4] = (uVar10 >> 0x21 | uVar10 * 0x80000000) * -0x61c8864e7a143579;
    }
    if (param_2 + 4 <= plVar2) {
      lVar11 = param_1[1];
      lVar12 = param_1[2];
      lVar9 = param_1[3];
      lVar7 = param_1[4];
      do {
        uVar8 = lVar11 + *param_2 * -0x3d4d51c2d82b14b1;
        uVar10 = lVar12 + param_2[1] * -0x3d4d51c2d82b14b1;
        plVar1 = param_2 + 2;
        plVar3 = param_2 + 3;
        param_2 = param_2 + 4;
        uVar6 = lVar9 + *plVar1 * -0x3d4d51c2d82b14b1;
        uVar5 = lVar7 + *plVar3 * -0x3d4d51c2d82b14b1;
        lVar11 = (uVar8 >> 0x21 | uVar8 * 0x80000000) * -0x61c8864e7a143579;
        lVar12 = (uVar10 >> 0x21 | uVar10 * 0x80000000) * -0x61c8864e7a143579;
        lVar9 = (uVar6 >> 0x21 | uVar6 * 0x80000000) * -0x61c8864e7a143579;
        lVar7 = (uVar5 >> 0x21 | uVar5 * 0x80000000) * -0x61c8864e7a143579;
      } while (param_2 <= plVar2 + -4);
      param_1[1] = lVar11;
      param_1[2] = lVar12;
      param_1[3] = lVar9;
      param_1[4] = lVar7;
    }
    if (plVar2 <= param_2) {
      return 0;
    }
    uVar5 = (long)plVar2 - (long)param_2;
    memcpy(param_1 + 5,param_2,uVar5);
  }
  *(int *)(param_1 + 9) = (int)uVar5;
  return 0;
}


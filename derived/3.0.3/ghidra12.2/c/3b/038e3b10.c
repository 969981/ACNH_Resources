
void FUN_038e3b10(long *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(int *)((long)param_1 + 0x104) < 0) {
    uVar4 = 0;
    uVar6 = *(uint *)(param_1 + 0x21);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x20))
                      ((int)param_1[0x1e],(int)param_1[0x1f],param_1,param_2,param_1 + 0x24);
    uVar6 = *(uint *)(param_1 + 0x21);
  }
  if (-1 < (int)uVar6) {
    uVar5 = (**(code **)(*param_1 + 0x20))
                      (*(undefined4 *)((long)param_1 + 0xf4),*(undefined4 *)((long)param_1 + 0xfc),
                       param_1,param_2,param_1 + 0x25);
    uVar6 = *(uint *)(param_1 + 0x21);
    uVar4 = uVar5 | uVar4;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  uVar5 = 0;
  if (-1 < (int)*(uint *)((long)param_1 + 0x104)) {
    uVar5 = 0xf << (ulong)(*(uint *)((long)param_1 + 0x104) & 0x1f);
  }
  uVar1 = 0;
  if (-1 < (int)uVar6) {
    uVar1 = 0xf << (ulong)(uVar6 & 0x1f);
  }
  uVar4 = *(uint *)((long)param_1 + 0x114) & ((uVar5 | uVar1) ^ 0xffffffff) | uVar4;
  *(uint *)((long)param_1 + 0x114) = uVar4;
  *(uint *)(param_1 + 1) = uVar4 & (param_2 ^ 0xffffffff);
  *(uint *)((long)param_1 + 0xc) = param_2 & (uVar4 ^ 0xffffffff);
  if (0 < (int)param_1[0x20]) {
    lVar8 = 0;
    fVar10 = *(float *)PTR_DAT_04bd0e70;
    do {
      uVar6 = 1 << (ulong)((uint)lVar8 & 0x1f);
      if ((uVar6 & *(uint *)((long)param_1 + 0x114)) == 0) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = fVar10 + *(float *)((long)param_1 + lVar8 * 4 + 0x30);
        bVar2 = *(byte *)((long)param_1 + lVar8 + 0xd0);
        if (bVar2 != 0) {
          fVar9 = (float)NEON_ucvtf((uint)*(byte *)((long)param_1 + lVar8 + 0xb0));
          if ((0.0 <= fVar11 - fVar9) &&
             (fVar9 = fmodf(fVar11 - fVar9,(float)bVar2), fVar9 < fVar10)) {
            *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | uVar6;
          }
        }
      }
      *(float *)((long)param_1 + lVar8 * 4 + 0x30) = fVar11;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[0x20]);
  }
  uVar3 = *(ushort *)((long)param_1 + 0x14);
  uVar7 = uVar3 & 0xfffd;
  if ((param_3 & 1) == 0) {
    uVar7 = (uVar3 & 1) << 1 | uVar7;
  }
  else if ((uVar3 & 1) == 0) {
    uVar7 = uVar7 | 4;
    goto LAB_038e3c98;
  }
  uVar7 = uVar7 & 0xfffb;
LAB_038e3c98:
  *(ushort *)((long)param_1 + 0x14) = uVar7;
  *(int *)(param_1 + 3) = (int)*(float *)(param_1 + 0x23);
  *(int *)((long)param_1 + 0x1c) = (int)*(float *)((long)param_1 + 0x11c);
  return;
}


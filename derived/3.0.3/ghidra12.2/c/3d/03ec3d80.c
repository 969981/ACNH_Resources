
undefined8 FUN_03ec3d80(long param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 local_58;
  undefined8 local_38;
  
  uVar10 = *(uint *)(param_1 + 8);
  do {
    uVar5 = *(uint *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
    do {
      if ((int)uVar10 < 1) {
        uVar10 = uVar5;
        goto LAB_03ec3e50;
      }
      uVar10 = uVar10 - 1;
      uVar2 = uVar10;
      if (uVar5 <= uVar10) {
        uVar2 = 0;
      }
      lVar9 = *(long *)(lVar6 + (ulong)uVar2 * 8);
    } while (lVar9 == 0);
    local_38 = 0;
    local_58 = 0;
    lVar6 = (**(code **)(**(long **)(lVar9 + 0x50) + 0x178))
                      (*(long **)(lVar9 + 0x50),param_2,&local_38,&local_58);
  } while (lVar6 == 0);
LAB_03ec3e04:
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != lVar9) {
    if (lVar6 != 0) {
      FUN_03ec3a20(*(undefined8 *)(lVar9 + 0x48),*(undefined8 *)(lVar6 + 0x48));
    }
    *(long *)(param_1 + 0x18) = lVar9;
    iVar3 = *(int *)(lVar9 + 0x18);
    if (iVar3 != 0) {
      lVar6 = *(long *)(lVar9 + 0x20);
      uVar7 = 0;
      do {
        lVar8 = *(long *)(lVar6 + (-(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4));
        if (lVar8 != 0) {
          uVar11 = 0x3f800000;
          if (0.01 <= *(float *)(lVar8 + 0xa8)) {
            *(undefined1 *)(lVar8 + 0x8c) = 1;
            *(float *)(lVar8 + 0x84) = 1.0 / *(float *)(lVar8 + 0xa8);
            uVar11 = 0;
          }
          *(undefined4 *)(lVar8 + 0x7c) = uVar11;
          *(undefined4 *)(lVar8 + 0x80) = uVar11;
          *(undefined4 *)(lVar8 + 0x88) = uVar11;
        }
        uVar1 = uVar7 + 1;
        uVar7 = uVar1 & 0xffffffff;
      } while (iVar3 != (int)uVar1);
    }
    FUN_03ec5760(*(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(lVar9 + 0x28));
    lVar9 = *(long *)(param_1 + 0x18);
  }
  uVar4 = FUN_03ec2f1c(lVar9,param_2,param_3,param_4 & 1,param_5 & 1,1);
  return uVar4;
LAB_03ec3e50:
  do {
    uVar2 = uVar10 - 1;
    if ((int)uVar10 < 1) {
      return 0;
    }
    uVar10 = uVar2;
    if (uVar5 <= uVar2) {
      uVar10 = 0;
    }
    lVar9 = *(long *)(lVar6 + (ulong)uVar10 * 8);
    uVar10 = uVar2;
  } while (lVar9 == 0);
  local_38 = 0;
  local_58 = 0;
  lVar6 = (**(code **)(**(long **)(lVar9 + 0x50) + 0x178))
                    (*(long **)(lVar9 + 0x50),param_2,&local_38,&local_58);
  if (lVar6 != 0) goto LAB_03ec3e04;
  lVar6 = *(long *)(*(long *)(lVar9 + 0x50) + 0x10);
  uVar2 = *(uint *)(lVar6 + 0x38);
  iVar3 = *(int *)(*(long *)(lVar6 + 8) + 0x10);
  uVar5 = iVar3 + 1;
  if (((iVar3 < (int)(uVar2 - 1) && uVar5 <= uVar2) && ((int)(uVar2 - 1) <= iVar3 || uVar2 != uVar5)
      ) && (lVar6 = *(long *)(*(long *)(lVar6 + 0x40) + (long)(int)uVar5 * 8), lVar6 != 0)) {
    uVar5 = param_3;
    if (*(uint *)(lVar9 + 0x18) <= param_3) {
      uVar5 = 0;
    }
    uVar7 = FUN_03ed4fa0(lVar6,*(undefined8 *)
                                (*(long *)(lVar9 + 0x20) +
                                (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar5 << 4)),
                         param_2);
    if ((uVar7 & 1) != 0) goto LAB_03ec3e04;
  }
  uVar5 = *(uint *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  goto LAB_03ec3e50;
}


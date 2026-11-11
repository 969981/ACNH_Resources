
long * FUN_004232d0(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [64];
  
  uVar10 = param_4 - param_3;
  local_b0 = auStack_a0;
  local_a8 = -0x7ffffff000000000;
  iVar7 = (int)(uVar10 >> 3);
  if (iVar7 < 0x11) {
    if (iVar7 == 0) goto LAB_00423364;
  }
  else {
    local_b0 = (undefined1 *)
               FUN_00426720(PTR_DAT_048607c0,uVar10 >> 3 & 0xffffffff,4,local_b0,0,
                            (long)&local_a8 + 4);
    if ((int)local_a8 == iVar7) goto LAB_00423364;
  }
  local_a8 = CONCAT44(local_a8._4_4_,iVar7);
LAB_00423364:
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0043a2d0(param_2);
  }
  uVar12 = (long)(int)param_1[1] - 1;
  if (iVar7 < 1) {
    uVar9 = (uint)uVar12;
  }
  else {
    uVar8 = 0;
    uVar13 = uVar10 >> 3 & 0xffffffff;
    uVar11 = uVar12 & 0xffffffff;
    do {
      while (uVar9 = (uint)uVar11, *(long *)(param_3 + uVar8 * 8) != 0) {
        uVar4 = FUN_0043a2d0();
        *(undefined4 *)(local_b0 + uVar8 * 4) = uVar4;
        uVar9 = *(int *)(local_b0 + uVar8 * 4) + uVar9;
        uVar11 = (ulong)uVar9;
        uVar8 = uVar8 + 1;
        if (uVar13 == uVar8) goto LAB_004233ec;
      }
      *(undefined4 *)(local_b0 + uVar8 * 4) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar13 != uVar8);
  }
LAB_004233ec:
  iVar2 = uVar9 + iVar3 * (iVar7 + -1);
  iVar1 = iVar2 + 1;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar2) {
    lVar5 = FUN_00426720(PTR_DAT_048607c0,iVar1,1,*param_1,(int)param_1[1]);
    *param_1 = lVar5;
  }
  if (((int)param_1[1] <= iVar2) || (iVar1 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar1;
  }
  *(undefined1 *)(*param_1 + (long)iVar2) = 0;
  if (0 < iVar7) {
    lVar5 = *param_1 + uVar12;
    if (param_2 == 0) {
      uVar12 = 0;
      do {
        lVar6 = *(long *)(param_3 + uVar12 * 8);
        if (lVar6 != 0) {
          FUN_0043a3b0(lVar5,lVar6,*(undefined4 *)(local_b0 + uVar12 * 4));
          lVar5 = lVar5 + *(int *)(local_b0 + uVar12 * 4);
        }
        uVar12 = uVar12 + 1;
      } while ((uVar10 >> 3 & 0xffffffff) != uVar12);
    }
    else {
      uVar12 = 0;
      do {
        lVar6 = *(long *)(param_3 + uVar12 * 8);
        if (lVar6 != 0) {
          FUN_0043a3b0(lVar5,lVar6,*(undefined4 *)(local_b0 + uVar12 * 4));
          lVar5 = lVar5 + *(int *)(local_b0 + uVar12 * 4);
        }
        if ((long)uVar12 < (long)(iVar7 + -1)) {
          FUN_0043a3b0(lVar5,param_2,iVar3);
          lVar5 = lVar5 + iVar3;
        }
        uVar12 = uVar12 + 1;
      } while ((uVar10 >> 3 & 0xffffffff) != uVar12);
    }
  }
  lVar5 = local_a8;
  uVar9 = local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_b0 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_b0,4,uVar9 & 0x3fffffff);
  }
  return param_1;
}


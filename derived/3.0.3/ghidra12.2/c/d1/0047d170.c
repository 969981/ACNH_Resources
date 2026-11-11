
undefined8 FUN_0047d170(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long local_50;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_048607b8;
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)param_2 < 9) {
    param_2 = 8;
  }
  local_48 = 0x8000000000000000;
  local_50 = 0;
  if (param_1 == &local_50) {
    uVar2 = *(uint *)((long)param_1 + 0xc);
    uVar5 = uVar1;
    uVar6 = (ulong)uVar1;
  }
  else {
    FUN_00426620(PTR_DAT_048607b8,&local_50,4);
    iVar7 = *(int *)((long)param_1 + 0xc);
    if (iVar7 < 0) {
      FUN_00426620(puVar4,param_1,4);
      iVar7 = *(int *)((long)param_1 + 0xc);
    }
    lVar10 = *param_1;
    *param_1 = local_50;
    uVar5 = (uint)local_48;
    uVar6 = local_48 & 0xffffffff;
    uVar2 = local_48._4_4_;
    local_48 = CONCAT44(iVar7,(int)param_1[1]);
    *(uint *)(param_1 + 1) = uVar5;
    *(uint *)((long)param_1 + 0xc) = uVar2;
    local_50 = lVar10;
  }
  if ((int)(uVar2 & 0x3fffffff) < (int)param_2) {
    lVar10 = FUN_004267f0(PTR_DAT_048607b8,param_2,4,*param_1,uVar6,
                          (undefined1 *)((long)param_1 + 0xc));
    uVar5 = *(uint *)(param_1 + 1);
    *param_1 = lVar10;
  }
  if (uVar5 != param_2) {
    *(uint *)(param_1 + 1) = param_2;
  }
  if (0 < (int)param_2) {
    uVar6 = (ulong)param_2;
    if (uVar6 - 1 < 3) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      do {
        lVar9 = lVar10 * 4;
        lVar10 = lVar10 + 4;
        *(undefined4 *)(*param_1 + lVar9) = 0xffffffff;
        *(undefined4 *)(*param_1 + lVar9 + 4) = 0xffffffff;
        *(undefined4 *)(*param_1 + lVar9 + 8) = 0xffffffff;
        *(undefined4 *)(*param_1 + lVar9 + 0xc) = 0xffffffff;
      } while (uVar6 - (uVar6 & 3) != lVar10);
    }
    if ((param_2 & 3) != 0) {
      lVar10 = lVar10 << 2;
      lVar9 = -(uVar6 & 3);
      do {
        *(undefined4 *)(*param_1 + lVar10) = 0xffffffff;
        lVar10 = lVar10 + 4;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      iVar7 = *(int *)(local_50 + uVar6 * 4);
      if (iVar7 != -1) {
        iVar8 = (int)param_1[1];
        if (iVar8 <= (int)param_1[2] * 2) {
          FUN_0047d170(param_1,iVar8 << 1);
          iVar8 = (int)param_1[1];
        }
        uVar5 = (iVar7 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar7 * -0x61c8864f & 0xff00ffU) << 8;
        uVar5 = (uVar5 >> 0x10 | uVar5 << 0x10) & iVar8 - 1U;
        lVar10 = *param_1;
        piVar11 = (int *)(lVar10 + (long)(int)uVar5 * 4);
        if (*piVar11 == -1) {
          iVar8 = 1;
        }
        else if (*piVar11 == iVar7) {
          iVar8 = 0;
        }
        else {
          do {
            uVar5 = uVar5 + 1 & iVar8 - 1U;
            iVar3 = *(int *)(lVar10 + (long)(int)uVar5 * 4);
            if (iVar3 == -1) {
              iVar8 = 1;
              goto LAB_0047d3b4;
            }
          } while (iVar3 != iVar7);
          iVar8 = 0;
LAB_0047d3b4:
          piVar11 = (int *)(lVar10 + (long)(int)uVar5 * 4);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar8;
        *piVar11 = iVar7;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
  uVar6 = local_48;
  uVar1 = local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < (long)uVar6) && (local_50 != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_50,4,uVar1 & 0x3fffffff);
  }
  return 0;
}


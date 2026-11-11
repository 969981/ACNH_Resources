
undefined8 FUN_0047d420(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long local_50;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_048607b8;
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)param_2 < 9) {
    param_2 = 8;
  }
  local_48 = 0x8000000000000000;
  local_50 = 0;
  if (param_1 == &local_50) {
    uVar2 = *(uint *)((long)param_1 + 0xc);
    uVar4 = uVar1;
    uVar5 = (ulong)uVar1;
  }
  else {
    FUN_00426620(PTR_DAT_048607b8,&local_50,8);
    iVar6 = *(int *)((long)param_1 + 0xc);
    if (iVar6 < 0) {
      FUN_00426620(puVar3,param_1,8);
      iVar6 = *(int *)((long)param_1 + 0xc);
    }
    lVar8 = *param_1;
    *param_1 = local_50;
    uVar4 = (uint)local_48;
    uVar5 = local_48 & 0xffffffff;
    uVar2 = local_48._4_4_;
    local_48 = CONCAT44(iVar6,(int)param_1[1]);
    *(uint *)(param_1 + 1) = uVar4;
    *(uint *)((long)param_1 + 0xc) = uVar2;
    local_50 = lVar8;
  }
  if ((int)(uVar2 & 0x3fffffff) < (int)param_2) {
    lVar8 = FUN_004267f0(PTR_DAT_048607b8,param_2,8,*param_1,uVar5,
                         (undefined1 *)((long)param_1 + 0xc));
    uVar4 = *(uint *)(param_1 + 1);
    *param_1 = lVar8;
  }
  if (uVar4 != param_2) {
    *(uint *)(param_1 + 1) = param_2;
  }
  if (0 < (int)param_2) {
    uVar5 = (ulong)param_2;
    if (uVar5 - 1 < 3) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      do {
        lVar7 = lVar8 * 8;
        lVar8 = lVar8 + 4;
        *(undefined8 *)(*param_1 + lVar7) = 0xffffffffffffffff;
        *(undefined8 *)(*param_1 + lVar7 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(*param_1 + lVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(*param_1 + lVar7 + 0x18) = 0xffffffffffffffff;
      } while (uVar5 - (uVar5 & 3) != lVar8);
    }
    if ((param_2 & 3) != 0) {
      lVar8 = lVar8 << 3;
      lVar7 = -(uVar5 & 3);
      do {
        *(undefined8 *)(*param_1 + lVar8) = 0xffffffffffffffff;
        lVar8 = lVar8 + 8;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      lVar8 = *(long *)(local_50 + uVar5 * 8);
      if (lVar8 != -1) {
        iVar6 = (int)param_1[1];
        if (iVar6 <= (int)param_1[2] * 2) {
          FUN_0047d420(param_1,iVar6 << 1);
          iVar6 = (int)param_1[1];
        }
        uVar4 = (int)lVar8 * -0x61c8864f;
        uVar2 = (int)((ulong)lVar8 >> 0x20) * -0x61c8864f;
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
        uVar4 = (uVar4 + (uVar4 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & iVar6 - 1U;
        lVar7 = *param_1;
        plVar10 = (long *)(lVar7 + (long)(int)uVar4 * 8);
        if (*plVar10 == -1) {
          iVar6 = 1;
        }
        else if (*plVar10 == lVar8) {
          iVar6 = 0;
        }
        else {
          do {
            uVar4 = uVar4 + 1 & iVar6 - 1U;
            lVar9 = *(long *)(lVar7 + (long)(int)uVar4 * 8);
            if (lVar9 == -1) {
              iVar6 = 1;
              goto LAB_0047d684;
            }
          } while (lVar9 != lVar8);
          iVar6 = 0;
LAB_0047d684:
          plVar10 = (long *)(lVar7 + (long)(int)uVar4 * 8);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar6;
        *plVar10 = lVar8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  uVar5 = local_48;
  uVar1 = local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < (long)uVar5) && (local_50 != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_50,8,uVar1 & 0x3fffffff);
  }
  return 0;
}


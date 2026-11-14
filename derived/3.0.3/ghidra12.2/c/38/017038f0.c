
/* WARNING: Removing unreachable block (ram,0x01703948) */

void FUN_017038f0(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  char *pcStack_58;
  
  if (param_1[0x227] == 0) {
    local_68 = 0;
  }
  else {
    local_68 = *(uint *)(param_1 + 0x2d3) >> 1 & 1;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,0xc);
    uVar7 = FUN_03850a90(param_1[0x227],0xc,0,local_68);
    puVar4 = PTR_DAT_04bb3370;
    puVar3 = PTR_DAT_04bb3368;
    if ((uVar7 & 1) != 0) {
      lVar8 = param_1[9];
      if (*(long *)(lVar8 + 0xb0) != lVar8 + 0xa8) {
        lVar10 = (long)*(int *)(lVar8 + 0xbc);
        plVar9 = (long *)(*(long *)(lVar8 + 0xb0) - lVar10);
        puVar1 = PTR_DAT_04bb2e38 + 0x10;
        do {
          if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((plVar9 != (long *)0x0) &&
             (uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,puVar3), (uVar7 & 1) != 0)) {
            local_60 = PTR_DAT_04bb2020 + 0x10;
            pcStack_58 = "TailRoot";
            FUN_00720394(plVar9,&local_60,0);
            break;
          }
          plVar9 = (long *)(*(long *)((long)plVar9 + lVar10 + 8) - lVar10);
        } while (plVar9 != (long *)((lVar8 + 0xa8) - lVar10));
      }
    }
  }
  uVar2 = *(uint *)(param_1[9] + 0x248);
  local_60._0_4_ = 1;
  if ((*(uint *)((long)param_1 + 0x15f4) >> 1 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x210))(param_1);
    uVar6 = FUN_02538bb0();
  }
  (**(code **)(*param_1 + 600))(&local_60,param_1,uVar6 & 1);
  (**(code **)(*param_1 + 0x260))(&local_68,param_1,uVar6 & 1);
  lVar8 = param_1[0x290];
  uVar2 = uVar2 >> 1 & 1;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0xcc) = (undefined4)local_60;
    *(undefined4 *)(lVar8 + 0xd0) = local_60._4_4_;
    FUN_01732604(param_1[0x290],uVar2);
  }
  lVar8 = param_1[0x291];
  if (lVar8 != 0) {
    *(uint *)(lVar8 + 0xcc) = local_68;
    *(undefined4 *)(lVar8 + 0xd0) = uStack_64;
    FUN_01732604(param_1[0x291],uVar2);
  }
  if (param_1[0x292] != 0) {
    FUN_01732604(param_1[0x292],uVar2);
  }
  (**(code **)(*param_1 + 0x4e0))((int)param_1[0x2c1],param_1);
  FUN_0172ffc0(&local_60,param_1 + 600,0);
  FUN_01703b50(param_1,1);
  return;
}


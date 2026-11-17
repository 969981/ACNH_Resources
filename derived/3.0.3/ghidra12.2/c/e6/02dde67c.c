
void FUN_02dde67c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 uVar11;
  undefined4 uVar10;
  undefined *local_50;
  undefined4 local_48;
  
  uVar11 = 0;
  uVar10 = 0;
  uVar1 = *(uint *)(param_1 + 0x1c540);
  if (*(uint *)(param_1 + 0x1c370) <= param_2) {
    param_2 = 0;
  }
  switch(*(undefined4 *)(*(long *)(param_1 + 0x1c378) + (ulong)param_2 * 0x70 + 8)) {
  case 0x2a:
    uVar2 = FUN_00da1ae4(param_1 + 0x1c458);
    uVar6 = 0;
    uVar7 = 1;
    uVar10 = uVar11;
    break;
  case 0x2b:
    uVar2 = FUN_00da1ae4(param_1 + 0x1c410);
    uVar6 = 0;
    uVar7 = 3;
    uVar10 = uVar11;
    break;
  case 0x2c:
    uVar2 = FUN_00da1ae4(param_1 + 0x1c4a0);
    uVar6 = 0;
    uVar7 = 2;
    uVar10 = uVar11;
    break;
  default:
    goto switchD_02dde6e4_caseD_2d;
  case 0x2e:
    uVar6 = 0;
    uVar2 = *(uint *)(*(long *)(*(long *)PTR_DAT_04bb43c0 + 0x5c040) + 0x78);
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    uVar7 = 4;
    uVar10 = uVar11;
    break;
  case 0x2f:
    uVar2 = FUN_00da1ae4(param_1 + 0x1c3c8);
    uVar7 = 0;
    uVar6 = 1;
    uVar10 = 0x3f800000;
  }
  *(uint *)(param_1 + 0x1c1e0) = uVar2;
  *(undefined4 *)(param_1 + 0x1c530) = uVar7;
  *(undefined4 *)(param_1 + 0x1c540) = uVar6;
switchD_02dde6e4_caseD_2d:
  puVar8 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (((puVar8 != (undefined8 *)0x0) &&
      (uVar4 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4e58), (uVar4 & 1) != 0)) &&
     (plVar9 = *(long **)(puVar8[0x45] + (ulong)(2 < *(uint *)(puVar8 + 0x44)) * 0x10),
     plVar9 != (long *)0x0)) {
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 0x14;
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_50);
    (**(code **)(plVar9[3] + 0x158))(uVar10,plVar9[1]);
  }
  if (uVar1 != *(uint *)(param_1 + 0x1c540)) {
    if ((uVar1 < 2) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x210) + (ulong)uVar1 * 8 + 0x598), lVar5 != 0)) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
      if (1 < *(uint *)(lVar5 + 0x298)) {
        if (*(uint *)(lVar5 + 0x298) == 3) {
          if (*(int *)(lVar5 + 0x2e4) != 1) {
            FUN_03864b90();
          }
        }
        else {
          *(undefined4 *)(lVar5 + 0x2e4) = 1;
          FUN_03ebb160(lVar5 + 0x290,3);
        }
      }
    }
    if (*(int *)(param_1 + 0x1c530) == 0) {
      (**(code **)(**(long **)(param_1 + 0x1c360) + 0xb0))();
    }
  }
  return;
}


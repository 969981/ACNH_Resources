
void FUN_02d296f4(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 uVar13;
  undefined4 uVar12;
  undefined *local_50;
  undefined4 local_48;
  
  uVar13 = 0;
  uVar12 = 0;
  uVar2 = *(uint *)(param_1 + 0x56f10);
  puVar1 = (uint *)(param_1 + 0x1c1f8);
  if (*(uint *)(param_1 + 0x1c388) <= param_2) {
    param_2 = 0;
  }
  switch(*(undefined4 *)(*(long *)(param_1 + 0x1c390) + (long)(int)param_2 * 0x70 + 8)) {
  case 0x2a:
    uVar4 = FUN_00da1ae4(param_1 + 0x1c470);
    *puVar1 = uVar4;
    iVar5 = 1;
    uVar9 = 1;
    uVar12 = uVar13;
    break;
  case 0x2b:
    uVar4 = FUN_00da1ae4(param_1 + 0x1c428);
    *puVar1 = uVar4;
    uVar9 = 1;
    iVar5 = 3;
    uVar12 = uVar13;
    break;
  case 0x2c:
    uVar4 = FUN_00da1ae4(param_1 + 0x1c4b8);
    *puVar1 = uVar4;
    uVar9 = 1;
    iVar5 = 2;
    uVar12 = uVar13;
    break;
  case 0x2d:
    puVar6 = (uint *)(**(code **)(*(long *)(param_1 + 0x1c558) + 0x18))();
    uVar3 = *puVar6;
    uVar4 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    if (0 < (int)uVar3) {
      uVar4 = uVar4 + 1;
    }
    iVar5 = 4;
    *puVar1 = uVar4;
    uVar9 = 1;
    uVar12 = uVar13;
    break;
  default:
    goto switchD_02d29768_caseD_2e;
  case 0x2f:
    uVar4 = FUN_00da1ae4(param_1 + 0x1c3e0);
    iVar5 = 0;
    uVar9 = 0;
    *puVar1 = uVar4;
    uVar12 = 0x3f800000;
  }
  *(int *)(param_1 + 0x56f00) = iVar5;
  *(undefined4 *)(param_1 + 0x56f10) = uVar9;
switchD_02d29768_caseD_2e:
  puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (((puVar10 != (undefined8 *)0x0) &&
      (uVar7 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58), (uVar7 & 1) != 0)) &&
     (plVar11 = *(long **)(puVar10[0x45] + (ulong)(2 < *(uint *)(puVar10 + 0x44)) * 0x10),
     plVar11 != (long *)0x0)) {
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 0x14;
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_50);
    (**(code **)(plVar11[3] + 0x158))(uVar12,plVar11[1]);
  }
  if (uVar2 != *(uint *)(param_1 + 0x56f10)) {
    if ((uVar2 < 2) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0x228) + (ulong)uVar2 * 8 + 0x580), lVar8 != 0)) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
      if (1 < *(uint *)(lVar8 + 0x298)) {
        if (*(uint *)(lVar8 + 0x298) == 3) {
          if (*(int *)(lVar8 + 0x2e4) != 1) {
            FUN_03864b90();
          }
        }
        else {
          *(undefined4 *)(lVar8 + 0x2e4) = 1;
          FUN_03ebb160(lVar8 + 0x290,3);
        }
      }
    }
    if (*(int *)(param_1 + 0x56f00) == 0) {
      (**(code **)(**(long **)(param_1 + 0x1c378) + 0xb0))();
    }
  }
  return;
}


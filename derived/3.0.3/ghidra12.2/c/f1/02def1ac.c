
void FUN_02def1ac(long param_1,uint param_2)

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
  undefined4 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 uVar14;
  undefined4 uVar13;
  undefined *local_50;
  undefined4 local_48;
  
  uVar14 = 0;
  uVar13 = 0;
  uVar2 = *(uint *)(param_1 + 0x570ec);
  puVar1 = (uint *)(param_1 + 0x1c1f8);
  if (4 < param_2) {
    param_2 = 0;
  }
  switch((&DAT_0568f9e0)[(ulong)param_2 * 0x1c]) {
  case 0x2a:
    uVar4 = FUN_00da1ae4(param_1 + 0x1c650);
    uVar9 = 0;
    *puVar1 = uVar4;
    uVar10 = 1;
    uVar13 = uVar14;
    break;
  case 0x2b:
    uVar4 = FUN_00da1ae4(param_1 + 0x1c608);
    uVar9 = 0;
    *puVar1 = uVar4;
    uVar10 = 2;
    uVar13 = uVar14;
    break;
  case 0x2c:
    uVar4 = FUN_00da1ae4(param_1 + 0x1c698);
    uVar9 = 0;
    *puVar1 = uVar4;
    uVar10 = 3;
    uVar13 = uVar14;
    break;
  case 0x2d:
    puVar6 = (uint *)(**(code **)(*(long *)(param_1 + 0x1c738) + 0x18))();
    uVar3 = *puVar6;
    uVar9 = 0;
    uVar4 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    if (0 < (int)uVar3) {
      uVar4 = uVar4 + 1;
    }
    *puVar1 = uVar4;
    uVar10 = 4;
    uVar13 = uVar14;
    break;
  default:
    goto switchD_02def220_caseD_2e;
  case 0x2f:
    uVar4 = FUN_00da1ae4(param_1 + 0x1c5c0);
    uVar10 = 0;
    *puVar1 = uVar4;
    uVar9 = 1;
    uVar13 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x570e4) = uVar10;
  *(undefined4 *)(param_1 + 0x570ec) = uVar9;
switchD_02def220_caseD_2e:
  puVar11 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (((puVar11 != (undefined8 *)0x0) &&
      (uVar7 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc4e58), (uVar7 & 1) != 0)) &&
     (plVar12 = *(long **)(puVar11[0x45] + (ulong)(2 < *(uint *)(puVar11 + 0x44)) * 0x10),
     plVar12 != (long *)0x0)) {
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 0x14;
    (**(code **)(*plVar12 + 0x18))(plVar12,&local_50);
    (**(code **)(plVar12[3] + 0x158))(uVar13,plVar12[1]);
  }
  uVar4 = *(uint *)(param_1 + 0x570ec);
  if (uVar2 != uVar4) {
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
      uVar4 = *(uint *)(param_1 + 0x570ec);
    }
    if (uVar4 == 1) {
      (**(code **)(**(long **)(param_1 + 0x1c378) + 0xb0))();
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x02e4950c) */
/* WARNING: Removing unreachable block (ram,0x02e49520) */

void FUN_02e49450(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined *local_40;
  undefined4 local_38;
  
  uVar6 = *(uint *)(param_1 + 0x588);
  uVar5 = 0xfffffffe;
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x570))) {
    lVar4 = param_1 + 0x560;
    uVar5 = uVar6 + 1 & 3;
    if (2 < uVar6) {
      uVar6 = uVar6 + 1 & 0xfffffffc;
      do {
        uVar6 = uVar6 - 4;
        lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + 8) + 8) + 8) + 8);
      } while (uVar6 != 0);
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      lVar4 = *(long *)(lVar4 + 8);
    }
    uVar5 = 0xfffffffe;
    if ((lVar4 != 0) && (lVar4 = lVar4 - *(int *)(param_1 + 0x574), lVar4 != 0)) {
      uVar5 = *(uint *)(lVar4 + 0x270) & 0xfffffffe;
    }
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,2);
  bVar1 = 0 < *(int *)(param_1 + 0x330);
  puVar7 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((((puVar7 != (undefined8 *)0x0) &&
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58), (uVar3 & 1) != 0)) &&
      (plVar8 = *(long **)(puVar7[0x45] + (ulong)(2 < *(uint *)(puVar7 + 0x44)) * 0x10),
      plVar8 != (long *)0x0)) && (plVar8[1] != 0)) {
    uVar9 = 0;
    if (uVar5 != 0x58 || !bVar1) {
      uVar9 = 0x3f800000;
    }
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_40);
    (**(code **)(plVar8[3] + 0x158))(uVar9,plVar8[1]);
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x588) + 0xa0);
  if (lVar4 != 0) {
    *(bool *)(lVar4 + 0xbc) = uVar5 == 0x58 && bVar1;
  }
  return;
}


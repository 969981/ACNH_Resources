
void FUN_02f46438(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined *local_60;
  undefined4 local_58;
  
  uVar4 = *(uint *)(param_1 + 0x382bc);
  uVar5 = (ulong)uVar4;
  uVar2 = uVar5;
  if (2 < uVar4) {
    uVar2 = 0;
  }
  if ((*(int *)(param_1 + 0x382a4 + uVar2 * 4) != *(int *)(param_1 + 0x382c4)) ||
     ((param_2 & 1) != 0)) {
    iVar8 = 0x50;
    if (uVar4 != 1) {
      iVar8 = 0;
    }
    iVar1 = 0xa0;
    if (uVar4 != 2) {
      iVar1 = iVar8;
    }
    uVar4 = iVar1 + *(int *)(param_1 + 0x382c4);
    if ((uVar4 < 200) &&
       (lVar9 = *(long *)(*(long *)(param_1 + 0x220) + (ulong)uVar4 * 8 + 0x580), lVar9 != 0)) {
      uVar4 = *(uint *)(lVar9 + 0x228);
      lVar6 = *(long *)(lVar9 + 0x230);
      plVar7 = *(long **)(lVar6 + (ulong)(1 < uVar4) * 8);
      if (plVar7 != (long *)0x0) {
        local_60 = PTR_DAT_04bc4e68 + 0x10;
        local_58 = 6;
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
        (**(code **)(plVar7[3] + 0x1b8))(plVar7[1]);
        uVar4 = *(uint *)(lVar9 + 0x228);
        lVar6 = *(long *)(lVar9 + 0x230);
      }
      plVar7 = *(long **)(lVar6 + (ulong)(2 < uVar4) * 0x10);
      if (plVar7 != (long *)0x0) {
        local_60 = PTR_DAT_04bc4e68 + 0x10;
        local_58 = 6;
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
        (**(code **)(plVar7[3] + 0x1b8))(plVar7[1]);
      }
    }
    if ((param_2 & 1) != 0) {
      return;
    }
    uVar5 = (ulong)*(uint *)(param_1 + 0x382bc);
  }
  puVar3 = PTR_DAT_04bc4e68;
  uVar4 = (uint)uVar5;
  iVar8 = 0x50;
  if (uVar4 != 1) {
    iVar8 = 0;
  }
  iVar1 = 0xa0;
  if (uVar4 != 2) {
    iVar1 = iVar8;
  }
  if (2 < uVar4) {
    uVar5 = 0;
  }
  uVar4 = iVar1 + *(int *)(param_1 + 0x382a4 + uVar5 * 4);
  if ((uVar4 < 200) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x220) + (ulong)uVar4 * 8 + 0x580), lVar9 != 0)) {
    uVar4 = *(uint *)(lVar9 + 0x228);
    lVar6 = *(long *)(lVar9 + 0x230);
    plVar7 = *(long **)(lVar6 + (ulong)(1 < uVar4) * 8);
    if (plVar7 != (long *)0x0) {
      local_60 = PTR_DAT_04bc4e68 + 0x10;
      local_58 = 7;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
      (**(code **)(plVar7[3] + 0x1c0))(plVar7[1]);
      uVar4 = *(uint *)(lVar9 + 0x228);
      lVar6 = *(long *)(lVar9 + 0x230);
    }
    plVar7 = *(long **)(lVar6 + (ulong)(2 < uVar4) * 0x10);
    if (plVar7 != (long *)0x0) {
      local_60 = puVar3 + 0x10;
      local_58 = 1;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
      (**(code **)(plVar7[3] + 400))(0x3f800000,plVar7[1]);
    }
  }
  return;
}


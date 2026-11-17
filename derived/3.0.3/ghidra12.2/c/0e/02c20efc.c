
void FUN_02c20efc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar3 = *(long *)(param_1 + 0x210);
  local_48 = *(undefined **)(lVar3 + 0x5c0);
  local_40 = *(undefined8 *)(lVar3 + 0x5c8);
  local_38 = *(undefined8 *)(lVar3 + 0x5d0);
  FUN_0344a9b0(&local_48,0,*(undefined4 *)(*(long *)(param_1 + 0xef0) + 0x18));
  puVar6 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar2 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
  if ((uVar2 & 1) == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  plVar7 = *(long **)(puVar6[0x45] + (ulong)(4 < *(uint *)(puVar6 + 0x44)) * 0x20);
  iVar1 = *(int *)(*(long *)(param_1 + 0xef0) + 0x18);
  if (plVar7 != (long *)0x0) {
    uVar8 = 0x3f800000;
    if (iVar1 != 1) {
      uVar8 = 0;
    }
    uVar9 = 0x40000000;
    if (iVar1 != 2) {
      uVar9 = uVar8;
    }
    uVar8 = 0x40400000;
    if (*(int *)(*(long *)(param_1 + 0xef0) + 0x1c) != 4) {
      uVar8 = uVar9;
    }
    local_48 = PTR_DAT_04bc4f00 + 0x10;
    local_40 = CONCAT44(local_40._4_4_,0x14);
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_48);
    (**(code **)(plVar7[3] + 0x158))(uVar8,plVar7[1]);
  }
  lVar3 = *(long *)(param_1 + 0xf88);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) == 0 && *(long *)(lVar3 + 0x10) == 0)) {
    lVar4 = *(long *)(lVar3 + 0x38);
    plVar7 = (long *)(*(int *)(lVar4 + 0x54) + lVar3);
    plVar5 = (long *)(lVar4 + 0x40);
    lVar3 = *plVar5;
    *plVar5 = (long)plVar7;
    *plVar7 = lVar3;
    plVar7[1] = (long)plVar5;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar7;
    }
    *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + 1;
  }
  return;
}


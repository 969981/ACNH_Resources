
void FUN_02c206f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_02c210a4();
  if (*(long *)(param_1 + 0xef0) != 0) {
    lVar3 = *(long *)(param_1 + 0x210);
    local_48 = *(undefined **)(lVar3 + 0x5c0);
    local_40 = *(undefined8 *)(lVar3 + 0x5c8);
    local_38 = *(undefined8 *)(lVar3 + 0x5d0);
    FUN_0344a9b0(&local_48,0,*(undefined4 *)(*(long *)(param_1 + 0xef0) + 0x18));
    puVar4 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58);
    if ((uVar2 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    plVar5 = *(long **)(puVar4[0x45] + (ulong)(4 < *(uint *)(puVar4 + 0x44)) * 0x20);
    iVar1 = *(int *)(*(long *)(param_1 + 0xef0) + 0x18);
    if (plVar5 != (long *)0x0) {
      uVar6 = 0x3f800000;
      if (iVar1 != 1) {
        uVar6 = 0;
      }
      uVar7 = 0x40000000;
      if (iVar1 != 2) {
        uVar7 = uVar6;
      }
      uVar6 = 0x40400000;
      if (*(int *)(*(long *)(param_1 + 0xef0) + 0x1c) != 4) {
        uVar6 = uVar7;
      }
      local_48 = PTR_DAT_04bc4f00 + 0x10;
      local_40 = CONCAT44(local_40._4_4_,0x14);
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
      (**(code **)(plVar5[3] + 0x158))(uVar6,plVar5[1]);
    }
  }
  return;
}


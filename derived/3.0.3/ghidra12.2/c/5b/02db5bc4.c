
void FUN_02db5bc4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined *local_50;
  undefined4 local_48;
  
  puVar2 = PTR_DAT_04bc4e60;
  if (*(int *)(param_1 + 0x240) == 2) {
    plVar5 = (long *)(param_1 + 0x218);
    plVar7 = plVar5 + *(uint *)(param_1 + 0x244);
    if (4 < *(uint *)(param_1 + 0x244)) {
      plVar7 = plVar5;
    }
    puVar6 = (undefined8 *)**(long **)(*plVar7 + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    puVar1 = PTR_DAT_04bc4e58;
    uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
    if ((uVar4 & 1) == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    plVar7 = *(long **)puVar6[0x45];
    if (plVar7 != (long *)0x0) {
      local_50 = PTR_DAT_04bc4e68 + 0x10;
      local_48 = 1;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
      (**(code **)(plVar7[3] + 400))(0x3f800000,plVar7[1]);
    }
    plVar7 = plVar5 + *(uint *)(param_1 + 0x244);
    if (4 < *(uint *)(param_1 + 0x244)) {
      plVar7 = plVar5;
    }
    puVar6 = (undefined8 *)**(long **)(*plVar7 + 0x3f8);
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0)) {
      *(undefined **)puVar1 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
    if ((uVar4 & 1) == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    plVar5 = *(long **)(puVar6[0x45] + (ulong)(4 < *(uint *)(puVar6 + 0x44)) * 0x20);
    if (plVar5 != (long *)0x0) {
      uVar8 = *(undefined4 *)(param_1 + 0x250);
      local_50 = PTR_DAT_04bc4f00 + 0x10;
      local_48 = 0x14;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
      (**(code **)(plVar5[3] + 0x158))(uVar8,plVar5[1]);
    }
    *(undefined4 *)(param_1 + 600) = 2;
  }
  return;
}


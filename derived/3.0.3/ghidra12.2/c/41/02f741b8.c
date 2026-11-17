
void FUN_02f741b8(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *local_50;
  undefined4 local_48;
  
  puVar2 = PTR_DAT_04bc4e60;
  puVar6 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar1 = PTR_DAT_04bc4e58;
  uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
  if ((uVar4 & 1) == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  plVar7 = *(long **)puVar6[0x45];
  local_50 = PTR_DAT_04bc4e68 + 0x10;
  if ((param_2 & 1) == 0) {
    local_48 = 7;
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
    (**(code **)(plVar7[3] + 0x1c0))(plVar7[1]);
    lVar5 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
    if (lVar5 != 0) {
      FUN_03d5d0e0(lVar5,0,0);
    }
  }
  else {
    local_48 = 6;
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
    (**(code **)(plVar7[3] + 0x1b8))(plVar7[1]);
  }
  puVar6 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0)) {
    *(undefined **)puVar1 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
  if ((uVar4 & 1) == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  plVar7 = *(long **)(puVar6[0x45] + (ulong)(1 < *(uint *)(puVar6 + 0x44)) * 8);
  if (plVar7 != (long *)0x0) {
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    if ((param_3 & 1) == 0) {
      local_48 = 0x14;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
      uVar8 = 0x3f800000;
    }
    else {
      local_48 = 0x14;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
      uVar8 = 0;
    }
    (**(code **)(plVar7[3] + 0x158))(uVar8,plVar7[1]);
  }
  return;
}


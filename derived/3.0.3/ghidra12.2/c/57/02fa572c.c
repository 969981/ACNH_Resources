
void FUN_02fa572c(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *local_50;
  undefined4 local_48;
  
  puVar7 = (undefined8 *)**(undefined8 **)(*(long *)(param_2 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar7 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58), puVar2 = PTR_DAT_04bc4f00,
     (uVar4 & 1) != 0)) {
    uVar6 = *(uint *)(puVar7 + 0x44);
    puVar5 = (undefined8 *)puVar7[0x45];
    plVar8 = (long *)puVar5[(ulong)(4 < uVar6) * 4];
    if (plVar8 != (long *)0x0) {
      local_50 = PTR_DAT_04bc4f00 + 0x10;
      local_48 = 0x14;
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
      (**(code **)(plVar8[3] + 0x158))(0x40000000,plVar8[1]);
      uVar6 = *(uint *)(puVar7 + 0x44);
      puVar5 = (undefined8 *)puVar7[0x45];
    }
    lVar1 = 0x28;
    if (uVar6 < 6) {
      lVar1 = 0;
    }
    plVar8 = *(long **)((long)puVar5 + lVar1);
    if (plVar8 != (long *)0x0) {
      local_50 = puVar2 + 0x10;
      local_48 = 0x14;
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
      (**(code **)(plVar8[3] + 0x158))(param_1,plVar8[1]);
      puVar5 = (undefined8 *)puVar7[0x45];
    }
    plVar8 = (long *)*puVar5;
    if (plVar8 != (long *)0x0) {
      local_50 = PTR_DAT_04bc4e68 + 0x10;
      local_48 = 6;
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_50);
      (**(code **)(plVar8[3] + 0x1b8))(plVar8[1]);
    }
  }
  return;
}


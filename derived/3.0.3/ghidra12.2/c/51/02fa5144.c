
undefined8 FUN_02fa5144(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *local_40;
  undefined4 local_38;
  
  puVar6 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar6 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58), puVar1 = PTR_DAT_04bc4f00,
     (uVar3 & 1) != 0)) {
    puVar4 = (undefined8 *)puVar6[0x45];
    plVar7 = (long *)*puVar4;
    if (plVar7 != (long *)0x0) {
      local_40 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 3;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_40);
      uVar3 = (**(code **)(plVar7[3] + 0x50))(plVar7[1]);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      puVar4 = (undefined8 *)puVar6[0x45];
    }
    uVar5 = *(uint *)(puVar6 + 0x44);
    plVar7 = (long *)puVar4[1 < uVar5];
    if (plVar7 != (long *)0x0) {
      local_40 = puVar1 + 0x10;
      local_38 = 3;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_40);
      uVar3 = (**(code **)(plVar7[3] + 0x50))(plVar7[1]);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      uVar5 = *(uint *)(puVar6 + 0x44);
      puVar4 = (undefined8 *)puVar6[0x45];
    }
    plVar7 = (long *)puVar4[(ulong)(2 < uVar5) * 2];
    if (plVar7 != (long *)0x0) {
      local_40 = puVar1 + 0x10;
      local_38 = 3;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_40);
      uVar3 = (**(code **)(plVar7[3] + 0x50))(plVar7[1]);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


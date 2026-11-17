
void FUN_0302a040(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *local_40;
  undefined4 local_38;
  
  puVar5 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58), puVar1 = PTR_DAT_04bc4f00,
     (uVar3 & 1) != 0)) {
    puVar4 = (undefined8 *)puVar5[0x45];
    plVar6 = (long *)*puVar4;
    if (plVar6 != (long *)0x0) {
      local_40 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 2;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
      (**(code **)(plVar6[3] + 0x38))(plVar6[1],0);
      puVar4 = (undefined8 *)puVar5[0x45];
    }
    plVar6 = (long *)puVar4[1 < *(uint *)(puVar5 + 0x44)];
    if (plVar6 != (long *)0x0) {
      local_40 = puVar1 + 0x10;
      local_38 = 2;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
      (**(code **)(plVar6[3] + 0x38))(plVar6[1],0);
    }
  }
  return;
}


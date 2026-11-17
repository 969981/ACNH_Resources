
byte FUN_03148b4c(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *local_30;
  undefined4 local_28;
  
  puVar5 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  bVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
  if ((bVar2 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  plVar6 = *(long **)(puVar5[0x45] + (ulong)(4 < *(uint *)(puVar5 + 0x44)) * 0x20);
  if (plVar6 != (long *)0x0) {
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    local_28 = 2;
    local_30 = puVar1;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_30);
    uVar4 = (**(code **)(plVar6[3] + 0x40))(plVar6[1]);
    if ((uVar4 & 1) == 0) {
      bVar2 = 0;
    }
    else {
      local_28 = 3;
      local_30 = puVar1;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_30);
      bVar2 = (**(code **)(plVar6[3] + 0x50))(plVar6[1]);
    }
  }
  return plVar6 != (long *)0x0 & bVar2;
}


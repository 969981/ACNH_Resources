
long * FUN_03ae1294(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 local_48 [24];
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (((*PTR_DAT_04bb3490 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb3488 = PTR_DAT_04bb3498 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3490);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bb3488), (uVar3 & 1) != 0)) {
    local_48[0] = 0;
    plVar4 = (long *)FUN_039d5610(puVar5,param_2,local_48,0x278,param_3);
    if (plVar4 != (long *)0x0) {
      plVar4[0x4a] = 0;
      *(undefined4 *)((long)plVar4 + 599) = 0;
      *(undefined1 *)((long)plVar4 + 0x25b) = 1;
      *(undefined1 *)(plVar4 + 3) = 0;
      plVar4[2] = 0;
      plVar4[0x49] = 0;
      *(undefined4 *)((long)plVar4 + 0x25c) = 0;
      *(undefined4 *)((long)plVar4 + 0x25f) = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      puVar1 = PTR_DAT_04bd17b8 + 0x10;
      *(undefined2 *)(plVar4 + 0x4e) = 0;
      plVar4[0x46] = 0;
      plVar4[0x47] = 0;
      plVar4[0x48] = 0;
      plVar4[0x4d] = (long)puVar1;
      *plVar4 = (long)&PTR_LAB_04b71b68;
      plVar4[1] = 0;
      uVar3 = FUN_039d57a8(puVar5,plVar4,param_2,local_48,param_3);
      if (((uVar3 & 1) != 0) &&
         (uVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,param_3), (uVar3 & 1) != 0)) {
        return plVar4;
      }
    }
  }
  return (long *)0x0;
}


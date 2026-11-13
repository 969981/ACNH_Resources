
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 switchD_00ede320::caseD_2(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (*(long *)(param_1 + 8) == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x48);
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if ((((plVar5 != (long *)0x0) &&
       (uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb37d0), (uVar4 & 1) != 0)) &&
      (*(int *)((long)plVar5 + 0x15c) == 10)) && ((int)plVar5[0xa0] == 0)) {
    local_28 = 0xffffffff;
    uStack_24 = 0xffffffff;
    lVar2 = plVar5[0xa1];
    local_2c = 0;
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    local_34 = 0xfffe;
    FUN_0277d4ac(&local_34);
    uVar4 = FUN_020d9e80(*(undefined8 *)PTR_DAT_04bb4758,&uStack_24,&local_28,&local_2c,&local_34,
                         puVar1,(int)lVar2);
    if ((uVar4 & 1) != 0) {
      DAT_05454084 = uStack_24;
      DAT_05454088 = local_28;
      DAT_0545408c = local_2c;
      _DAT_05454090 = (undefined4)local_34;
      DAT_05454094 = local_34._4_4_;
      return 0;
    }
  }
  return 1;
}



void FUN_03d52654(long param_1,long *param_2,undefined4 *param_3,uint *param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined1 auStack_1c0 [88];
  undefined1 auStack_168 [88];
  undefined1 auStack_110 [88];
  undefined1 auStack_b8 [88];
  undefined8 local_48;
  
  local_48 = 0;
  FUN_0071b954(auStack_b8,"%s.bfttf",param_5);
  puVar2 = PTR_DAT_04bb2868;
  plVar7 = *(long **)(param_1 + 0x20);
  if (((*PTR_DAT_04bb2868 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  puVar1 = PTR_DAT_04bb2860;
  uVar4 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb2860);
  if ((uVar4 & 1) == 0) {
    plVar7 = (long *)0x0;
  }
  lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,auStack_b8,&local_48);
  if (lVar5 == 0) {
    FUN_0071b954(auStack_110,"%s.bfotf",param_5);
    plVar7 = *(long **)(param_1 + 0x20);
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar3 != 0)) {
      *(undefined **)puVar1 = PTR_DAT_04bb2870 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2868);
    }
    uVar4 = (**(code **)*plVar7)(plVar7,puVar1);
    if ((uVar4 & 1) == 0) {
      plVar7 = (long *)0x0;
    }
    lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,auStack_110,&local_48);
    if (lVar5 == 0) {
      FUN_0071b954(auStack_168,"%s.ttf",param_5);
      plVar7 = *(long **)(param_1 + 0x20);
      if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar3 != 0)) {
        *(undefined **)puVar1 = PTR_DAT_04bb2870 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2868);
      }
      uVar4 = (**(code **)*plVar7)(plVar7,puVar1);
      if ((uVar4 & 1) == 0) {
        plVar7 = (long *)0x0;
      }
      lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,auStack_168,&local_48);
      if (lVar5 == 0) {
        FUN_0071b954(auStack_1c0,"%s.otf",param_5);
        plVar7 = *(long **)(param_1 + 0x20);
        if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar3 != 0)) {
          *(undefined **)puVar1 = PTR_DAT_04bb2870 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2868);
        }
        uVar4 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb2860);
        if ((uVar4 & 1) == 0) {
          plVar7 = (long *)0x0;
        }
        lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,auStack_1c0,&local_48);
        uVar6 = (uint)(lVar5 != 0);
        if (lVar5 == 0) {
          return;
        }
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 3;
    }
  }
  else {
    uVar6 = 2;
  }
  *param_2 = lVar5;
  *param_3 = local_48._4_4_;
  *param_4 = uVar6;
  return;
}


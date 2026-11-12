
void FUN_008104e4(long *param_1,undefined *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar1 = PTR_DAT_04bb2020;
  local_48 = 0x20;
  local_78 = (char *)CONCAT44(param_3,param_3);
  local_70 = 0;
  puStack_60 = PTR_DAT_04bb2020 + 0x10;
  local_68 = &DAT_04ccaf78;
  local_58 = PTR_DAT_04bb2120;
  local_80 = param_2;
  uStack_50 = param_4;
  plVar5 = (long *)FUN_038da2f0(*(undefined8 *)PTR_DAT_04bb28c8,&local_80);
  puVar3 = PTR_DAT_04bb2868;
  if (((*PTR_DAT_04bb2868 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    uVar6 = (**(code **)*plVar5)(plVar5,PTR_DAT_04bb2860);
    if ((uVar6 & 1) == 0) {
      plVar5 = (long *)0x0;
    }
  }
  local_80 = puVar1 + 0x10;
  *param_1 = (long)plVar5;
  local_88 = 0;
  local_78 = "output.bphhb";
  if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar4 != 0)) {
    *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  puVar2 = PTR_DAT_04bb2860;
  uVar6 = (**(code **)*plVar5)(plVar5,PTR_DAT_04bb2860);
  if ((uVar6 & 1) == 0) {
    plVar5 = (long *)0x0;
  }
  lVar7 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_80,&local_88);
  if (lVar7 != 0) {
    lVar7 = FUN_03ee9000(lVar7,local_88._4_4_,param_4);
    param_1[1] = lVar7;
  }
  local_80 = puVar1 + 0x10;
  local_88 = 0;
  plVar5 = (long *)*param_1;
  local_78 = "output_sub.bphhb";
  if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar4 != 0)) {
    *(undefined **)puVar2 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  uVar6 = (**(code **)*plVar5)(plVar5,puVar2);
  if ((uVar6 & 1) == 0) {
    plVar5 = (long *)0x0;
  }
  lVar7 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_80,&local_88);
  if (lVar7 != 0) {
    lVar7 = FUN_03ee9000(lVar7,local_88._4_4_,param_4);
    param_1[2] = lVar7;
  }
  local_80 = puVar1 + 0x10;
  local_88 = 0;
  plVar5 = (long *)*param_1;
  local_78 = "output.bphcl";
  if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar4 != 0)) {
    *(undefined **)puVar2 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  uVar6 = (**(code **)*plVar5)(plVar5,puVar2);
  if ((uVar6 & 1) == 0) {
    plVar5 = (long *)0x0;
  }
  lVar7 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_80,&local_88);
  if (lVar7 != 0) {
    lVar7 = FUN_03f05a64(lVar7,local_88._4_4_,param_4);
    param_1[3] = lVar7;
  }
  local_80 = puVar1 + 0x10;
  local_88 = 0;
  plVar5 = (long *)*param_1;
  local_78 = "output.bphfbc";
  if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar4 != 0)) {
    *(undefined **)puVar2 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  uVar6 = (**(code **)*plVar5)(plVar5,PTR_DAT_04bb2860);
  if ((uVar6 & 1) == 0) {
    plVar5 = (long *)0x0;
  }
  lVar7 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_80,&local_88);
  if (lVar7 != 0) {
    lVar7 = FUN_03ee4b10(lVar7,param_4);
    param_1[4] = lVar7;
  }
  return;
}


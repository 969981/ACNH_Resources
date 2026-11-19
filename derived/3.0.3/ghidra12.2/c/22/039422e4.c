
void FUN_039422e4(undefined4 param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [12];
  undefined4 local_94;
  undefined4 local_84;
  undefined4 local_74;
  
  FUN_007535b4(auStack_a0,param_3 + 1);
  puVar2 = PTR_DAT_04bb6208;
  if (((*PTR_DAT_04bb6208 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6208);
  }
  puVar1 = PTR_DAT_04bb6200;
  uVar4 = (**(code **)*param_3)(param_3,PTR_DAT_04bb6200);
  if ((uVar4 & 1) == 0) {
    local_ac = local_94;
    uStack_a8 = local_84;
  }
  else {
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar3 != 0)) {
      *(undefined **)puVar1 = PTR_DAT_04bb6210 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6208);
    }
    uVar4 = (**(code **)*param_3)(param_3,PTR_DAT_04bb6200);
    if ((uVar4 & 1) == 0) {
      param_3 = (undefined8 *)0x0;
    }
    local_ac = *(undefined4 *)((long)param_3 + 0x44);
    uStack_a8 = *(undefined4 *)(param_3 + 9);
    local_74 = *(undefined4 *)((long)param_3 + 0x4c);
  }
  local_a4 = local_74;
  FUN_039414d0(param_1,param_2,auStack_a0,&local_ac,param_5,param_6,param_7 & 1,param_8);
  if ((char)param_4[1] == '\0') {
    if (*(char *)((long)param_4 + 9) == '\0') goto LAB_03942428;
  }
  else {
    (**(code **)(*param_4 + 0x58))(param_4,(long)param_4 + 0xc);
    *(undefined2 *)(param_4 + 1) = 0x100;
  }
  (**(code **)(*param_4 + 0x60))
            (param_4,(long)param_4 + 0x4c,(long)param_4 + 0xc,*(undefined4 *)((long)param_4 + 0x8c))
  ;
  *(undefined1 *)((long)param_4 + 9) = 0;
LAB_03942428:
  FUN_03941e10(param_2,auStack_a0,(long)param_4 + 0xc,param_5,param_6,0,param_9);
  return;
}


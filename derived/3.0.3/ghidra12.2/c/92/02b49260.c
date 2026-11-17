
void FUN_02b49260(long param_1,undefined4 param_2,undefined4 *param_3,long param_4,
                 undefined8 *param_5,undefined1 param_6,undefined1 param_7)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 *__src;
  long local_148;
  char local_13f;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined *local_108;
  undefined1 *puStack_100;
  int local_f8;
  undefined1 auStack_f4 [127];
  undefined1 local_75;
  ulong local_70;
  long local_68;
  
  piVar5 = (int *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x52) = param_6;
  *(undefined1 *)(param_1 + 0x53) = param_7;
  if (*piVar5 != 0) {
    FUN_0071c8d0(&local_138,piVar5,param_3,0);
    if (local_138 != 0) {
      if (uStack_130._1_1_ == '\0') goto LAB_02b492f8;
      FUN_006fb3d0();
    }
    FUN_02b48700(param_1,param_3,0,1,1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffff00000000;
LAB_02b492f8:
  local_138 = *param_5;
  uStack_130 = param_5[1];
  local_120 = *(undefined4 *)(param_5 + 3);
  local_11c = *(undefined8 *)((long)param_5 + 0x1c);
  local_114 = *(undefined8 *)((long)param_5 + 0x24);
  local_f8 = 0x80;
  local_75 = 0;
  local_128 = param_5[2];
  local_108 = PTR_DAT_04bb2e90 + 0x10;
  plVar6 = param_5 + 6;
  puStack_100 = auStack_f4;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  __src = (undefined1 *)param_5[7];
  if (auStack_f4 != __src) {
    (**(code **)(param_5[6] + 0x18))(plVar6);
    lVar4 = 0;
    do {
      if (*(char *)(param_5[7] + lVar4) == '\0') goto LAB_02b493c0;
      lVar1 = param_5[7] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_02b493c0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_02b493c0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_02b493c0:
    iVar2 = (int)lVar4;
    if (local_f8 <= (int)lVar4) {
      iVar2 = local_f8 + -1;
    }
    memcpy(auStack_f4,__src,(long)iVar2);
    auStack_f4[iVar2] = 0;
  }
  local_108 = PTR_DAT_04bb2d88 + 0x10;
  local_70 = param_5[0x19];
  local_68 = param_5[0x1a];
  if (*(int *)((long)param_5 + 4) == -1) {
    local_138._4_4_ = param_2;
  }
  local_138 = CONCAT44(local_138._4_4_,*param_3);
  FUN_02a6ccf0(param_1 + 8,param_4 + 8);
  uVar7 = 1;
  local_70 = local_70 & 0xfffffdffffffffff;
  local_68 = param_1;
  iVar2 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_138,local_138 & 0xffffffff,1);
  *(int *)(param_1 + 0x48) = iVar2;
  if (iVar2 == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0xffffffff00000000;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = 1;
    FUN_0071c8d0(&local_148,piVar5,param_3,0);
    if ((((local_13f != '\0') && (local_148 != 0)) && (*(long **)(local_148 + 0x60) != (long *)0x0))
       && (iVar2 = (**(code **)(**(long **)(local_148 + 0x60) + 0xe0))(), 1 < iVar2)) {
      plVar6 = *(long **)(local_148 + 0x60);
      if (((*PTR_DAT_04bb36c0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb36c0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb36b8 = PTR_DAT_04bb36c8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb36c0);
      }
      if ((plVar6 != (long *)0x0) &&
         (uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bb36b8), (uVar3 & 1) != 0)) {
        uVar7 = 0;
      }
    }
    FUN_02b48700(param_1,param_3,0,uVar7,1);
  }
  return;
}


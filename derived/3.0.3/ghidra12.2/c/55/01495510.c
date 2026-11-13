
void FUN_01495510(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined8 *param_5,undefined1 param_6,undefined1 param_7)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
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
  undefined8 *local_68;
  
  piVar6 = (int *)((long)param_1 + 4);
  *(undefined1 *)((long)param_1 + 0xe) = param_6;
  *(undefined1 *)((long)param_1 + 0xf) = param_7;
  if (*piVar6 != 0) {
    FUN_0071c8d0(&local_138,piVar6,param_3,0);
    if (local_138 != 0) {
      if (uStack_130._1_1_ == '\0') goto LAB_0149559c;
      FUN_006fb3d0();
    }
    FUN_01494990(param_1,param_3,0,1);
  }
  *(undefined8 *)((long)param_1 + 6) = 0;
  *param_1 = 0;
LAB_0149559c:
  local_138 = *param_5;
  uStack_130 = param_5[1];
  local_120 = *(undefined4 *)(param_5 + 3);
  local_11c = *(undefined8 *)((long)param_5 + 0x1c);
  local_114 = *(undefined8 *)((long)param_5 + 0x24);
  local_f8 = 0x80;
  local_75 = 0;
  local_128 = param_5[2];
  local_108 = PTR_DAT_04bb2e90 + 0x10;
  plVar7 = param_5 + 6;
  puStack_100 = auStack_f4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  __src = (undefined1 *)param_5[7];
  if (auStack_f4 != __src) {
    (**(code **)(param_5[6] + 0x18))(plVar7);
    lVar5 = 0;
    do {
      if (*(char *)(param_5[7] + lVar5) == '\0') goto LAB_0149566c;
      lVar1 = param_5[7] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0149566c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0149566c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0149566c:
    iVar3 = (int)lVar5;
    if (local_f8 <= (int)lVar5) {
      iVar3 = local_f8 + -1;
    }
    memcpy(auStack_f4,__src,(long)iVar3);
    auStack_f4[iVar3] = 0;
  }
  local_70 = param_5[0x19];
  local_108 = PTR_DAT_04bb2d88 + 0x10;
  if (*(int *)((long)param_5 + 4) == -1) {
    local_138._4_4_ = param_2;
  }
  uVar2 = *param_3;
  uVar8 = 1;
  *(undefined4 *)param_1 = *param_4;
  local_138 = CONCAT44(local_138._4_4_,uVar2);
  local_70 = local_70 & 0xfffffdffffffffff;
  local_68 = param_1;
  iVar3 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_138,uVar2,1);
  *(int *)((long)param_1 + 4) = iVar3;
  if (iVar3 == 0) {
    *(undefined8 *)((long)param_1 + 6) = 0;
    *param_1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 1) = 1;
    FUN_0071c8d0(&local_148,piVar6,param_3,0);
    if ((((local_13f != '\0') && (local_148 != 0)) && (*(long **)(local_148 + 0x60) != (long *)0x0))
       && (iVar3 = (**(code **)(**(long **)(local_148 + 0x60) + 0xe0))(), 1 < iVar3)) {
      plVar7 = *(long **)(local_148 + 0x60);
      if (((*PTR_DAT_04bb36c0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb36c0), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb36b8 = PTR_DAT_04bb36c8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb36c0);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb36b8), (uVar4 & 1) != 0)) {
        uVar8 = 0;
      }
    }
    FUN_01494990(param_1,param_3,0,uVar8);
  }
  return;
}


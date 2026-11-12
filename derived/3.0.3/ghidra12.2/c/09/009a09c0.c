
void FUN_009a09c0(undefined2 *param_1,undefined4 param_2,undefined4 *param_3,undefined2 *param_4,
                 undefined8 *param_5,undefined1 param_6,undefined1 param_7)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 *__src;
  long local_150;
  char local_147;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined *local_110;
  undefined1 *puStack_108;
  int local_100;
  undefined1 auStack_fc [127];
  undefined1 local_7d;
  ulong local_78;
  undefined2 *local_70;
  
  piVar8 = (int *)(param_1 + 6);
  *(undefined1 *)(param_1 + 0xb) = param_6;
  *(undefined1 *)((long)param_1 + 0x17) = param_7;
  puVar4 = PTR_DAT_04bb37e0;
  if (*piVar8 != 0) {
    FUN_0071c8d0(&local_140,piVar8,param_3,0);
    if (local_140 != 0) {
      if (uStack_138._1_1_ == '\0') goto LAB_009a0a78;
      FUN_006fb3d0();
    }
    FUN_0099ffb0(param_1,param_3,0,1);
  }
  uVar3 = *(undefined2 *)puVar4;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[10] = 0;
  *param_1 = uVar3;
  *(undefined *)(param_1 + 1) = puVar4[2];
  *(undefined *)((long)param_1 + 3) = puVar4[3];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar4 + 4);
LAB_009a0a78:
  local_140 = *param_5;
  uStack_138 = param_5[1];
  local_128 = *(undefined4 *)(param_5 + 3);
  local_124 = *(undefined8 *)((long)param_5 + 0x1c);
  local_11c = *(undefined8 *)((long)param_5 + 0x24);
  local_100 = 0x80;
  local_7d = 0;
  local_130 = param_5[2];
  local_110 = PTR_DAT_04bb2e90 + 0x10;
  plVar9 = param_5 + 6;
  puStack_108 = auStack_fc;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  __src = (undefined1 *)param_5[7];
  if (auStack_fc != __src) {
    (**(code **)(param_5[6] + 0x18))(plVar9);
    lVar7 = 0;
    do {
      if (*(char *)(param_5[7] + lVar7) == '\0') goto LAB_009a0b40;
      lVar1 = param_5[7] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_009a0b40;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_009a0b40;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_009a0b40:
    iVar5 = (int)lVar7;
    if (local_100 <= (int)lVar7) {
      iVar5 = local_100 + -1;
    }
    memcpy(auStack_fc,__src,(long)iVar5);
    auStack_fc[iVar5] = 0;
  }
  local_78 = param_5[0x19];
  local_110 = PTR_DAT_04bb2d88 + 0x10;
  if (*(int *)((long)param_5 + 4) == -1) {
    local_140._4_4_ = param_2;
  }
  uVar2 = *param_3;
  *param_1 = *param_4;
  local_140 = CONCAT44(local_140._4_4_,uVar2);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_4 + 1);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_4 + 3);
  local_78 = local_78 & 0xfffffdffffffffff;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_4 + 2);
  uVar10 = 1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 4);
  local_70 = param_1;
  iVar5 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_140,uVar2,1);
  *(int *)(param_1 + 6) = iVar5;
  if (iVar5 == 0) {
    uVar3 = *(undefined2 *)puVar4;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[10] = 0;
    *param_1 = uVar3;
    *(undefined *)(param_1 + 1) = puVar4[2];
    *(undefined *)((long)param_1 + 3) = puVar4[3];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar4 + 4);
  }
  else {
    *(undefined4 *)(param_1 + 8) = 1;
    FUN_0071c8d0(&local_150,piVar8,param_3,0);
    if ((((local_147 != '\0') && (local_150 != 0)) && (*(long **)(local_150 + 0x60) != (long *)0x0))
       && (iVar5 = (**(code **)(**(long **)(local_150 + 0x60) + 0xe0))(), 1 < iVar5)) {
      plVar9 = *(long **)(local_150 + 0x60);
      if (((*PTR_DAT_04bb36c0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb36c0), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb36b8 = PTR_DAT_04bb36c8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb36c0);
      }
      if ((plVar9 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,PTR_DAT_04bb36b8), (uVar6 & 1) != 0)) {
        uVar10 = 0;
      }
    }
    FUN_0099ffb0(param_1,param_3,0,uVar10);
  }
  return;
}


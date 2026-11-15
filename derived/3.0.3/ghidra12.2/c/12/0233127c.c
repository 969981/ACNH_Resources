
void FUN_0233127c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined *__dest;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_00705c50();
  puVar3 = PTR_DAT_04bb3078;
  __dest = (undefined *)param_1[0xc];
  param_1[0x54] = (long)&DAT_3f8000003f800000;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  *param_1 = (long)(puVar3 + 0x10);
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2c1) = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  if (__dest != &DAT_040afd37) {
    iVar4 = 4;
    if ((int)param_1[0xd] < 5) {
      iVar4 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,&DAT_040afd37,(long)iVar4);
    __dest[iVar4] = 0;
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0 | 5;
  if (param_2 != (long *)0x0) {
    lVar1 = param_2[0x2c];
    *(int *)((long)param_1 + 0x284) = (int)lVar1;
    uVar6 = *(undefined4 *)((long)param_2 + 0x164);
    *(undefined4 *)(param_1 + 0x51) = uVar6;
    lVar2 = param_2[0x2d];
    *(int *)(param_1 + 0x4f) = (int)lVar1;
    *(undefined4 *)((long)param_1 + 0x27c) = uVar6;
    *(int *)((long)param_1 + 0x28c) = (int)lVar2;
    *(int *)(param_1 + 0x50) = (int)lVar2;
    uVar6 = *(undefined4 *)((long)param_2 + 0x16c);
    *(undefined4 *)(param_1 + 0x54) = uVar6;
    *(undefined4 *)((long)param_1 + 0x2a4) = uVar6;
    *(undefined4 *)(param_1 + 0x55) = uVar6;
    *(int *)((long)param_1 + 0x2b4) = (int)param_2[0x2e];
  }
  *(undefined2 *)((long)param_1 + 0x2e4) = 0;
  *param_1 = (long)&PTR_LAB_04a7f8b8;
  *(undefined1 *)((long)param_1 + 0x2e6) = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)((long)param_1 + 0x305) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((long)param_1 + 0x32d) = 0;
  if (param_2 != (long *)0x0) {
    uVar6 = (undefined4)param_1[0x4f];
    *(undefined4 *)((long)param_1 + 0x2f4) = uVar6;
    uVar7 = *(undefined4 *)((long)param_1 + 0x27c);
    uVar8 = (undefined4)param_1[0x50];
    *(undefined4 *)(param_1 + 0x5f) = uVar7;
    *(undefined4 *)((long)param_1 + 0x2fc) = uVar8;
    *(undefined4 *)(param_1 + 0x5d) = uVar6;
    *(undefined4 *)((long)param_1 + 0x2ec) = uVar7;
    *(undefined4 *)(param_1 + 0x5e) = uVar8;
    *(undefined4 *)(param_1 + 0x62) = uVar6;
    puVar3 = PTR_DAT_04bb3778;
    *(undefined4 *)((long)param_1 + 0x314) = uVar7;
    *(undefined4 *)(param_1 + 99) = uVar8;
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*param_2 + 0x20))(param_2,PTR_DAT_04bb3770);
    if ((uVar5 & 1) == 0) {
      param_2 = (long *)0x0;
    }
    param_1[0x68] = (long)param_2;
  }
  return;
}


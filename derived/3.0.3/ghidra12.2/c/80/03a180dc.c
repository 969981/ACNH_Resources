
void FUN_03a180dc(long *param_1)

{
  char cVar1;
  ushort uVar2;
  byte *pbVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar2 = *(ushort *)(param_1 + 0x198);
  if ((uVar2 >> 5 & 1) != 0) {
    *(ushort *)(param_1 + 0x198) = uVar2 & 0xffdf;
    FUN_03a18400(param_1,param_1 + 0x26,0);
    uVar2 = *(ushort *)(param_1 + 0x198);
  }
  if ((uVar2 >> 6 & 1) == 0) {
    cVar1 = (char)param_1[0xb];
    pbVar3 = PTR_DAT_04bd14f0;
  }
  else {
    *(ushort *)(param_1 + 0x198) = uVar2 & 0xffbf;
    FUN_03a188a0(param_1,(int)param_1[0x2d],0);
    cVar1 = (char)param_1[0xb];
    pbVar3 = PTR_DAT_04bd14f0;
  }
  if (cVar1 == '\0') {
    PTR_DAT_04bd14f0 = pbVar3;
    return;
  }
  plVar7 = (long *)param_1[0x25];
  PTR_DAT_04bd14f0 = pbVar3;
  if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
    *(undefined **)PTR_DAT_04bd14e8 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd14f0);
  }
  puVar4 = PTR_DAT_04bd14e8;
  uVar6 = (**(code **)(*plVar7 + 0x48))(plVar7,PTR_DAT_04bd14e8);
  if ((uVar6 & 1) == 0) {
    plVar7 = (long *)0x0;
  }
  plVar8 = (long *)param_1[0x25];
  *(int *)((long)param_1 + 0x4b4) = (int)plVar7[0x25];
  *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)((long)plVar7 + 300);
  *(int *)((long)param_1 + 0x4bc) = (int)plVar7[0x26];
  if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar5 != 0)) {
    *(undefined **)puVar4 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd14f0);
  }
  uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar4);
  if ((uVar6 & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  plVar7 = (long *)param_1[0x25];
  *(int *)(param_1 + 0x98) = (int)plVar8[0x2a];
  if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar5 != 0)) {
    *(undefined **)puVar4 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd14f0);
  }
  uVar6 = (**(code **)(*plVar7 + 0x48))(plVar7,puVar4);
  if ((uVar6 & 1) == 0) {
    plVar7 = (long *)0x0;
  }
  plVar8 = (long *)param_1[0x25];
  *(int *)((long)param_1 + 0x4c4) = (int)plVar7[0x2e];
  if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar5 != 0)) {
    *(undefined **)puVar4 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd14f0);
  }
  uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar4);
  if ((uVar6 & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  plVar7 = (long *)param_1[0x25];
  *(int *)(param_1 + 0x99) = (int)plVar8[0x32];
  if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar5 != 0)) {
    *(undefined **)puVar4 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd14f0);
  }
  uVar6 = (**(code **)(*plVar7 + 0x48))(plVar7,puVar4);
  if ((uVar6 & 1) == 0) {
    plVar7 = (long *)0x0;
  }
  plVar8 = (long *)param_1[0x25];
  *(int *)(param_1 + 0x9a) = (int)plVar7[0x36];
  if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar5 != 0)) {
    *(undefined **)puVar4 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd14f0);
  }
  uVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,PTR_DAT_04bd14e8);
  if ((uVar6 & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  *(char *)((long)param_1 + 0x4ac) = (char)plVar8[0x43];
  if ((char)param_1[0x95] != '\0') {
    *(int *)(param_1 + 0x96) = 1 - (int)param_1[0x96];
  }
                    /* WARNING: Could not recover jumptable at 0x03a18278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}


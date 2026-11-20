
int FUN_03f375ec(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  long *plVar6;
  int iVar7;
  float fVar8;
  int local_34;
  
  plVar6 = (long *)param_1[3];
  if (((*PTR_DAT_04bb4488 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4488), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb4480 = PTR_DAT_04bb4490 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4488);
  }
  if ((plVar6 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bb4480), (uVar3 & 1) == 0)) {
    plVar6 = (long *)param_1[3];
    if (((*PTR_DAT_04bb44a0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb44a0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb4498 = PTR_DAT_04bb44a8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb44a0);
    }
    fVar8 = 1.0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bb4498);
    }
    iVar7 = 0;
    iVar2 = 0x770;
  }
  else {
    fVar8 = *(float *)(plVar6 + 0xf);
    iVar7 = *(int *)((long)plVar6 + 0x7c);
    iVar2 = (**(code **)(*plVar6 + 0x40))(plVar6);
    iVar2 = iVar2 + 0x748;
  }
  lVar1 = param_1[4];
  local_34 = (int)param_1[1];
  if (local_34 == 0) {
    plVar6 = (long *)param_1[2];
    if (((char)plVar6[0xf] == '\0') ||
       (uVar3 = (**(code **)(*plVar6 + 0xb0))(plVar6,&local_34,param_1 + 5), (uVar3 & 1) == 0)) {
      return 0;
    }
    piVar5 = (int *)*param_1;
  }
  else {
    piVar5 = (int *)*param_1;
  }
  if (piVar5 != (int *)0x0) {
    *piVar5 = local_34;
  }
  fVar8 = fVar8 * (float)(local_34 + 0x1fU & 0xffffffe0);
  uVar4 = 0;
  if (fVar8 != (float)(int)fVar8) {
    uVar4 = (uint)(0.0 <= fVar8);
  }
  return iVar7 + iVar2 + (int)lVar1 + (int)fVar8 + uVar4;
}


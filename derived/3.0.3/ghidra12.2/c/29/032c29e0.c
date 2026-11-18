
void FUN_032c29e0(long *param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if ((*(ushort *)(param_1 + 10) >> 3 & 1) == 0) {
    return;
  }
  if ((*(ushort *)(param_1 + 10) >> 1 & 1) != 0) {
    return;
  }
  plVar2 = (long *)(*(long *)PTR_DAT_04bc8e90 + 8) + param_2;
  if (0xf < param_2) {
    plVar2 = (long *)(*(long *)PTR_DAT_04bc8e90 + 8);
  }
  lVar3 = *plVar2;
  plVar2 = param_1;
  do {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) break;
  } while (*(int *)(plVar2 + 0x43) == 0);
  if (*(char *)((long)param_1 + 0x21c) == '\0') {
    return;
  }
  iVar1 = (int)param_1[0x43];
  if (*(char *)((long)param_1 + 0x21e) != '\0') goto LAB_032c2a6c;
  iVar4 = iVar1;
  if ((plVar2 != (long *)0x0) && (iVar1 == 0)) {
    iVar4 = *(int *)(plVar2 + 0x43);
  }
  if (iVar4 == 0) {
    return;
  }
  if (iVar4 == 2) {
    fVar5 = *(float *)(param_1 + 0x42);
    fVar6 = *(float *)(lVar3 + 8);
LAB_032c2ae0:
    fVar5 = fVar5 - fVar6;
    fVar6 = -fVar5;
    if (0.0 <= fVar5) {
      fVar6 = fVar5;
    }
  }
  else {
    if (iVar4 == 1) {
      fVar5 = *(float *)((long)param_1 + 0x214);
      fVar6 = *(float *)(lVar3 + 0xc);
      goto LAB_032c2ae0;
    }
    fVar5 = *(float *)(param_1 + 0x42) - *(float *)(lVar3 + 8);
    fVar6 = *(float *)((long)param_1 + 0x214) - *(float *)(lVar3 + 0xc);
    fVar6 = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
  }
  if (fVar6 < 16.0) {
    return;
  }
LAB_032c2a6c:
  *(undefined2 *)((long)param_1 + 0x21c) = 0x100;
  if (iVar1 == 0) {
    FUN_032c2c40();
    return;
  }
  plVar2 = (long *)param_1[0x36];
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032c2a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,(float *)(lVar3 + 8));
  return;
}


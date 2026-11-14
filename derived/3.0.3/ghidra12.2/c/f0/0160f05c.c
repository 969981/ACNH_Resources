
void FUN_0160f05c(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  piVar3 = *(int **)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x40) + 0x38);
  if (*piVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = **(undefined8 **)(piVar3 + 2);
  }
  *(undefined8 *)(param_1 + 0x290) = uVar4;
  if (*(long *)(param_2 + 0x4af0) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x4af0) + 0x28);
    if (((*PTR_DAT_04bbdac0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbdac0), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bbdab8 = &PTR_LAB_049b3650;
      __cxa_guard_release(PTR_DAT_04bbdac0);
    }
    uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bbdab8);
    if ((uVar2 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    puVar5[0x46] = &LAB_0160f140;
    puVar5[0x45] = param_1;
    puVar5[0x47] = 0;
    puVar5[0x44] = &PTR_LAB_049b35c0;
    puVar5[0x43] = puVar5 + 0x44;
  }
  return;
}


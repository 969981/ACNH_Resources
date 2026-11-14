
void FUN_0189e0e4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x48);
  if (*(int *)((long)plVar4 + 0x174) == 0) {
    if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ff0);
    }
    uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3fe8);
    if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0189e148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)plVar4[0x59] + 0x198))();
      return;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x68);
  }
  else {
    lVar3 = plVar4[0xd];
  }
  FUN_035a2340(lVar3 + 0x278,&DAT_0418f444);
  return;
}


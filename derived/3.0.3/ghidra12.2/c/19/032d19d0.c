
void FUN_032d19d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0xf58) == '\0') {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))
              (*(long **)(param_1 + 0xe8),*(undefined8 *)(*(long *)PTR_DAT_04bc6338 + 0x1f8),0);
    *(undefined1 *)(param_1 + 0xf58) = 1;
  }
  puVar2 = PTR_DAT_04bc9000;
  plVar6 = *(long **)(param_1 + 0xf0);
  plVar4 = (long *)plVar6[3];
  if (plVar4[3] == 0) {
LAB_032d1a7c:
                    /* WARNING: Could not recover jumptable at 0x032d1a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x58))(0x3f800000,plVar6);
    return;
  }
  if (((*PTR_DAT_04bc9008 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc9008), puVar1 = PTR_DAT_04bc8f30, iVar3 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)puVar2 = puVar1;
    __cxa_guard_release(PTR_DAT_04bc9008);
  }
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))();
  if (puVar5 != (undefined8 *)puVar2) {
    do {
      puVar5 = (undefined8 *)*puVar5;
    } while (puVar5 != (undefined8 *)puVar2 && puVar5 != (undefined8 *)0x0);
    if (puVar5 == (undefined8 *)0x0) {
      plVar6 = *(long **)(param_1 + 0xf0);
      goto LAB_032d1a7c;
    }
  }
  return;
}


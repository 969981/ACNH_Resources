
void FUN_032d15b0(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *local_50;
  char *pcStack_48;
  undefined1 auStack_28 [8];
  
  if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
    plVar5 = *(long **)(*(long *)(param_2 + 0xf0) + 0x18);
  }
  else {
    local_50 = PTR_DAT_04bc8e68 + 0x10;
    pcStack_48 = *(char **)(PTR_PTR_04bb2238 + 8);
    plVar5 = (long *)FUN_032cb8e0(auStack_28,&local_50,*(undefined8 *)(param_2 + 0xf0));
  }
  FUN_0037d044(plVar5[3],plVar5);
  puVar3 = PTR_DAT_04bc9000;
  if (((*PTR_DAT_04bc9008 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc9008), puVar2 = PTR_DAT_04bc8f30, iVar4 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_04bc9008);
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
  if (puVar6 != (undefined8 *)puVar3) {
    do {
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != (undefined8 *)puVar3 && puVar6 != (undefined8 *)0x0);
    if (puVar6 == (undefined8 *)0x0) goto LAB_032d1694;
  }
  if (plVar5 + 0x1b != (long *)(*(long *)(param_1 + 0xf0) + 0x48)) {
    plVar1 = (long *)plVar5[0x1c];
    lVar7 = *plVar1;
    *(long **)(plVar5[0x1b] + 8) = plVar1;
    *plVar1 = plVar5[0x1b];
    *(long **)(lVar7 + 8) = plVar5 + 0x1b;
    plVar5[0x1b] = lVar7;
  }
LAB_032d1694:
  *(undefined8 *)(param_2 + 0xf8) = 0;
  return;
}


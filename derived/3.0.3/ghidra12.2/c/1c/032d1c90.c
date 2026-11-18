
void FUN_032d1c90(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  undefined *local_70;
  char *pcStack_68;
  long *local_50;
  undefined8 local_28;
  
  ppuVar5 = &local_70;
  *(long *)(param_2 + 0xf8) = param_1;
  puVar2 = PTR_DAT_04bc8e68;
  puVar1 = PTR_PTR_04bb2238;
  if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0xf0) + 0x18);
  }
  else {
    local_70 = PTR_DAT_04bc8e68 + 0x10;
    pcStack_68 = *(char **)(PTR_PTR_04bb2238 + 8);
    uVar4 = FUN_032cb8e0(&local_28,&local_70,*(undefined8 *)(param_2 + 0xf0));
  }
  FUN_0037cfe0(param_3,uVar4);
  pcStack_68 = *(char **)(puVar1 + 8);
  if (*pcStack_68 == '\0') {
    local_28 = *(undefined8 *)(*(long *)(param_2 + 0xf0) + 0x18);
  }
  else {
    local_70 = puVar2 + 0x10;
    local_28 = FUN_032cb8e0(&local_28,&local_70,*(undefined8 *)(param_2 + 0xf0));
  }
  local_70 = &DAT_04b1b658;
  pcStack_68 = (char *)&local_70;
  local_50 = (long *)&local_70;
  FUN_032d25d0(&local_70,&local_28);
  if ((undefined **)local_50 == &local_70) {
    puVar7 = (undefined8 *)(local_70 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_032d1d88;
    puVar7 = (undefined8 *)(*local_50 + 0x28);
    ppuVar5 = (undefined **)local_50;
  }
  (*(code *)*puVar7)(ppuVar5);
LAB_032d1d88:
  pcVar8 = *(char **)(puVar1 + 8);
  if (*pcVar8 == '\0') {
    plVar6 = *(long **)(*(long *)(param_2 + 0xf0) + 0x18);
  }
  else {
    local_70 = puVar2 + 0x10;
    pcStack_68 = pcVar8;
    plVar6 = (long *)FUN_032cb8e0(&local_28,&local_70,*(undefined8 *)(param_2 + 0xf0));
  }
  if (((*PTR_DAT_04bc9008 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc9008), puVar1 = PTR_DAT_04bc8f30, iVar3 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bc9000 = puVar1;
    __cxa_guard_release(PTR_DAT_04bc9008);
  }
  if (plVar6 != (long *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6);
    if (puVar7 != (undefined8 *)PTR_DAT_04bc9000) {
      do {
        puVar7 = (undefined8 *)*puVar7;
      } while (puVar7 != (undefined8 *)PTR_DAT_04bc9000 && puVar7 != (undefined8 *)0x0);
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
    }
    plVar6 = plVar6 + 0x1b;
    lVar9 = *plVar6;
    plVar10 = (long *)(*(long *)(param_1 + 0xf0) + 0x48);
    *plVar6 = *plVar10;
    *(long **)(lVar9 + 8) = plVar10;
    *(long **)(*plVar10 + 8) = plVar6;
    *plVar10 = lVar9;
  }
  return;
}



void FUN_0328e300(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_04bc8e68;
  local_28 = *(undefined8 *)(param_2 + 0x18);
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_48 = "Cursor";
  local_50 = puVar1;
  uVar4 = FUN_0328b570(&local_28,param_3,&local_50);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  pcStack_48 = "Hit";
  local_50 = puVar1;
  plVar5 = (long *)FUN_0328b570(&local_28,param_3,&local_50);
  plVar7 = *(long **)(param_1 + 0x68);
  *(long **)(param_1 + 0x70) = plVar5;
  if (plVar7 == (long *)0x0) {
    pcStack_48 = "P_BtnFocusKey";
    local_50 = puVar1;
    plVar7 = (long *)FUN_032d3050(&local_28,local_28,&local_50);
    puVar1 = PTR_DAT_04bc8f38;
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
      *(undefined8 *)PTR_DAT_04bc8f30 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    if (plVar7 == (long *)0x0) {
LAB_0328e3f4:
      local_50 = puVar2 + 0x10;
      *(undefined8 *)(param_1 + 0x68) = 0;
      pcStack_48 = "C_Cursor";
      plVar7 = (long *)FUN_032d3050(&local_28,local_28,&local_50);
      if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
        *(undefined8 *)PTR_DAT_04bc8f30 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      if (plVar7 == (long *)0x0) {
LAB_0328e464:
        plVar7 = (long *)0x0;
      }
      else {
        puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7);
        if (puVar6 != (undefined8 *)PTR_DAT_04bc8f30) {
          do {
            puVar6 = (undefined8 *)*puVar6;
          } while (puVar6 != (undefined8 *)PTR_DAT_04bc8f30 && puVar6 != (undefined8 *)0x0);
          if (puVar6 == (undefined8 *)0x0) goto LAB_0328e464;
        }
      }
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7);
      if (puVar6 != (undefined8 *)PTR_DAT_04bc8f30) {
        do {
          puVar6 = (undefined8 *)*puVar6;
        } while (puVar6 != (undefined8 *)PTR_DAT_04bc8f30 && puVar6 != (undefined8 *)0x0);
        if (puVar6 == (undefined8 *)0x0) goto LAB_0328e3f4;
      }
    }
    plVar5 = *(long **)(param_1 + 0x70);
    *(long **)(param_1 + 0x68) = plVar7;
  }
  if (plVar5 != (long *)0x0) goto joined_r0x0328e384;
  local_50 = puVar2 + 0x10;
  pcStack_48 = "B_Hit";
  plVar5 = (long *)FUN_032d3050(&local_28,local_28,&local_50);
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0))
  {
    *(undefined8 *)PTR_DAT_04bc8f30 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar5 == (long *)0x0) {
LAB_0328e4e4:
    plVar5 = (long *)0x0;
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
    if (puVar6 != (undefined8 *)PTR_DAT_04bc8f30) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)PTR_DAT_04bc8f30 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) goto LAB_0328e4e4;
    }
  }
  plVar7 = *(long **)(param_1 + 0x68);
  *(long **)(param_1 + 0x70) = plVar5;
joined_r0x0328e384:
  if ((plVar5 != (long *)0x0) && (plVar7 == (long *)0x0)) {
    *(long **)(param_1 + 0x68) = plVar5;
  }
  return;
}


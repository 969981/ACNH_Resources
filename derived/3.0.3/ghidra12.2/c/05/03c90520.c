
char * FUN_03c90520(long *param_1,long *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *param_1;
  if (lVar9 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((char *)param_2[1] == "RootPane") {
LAB_03c905b0:
      plVar6 = *(long **)(lVar9 + 0x18);
      puVar2 = (undefined8 *)PTR_DAT_04bc8f50;
    }
    else {
      uVar8 = 0;
      bVar4 = true;
      do {
        cVar1 = ((char *)param_2[1])[uVar8];
        if (cVar1 != "RootPane"[uVar8]) break;
        if (cVar1 == '\0') {
          if (bVar4) goto LAB_03c905b0;
          break;
        }
        bVar4 = uVar8 < 0x80000;
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x80001);
      plVar6 = (long *)FUN_03c9c9b0(lVar9,param_2,*(undefined8 *)(lVar9 + 0x18));
      puVar2 = (undefined8 *)PTR_DAT_04bc8f50;
    }
    PTR_DAT_04bc8f50 = (undefined *)puVar2;
    if (plVar6 != (long *)0x0) {
      if (((*PTR_DAT_04bc8f58 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f58), puVar3 = PTR_DAT_04bc8f30, iVar5 != 0)) {
        if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
          *(undefined8 *)puVar3 = 0;
          __cxa_guard_release(PTR_DAT_04bc8f38);
        }
        *puVar2 = puVar3;
        __cxa_guard_release(PTR_DAT_04bc8f58);
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6);
      if (puVar7 != puVar2) {
        do {
          puVar7 = (undefined8 *)*puVar7;
        } while (puVar7 != puVar2 && puVar7 != (undefined8 *)0x0);
        if (puVar7 == (undefined8 *)0x0) goto LAB_03c90620;
      }
      return (char *)plVar6[0x1c];
    }
  }
LAB_03c90620:
  return "NotFound";
}


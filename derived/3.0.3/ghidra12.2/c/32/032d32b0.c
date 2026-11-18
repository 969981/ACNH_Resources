
long * FUN_032d32b0(long *param_1,long *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  char *__s;
  int iVar12;
  long local_88;
  char acStack_80 [32];
  undefined *local_60;
  char *pcStack_58;
  
  lVar11 = *param_1;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar3 = PTR_DAT_04bc8e68;
  __s = (char *)param_2[1];
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  do {
    pcVar6 = strchr(__s,0x2f);
    local_88 = lVar11;
    if (pcVar6 == (char *)0x0) {
      local_60 = puVar3 + 0x10;
      pcStack_58 = PTR_DAT_04bb2120;
      if (__s != (char *)0x0) {
        pcStack_58 = __s;
      }
      plVar7 = (long *)FUN_032d3050(&local_88,lVar11,&local_60);
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
        *(undefined8 *)PTR_DAT_04bc8f30 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      if (plVar7 != (long *)0x0) {
        puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7);
        if (puVar8 == (undefined8 *)PTR_DAT_04bc8f30) {
          return plVar7;
        }
        do {
          puVar8 = (undefined8 *)*puVar8;
        } while (puVar8 != (undefined8 *)PTR_DAT_04bc8f30 && puVar8 != (undefined8 *)0x0);
        if (puVar8 != (undefined8 *)0x0) {
          return plVar7;
        }
      }
      return (long *)0x0;
    }
    iVar5 = (int)__s;
    iVar12 = (int)pcVar6;
    if ((uint)(iVar12 - iVar5) < 0x7fffffff) {
      if (iVar12 == iVar5) {
        pcVar10 = acStack_80;
      }
      else {
        iVar5 = iVar5 - iVar12;
        pcVar9 = acStack_80;
        do {
          cVar2 = *__s;
          pcVar10 = pcVar9;
          if (cVar2 == '\0') break;
          __s = __s + 1;
          bVar4 = iVar5 != -1;
          iVar5 = iVar5 + 1;
          pcVar10 = pcVar9 + 1;
          *pcVar9 = cVar2;
          pcVar9 = pcVar10;
        } while (bVar4);
      }
      *pcVar10 = '\0';
    }
    do {
      cVar2 = *__s;
      __s = __s + 1;
    } while (cVar2 != '\0');
    local_60 = puVar1;
    pcStack_58 = acStack_80;
    lVar11 = FUN_032c0120(&local_88,&local_60,0);
    __s = pcVar6 + 1;
    if (lVar11 == 0) {
      return (long *)0x0;
    }
  } while( true );
}


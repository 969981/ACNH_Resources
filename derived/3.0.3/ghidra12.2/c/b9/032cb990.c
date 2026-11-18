
long * FUN_032cb990(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  char *__s;
  int iVar10;
  char acStack_70 [32];
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_28;
  
  lVar9 = *param_1;
  (**(code **)(*param_2 + 0x18))(param_2);
  __s = (char *)param_2[1];
  pcVar4 = strchr(__s,0x2f);
  if (pcVar4 != (char *)0x0) {
    do {
      iVar3 = (int)__s;
      iVar10 = (int)pcVar4;
      if ((uint)(iVar10 - iVar3) < 0x7fffffff) {
        if (iVar10 == iVar3) {
          pcVar8 = acStack_70;
        }
        else {
          iVar3 = iVar3 - iVar10;
          pcVar7 = acStack_70;
          do {
            cVar1 = *__s;
            pcVar8 = pcVar7;
            if (cVar1 == '\0') break;
            __s = __s + 1;
            bVar2 = iVar3 != -1;
            iVar3 = iVar3 + 1;
            pcVar8 = pcVar7 + 1;
            *pcVar7 = cVar1;
            pcVar7 = pcVar8;
          } while (bVar2);
        }
        *pcVar8 = '\0';
      }
      do {
        cVar1 = *__s;
        __s = __s + 1;
      } while (cVar1 != '\0');
      lVar9 = FUN_0036ab80(lVar9,acStack_70);
      if (lVar9 == 0) {
        return (long *)0x0;
      }
      lVar9 = *(long *)(lVar9 + 0xe8);
      __s = pcVar4 + 1;
      pcVar4 = strchr(__s,0x2f);
    } while (pcVar4 != (char *)0x0);
  }
  local_28 = *(undefined8 *)(lVar9 + 0x18);
  pcStack_48 = PTR_DAT_04bb2120;
  if (__s != (char *)0x0) {
    pcStack_48 = __s;
  }
  local_50 = PTR_DAT_04bc8e68 + 0x10;
  plVar5 = (long *)FUN_032d3050(&local_28,local_28,&local_50);
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0))
  {
    *(undefined8 *)PTR_DAT_04bc8f30 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar5 != (long *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
    if (puVar6 == (undefined8 *)PTR_DAT_04bc8f30) {
      return plVar5;
    }
    do {
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != (undefined8 *)PTR_DAT_04bc8f30 && puVar6 != (undefined8 *)0x0);
    if (puVar6 != (undefined8 *)0x0) {
      return plVar5;
    }
  }
  return (long *)0x0;
}


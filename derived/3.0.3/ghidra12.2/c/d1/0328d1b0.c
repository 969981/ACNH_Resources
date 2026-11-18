
long FUN_0328d1b0(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  int iVar12;
  char *pcVar13;
  long lVar14;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bc8e68;
  lVar14 = *(long *)(param_1 + 0x18);
  local_68 = PTR_DAT_04bc8e68 + 0x10;
  local_58 = *(undefined **)(lVar14 + 0xf0);
  local_60 = *(undefined8 *)(param_2 + 8);
  plVar6 = (long *)FUN_032cb990(&local_58,&local_68);
  if (((*PTR_DAT_04bc9008 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc9008), puVar4 = PTR_DAT_04bc8f30, iVar5 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
      *(undefined8 *)puVar4 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bc9000 = puVar4;
    __cxa_guard_release(PTR_DAT_04bc9008);
  }
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6);
  if (puVar7 != (undefined8 *)PTR_DAT_04bc9000) {
    do {
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)PTR_DAT_04bc9000 && puVar7 != (undefined8 *)0x0);
    if (puVar7 == (undefined8 *)0x0) {
      return 0;
    }
  }
  do {
    lVar9 = plVar6[0x1d];
    plVar6 = (long *)(lVar14 + 0x110);
    while( true ) {
      while( true ) {
        lVar8 = *plVar6;
        if (*(ulong *)(lVar8 + 0x20) <= *(ulong *)(lVar9 + 0x30)) break;
        plVar6 = (long *)(lVar8 + 8);
      }
      if (*(ulong *)(lVar9 + 0x30) <= *(ulong *)(lVar8 + 0x20)) break;
      plVar6 = (long *)(lVar8 + 0x10);
    }
    pcVar10 = *(char **)(lVar8 + 0x28);
    if (pcVar10 != "Inherit") {
      if (*pcVar10 != 'I') {
LAB_0328d340:
        iVar5 = *(int *)(param_1 + 0x30);
        if (iVar5 != 0) {
          iVar12 = *(int *)(param_1 + 0x2c);
          do {
            iVar1 = 0;
            if (*(int *)(param_1 + 0x28) <= iVar12) {
              iVar1 = *(int *)(param_1 + 0x28);
            }
            lVar14 = *(long *)(*(long *)(param_1 + 0x20) + (long)(iVar12 - iVar1) * 8);
            if (*(long *)(lVar14 + 0x20) == lVar9) {
              return lVar14;
            }
            iVar12 = iVar12 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        return 0;
      }
      lVar11 = 0x7fffe;
      pcVar13 = "Inherit";
      do {
        pcVar13 = pcVar13 + 3;
        if (pcVar10[1] != pcVar13[-2]) goto LAB_0328d340;
        if (pcVar10[1] == '\0') break;
        if (pcVar10[2] != pcVar13[-1]) goto LAB_0328d340;
        if (pcVar10[2] == '\0') break;
        if ((lVar11 == 0) || (cVar2 = pcVar10[3], cVar2 != *pcVar13)) goto LAB_0328d340;
        lVar11 = lVar11 + -3;
        pcVar10 = pcVar10 + 3;
      } while (cVar2 != '\0');
    }
    local_48 = *(undefined8 *)(lVar9 + 0x18);
    pcStack_50 = "Inherit";
    local_58 = puVar3 + 0x10;
    plVar6 = (long *)FUN_032cbb30(&local_48,(undefined8 *)(lVar8 + 0x28),&local_58);
  } while( true );
}


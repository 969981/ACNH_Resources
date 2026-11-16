
void FUN_02986880(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  uint *puVar6;
  ulong uVar7;
  byte bVar8;
  
  puVar2 = PTR_DAT_04bbde00;
  bVar1 = *param_2 & param_2[1];
  bVar4 = param_2[3];
  bVar8 = bVar1 & 1;
  cVar5 = *(char *)((long)param_1 + 0x12);
  if ((cVar5 != '\0') && ((param_2[2] & 1) != 0)) {
    if (((*PTR_DAT_04bbde00 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbde00), iVar3 != 0)) {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
    }
    if (0 < (int)DAT_0523c4b0) {
      uVar7 = 0;
      do {
        if (*(int *)(DAT_0523c4b8 + uVar7 * 4) == 0) goto LAB_029868fc;
        uVar7 = uVar7 + 1;
      } while (DAT_0523c4b0 != uVar7);
    }
    uVar7 = 0;
LAB_029868fc:
    *param_1 = (int)uVar7;
    puVar6 = &DAT_0523c4b0;
    if (((*puVar2 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbde00), puVar6 = (uint *)PTR_DAT_04bbddf8, iVar3 != 0
       )) {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
      puVar6 = (uint *)PTR_DAT_04bbddf8;
    }
    if (0 < (int)*puVar6) {
      uVar7 = 0;
      do {
        if (*(int *)(*(long *)(puVar6 + 2) + uVar7 * 4) == 0) goto LAB_02986938;
        uVar7 = uVar7 + 1;
      } while (*puVar6 != uVar7);
    }
    uVar7 = 0;
LAB_02986938:
    cVar5 = '\0';
    param_1[1] = (int)uVar7;
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)((long)param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if ((cVar5 == '\0') && ((bVar4 & 1) != 0)) {
    *(undefined1 *)(param_1 + 4) = 1;
    if ((bVar1 & 1) == 0) {
LAB_029869d0:
      *(undefined1 *)((long)param_1 + 0x11) = 0;
      return;
    }
    bVar4 = 0;
LAB_0298697c:
    *(undefined1 *)((long)param_1 + 0x12) = 1;
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    bVar4 = bVar8 ^ 1;
    if ((*(char *)(param_1 + 4) == '\x01') && ((bVar1 & 1) != 0)) goto LAB_0298697c;
    if (cVar5 == '\0') goto LAB_029869d0;
  }
  cVar5 = *(char *)((long)param_1 + 0x11);
  if ((cVar5 == '\0') && (bVar4 == 0)) {
    *(byte *)((long)param_1 + 0x11) = bVar8;
    FUN_02986bf0(param_1);
    bVar8 = 0;
    if (*(char *)(param_1 + 2) != '\0') goto LAB_029869b8;
LAB_029869ec:
    if (*(char *)(param_1 + 3) == '\0') goto LAB_02986a04;
  }
  else {
    *(byte *)((long)param_1 + 0x11) = bVar8;
    bVar8 = 0;
    if (cVar5 != '\0') {
      bVar8 = bVar4;
    }
    if (*(char *)(param_1 + 2) == '\0') goto LAB_029869ec;
LAB_029869b8:
    *param_1 = param_1[1];
    *(undefined1 *)(param_1 + 3) = 1;
  }
  if ((bVar1 & 1) != 0) {
    FUN_02987380(param_1);
    *(undefined1 *)(param_1 + 3) = 0;
  }
LAB_02986a04:
  if (bVar8 == 0) {
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0523c4c0), iVar3 != 0)) {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
    }
    if (0 < (int)DAT_0523c4b0) {
      uVar7 = 0;
      do {
        if (*(int *)(DAT_0523c4b8 + uVar7 * 4) == 0) goto LAB_02986ac8;
        uVar7 = uVar7 + 1;
      } while (DAT_0523c4b0 != uVar7);
    }
  }
  else {
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0523c4c0), iVar3 != 0)) {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
    }
    if (0 < (int)DAT_0523c4b0) {
      uVar7 = 0;
      do {
        if (*(int *)(DAT_0523c4b8 + uVar7 * 4) == 0) goto LAB_02986a48;
        uVar7 = uVar7 + 1;
      } while (DAT_0523c4b0 != uVar7);
    }
    uVar7 = 0;
LAB_02986a48:
    *param_1 = (int)uVar7;
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0523c4c0), iVar3 != 0)) {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
    }
    if (0 < (int)DAT_0523c4b0) {
      uVar7 = 0;
      do {
        if (*(int *)(DAT_0523c4b8 + uVar7 * 4) == 0) goto LAB_02986ac8;
        uVar7 = uVar7 + 1;
      } while (DAT_0523c4b0 != uVar7);
    }
  }
  uVar7 = 0;
LAB_02986ac8:
  param_1[1] = (int)uVar7;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


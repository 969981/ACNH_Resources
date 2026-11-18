
void FUN_0361d4d4(long param_1)

{
  char cVar1;
  ushort uVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  short sVar6;
  code *pcVar7;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x140)) {
  case 1:
switchD_0361d504_caseD_1:
    if (-1 < *(short *)(param_1 + 0x142)) goto LAB_0361d5d0;
  case 2:
    break;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x0361d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&DAT_04194df8 + (ulong)*(ushort *)(param_1 + 0x142) * 2) * 4 +
              0x361d5d0))();
    return;
  default:
    if ((*(byte *)(param_1 + 0x282) & *(byte *)(param_1 + 0x281)) == 0) {
      if (*(int *)(param_1 + 0x10cc) == 1) {
        FUN_036396d8(param_1);
        *(undefined1 *)(param_1 + 0x140) = 0xd;
        return;
      }
      if (*(int *)(param_1 + 0x10cc) != 0) {
        FUN_03638cac(param_1);
        if ((*(byte *)(param_1 + 0x200) & 1) == 0) {
          if ((*(char *)(param_1 + 0x280) != '\0') && (*(char *)(param_1 + 0x282) != '\0')) {
            return;
          }
          *(undefined1 *)(param_1 + 0xd0) = 1;
          plVar4 = *(long **)(param_1 + 0x58);
          *(byte *)(param_1 + 0xd1) = *(byte *)(param_1 + 0xd1) | 8;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,8);
          }
          *(undefined4 *)(param_1 + 0xd8) = 1;
          return;
        }
        uVar3 = 9;
        goto LAB_0361db6c;
      }
      goto LAB_0361d5ec;
    }
    if (*(int *)(param_1 + 0x10cc) == 2) {
      *(undefined2 *)(param_1 + 0x142) = 0;
      *(undefined1 *)(param_1 + 0x140) = 1;
      goto switchD_0361d504_caseD_1;
    }
    if (*(int *)(param_1 + 0x10cc) != 1) break;
    FUN_036396d8(param_1);
    uVar3 = 2;
    goto LAB_0361db6c;
  }
  *(undefined4 *)(param_1 + 0x10cc) = 0;
  if (*(char *)(param_1 + 0x280) != '\0') {
    *(undefined2 *)(param_1 + 0x142) = 0;
    *(undefined1 *)(param_1 + 0x140) = 3;
LAB_0361d5d0:
    FUN_03638cac(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x140) = 0xb;
LAB_0361d5ec:
  *(undefined2 *)(param_1 + 0x142) = 0;
  uVar2 = *(ushort *)(param_1 + 0x10ca);
  *(ushort *)(param_1 + 0x154) = uVar2;
  if ((ulong)*(ushort *)(param_1 + 0x15a) <= (ulong)uVar2 - (ulong)*(ushort *)(param_1 + 0x158)) {
    FUN_0362c548(param_1,uVar2);
  }
  pcVar7 = *(code **)(param_1 + 0x160);
  plVar4 = (long *)(param_1 + ((long)*(ulong *)(param_1 + 0x168) >> 1) + 0xec0);
  if ((*(ulong *)(param_1 + 0x168) & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *plVar4);
  }
  uVar3 = (*pcVar7)(plVar4,(ulong)uVar2,*(undefined4 *)(param_1 + 0x15c));
  if (*(char *)(param_1 + 0xd7) == '\0') {
    *(ushort *)(param_1 + 0x10ca) = uVar2 + 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xd7) = 0;
  }
  *(undefined1 *)(param_1 + 0x150) = uVar3;
  lVar5 = FUN_0361af70(param_1,uVar3);
  *(long *)(param_1 + 0x4138) = lVar5;
  if (lVar5 == 0) {
    cVar1 = *(char *)(param_1 + 0x1cc);
    if (((cVar1 == '\0') || (*(char *)(param_1 + 0x1cd) == '\0' && cVar1 != '\x01')) ||
       (*(int *)(param_1 + 0x10cc) != 0)) {
      *(undefined1 *)(param_1 + 0x140) = 0;
    }
    else {
      sVar6 = (*(byte *)(param_1 + 0x1c5) & 0x7f) * 0x40 + 0x40;
      if (cVar1 != '\x01') {
        sVar6 = 0x40;
      }
      *(short *)(param_1 + 0x144) = sVar6;
      uVar3 = 7;
LAB_0361db6c:
      *(undefined1 *)(param_1 + 0x140) = uVar3;
      *(undefined2 *)(param_1 + 0x142) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x140) = 0xc;
  }
  return;
}


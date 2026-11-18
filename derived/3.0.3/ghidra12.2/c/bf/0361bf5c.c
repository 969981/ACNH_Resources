
void FUN_0361bf5c(long param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x140)) {
  case 1:
switchD_0361bf8c_caseD_1:
    if (-1 < *(short *)(param_1 + 0x142)) goto LAB_0361bfd8;
    break;
  case 2:
    break;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x0361c0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(ushort *)(&DAT_04194dda + (ulong)*(ushort *)(param_1 + 0x142) * 2) * 4 +
              0x361bfd8))();
    return;
  default:
    if ((*(byte *)(param_1 + 0x282) & *(byte *)(param_1 + 0x281)) == 0) {
      if (*(int *)(param_1 + 0x10cc) == 1) {
        FUN_03638ed4(param_1);
        *(undefined1 *)(param_1 + 0x140) = 0xd;
        return;
      }
      if (*(int *)(param_1 + 0x10cc) != 0) {
        FUN_03638610(param_1);
        if ((*(char *)(param_1 + 0x280) != '\0') && (*(char *)(param_1 + 0x282) != '\0')) {
          return;
        }
        *(undefined1 *)(param_1 + 0xd0) = 1;
        plVar3 = *(long **)(param_1 + 0x58);
        *(byte *)(param_1 + 0xd1) = *(byte *)(param_1 + 0xd1) | 8;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,8);
        }
        *(undefined4 *)(param_1 + 0xd8) = 1;
        return;
      }
      goto LAB_0361c054;
    }
    if (*(int *)(param_1 + 0x10cc) == 2) {
      *(undefined2 *)(param_1 + 0x142) = 0;
      *(undefined1 *)(param_1 + 0x140) = 1;
      goto switchD_0361bf8c_caseD_1;
    }
  }
  *(undefined4 *)(param_1 + 0x10cc) = 0;
  if (*(char *)(param_1 + 0x280) == '\0') {
    *(undefined1 *)(param_1 + 0x140) = 0xb;
LAB_0361c054:
    *(undefined2 *)(param_1 + 0x142) = 0;
    uVar1 = *(ushort *)(param_1 + 0x10ca);
    *(ushort *)(param_1 + 0x154) = uVar1;
    if ((ulong)*(ushort *)(param_1 + 0x15a) <= (ulong)uVar1 - (ulong)*(ushort *)(param_1 + 0x158)) {
      FUN_0361e468(param_1,uVar1);
    }
    pcVar5 = *(code **)(param_1 + 0x160);
    plVar3 = (long *)(param_1 + ((long)*(ulong *)(param_1 + 0x168) >> 1) + 0xec0);
    if ((*(ulong *)(param_1 + 0x168) & 1) != 0) {
      pcVar5 = *(code **)(pcVar5 + *plVar3);
    }
    uVar2 = (*pcVar5)(plVar3,(ulong)uVar1,*(undefined4 *)(param_1 + 0x15c));
    if (*(char *)(param_1 + 0xd7) == '\0') {
      *(ushort *)(param_1 + 0x10ca) = uVar1 + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xd7) = 0;
    }
    *(undefined1 *)(param_1 + 0x150) = uVar2;
    lVar4 = FUN_03617fb0(param_1,uVar2);
    *(long *)(param_1 + 0x4138) = lVar4;
    if (lVar4 == 0) {
      *(undefined1 *)(param_1 + 0x140) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x140) = 0xc;
    }
    return;
  }
  *(undefined2 *)(param_1 + 0x142) = 0;
  *(undefined1 *)(param_1 + 0x140) = 3;
LAB_0361bfd8:
  FUN_03638610(param_1);
  return;
}


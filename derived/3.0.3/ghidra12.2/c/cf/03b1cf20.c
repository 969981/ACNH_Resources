
void FUN_03b1cf20(long *param_1,long *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  float fVar15;
  
  uVar1 = param_3 - 1;
  if ((uVar1 < 6) && ((0x2bU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    (**(code **)(*param_1 + *(long *)(&DAT_041e0180 + (long)(int)uVar1 * 8) * 8))(param_1,param_2);
  }
  switch(param_4) {
  case 1:
    (**(code **)(*param_1 + 0x158))(param_1,param_2);
    if (param_1[0x1a] == 0) {
      return;
    }
    if (*(char *)((long)param_1 + 0xe3) == '\0') {
      *(undefined1 *)((long)param_1 + 0xe3) = 1;
      return;
    }
    if ((*(byte *)(param_2 + 7) & 0xfe) == 4) {
      return;
    }
    uVar12 = (ulong)*(byte *)((long)param_2 + 0x3e);
    if (uVar12 != 0) {
      if (*(char *)((long)param_2 + 0x3a) == '\x02') {
        return;
      }
      uVar13 = 0;
      do {
        if (uVar12 - 1 == uVar13) goto LAB_03b1d014;
        lVar9 = uVar13 + 0x3b;
        uVar13 = uVar13 + 1;
      } while (*(char *)((long)param_2 + lVar9) != '\x02');
      if (uVar13 < uVar12) {
        return;
      }
    }
LAB_03b1d014:
    pcVar11 = "_on";
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 600);
    goto LAB_03b1d264;
  case 2:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x168);
    break;
  default:
    return;
  case 4:
    (**(code **)(*param_1 + 0x178))(param_1,param_2);
    plVar8 = (long *)param_1[0x1a];
    if (plVar8 == (long *)0x0) {
      return;
    }
    (**(code **)(*plVar8 + 0x28))(plVar8,*(undefined1 *)((long)param_2 + 0x39));
    lVar9 = param_2[10];
    if ((lVar9 != 0) &&
       ((0.0 < *(float *)(lVar9 + 0x50) ||
        (fVar15 = *(float *)(lVar9 + 0x20), uVar6 = FUN_0035d97c(), fVar15 == (float)uVar6)))) {
      pcVar11 = "_noeffect";
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 600);
      goto LAB_03b1d264;
    }
    puVar2 = PTR_DAT_04bd1a60;
    if (((*PTR_DAT_04bd1a68 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1a68), iVar7 != 0)) {
      if (((*PTR_DAT_04bd1a50 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1a50), iVar7 != 0)) {
        if (((*PTR_DAT_04bd19f0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd19f0), iVar7 != 0)) {
          if (((*PTR_DAT_04bd1a00 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1a00), iVar7 != 0)) {
            if (((*PTR_DAT_04bd1a10 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1a10), iVar7 != 0)) {
              *(undefined8 *)PTR_DAT_04bd1a08 = 0;
              __cxa_guard_release(PTR_DAT_04bd1a10);
            }
            *(undefined **)PTR_DAT_04bd19f8 = PTR_DAT_04bd1a08;
            __cxa_guard_release(PTR_DAT_04bd1a00);
          }
          *(undefined **)PTR_DAT_04bd19e8 = PTR_DAT_04bd19f8;
          __cxa_guard_release(PTR_DAT_04bd19f0);
        }
        *(undefined **)PTR_DAT_04bd1a48 = PTR_DAT_04bd19e8;
        __cxa_guard_release(PTR_DAT_04bd1a50);
      }
      *(undefined **)puVar2 = PTR_DAT_04bd1a48;
      __cxa_guard_release(PTR_DAT_04bd1a68);
    }
    puVar10 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2);
    puVar5 = PTR_DAT_04bd1a48;
    if (puVar10 == (undefined8 *)puVar2) {
LAB_03b1d114:
      pcVar11 = "_check";
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 600);
LAB_03b1d124:
      (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,pcVar11);
      bVar14 = true;
    }
    else {
      do {
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)puVar2 && puVar10 != (undefined8 *)0x0);
      if (puVar10 != (undefined8 *)0x0) goto LAB_03b1d114;
      if (((*PTR_DAT_04bd1a50 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1a50), puVar2 = PTR_DAT_04bd19e8, iVar7 != 0)) {
        if (((*PTR_DAT_04bd19f0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd19f0), puVar3 = PTR_DAT_04bd19f8, iVar7 != 0)) {
          if (((*PTR_DAT_04bd1a00 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1a00), puVar4 = PTR_DAT_04bd1a08, iVar7 != 0))
          {
            if (((*PTR_DAT_04bd1a10 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1a10), iVar7 != 0)) {
              *(undefined8 *)puVar4 = 0;
              __cxa_guard_release(PTR_DAT_04bd1a10);
            }
            *(undefined **)puVar3 = puVar4;
            __cxa_guard_release(PTR_DAT_04bd1a00);
          }
          *(undefined **)puVar2 = puVar3;
          __cxa_guard_release(PTR_DAT_04bd19f0);
        }
        *(undefined **)puVar5 = puVar2;
        __cxa_guard_release(PTR_DAT_04bd1a50);
      }
      puVar10 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2);
      if (puVar10 == (undefined8 *)puVar5) {
LAB_03b1d228:
        if (*(char *)((long)param_2 + 0x69) == '\0') goto LAB_03b1d24c;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 600);
        if ((char)param_2[0xd] == '\0') {
          pcVar11 = "_uncheck";
        }
        else {
          pcVar11 = "_check";
        }
        goto LAB_03b1d124;
      }
      do {
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)puVar5 && puVar10 != (undefined8 *)0x0);
      if (puVar10 != (undefined8 *)0x0) goto LAB_03b1d228;
LAB_03b1d24c:
      bVar14 = false;
    }
    puVar2 = PTR_DAT_04bd1a78;
    if (((*PTR_DAT_04bd1a80 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1a80), iVar7 != 0)) {
      if (((*PTR_DAT_04bd19f0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd19f0), iVar7 != 0)) {
        if (((*PTR_DAT_04bd1a00 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1a00), iVar7 != 0)) {
          if (((*PTR_DAT_04bd1a10 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bd1a10), iVar7 != 0)) {
            *(undefined8 *)PTR_DAT_04bd1a08 = 0;
            __cxa_guard_release(PTR_DAT_04bd1a10);
          }
          *(undefined **)PTR_DAT_04bd19f8 = PTR_DAT_04bd1a08;
          __cxa_guard_release(PTR_DAT_04bd1a00);
        }
        *(undefined **)PTR_DAT_04bd19e8 = PTR_DAT_04bd19f8;
        __cxa_guard_release(PTR_DAT_04bd19f0);
      }
      *(undefined **)puVar2 = PTR_DAT_04bd19e8;
      __cxa_guard_release(PTR_DAT_04bd1a80);
    }
    puVar10 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2);
    if (puVar10 == (undefined8 *)puVar2) {
LAB_03b1d178:
      if ((char)param_2[0x11] == '\0') {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 600);
        if (*(char *)((long)param_2 + 0x89) == '\0') {
          pcVar11 = "_uncheck";
          goto LAB_03b1d264;
        }
      }
      else {
        if (((char)param_2[0x11] != '\x01') || (*(char *)((long)param_2 + 0x89) != '\0'))
        goto LAB_03b1d190;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 600);
      }
      pcVar11 = "_check";
    }
    else {
      do {
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != (undefined8 *)puVar2 && puVar10 != (undefined8 *)0x0);
      if (puVar10 != (undefined8 *)0x0) goto LAB_03b1d178;
LAB_03b1d190:
      if (bVar14) {
        return;
      }
      pcVar11 = "_decide";
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 600);
    }
LAB_03b1d264:
                    /* WARNING: Could not recover jumptable at 0x03b1d280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,pcVar11);
    return;
  case 6:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x188);
  }
                    /* WARNING: Could not recover jumptable at 0x03b1d0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2);
  return;
}


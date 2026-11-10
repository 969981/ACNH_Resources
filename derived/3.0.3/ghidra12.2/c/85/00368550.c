
void FUN_00368550(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  piVar9 = (int *)param_1[0x25];
  iVar10 = *(int *)(param_1 + 0x24);
  iVar3 = *piVar9;
  *(int *)(param_1 + 0x27) = iVar3;
  if (iVar3 < 0x316c7874) {
    if (iVar3 < 0x31696c61) {
      if (iVar3 < 0x31646e77) {
        if (iVar3 != 0x31636970) {
          iVar8 = 0x31646e62;
          goto LAB_00368758;
        }
      }
      else if (iVar3 != 0x31646e77) {
        if (iVar3 == 0x31656170) {
          if (0 < *(int *)((long)param_1 + 0x11c)) {
            *(int *)((long)param_1 + 0x11c) = *(int *)((long)param_1 + 0x11c) + -1;
          }
          lVar6 = param_1[0x1b];
          param_1[0x29] = lVar6;
          uVar7 = 0;
          if (lVar6 != 0) {
            uVar7 = *(undefined8 *)(lVar6 + 0x18);
          }
          param_1[0x1b] = uVar7;
        }
        else if (iVar3 == 0x31657267) {
          *(int *)(param_1 + 0x2a) = *(int *)(param_1 + 0x2a) + -1;
        }
        goto LAB_003687d0;
      }
    }
    else {
      if (0x316c6775 < iVar3) {
        if (iVar3 == 0x316c6776) {
          param_1[5] = piVar9;
        }
        else if (iVar3 == 0x316c6e66) {
          param_1[1] = piVar9;
        }
        else if (iVar3 == 0x316c7463) {
          param_1[4] = piVar9;
        }
        goto LAB_003687d0;
      }
      if (iVar3 != 0x31696c61) {
        if (iVar3 == 0x31697073) {
          param_1[3] = piVar9;
        }
        goto LAB_003687d0;
      }
    }
LAB_0036878c:
    if (iVar10 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) {
LAB_0036879c:
      piVar1 = (int *)((long)piVar9 + (ulong)(uint)piVar9[1]);
      if (*piVar1 == 0x31647375) {
        param_1[0x26] = piVar1;
        piVar9 = piVar1;
        iVar10 = iVar10 + 1;
        goto LAB_003687d0;
      }
    }
  }
  else {
    if (iVar3 < 0x3174616d) {
      if (iVar3 < 0x31726373) {
        if (iVar3 == 0x316c7874) {
          *param_1 = piVar9;
          goto LAB_003687d0;
        }
        iVar8 = 0x316e6170;
LAB_00368758:
        if (iVar3 != iVar8) goto LAB_003687d0;
      }
      else if (iVar3 != 0x31726373) {
        if (iVar3 != 0x31736170) {
          if (iVar3 == 0x31737267) {
            *(int *)(param_1 + 0x2a) = *(int *)(param_1 + 0x2a) + 1;
          }
          goto LAB_003687d0;
        }
        plVar4 = (long *)param_1[0x29];
        param_1[0x1b] = plVar4;
        if (((*PTR_DAT_04bc9578 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc9578), puVar2 = PTR_DAT_04bc8f30, iVar3 != 0)) {
          if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
            *(undefined8 *)puVar2 = 0;
            __cxa_guard_release(PTR_DAT_04bc8f38);
          }
          *(undefined **)PTR_DAT_04bc9570 = puVar2;
          __cxa_guard_release(PTR_DAT_04bc9578);
        }
        if (plVar4 == (long *)0x0) {
LAB_003688b8:
          iVar3 = *(int *)((long)param_1 + 0x11c);
          if (iVar3 < 1) goto LAB_003687d0;
        }
        else {
          puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))();
          if (puVar5 != (undefined8 *)PTR_DAT_04bc9570) {
            do {
              puVar5 = (undefined8 *)*puVar5;
            } while (puVar5 != (undefined8 *)PTR_DAT_04bc9570 && puVar5 != (undefined8 *)0x0);
            if (puVar5 == (undefined8 *)0x0) goto LAB_003688b8;
          }
          iVar3 = *(int *)((long)param_1 + 0x11c);
        }
        *(int *)((long)param_1 + 0x11c) = iVar3 + 1;
        goto LAB_003687d0;
      }
      goto LAB_0036878c;
    }
    if (iVar3 < 0x31747270) {
      if (iVar3 == 0x3174616d) {
        param_1[2] = piVar9;
        goto LAB_003687d0;
      }
      if (iVar3 != 0x31746e63) {
        iVar8 = 0x31747063;
        goto LAB_00368758;
      }
      goto LAB_0036878c;
    }
    if ((iVar3 == 0x31747270) || (iVar3 == 0x31747874)) goto LAB_0036878c;
    if (iVar3 != 0x3174796c) goto LAB_003687d0;
    *(int *)(param_1 + 9) = piVar9[5];
    *(int *)((long)param_1 + 0x4c) = piVar9[6];
    if (iVar10 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) goto LAB_0036879c;
  }
  param_1[0x26] = 0;
LAB_003687d0:
  *(int *)((long)param_1 + 0x13c) = iVar10 + 1;
  if (iVar10 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) {
    param_1[0x28] = (long)piVar9 + (ulong)(uint)piVar9[1];
    return;
  }
  param_1[0x28] = 0;
  return;
}


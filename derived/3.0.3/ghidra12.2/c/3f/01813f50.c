
void FUN_01813f50(long *param_1,long param_2)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  float fVar13;
  
  FUN_0189add0();
  plVar9 = (long *)param_1[9];
  *(bool *)((long)param_1 + 0x432) = *(int *)(param_2 + 0x24) != 0;
  if (((*PTR_DAT_04bb3ff0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3ff0);
  }
  if ((plVar9 == (long *)0x0) ||
     (uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3fe8), (uVar6 & 1) == 0)) {
    param_1[0x7a] = 0;
  }
  else {
    param_1[0x7a] = (long)plVar9;
    puVar4 = PTR_DAT_04bbe600;
    puVar3 = PTR_DAT_04bbe5f8;
    if ((long *)plVar9[0x16] == plVar9 + 0x15) {
      param_1[0x7b] = 0;
      lVar10 = plVar9[0x12];
    }
    else {
      lVar10 = (long)*(int *)((long)plVar9 + 0xbc);
      plVar11 = (long *)(plVar9[0x16] - lVar10);
      do {
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          *(undefined ***)puVar3 = &PTR_LAB_049c58f8;
          __cxa_guard_release(puVar4);
        }
        if ((plVar11 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar3), (uVar6 & 1) != 0))
        goto LAB_01814340;
        plVar11 = (long *)(*(long *)((long)plVar11 + lVar10 + 8) - lVar10);
      } while (plVar11 != (long *)((long)(plVar9 + 0x15) - lVar10));
      plVar11 = (long *)0x0;
LAB_01814340:
      param_1[0x7b] = (long)plVar11;
      if (param_1[0x7a] == 0) goto LAB_01814060;
      lVar10 = *(long *)(param_1[0x7a] + 0x90);
    }
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x2a8) = *(byte *)(lVar10 + 0x2a8) | 4;
    }
  }
LAB_01814060:
  uVar6 = (**(code **)(*param_1 + 0x210))(param_1);
  puVar3 = PTR_DAT_04bb47e0;
  if (((uVar6 & 1) != 0) && (*(char *)((long)param_1 + 0x432) == '\0')) {
    lVar10 = *(long *)PTR_DAT_04bb47e0;
    iVar5 = (**(code **)(*param_1 + 0x100))(param_1);
    if (iVar5 == 0x283) {
      uVar8 = 0;
    }
    else {
      if (iVar5 != 0x24c) goto LAB_018140d0;
      uVar8 = 1;
    }
    if ((uVar8 < *(uint *)(lVar10 + 0x160)) && (lVar10 = *(long *)(lVar10 + 0x168), lVar10 != 0)) {
      *(undefined1 *)(lVar10 + (ulong)uVar8) = 1;
    }
  }
LAB_018140d0:
  lVar10 = *(long *)puVar3;
  plVar9 = *(long **)(lVar10 + 0x28);
  if (((*PTR_DAT_04bbe618 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbe618), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bbe610 = PTR_DAT_04bb5e78 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbe618);
  }
  if ((plVar9 == (long *)0x0) ||
     (uVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,PTR_DAT_04bbe610), (uVar6 & 1) == 0)) {
    plVar9 = (long *)FUN_01818550(lVar10);
  }
  else {
    plVar9 = plVar9 + 0x18;
  }
  param_1[0x8c] = (long)plVar9;
  lVar10 = FUN_018143f0(*(undefined8 *)puVar3,*(undefined4 *)(param_2 + 0x20));
  puVar3 = PTR_DAT_04bb6298;
  param_1[0x8d] = lVar10;
  sVar2 = *(short *)puVar3;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 0x1a & 1) != 0) && ((*puVar1 >> 1 & 1) != 0)) {
      if ((((*puVar1 >> 0x1a & 1) != 0) &&
          (((*puVar1 >> 1 & 1) != 0 && (lVar10 = *(long *)PTR_DAT_04bb59d8, lVar10 != 0)))) &&
         ((iVar5 = (int)((float)(int)*(float *)((long)param_1 + 0x334) / 5.0) -
                   (uint)(*(float *)((long)param_1 + 0x334) < 0.0),
          iVar5 < *(int *)(lVar10 + 0x28) || *(int *)(lVar10 + 0x38) < iVar5 ||
          ((iVar5 = (int)((float)(int)*(float *)((long)param_1 + 0x33c) / 5.0) -
                    (uint)(*(float *)((long)param_1 + 0x33c) < 0.0), iVar5 < *(int *)(lVar10 + 0x2c)
           || (*(int *)(lVar10 + 0x3c) < iVar5)))))) {
        *(undefined1 *)((long)param_1 + 0x494) = 1;
      }
      if (*(char *)((long)param_1 + 0x431) == '\0') {
        lVar10 = *(long *)(*(long *)(param_1[9] + 0x60) + 0x1150);
        if (lVar10 != 0) {
          uVar8 = *(uint *)(lVar10 + 0x20);
          if ((uint)*(ushort *)(lVar10 + 0x284) <= *(uint *)(lVar10 + 0x20)) {
            uVar8 = (uint)*(ushort *)(lVar10 + 0x284);
          }
          if (uVar8 != 0) {
            lVar10 = *(long *)(lVar10 + 0x28);
            uVar12 = 0;
            do {
              FUN_03ad4c20(0,*(undefined8 *)(lVar10 + (long)(int)uVar12 * 0x38),0xffffffff,
                           0xffffffff);
              uVar12 = uVar12 + 1;
            } while (uVar8 != uVar12);
          }
        }
        pfVar7 = (float *)(**(code **)(*(long *)(param_1[0x8c] + 0x1b0) + 0xf0))
                                    (param_1[0x8c] + 0x1b0);
        fVar13 = *pfVar7;
        pfVar7 = (float *)(**(code **)(*(long *)(param_1[0x8c] + 0x1e0) + 0xf0))
                                    (param_1[0x8c] + 0x1e0);
        *(int *)(param_1 + 0x92) = (int)(fVar13 - *pfVar7);
      }
    }
  }
  return;
}


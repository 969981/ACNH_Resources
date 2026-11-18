
void FUN_032d3820(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  long *local_58;
  undefined *local_50;
  undefined *puStack_48;
  
  if (*param_3 != 0) {
    return;
  }
  (**(code **)(*param_4 + 0x18))(param_4);
  (**(code **)(*param_4 + 0x18))(param_4);
  lVar10 = param_4[1];
  (**(code **)(*param_5 + 0x18))(param_5);
  if (lVar10 != param_5[1]) {
    uVar9 = 0;
    bVar4 = true;
    while( true ) {
      if (*(char *)(param_4[1] + uVar9) != *(char *)(param_5[1] + uVar9)) {
        return;
      }
      if (*(char *)(param_4[1] + uVar9) == '\0') break;
      bVar4 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
      if (uVar9 == 0x80001) {
        return;
      }
    }
    if (!bVar4) {
      return;
    }
  }
  *param_3 = (long)param_2;
  plVar6 = (long *)(**(code **)(*param_2 + 0x60))(param_2,&DAT_040c1e5f,1);
  puVar3 = PTR_DAT_04bc8f50;
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (*(char *)*param_1 != '\0') {
    if (((*PTR_DAT_04bc8f58 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f58), puVar2 = PTR_DAT_04bc8f30, iVar5 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)puVar3 = puVar2;
      __cxa_guard_release(PTR_DAT_04bc8f58);
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6);
    if (puVar7 != (undefined8 *)puVar3) {
      do {
        puVar7 = (undefined8 *)*puVar7;
      } while (puVar7 != (undefined8 *)puVar3 && puVar7 != (undefined8 *)0x0);
      if (puVar7 == (undefined8 *)0x0) goto LAB_032d39e4;
    }
    local_50 = PTR_DAT_04bc8e78 + 0x10;
    puStack_48 = PTR_DAT_04bb2da0;
    if ((undefined *)plVar6[0x1b] != (undefined *)0x0) {
      puStack_48 = (undefined *)plVar6[0x1b];
    }
    local_58 = plVar6;
    fVar11 = (float)FUN_032d8d10(&local_58,&local_50);
    if (fVar11 != *(float *)(plVar6 + 10)) {
      uVar8 = (uint)fVar11;
      fVar12 = (float)(int)fVar11;
      uVar1 = -(uVar8 & 1);
      if (-1 < (int)uVar8) {
        uVar1 = uVar8 & 1;
      }
      if (fVar11 != fVar12 || uVar1 != 0) {
        iVar5 = 2;
        if ((int)uVar8 < 0) {
          iVar5 = -2;
        }
        fVar12 = (float)(int)((uVar8 - uVar1) + iVar5);
      }
      *(float *)(plVar6 + 10) = fVar12;
      *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) | 0x10;
    }
  }
LAB_032d39e4:
  *param_3 = (long)plVar6;
  return;
}


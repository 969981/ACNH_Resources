
void FUN_00372a50(long *param_1,float *param_2,float *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_70 [2];
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    return;
  }
  uVar5 = FUN_0037ece8();
  puVar3 = PTR_DAT_04bc8f50;
  if ((uVar5 & 1) != 0) goto LAB_00372d68;
  if (((*PTR_DAT_04bc8f58 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f58), iVar4 != 0))
  {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
      *(undefined8 *)PTR_DAT_04bc8f30 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)puVar3 = PTR_DAT_04bc8f30;
    __cxa_guard_release(PTR_DAT_04bc8f58);
  }
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
  puVar2 = PTR_DAT_04bc91b0;
  if (puVar6 == (undefined8 *)puVar3) {
LAB_00372ad8:
    fVar10 = 0.0;
    fVar8 = *(float *)(param_1 + 10);
    bVar1 = *(byte *)((long)param_1 + 0x5b) & 3;
    if (bVar1 != 1) {
      if (bVar1 == 2) {
        fVar10 = -fVar8;
      }
      else {
        fVar10 = fVar8 * -0.5;
      }
    }
    fVar9 = *(float *)((long)param_1 + 0x54);
    bVar1 = *(byte *)((long)param_1 + 0x5b) >> 2 & 3;
    fVar11 = 0.0;
    if ((bVar1 != 1) && (fVar11 = fVar9, bVar1 != 2)) {
      fVar11 = fVar9 * 0.5;
    }
    FUN_00372ef0(fVar8,fVar9,fVar10,fVar11,local_70,param_1,param_4);
    (**(code **)(*param_1 + 0x120))(&local_60,param_1);
    fVar10 = local_58 - local_60;
    (**(code **)(*param_1 + 0x120))(&local_60,param_1);
    fVar8 = 0.0;
    bVar1 = *(byte *)((long)param_1 + 0x5b) & 3;
    if (bVar1 != 1) {
      if (bVar1 == 2) {
        fVar8 = -fVar10;
      }
      else {
        fVar8 = fVar10 * -0.5;
      }
    }
    local_5c = local_5c - local_54;
    bVar1 = *(byte *)((long)param_1 + 0x5b) >> 2 & 3;
    fVar11 = 0.0;
    if ((bVar1 != 1) && (fVar11 = local_5c, bVar1 != 2)) {
      fVar11 = local_5c * 0.5;
    }
    FUN_00372ef0(fVar10,local_5c,fVar8,fVar11,&local_60,param_1,param_4);
    bVar1 = *(byte *)((long)param_1 + 0x116) & 3;
    if (bVar1 == 1) {
      local_58 = (local_58 - local_60) + local_70[0];
      local_60 = local_70[0];
    }
    else if (bVar1 == 2) {
      local_60 = local_68 - (local_58 - local_60);
      local_58 = local_68;
    }
  }
  else {
    do {
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != (undefined8 *)puVar3 && puVar6 != (undefined8 *)0x0);
    if ((param_1 != (long *)0x0) && (puVar6 != (undefined8 *)0x0)) goto LAB_00372ad8;
    if (((*PTR_DAT_04bc91b8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc91b8), iVar4 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
        *(undefined8 *)PTR_DAT_04bc8f30 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)puVar2 = PTR_DAT_04bc8f30;
      __cxa_guard_release(PTR_DAT_04bc91b8);
    }
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    puVar3 = PTR_DAT_04bc9540;
    plVar7 = param_1;
    if (puVar6 != (undefined8 *)puVar2) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)puVar2 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) {
        plVar7 = (long *)0x0;
      }
    }
    if ((*PTR_DAT_04bc9548 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_04bc9548);
      puVar2 = PTR_DAT_04bc8f30;
      if (iVar4 != 0) {
        if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
          *(undefined8 *)puVar2 = 0;
          __cxa_guard_release(PTR_DAT_04bc8f38);
        }
        *(undefined **)puVar3 = puVar2;
        __cxa_guard_release(PTR_DAT_04bc9548);
      }
    }
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar6 == (undefined8 *)puVar3) {
LAB_00372ba8:
      fVar10 = 0.0;
      fVar8 = *(float *)(param_1 + 10);
      bVar1 = *(byte *)((long)param_1 + 0x5b) & 3;
      if (bVar1 != 1) {
        if (bVar1 == 2) {
          fVar10 = -fVar8;
        }
        else {
          fVar10 = fVar8 * -0.5;
        }
      }
      fVar9 = *(float *)((long)param_1 + 0x54);
      bVar1 = *(byte *)((long)param_1 + 0x5b) >> 2 & 3;
      fVar11 = 0.0;
      if ((bVar1 != 1) && (fVar11 = fVar9, bVar1 != 2)) {
        fVar11 = fVar9 * 0.5;
      }
      FUN_00372ef0(fVar8,fVar9,fVar10,fVar11,&local_60,param_1,param_4);
    }
    else {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)puVar3 && puVar6 != (undefined8 *)0x0);
      if (plVar7 != (long *)0x0 || puVar6 != (undefined8 *)0x0) goto LAB_00372ba8;
      local_60 = 3.4028235e+38;
      local_58 = -3.4028235e+38;
    }
  }
  if (*param_2 <= local_60) {
    local_60 = *param_2;
  }
  *param_2 = local_60;
  if (local_58 <= *param_3) {
    local_58 = *param_3;
  }
  *param_3 = local_58;
LAB_00372d68:
  for (plVar7 = (long *)param_1[5]; plVar7 != param_1 + 4; plVar7 = (long *)plVar7[1]) {
    FUN_00372a50(plVar7 + -1,param_2,param_3,param_4);
  }
  return;
}


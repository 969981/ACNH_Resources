
void FUN_03288880(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  long *local_58;
  undefined *local_50;
  char *local_48;
  
  puVar1 = PTR_DAT_04bc8e68;
  local_50 = PTR_DAT_04bc8e68 + 0x10;
  local_58 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
  local_48 = "UF_Cursor";
  plVar5 = (long *)FUN_032d3050(&local_58,local_58,&local_50);
  puVar3 = PTR_DAT_04bc8f38;
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0))
  {
    *(undefined8 *)PTR_DAT_04bc8f30 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar5 != (long *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
    puVar2 = PTR_DAT_04bc8f30;
    if (puVar6 != (undefined8 *)PTR_DAT_04bc8f30) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)PTR_DAT_04bc8f30 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
    }
    lVar7 = plVar5[3];
    local_50 = puVar1 + 0x10;
    local_48 = "P_Grow";
    local_58 = plVar5;
    plVar5 = (long *)FUN_032d3050(&local_58,plVar5,&local_50);
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
    if (puVar6 != (undefined8 *)puVar2) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)puVar2 && puVar6 != (undefined8 *)0x0);
    }
    fVar8 = *(float *)(lVar7 + 0x50);
    fVar9 = *(float *)(lVar7 + 0x54);
    local_50 = puVar1 + 0x10;
    *(byte *)(plVar5 + 0xb) = *(byte *)(plVar5 + 0xb) | 0x10;
    *(float *)(plVar5 + 10) = fVar8 + 10.0;
    *(float *)((long)plVar5 + 0x54) = fVar9 + 10.0;
    local_48 = "P_Main";
    plVar5 = (long *)FUN_032d3050(&local_58,local_58,&local_50);
    if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
    if (puVar6 != (undefined8 *)puVar2) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)puVar2 && puVar6 != (undefined8 *)0x0);
    }
    fVar8 = *(float *)(lVar7 + 0x50);
    fVar9 = *(float *)(lVar7 + 0x54);
    *(byte *)(plVar5 + 0xb) = *(byte *)(plVar5 + 0xb) | 0x10;
    *(float *)(plVar5 + 10) = fVar8 + 10.0;
    *(float *)((long)plVar5 + 0x54) = fVar9 + 10.0;
  }
  return;
}


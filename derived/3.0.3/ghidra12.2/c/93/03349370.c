
void FUN_03349370(long param_1)

{
  float *pfVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_58;
  undefined *local_50;
  char *local_48;
  
  puVar2 = PTR_DAT_04bc8e68;
  fVar11 = *(float *)(param_1 + 0x2580);
  if (*(char *)(param_1 + 0x2584) == '\0') {
    pfVar1 = (float *)&DAT_04c4a3f4;
    if (*(int *)(param_1 + 0x20f4) != 2) {
      pfVar1 = (float *)&DAT_04c4a3f0;
    }
    pfVar6 = (float *)&DAT_04c4a3ec;
    if (*(int *)(param_1 + 0x20f4) != 0) {
      pfVar6 = pfVar1;
    }
  }
  else {
    pfVar6 = (float *)&DAT_04c4a3e8;
  }
  fVar8 = *pfVar6;
  uVar9 = *(undefined4 *)(param_1 + 0x20e8);
  fVar10 = *(float *)(param_1 + 0x20ec);
  lVar7 = *(long *)(*(long *)(param_1 + 0x3b8) + 0x10);
  local_48 = *(char **)(PTR_PTR_04bb2238 + 8);
  if (*local_48 == '\0') {
    lVar7 = *(long *)(*(long *)(lVar7 + 0xf0) + 0x18);
  }
  else {
    local_50 = PTR_DAT_04bc8e68 + 0x10;
    lVar7 = FUN_032cb8e0(&local_58,&local_50,*(undefined8 *)(lVar7 + 0xf0));
  }
  local_50 = puVar2 + 0x10;
  fVar11 = (fVar8 - fVar11) - (*(float *)(lVar7 + 0x34) - fVar11);
  *(float *)(param_1 + 0x20f0) = fVar11;
  local_58 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x2f8) + 0xf0) + 0x18);
  local_48 = "N_TextArea_00";
  plVar4 = (long *)FUN_032d3050(&local_58,local_58,&local_50);
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0))
  {
    *(undefined8 *)PTR_DAT_04bc8f30 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar4 != (long *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4);
    if (puVar5 != (undefined8 *)PTR_DAT_04bc8f30) {
      do {
        puVar5 = (undefined8 *)*puVar5;
      } while (puVar5 != (undefined8 *)PTR_DAT_04bc8f30 && puVar5 != (undefined8 *)0x0);
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
    }
    *(undefined4 *)(plVar4 + 6) = uVar9;
    *(float *)((long)plVar4 + 0x34) = fVar10 + fVar11;
    *(byte *)(plVar4 + 0xb) = *(byte *)(plVar4 + 0xb) | 0x10;
  }
  return;
}


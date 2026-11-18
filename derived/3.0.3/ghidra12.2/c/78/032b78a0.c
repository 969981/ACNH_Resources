
void FUN_032b78a0(long param_1,uint param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_68;
  undefined *local_60;
  char *local_58;
  
  puVar3 = PTR_DAT_04bc8e68;
  puVar2 = PTR_PTR_04bb2238;
  local_58 = *(char **)(PTR_PTR_04bb2238 + 8);
  if (*local_58 == '\0') {
    bVar1 = *(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x650) + 0xf0) + 0x18) + 0x58);
  }
  else {
    local_60 = PTR_DAT_04bc8e68 + 0x10;
    lVar6 = FUN_032cb8e0(&local_68,&local_60,*(undefined8 *)(*(long *)(param_1 + 0x650) + 0xf0));
    bVar1 = *(byte *)(lVar6 + 0x58);
  }
  if ((bVar1 & 1) != 0) {
    plVar7 = (long *)(param_1 + 8) + (ulong)param_2 * 0xd;
    if (0xe < param_2) {
      plVar7 = (long *)(param_1 + 8);
    }
    local_58 = *(char **)(puVar2 + 8);
    if (*local_58 == '\0') {
      lVar6 = *(long *)(*(long *)(plVar7[1] + 0xf0) + 0x18);
    }
    else {
      local_60 = puVar3 + 0x10;
      lVar6 = FUN_032cb8e0(&local_68,&local_60,*(undefined8 *)(plVar7[1] + 0xf0));
    }
    fVar10 = *(float *)(lVar6 + 0x34);
    local_68 = *(undefined8 *)(*(long *)(*plVar7 + 0x20) + 0x18);
    local_58 = "B_Hit";
    local_60 = puVar3 + 0x10;
    lVar6 = FUN_032ba210(&local_68,&local_60,0);
    fVar11 = *(float *)(lVar6 + 0x54);
    local_68 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x650) + 0xf0) + 0x18);
    local_58 = "L_Line";
    local_60 = puVar3 + 0x10;
    plVar7 = (long *)FUN_032d3050(&local_68,local_68,&local_60);
    puVar4 = PTR_DAT_04bc8f30;
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
      *(undefined8 *)puVar4 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7);
    if (puVar8 != (undefined8 *)puVar4) {
      do {
        puVar8 = (undefined8 *)*puVar8;
      } while (puVar8 != (undefined8 *)puVar4 && puVar8 != (undefined8 *)0x0);
    }
    fVar9 = *(float *)((long)plVar7 + 0x54);
    local_58 = *(char **)(puVar2 + 8);
    if (*local_58 == '\0') {
      lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x650) + 0xf0) + 0x18);
    }
    else {
      local_60 = puVar3 + 0x10;
      lVar6 = FUN_032cb8e0(&local_68,&local_60,*(undefined8 *)(*(long *)(param_1 + 0x650) + 0xf0));
    }
    *(undefined4 *)(lVar6 + 0x30) = 0;
    *(float *)(lVar6 + 0x34) = fVar10 + fVar11 * 0.5 + fVar9 * 0.5;
    *(undefined4 *)(lVar6 + 0x38) = 0;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
  }
  return;
}


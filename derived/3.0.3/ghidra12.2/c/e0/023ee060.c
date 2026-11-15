
void FUN_023ee060(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined *local_70;
  undefined *puStack_68;
  int local_60;
  int iStack_5c;
  undefined *local_58;
  int local_50;
  int iStack_4c;
  byte local_44 [4];
  undefined *local_40;
  char *pcStack_38;
  
  if (*(long *)PTR_DAT_04bb39b0 == 0) {
    if (*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) goto LAB_023ee164;
  }
  else if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0 &&
           *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) goto LAB_023ee164;
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar5 = &DAT_05240280;
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "MoveLocalDirection";
  if (((puVar5[0x227] != 0) && (lVar6 = *(long *)(puVar5[0x227] + 0x78), lVar6 != 0)) &&
     (plVar4 = *(long **)(lVar6 + 0x48), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_40,*(undefined1 *)(param_1 + 0x1916));
  }
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar5 = &DAT_05240280;
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  local_40 = puVar1 + 0x10;
  pcStack_38 = "CommonBedRolloverReady";
  FUN_017081d0(puVar5,&local_40,6,1,0);
LAB_023ee164:
  FUN_016f84f0(param_1,*(long *)(param_1 + 0x68) + 0x278);
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
    if (7 < *(byte *)(param_1 + 0x1ee8)) {
      lVar6 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    *(undefined8 *)(lVar6 + 0x420) = 0x100000000;
    *(undefined4 *)(lVar6 + 0x4c0) = 0;
    local_44[0] = *(byte *)(param_1 + 0x1ee8);
    local_70 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_68 = PTR_DAT_04bb2010 + 0x10;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    fVar7 = (float)*(int *)(param_1 + 0x1902) * 0.001 + -2.5;
    fVar8 = (float)*(int *)(param_1 + 0x1908) * 0.001 + -2.5;
    local_60 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    local_50 = local_60 + 1;
    iStack_5c = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iStack_4c = iStack_5c + 1;
    local_58 = puStack_68;
    bVar2 = FUN_02301084(lVar6 + 0x4c8,local_44,&local_70);
    *(byte *)(param_1 + 0xb48) = bVar2 & 1;
  }
  return;
}


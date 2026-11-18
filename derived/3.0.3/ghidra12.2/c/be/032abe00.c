
void FUN_032abe00(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined *local_90;
  char *pcStack_88;
  undefined *local_80;
  char *pcStack_78;
  float local_70 [2];
  float local_68;
  long *local_60;
  undefined4 local_58;
  undefined *local_50;
  char *pcStack_48;
  
  puVar2 = PTR_DAT_04bc8e68;
  local_60 = *(long **)(*(long *)(*param_1 + 0x20) + 0x18);
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_48 = "T_00";
  local_50 = puVar1;
  plVar6 = (long *)FUN_0328b6d0(&local_60,&local_50,0);
  puVar4 = PTR_DAT_04bc8e78;
  puVar3 = PTR_DAT_04bb2da0;
  local_50 = PTR_DAT_04bc8e78 + 0x10;
  pcStack_48 = PTR_DAT_04bb2da0;
  if ((undefined *)plVar6[0x1b] != (undefined *)0x0) {
    pcStack_48 = (undefined *)plVar6[0x1b];
  }
  local_60 = plVar6;
  fVar9 = (float)FUN_032d8d10(&local_60,&local_50);
  if (fVar9 != *(float *)(plVar6 + 10)) {
    *(float *)(plVar6 + 10) = fVar9;
    *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) | 0x10;
  }
  pcStack_48 = "T_Key";
  local_60 = *(long **)(*(long *)(*param_1 + 0x20) + 0x18);
  local_50 = puVar1;
  plVar6 = (long *)FUN_0328b6d0(&local_60,&local_50,0);
  if (plVar6 != (long *)0x0) {
    local_50 = puVar4 + 0x10;
    pcStack_48 = puVar3;
    if ((undefined *)plVar6[0x1b] != (undefined *)0x0) {
      pcStack_48 = (undefined *)plVar6[0x1b];
    }
    local_60 = plVar6;
    fVar10 = (float)FUN_032d8d10(&local_60,&local_50);
    *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) | 0x10;
    fVar9 = *(float *)(plVar6 + 10);
    if (fVar10 != *(float *)(plVar6 + 10)) {
      fVar9 = fVar10;
    }
    fVar10 = 36.0;
    if (36.0 <= fVar9) {
      fVar10 = fVar9 + 1.0;
    }
    *(float *)(plVar6 + 10) = fVar10;
  }
  local_50 = puVar2 + 0x10;
  local_60 = *(long **)(*(long *)(*param_1 + 0x20) + 0x18);
  pcStack_48 = "NH_Root";
  plVar6 = (long *)FUN_032d3050(&local_60,local_60,&local_50);
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0))
  {
    *(undefined8 *)PTR_DAT_04bc8f30 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar6 != (long *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6);
    if (puVar7 == (undefined8 *)PTR_DAT_04bc8f30) goto LAB_032abfb8;
    do {
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)PTR_DAT_04bc8f30 && puVar7 != (undefined8 *)0x0);
    if (puVar7 != (undefined8 *)0x0) goto LAB_032abfb8;
  }
  plVar6 = (long *)0x0;
LAB_032abfb8:
  local_58 = 3;
  local_50 = (undefined *)0x0;
  pcStack_48 = (char *)0x0;
  local_60 = plVar6;
  FUN_032d5bf0(&local_60,&local_50,0,0xffffffff);
  local_50 = (undefined *)0x0;
  pcStack_48 = (char *)0x0;
  FUN_032d5da0(local_70,plVar6,PTR_DAT_04bc95c8,&local_50,3,0,0xffffffff,0);
  puVar2 = puVar2 + 0x10;
  local_50 = *(undefined **)(*param_1 + 0x20);
  pcStack_78 = "B_Hit";
  local_80 = puVar2;
  lVar8 = FUN_032cb990(&local_50,&local_80);
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
    *(float *)(lVar8 + 0x50) = local_68 - local_70[0];
  }
  local_50 = *(undefined **)(*param_1 + 0x20);
  pcStack_88 = "P_TouchEff";
  local_90 = puVar2;
  lVar8 = FUN_032cb990(&local_50,&local_90);
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
    *(float *)(lVar8 + 0x50) = local_68 - local_70[0];
  }
  return;
}


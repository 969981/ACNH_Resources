
void FUN_03357980(long param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bc8e68;
  lVar12 = *(long *)(*(long *)(param_1 + 0x300) + 0xf0);
  pcStack_68 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    pcStack_68 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*pcStack_68 != '\0') {
    local_70 = PTR_DAT_04bc8e68 + 0x10;
    lVar12 = FUN_032cb8e0(&local_48,&local_70,lVar12);
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(lVar12 + 0xe8);
    }
  }
  local_48 = *(undefined8 *)(lVar12 + 0x18);
  local_70 = puVar3 + 0x10;
  pcStack_68 = *(char **)(param_3 + 8);
  plVar8 = (long *)FUN_032d3050(&local_48,local_48,&local_70);
  puVar5 = PTR_DAT_04bc8f38;
  puVar4 = PTR_DAT_04bc8f30;
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar7 != 0))
  {
    *(undefined8 *)puVar4 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar8 != (long *)0x0) {
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8);
    if (puVar9 != (undefined8 *)puVar4) {
      do {
        puVar9 = (undefined8 *)*puVar9;
      } while (puVar9 != (undefined8 *)puVar4 && puVar9 != (undefined8 *)0x0);
      if (puVar9 == (undefined8 *)0x0) goto LAB_03357b24;
    }
    plVar10 = (long *)FUN_00367b14(0x110,0x10);
    FUN_0037bb94();
    plVar10[0x1b] = 0;
    puVar6 = PTR_DAT_04bc9598;
    *(undefined1 *)(plVar10 + 0x1c) = 0;
    plVar10[0x1d] = 0;
    plVar10[0x1e] = 0;
    plVar10[0x1f] = 0;
    *(undefined4 *)(plVar10 + 0x20) = 0;
    *plVar10 = (long)(puVar6 + 0x10);
    FUN_0037c2a0(plVar10,"ScissorPane");
    lVar13 = plVar8[3];
    FUN_0037d014(lVar13,plVar8,plVar10);
    FUN_0037d044(lVar13,plVar8);
    FUN_0037cfe0(plVar10,plVar8);
    plVar8 = (long *)FUN_00367b14(0xe0,0x10);
    FUN_0037bb94();
    *plVar8 = (long)(PTR_DAT_04bc95a0 + 0x10);
    plVar10[0x1b] = (long)plVar8;
    FUN_0037cfe0(plVar10,plVar8);
    *(undefined4 *)(plVar10 + 0x20) = 0;
    *param_2 = (long)plVar10;
  }
LAB_03357b24:
  local_48 = *(undefined8 *)(lVar12 + 0x18);
  local_70 = puVar3 + 0x10;
  pcStack_68 = *(char **)(param_4 + 8);
  plVar8 = (long *)FUN_032d3050(&local_48,local_48,&local_70);
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar7 != 0)) {
    *(undefined8 *)puVar4 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar8 != (long *)0x0) {
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8);
    if (puVar9 == (undefined8 *)puVar4) goto LAB_03357b88;
    do {
      puVar9 = (undefined8 *)*puVar9;
    } while (puVar9 != (undefined8 *)puVar4 && puVar9 != (undefined8 *)0x0);
    if (puVar9 != (undefined8 *)0x0) goto LAB_03357b88;
  }
  plVar8 = (long *)0x0;
LAB_03357b88:
  fVar15 = *(float *)(plVar8 + 6);
  fVar14 = *(float *)((long)plVar8 + 0x34);
  if ((long *)plVar8[3] == (long *)0x0) {
    fVar17 = 0.0;
    fVar16 = 0.0;
  }
  else {
    fVar16 = 0.0;
    fVar17 = 0.0;
    plVar10 = plVar8;
    plVar11 = (long *)plVar8[3];
    do {
      bVar2 = *(byte *)((long)plVar10 + 0x5b) >> 6;
      if (bVar2 == 2) {
        fVar19 = *(float *)((long)plVar11 + 0x4c) * *(float *)((long)plVar11 + 0x54) * -0.5;
LAB_03357c20:
        fVar14 = fVar14 + fVar19;
      }
      else if (bVar2 == 1) {
        fVar19 = *(float *)((long)plVar11 + 0x4c) * *(float *)((long)plVar11 + 0x54) * 0.5;
        goto LAB_03357c20;
      }
      bVar2 = *(byte *)((long)plVar10 + 0x5b) >> 4 & 3;
      if (bVar2 == 1) {
        fVar19 = *(float *)(plVar11 + 9) * *(float *)(plVar11 + 10) * -0.5;
LAB_03357bc0:
        fVar15 = fVar15 + fVar19;
      }
      else if (bVar2 == 2) {
        fVar19 = *(float *)(plVar11 + 9) * *(float *)(plVar11 + 10) * 0.5;
        goto LAB_03357bc0;
      }
      fVar16 = fVar16 + fVar15;
      fVar17 = fVar17 + fVar14;
      plVar1 = plVar11 + 3;
      fVar15 = *(float *)(plVar11 + 6);
      fVar14 = *(float *)((long)plVar11 + 0x34);
      plVar10 = plVar11;
      plVar11 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
  }
  lVar12 = *param_2;
  fVar19 = *(float *)(plVar8 + 10);
  fVar18 = *(float *)((long)plVar8 + 0x54);
  *(undefined1 *)(lVar12 + 0xe0) = 1;
  fVar15 = (fVar16 + fVar15) - fVar19 * 0.5;
  fVar14 = (fVar17 + fVar14) - fVar18 * 0.5;
  *(float *)(lVar12 + 0xf0) = fVar15;
  *(float *)(lVar12 + 0xf4) = fVar14;
  *(float *)(lVar12 + 0xf8) = fVar19 + fVar15;
  *(float *)(lVar12 + 0xfc) = fVar18 + fVar14;
  return;
}


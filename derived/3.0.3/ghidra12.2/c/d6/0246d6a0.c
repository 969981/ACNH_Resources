
/* WARNING: Removing unreachable block (ram,0x0246d848) */
/* WARNING: Removing unreachable block (ram,0x0246d7a0) */
/* WARNING: Removing unreachable block (ram,0x0246d928) */

void FUN_0246d6a0(long param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  uint *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar10;
  long lVar11;
  uint uVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_70;
  char *pcStack_68;
  
  uVar12 = (uint)*(byte *)(param_1 + 0x1900);
  if (3 < uVar12) {
    uVar12 = 0;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    if (uVar12 < 4) {
      iVar10 = (int)*(float *)(&DAT_041026f0 + (long)(int)uVar12 * 4);
    }
    else {
      iVar10 = 6;
    }
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_054f0960,param_2,iVar10);
        puVar9 = (uint *)&DAT_054f0958;
        param_2 = extraout_x1;
        if (iVar6 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          param_2 = extraout_x1_00;
        }
      }
      else {
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar9 = puVar9 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
      }
    }
    if ((*puVar9 >> 0x19 & 1) == 0) {
      pcStack_68 = "PlayerDiveStride_FlapFoot";
      if (*(uint *)(param_1 + 0x13d8) < 0x1f) {
        pcStack_68 = "PlayerDiveStride";
      }
    }
    else {
      pcStack_68 = "PlayerDiveStride";
    }
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    local_70 = PTR_DAT_04bb2020 + 0x10;
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0,param_2,iVar10);
        puVar13 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    FUN_017029bc(puVar13,&local_70,iVar10,0,1);
  }
  puVar3 = PTR_DAT_04bb2200;
  fVar14 = -20.0;
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  fVar16 = *(float *)((long)puVar13 + 0x27c);
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar11 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar11 != 0)) {
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
    lVar11 = *(long *)(lVar11 + 0x118);
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x280);
      fVar14 = 0.0;
      if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 8), lVar11 != 0)) {
        pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x488) + 0xf0))(lVar11 + 0x488);
        fVar14 = *pfVar7;
      }
      lVar11 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x1590) + 0xf0))(lVar11 + 0x1590);
      fVar14 = fVar14 + *pfVar7;
    }
  }
  if (fVar14 <= fVar16) {
    if (fVar16 <= fVar14) goto LAB_0246d8d8;
    fVar15 = fVar16 + -0.5;
    bVar4 = true;
    if ((fVar14 < fVar15) && (bVar4 = false, !NAN(fVar16) && !NAN(fVar15))) {
      bVar4 = fVar16 < fVar15;
    }
  }
  else {
    fVar15 = fVar16 + 0.5;
    bVar4 = true;
    if ((fVar15 < fVar14) && (bVar4 = false, !NAN(fVar15) && !NAN(fVar16))) {
      bVar4 = fVar15 < fVar16;
    }
  }
  fVar16 = fVar14;
  if (!bVar4) {
    fVar16 = fVar15;
  }
LAB_0246d8d8:
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(float *)((long)puVar13 + 0x27c) = fVar16;
  if (*(int *)(param_1 + 0x178) == 0) {
    fVar14 = -20.0;
    puVar13 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    }
    if ((*(long *)puVar3 != 0) && (lVar11 = *(long *)(*(long *)puVar3 + 0x50), lVar11 != 0)) {
      local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
      lVar11 = *(long *)(lVar11 + 0x118);
      if (lVar11 != 0) {
        lVar11 = *(long *)(lVar11 + 0x280);
        fVar14 = 0.0;
        if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 8), lVar11 != 0)) {
          pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x488) + 0xf0))(lVar11 + 0x488);
          fVar14 = *pfVar7;
        }
        lVar11 = FUN_0251e98c(1);
        pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x1560) + 0xf0))(lVar11 + 0x1560);
        fVar14 = fVar14 + *pfVar7;
      }
    }
    *(float *)((long)puVar13 + 0x2ec) = fVar14;
    *(undefined1 *)((long)puVar13 + 0x2e5) = 1;
  }
  cVar2 = *(char *)(param_1 + 0x56d);
  iVar10 = *(int *)(param_1 + 0x568);
  iVar6 = *(int *)(param_1 + 0x560);
  lVar11 = FUN_0251e98c(1);
  piVar8 = (int *)(**(code **)(*(long *)(lVar11 + 0x1530) + 0xf0))(lVar11 + 0x1530);
  if (*piVar8 != 0) {
    uVar12 = 0;
    do {
      if (*(char *)(param_1 + 0x56d) != '\0') {
        uVar5 = (**(code **)(*(long *)(param_1 + 0x558) + (ulong)*(byte *)(param_1 + 0x56c) * 8))
                          (param_1 + 0x558);
        *(undefined4 *)(param_1 + 0x560) = uVar5;
      }
      uVar12 = uVar12 + 1;
      lVar11 = FUN_0251e98c(1);
      puVar9 = (uint *)(**(code **)(*(long *)(lVar11 + 0x1530) + 0xf0))(lVar11 + 0x1530);
    } while (uVar12 < *puVar9);
  }
  iVar1 = 0;
  if (cVar2 != '\0') {
    iVar1 = iVar10 - iVar6;
  }
  iVar10 = 0;
  if (*(char *)(param_1 + 0x56d) != '\0') {
    iVar10 = *(int *)(param_1 + 0x568) - *(int *)(param_1 + 0x560);
  }
  FUN_024641b0(param_1,iVar1,iVar10);
  return;
}


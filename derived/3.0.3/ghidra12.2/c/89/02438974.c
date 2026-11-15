
void FUN_02438974(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  float *pfVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  char *pcStack_80;
  int local_78;
  uint local_74;
  
  puVar5 = PTR_DAT_04bb47c0;
  puVar1 = PTR_DAT_04bb2020;
  lVar12 = *(long *)PTR_DAT_04bb47c0;
  local_74 = (uint)*(byte *)(param_1 + 0x1900);
  iVar2 = *(int *)(lVar12 + 8);
  iVar3 = *(int *)(lVar12 + 0xc);
  uVar4 = *(undefined4 *)(lVar12 + 0x14);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  if (6 < local_74) {
    local_74 = 0;
  }
  pcStack_80 = "GymnasticsActionNum";
  local_78 = *(int *)(lVar12 + 0x1c);
  lVar12 = *(long *)(*(long *)(param_1 + 0x60) + 0x1138);
  if (((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x78), lVar12 != 0)) &&
     (plVar9 = *(long **)(lVar12 + 0x48), plVar9 != (long *)0x0)) {
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_88,uVar4);
  }
  switch(local_74) {
  case 0:
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    puVar1 = puVar1 + 0x10;
    pcStack_80 = "RadioGymnastics01";
    pcStack_90 = "RadioGymnastics01";
    local_98 = puVar1;
    local_88 = puVar1;
    uVar6 = FUN_009be600(&local_98);
    FUN_017029bc(puVar13,&local_88,uVar6,0,0);
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    pcStack_80 = "GymnasticsStartFrame";
    pcStack_a0 = "RadioGymnastics01";
    local_a8 = puVar1;
    local_88 = puVar1;
    uVar7 = FUN_009be600(&local_a8);
    if (((puVar13[0x227] != 0) && (lVar12 = *(long *)(puVar13[0x227] + 0x78), lVar12 != 0)) &&
       (plVar9 = *(long **)(lVar12 + 0x48), plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x30))((float)uVar7,plVar9,&local_88);
    }
    goto switchD_02438a3c_default;
  case 1:
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    pcStack_80 = "RadioGymnastics02";
    break;
  case 2:
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    pcStack_80 = "RadioGymnastics03";
    break;
  case 3:
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    pcStack_80 = "RadioGymnastics04";
    break;
  case 4:
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    pcStack_80 = "RadioGymnastics05";
    break;
  case 5:
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    pcStack_80 = "RadioGymnastics06";
    break;
  case 6:
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    pcStack_80 = "RadioGymnastics07";
    break;
  default:
    goto switchD_02438a3c_default;
  }
  local_88 = puVar1 + 0x10;
  FUN_017029bc(puVar13,&local_88,6,0,0);
switchD_02438a3c_default:
  lVar12 = *(long *)puVar5;
  fVar14 = (float)iVar3;
  fVar15 = (float)iVar2 / fVar14;
  *(float *)(param_1 + 0x2248) = fVar15;
  pfVar10 = (float *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar12 + 0x48) + 0x1c28) +
                                             (long)local_78 * 8) + 0xf0))();
  if (*pfVar10 < fVar15) {
    puVar11 = (undefined4 *)
              (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)puVar5 + 0x48) + 0x1c28) +
                                      (long)local_78 * 8) + 0xf0))();
    *(undefined4 *)(param_1 + 0x2248) = *puVar11;
    pfVar10 = (float *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)puVar5 + 0x48) + 0x1c28
                                                         ) + (long)local_78 * 8) + 0xf0))();
    fVar14 = (1.0 / *pfVar10) * (float)iVar2;
  }
  *(float *)(param_1 + 0x224c) = fVar14;
  if (*(float *)(param_1 + 0x2248) < 1.0) {
    *(undefined4 *)(param_1 + 0x2248) = 0x3f800000;
  }
  pfVar10 = (float *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)puVar5 + 0x48) + 0x1e40)
                                             + (long)local_78 * 8) + 0xf0))();
  *(float *)(param_1 + 0x2250) = fVar14 * *pfVar10;
  *(char *)(param_1 + 0x225c) = (char)uVar4;
  *(int *)(param_1 + 0x2258) = local_78;
  return;
}


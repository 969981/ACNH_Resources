
void FUN_024d5784(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  char *local_90;
  undefined8 local_88;
  float local_80;
  undefined *local_78;
  char *local_70;
  long local_68;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar4 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar7 + 0x278) * 999.99994);
    iVar5 = (int)(*(float *)(lVar7 + 0x27c) * 4.0);
    if (0x7ffe < iVar5) {
      iVar5 = 0x7fff;
    }
    if (iVar5 < -0x7fff) {
      iVar5 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar5;
    fVar14 = *(float *)(lVar7 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar14 * 999.99994);
    uVar4 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar4;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar12 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar12 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar13 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar12 + 0x2ec) = uVar13;
    *(undefined1 *)((long)puVar12 + 0x2e5) = 1;
  }
  local_78 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_78);
  local_78 = *(undefined **)(param_1 + 0x1900);
  lVar7 = FUN_024d5100(&local_78);
  pcVar11 = *(char **)(lVar7 + 8);
  if ((*pcVar11 == 'P') &&
     (((((((pcVar11[1] == 'l' && (pcVar11[2] == 'a')) && (pcVar11[3] == 'y')) &&
         ((pcVar11[4] == 'e' && (pcVar11[5] == 'r')))) && (pcVar11[6] == 'E')) &&
       (((pcVar11[7] == 'a' && (pcVar11[8] == 't')) &&
        ((pcVar11[9] == 'T' &&
         (((pcVar11[10] == 'o' && (pcVar11[0xb] == 'o')) && (pcVar11[0xc] == 'l')))))))) ||
      (((((pcVar11[1] == 'l' && (pcVar11[2] == 'a')) &&
         ((pcVar11[3] == 'y' &&
          (((pcVar11[4] == 'e' && (pcVar11[5] == 'r')) &&
           ((pcVar11[6] == 'D' &&
            (((pcVar11[7] == 'r' && (pcVar11[8] == 'i')) && (pcVar11[9] == 'n')))))))))) &&
        ((pcVar11[10] == 'k' && (pcVar11[0xb] == 'T')))) &&
       ((pcVar11[0xc] == 'o' && ((pcVar11[0xd] == 'o' && (pcVar11[0xe] == 'l')))))))))) {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_70 = "IsLastEat";
    local_88 = (char *)0xfffe;
    FUN_0277d4ac(&local_88);
    local_88 = *(char **)(param_1 + 0x1908);
    if (((puVar12[0x227] != 0) && (lVar7 = *(long *)(puVar12[0x227] + 0x78), lVar7 != 0)) &&
       (plVar8 = *(long **)(lVar7 + 0x48), plVar8 != (long *)0x0)) {
      (**(code **)(*plVar8 + 0x38))(plVar8,&local_78,((ulong)local_88 & 0xffff) == 0xfffe);
    }
  }
  local_88 = (char *)0xfffe;
  FUN_0277d4ac(&local_88);
  puVar3 = PTR_DAT_04bc0510;
  puVar2 = PTR_DAT_04bb43c0;
  local_88 = *(char **)(param_1 + 0x1900);
  local_68 = 0;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  local_70 = local_88;
  uVar4 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_88);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (uVar4 < *(uint *)(lVar7 + 0x1d8)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8);
        if (lVar7 != 0) {
          local_68 = lVar7;
        }
      }
    }
  }
  iVar5 = FUN_01ad78cc(&local_78);
  local_90 = (char *)CONCAT44(local_90._4_4_,iVar5);
  puVar12 = *(undefined8 **)(param_1 + 0x60);
  if (puVar12 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar12 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar12 = &DAT_05240280;
    }
  }
  bVar1 = 2 < iVar5 - 0x66U;
  if (bVar1) {
    local_88 = (char *)0xfffe;
    FUN_0277d4ac(&local_88);
    local_88 = *(char **)(param_1 + 0x1900);
    uVar9 = FUN_024d5100(&local_88);
  }
  else {
    local_88 = (char *)0xfffe;
    FUN_0277d4ac(&local_88);
    local_88 = *(char **)(param_1 + 0x1900);
    uVar9 = FUN_024d5100(&local_88);
  }
  FUN_017081d0(puVar12,uVar9,6,bVar1,0);
  lVar7 = *(long *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xcdc) = *(undefined4 *)(lVar7 + 0x278);
  *(undefined4 *)(param_1 + 0xce0) = *(undefined4 *)(lVar7 + 0x27c);
  local_90 = (char *)0xfffe;
  *(undefined4 *)(param_1 + 0xce4) = *(undefined4 *)(lVar7 + 0x280);
  FUN_0277d4ac(&local_90);
  local_78 = puVar3 + 0x10;
  lVar7 = *(long *)puVar2;
  local_90 = *(char **)(param_1 + 0x1900);
  local_68 = 0;
  local_70 = local_90;
  uVar4 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_90);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (uVar4 < *(uint *)(lVar7 + 0x1d8)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8);
        if (lVar7 != 0) {
          local_68 = lVar7;
        }
      }
    }
  }
  iVar5 = FUN_01ad78cc(&local_78);
  if (iVar5 == 0x53) {
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4));
    fVar15 = cosf(fVar14 * 1.4629181e-09);
    fVar16 = sinf(fVar14 * 1.4629181e-09);
    lVar7 = *(long *)(param_1 + 0x68);
    fVar17 = *(float *)(lVar7 + 0x280);
    fVar18 = *(float *)(lVar7 + 0x278);
    fVar14 = *(float *)(lVar7 + 0x27c);
    local_80 = (fVar15 * 15.0 - fVar16 * 0.0) + fVar17;
    local_88 = (char *)CONCAT44(fVar14 + 0.0,fVar16 * 15.0 + fVar15 * 0.0 + fVar18);
    fVar15 = (float)FUN_016e026c(0,&local_88,0,0);
    fVar16 = (float)FUN_016e37dc(&local_88);
    if (fVar15 <= *(float *)(*(long *)(param_1 + 0x68) + 0x27c)) {
      uVar10 = FUN_016ebc50(0x4019999a,&local_88);
      if ((uVar10 & 1) == 0) {
        fVar14 = fVar15;
        if (fVar15 <= fVar16) {
          fVar14 = fVar16;
        }
      }
      else {
        fVar14 = (float)FUN_016e37dc(&local_88);
      }
      fVar17 = local_80;
      fVar18 = (float)local_88;
    }
    lVar7 = *(long *)(param_1 + 0x80);
    if (lVar7 != 0) {
      *(float *)(lVar7 + 0x330) = fVar18;
      *(float *)(lVar7 + 0x334) = fVar14;
      *(float *)(lVar7 + 0x338) = fVar17;
    }
    *(float *)(param_1 + 0x2b0) = fVar18;
    *(float *)(param_1 + 0x2b4) = fVar14;
    *(float *)(param_1 + 0x2b8) = fVar17;
    *(float *)(param_1 + 0xcdc) = fVar18;
    *(float *)(param_1 + 0xce0) = fVar14;
    *(float *)(param_1 + 0xce4) = fVar17;
  }
  if ((*(int *)(param_1 + 0x178) == 0) && (uVar10 = FUN_01ae5784(&local_78), (uVar10 & 1) != 0)) {
    FUN_02f3490c();
  }
  return;
}


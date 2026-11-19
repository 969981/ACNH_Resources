
void FUN_03b139b0(undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  char *pcVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  char *pcVar18;
  uint uVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint local_134;
  uint local_124;
  long local_118 [16];
  char local_94 [36];
  
  lVar11 = FUN_0037e610(param_3,"AdjustToTextOn");
  if (lVar11 == 0) {
    return;
  }
  if (*(char *)(lVar11 + 10) != '\0') {
    return;
  }
  uVar3 = *(uint *)(lVar11 + 4);
  fVar22 = 0.0;
  pcVar1 = (char *)(lVar11 + (ulong)uVar3);
  cVar4 = *pcVar1;
  if (cVar4 != '\0') {
    iVar10 = 0;
    local_134 = 0;
    uVar19 = 0;
    local_124 = 0;
LAB_03b13a60:
    lVar13 = ((long)iVar10 << 0x20) + -0x100000000;
    uVar17 = 0;
    bVar7 = false;
    pcVar18 = (char *)((ulong)uVar3 + lVar11 + 1 + (long)iVar10);
    lVar12 = param_4;
    do {
      uVar16 = (uint)uVar17;
      if (cVar4 == '/') {
        local_94[(int)uVar16] = '\0';
        lVar12 = FUN_0036ab80(lVar12,local_94);
        if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0xe8), lVar12 == 0)) {
          lVar12 = 0;
          local_94[0] = '\0';
          bVar7 = true;
          goto LAB_03b13b20;
        }
        uVar17 = 0;
        bVar7 = true;
      }
      else {
        if ((cVar4 == '\0') || (cVar4 == '\n')) {
          local_94[(int)uVar16] = '\0';
          if ((int)uVar16 < 1) goto LAB_03b13b20;
          goto LAB_03b13b08;
        }
        uVar17 = (ulong)(uVar16 + 1);
        local_94[(int)uVar16] = cVar4;
        if (0x16 < (int)uVar16) goto LAB_03b13b00;
      }
      cVar4 = *pcVar18;
      lVar13 = lVar13 + 0x100000000;
      iVar10 = iVar10 + 1;
      pcVar18 = pcVar18 + 1;
    } while( true );
  }
  fVar23 = 0.0;
  goto LAB_03b13dc4;
LAB_03b13b00:
  local_94[uVar17] = '\0';
  uVar16 = uVar16 + 1;
LAB_03b13b08:
  if (pcVar1[lVar13 >> 0x20] == '\r') {
    local_94[uVar16 - 1] = '\0';
  }
LAB_03b13b20:
  if (cVar4 == '\n') {
    iVar10 = iVar10 + 1;
  }
  lVar13 = (**(code **)(**(long **)(lVar12 + 0x18) + 0x60))(*(long **)(lVar12 + 0x18),local_94,1);
  if (lVar13 != 0) {
    uVar17 = (ulong)uVar19;
    if (0xf < uVar19) {
      uVar17 = 0;
    }
    if (bVar7) {
      *(byte *)(lVar12 + 0x98) = *(byte *)(lVar12 + 0x98) | 4;
      local_118[uVar17] = lVar13;
      bVar9 = *(byte *)(lVar13 + 0x58);
      while ((bVar9 & 1) != 0) {
        lVar13 = *(long *)(lVar13 + 0x18);
        if (lVar13 == 0) goto LAB_03b13a34;
        bVar9 = *(byte *)(lVar13 + 0x58);
      }
    }
    else {
      *(byte *)(lVar12 + 0x98) = *(byte *)(lVar12 + 0x98) | 1;
      local_118[uVar17] = lVar13;
      if ((*(byte *)(lVar13 + 0x58) & 1) != 0) {
LAB_03b13a34:
        local_134 = local_134 + 1;
        local_124 = local_124 | 1 << (ulong)(uVar19 & 0x1f);
      }
    }
    uVar19 = uVar19 + 1;
  }
  puVar6 = PTR_DAT_04bd1bc0;
  puVar5 = PTR_DAT_04bd1bb8;
  cVar4 = pcVar1[iVar10];
  if (cVar4 == '\0') goto LAB_03b13ba0;
  goto LAB_03b13a60;
LAB_03b13ba0:
  fVar23 = 0.0;
  bVar7 = local_134 == 0;
  bVar8 = local_134 == uVar19;
  if (0 < (int)uVar19) {
    fVar22 = 0.0;
    uVar17 = 0;
    do {
      uVar2 = uVar17;
      if (0xf < uVar17) {
        uVar2 = 0;
      }
      plVar20 = (long *)local_118[uVar2];
      uVar3 = 1 << (ulong)((uint)uVar17 & 0x1f) & local_124;
      plVar14 = (long *)FUN_03b16ff0(plVar20);
      if (plVar14 == (long *)0x0) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar10 != 0)) {
            *(undefined8 *)PTR_DAT_04bc8f30 = 0;
            __cxa_guard_release(PTR_DAT_04bc8f38);
          }
          *(undefined **)puVar5 = PTR_DAT_04bc8f30;
          __cxa_guard_release(puVar6);
        }
        if (plVar20 == (long *)0x0) {
LAB_03b13cd4:
          if (uVar3 != 0 || (bVar7 || bVar8)) {
            param_2 = *(float *)((long)plVar20 + 0x54);
            if (fVar23 <= *(float *)(plVar20 + 10)) {
              fVar23 = *(float *)(plVar20 + 10);
            }
            if (fVar22 <= param_2) {
              fVar22 = param_2;
            }
          }
        }
        else {
          puVar15 = (undefined8 *)(**(code **)(*plVar20 + 0x10))(plVar20);
          if (puVar15 != (undefined8 *)puVar5) {
            do {
              puVar15 = (undefined8 *)*puVar15;
            } while (puVar15 != (undefined8 *)puVar5 && puVar15 != (undefined8 *)0x0);
            if (puVar15 == (undefined8 *)0x0) goto LAB_03b13cd4;
          }
          if (uVar3 != 0 || (bVar7 || bVar8)) {
            if (((*(char *)((long)plVar20 + 0xdd) != '\0') && ((*(byte *)(plVar20 + 0xb) & 1) != 0))
               && (*(char *)((long)plVar20 + 0x59) != '\0')) {
              if ((*(byte *)((long)plVar20 + 0xdf) & 1) == 0) {
                bVar9 = FUN_03b31850(plVar20);
              }
              else {
                bVar9 = FUN_03b31130(plVar20);
              }
              *(byte *)((long)plVar20 + 0xdd) = (bVar9 ^ 0xff) & 1;
            }
            if ((*(byte *)((long)plVar20 + 0xdf) & 1) == 0) {
              if (fVar23 <= *(float *)((long)plVar20 + 0xe4)) {
                fVar23 = *(float *)((long)plVar20 + 0xe4);
              }
              fVar21 = *(float *)(param_3 + 0x54);
            }
            else {
              if (fVar23 <= *(float *)(param_3 + 0x50)) {
                fVar23 = *(float *)(param_3 + 0x50);
              }
              fVar21 = *(float *)((long)plVar20 + 0xe4);
            }
            if (fVar22 <= fVar21) {
              fVar22 = fVar21;
            }
          }
          if ((*(byte *)(plVar20 + 0xb) >> 2 & 1) == 0) {
            *(byte *)(plVar20 + 0xb) = *(byte *)(plVar20 + 0xb) | 0x14;
          }
        }
      }
      else {
        if (uVar3 != 0 || (bVar7 || bVar8)) {
          fVar21 = (float)(**(code **)(*plVar14 + 0x148))(plVar14);
          if (fVar23 <= fVar21) {
            fVar23 = fVar21;
          }
          if (fVar22 <= param_2) {
            fVar22 = param_2;
          }
        }
        if ((*(byte *)(plVar14 + 0xb) >> 2 & 1) == 0) {
          *(byte *)(plVar14 + 0xb) = *(byte *)(plVar14 + 0xb) | 0x14;
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar19);
  }
LAB_03b13dc4:
  FUN_03b13e00(fVar23,fVar22,param_3);
  return;
}



void FUN_02a1dcf0(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint local_68;
  uint uStack_64;
  
  lVar10 = *(long *)PTR_DAT_04bb26a8;
  nn::os::LockMutex((MutexType *)(lVar10 + 0xb4408));
  uVar8 = *(undefined8 *)(lVar10 + 0xb4488);
  fVar31 = *(float *)(lVar10 + 0xb442c);
  cVar3 = *(char *)(lVar10 + 0xb4428);
  uVar34 = *(undefined4 *)(lVar10 + 0xb4434);
  uVar35 = *(undefined4 *)(lVar10 + 0xb4438);
  cVar4 = *(char *)(lVar10 + 0xb442b);
  uVar22 = *(uint *)(lVar10 + 0xb4490);
  uVar33 = *(undefined4 *)(lVar10 + 0xb443c);
  uVar32 = *(undefined4 *)(lVar10 + 0xb4440);
  uVar9 = *(undefined8 *)(lVar10 + 0xb4494);
  uVar23 = *(uint *)(lVar10 + 0xb449c);
  uVar7 = *(undefined8 *)(lVar10 + 0xb44a0);
  uVar24 = *(uint *)(lVar10 + 0xb44a8);
  nn::os::UnlockMutex((MutexType *)(lVar10 + 0xb4408));
  if (cVar3 == '\0') {
    return;
  }
  *(ulong *)(param_1 + 0x128) = (ulong)uVar22;
  *(undefined8 *)(param_1 + 0x120) = uVar8;
  *(ulong *)(param_1 + 0x138) = (ulong)uVar23;
  *(undefined8 *)(param_1 + 0x130) = uVar9;
  *(ulong *)(param_1 + 0x148) = (ulong)uVar24;
  *(undefined8 *)(param_1 + 0x140) = uVar7;
  if (*(char *)(param_1 + 0x80) != '\0') {
    *(undefined1 *)(param_1 + 0x80) = 0;
    *(undefined4 *)**(undefined8 **)(param_1 + 0xb0) = 0;
    *(undefined4 *)(**(long **)(param_1 + 0xb0) + 4) = uVar35;
    **(undefined4 **)(*(long *)(param_1 + 0xb0) + 8) = 1;
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xb0) + 8) + 4) = uVar34;
    **(undefined4 **)(*(long *)(param_1 + 0xb0) + 0x10) = 2;
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xb0) + 0x10) + 4) = uVar33;
    **(undefined4 **)(*(long *)(param_1 + 0xb0) + 0x18) = 3;
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xb0) + 0x18) + 4) = uVar32;
    if (1 < *(int *)(param_1 + 0xa8)) {
      lVar10 = *(long *)(param_1 + 0xb0);
      uVar23 = 0;
      uVar22 = *(int *)(param_1 + 0xa8) - 1;
      do {
        if ((int)uVar22 <= (int)uVar23) break;
        lVar16 = *(long *)(lVar10 + (ulong)uVar23 * 8);
        uVar15 = (ulong)uVar23;
        if ((uVar22 - uVar23 & 1) == 0) {
          lVar18 = lVar16;
          uVar17 = uVar15;
        }
        else {
          uVar17 = uVar15 + 1;
          lVar18 = *(long *)(lVar10 + uVar17 * 8);
          if (*(float *)(lVar18 + 4) < *(float *)(lVar16 + 4)) {
            *(long *)(lVar10 + uVar17 * 8) = lVar16;
            *(long *)(lVar10 + uVar15 * 8) = lVar18;
            lVar18 = lVar16;
          }
        }
        uVar19 = (ulong)uVar22;
        uVar22 = uVar23;
        if (~uVar15 + uVar19 != 0) {
          plVar21 = (long *)(lVar10 + 8 + uVar17 * 8);
          do {
            lVar16 = *plVar21;
            if (*(float *)(lVar18 + 4) <= *(float *)(lVar16 + 4)) {
              lVar18 = lVar16;
            }
            else {
              plVar21[-1] = lVar16;
              *plVar21 = lVar18;
              uVar22 = (uint)uVar17;
            }
            lVar16 = plVar21[1];
            if (*(float *)(lVar16 + 4) < *(float *)(lVar18 + 4)) {
              uVar22 = (uint)uVar17 + 1;
              *plVar21 = lVar16;
              plVar21[1] = lVar18;
            }
            else {
              lVar18 = lVar16;
            }
            uVar17 = uVar17 + 2;
            plVar21 = plVar21 + 2;
          } while (uVar19 != uVar17);
        }
        if ((int)uVar22 <= (int)uVar23) break;
        lVar16 = *(long *)(lVar10 + (ulong)uVar22 * 8);
        uVar17 = (ulong)uVar22;
        uVar23 = uVar22;
        do {
          lVar18 = lVar10 + uVar17 * 8;
          lVar20 = *(long *)(lVar18 + -8);
          if (*(float *)(lVar16 + 4) < *(float *)(lVar20 + 4)) {
            uVar23 = (uint)uVar17;
            *(long *)(lVar18 + -8) = lVar16;
            *(long *)(lVar10 + uVar17 * 8) = lVar20;
          }
          else {
            lVar16 = lVar20;
          }
          uVar17 = uVar17 - 1;
        } while ((long)uVar15 < (long)uVar17);
      } while (uVar23 != uVar22);
    }
  }
  iVar5 = *(int *)(param_1 + 0xa8);
  local_68 = 0;
  uStack_64 = 0;
  uVar32 = 0;
  if (cVar4 != '\0') {
    uVar32 = 0x42700000;
  }
  *(undefined4 *)(param_1 + 0xa4) = uVar32;
  fVar25 = 1.0;
  if (iVar5 != 0) {
    puVar12 = *(undefined8 **)(param_1 + 0xb0);
    fVar31 = fVar31 * 57.295776;
    puVar13 = (uint *)*puVar12;
    pfVar1 = (float *)(puVar13 + 1);
    if (*pfVar1 < fVar31) {
      lVar10 = (long)iVar5 * 8;
      puVar14 = puVar12;
      do {
        puVar6 = puVar14;
        lVar10 = lVar10 + -8;
        puVar14 = puVar6 + 1;
        if (lVar10 == 0) {
          puVar13 = (uint *)puVar12[iVar5 + -1];
          if (puVar13 != (uint *)0x0) {
            uStack_64 = *puVar13;
            local_68 = *puVar13;
          }
          goto LAB_02a1df04;
        }
        puVar13 = (uint *)*puVar14;
      } while ((float)puVar13[1] < fVar31);
      if (*pfVar1 < fVar31) {
        puVar11 = (uint *)*puVar6;
        fVar25 = (float)puVar11[1];
        uStack_64 = *puVar11;
        local_68 = *puVar13;
        fVar25 = (fVar31 - fVar25) / ((float)puVar13[1] - fVar25);
        goto LAB_02a1df04;
      }
    }
    uStack_64 = *puVar13;
    local_68 = *puVar13;
  }
LAB_02a1df04:
  pfVar1 = (float *)(&DAT_0417e4f0 + (ulong)uStack_64 * 8);
  if (3 < uStack_64) {
    pfVar1 = (float *)&DAT_0417e4f0;
  }
  fVar31 = pfVar1[1];
  fVar30 = pfVar1[6];
  fVar26 = pfVar1[2];
  fVar27 = pfVar1[3];
  fVar28 = pfVar1[4];
  fVar29 = pfVar1[5];
  pfVar2 = (float *)(&DAT_0417e4f0 + (ulong)local_68 * 8);
  if (3 < local_68) {
    pfVar2 = (float *)&DAT_0417e4f0;
  }
  fVar36 = pfVar2[1];
  fVar41 = pfVar2[6];
  fVar37 = pfVar2[2];
  fVar38 = pfVar2[3];
  fVar39 = pfVar2[4];
  fVar40 = pfVar2[5];
  *(float *)(param_1 + 0x88) = *pfVar1 + fVar25 * (*pfVar2 - *pfVar1);
  *(float *)(param_1 + 0x8c) = fVar31 + fVar25 * (fVar36 - fVar31);
  *(float *)(param_1 + 0x90) = fVar26 + fVar25 * (fVar37 - fVar26);
  *(float *)(param_1 + 0x94) = fVar27 + fVar25 * (fVar38 - fVar27);
  *(float *)(param_1 + 0x98) = fVar28 + fVar25 * (fVar39 - fVar28);
  *(float *)(param_1 + 0x9c) = fVar29 + fVar25 * (fVar40 - fVar29);
  *(float *)(param_1 + 0xa0) = fVar30 + fVar25 * (fVar41 - fVar30);
  return;
}


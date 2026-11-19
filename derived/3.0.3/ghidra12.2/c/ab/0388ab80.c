
void FUN_0388ab80(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ushort uVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x43));
  lVar18 = *param_2;
  plVar11 = param_1 + 2;
  lVar9 = *param_3;
  lVar1 = param_3[1];
  uVar19 = (uint)*(byte *)(param_2 + 1);
  uVar17 = (uint)*(byte *)((long)param_2 + 9);
  lVar10 = *plVar11;
  if (((lVar18 == *plVar11) && (lVar10 = lVar18, uVar19 == *(byte *)(param_1 + 3))) &&
     (uVar17 == *(byte *)((long)param_1 + 0x19))) {
    uVar8 = (**(code **)(*param_1 + 0xa0))(param_1);
    if ((uVar8 & 1) != 0) {
      lVar9 = *(long *)(DAT_05ae6a60 + 0x30);
      if (*(char *)(lVar9 + 0x80) == '\0') {
        *(undefined1 *)(lVar9 + 0x80) = 1;
        *(undefined8 *)(lVar9 + 0x84) = 9;
      }
      goto LAB_0388afa4;
    }
    lVar10 = *plVar11;
  }
  if (((lVar18 == lVar10) && (uVar19 == *(byte *)(param_1 + 3))) &&
     (uVar17 == *(byte *)((long)param_1 + 0x19))) {
    lVar10 = *param_3;
    *(short *)(param_1 + 3) = (short)param_3[1];
    *plVar11 = lVar10;
  }
  if (((lVar18 == param_1[5]) && (uVar19 == *(byte *)(param_1 + 6))) &&
     (uVar17 == *(byte *)((long)param_1 + 0x31))) {
    lVar10 = *param_3;
    *(short *)(param_1 + 6) = (short)param_3[1];
    param_1[5] = lVar10;
  }
  lVar10 = param_1[0x1f];
  if (*(int *)(lVar10 + 0x28) != 0) {
    plVar11 = *(long **)(lVar10 + 0x30);
    lVar10 = (long)*(int *)(lVar10 + 0x28) << 3;
    do {
      lVar12 = *plVar11;
      if (*(int *)(lVar12 + 8) != 3) {
        lVar14 = *(long *)(lVar12 + 0x10);
        bVar2 = *(byte *)(lVar12 + 0x18);
        if (lVar14 == lVar18 && bVar2 == uVar19) {
          uVar15 = uVar19;
          if (*(byte *)(lVar12 + 0x19) == uVar17) {
            lVar14 = *param_3;
            *(short *)(lVar12 + 0x18) = (short)param_3[1];
            *(long *)(lVar12 + 0x10) = lVar14;
            lVar12 = *plVar11;
            lVar14 = *(long *)(lVar12 + 0x10);
            goto LAB_0388ad1c;
          }
        }
        else {
LAB_0388ad1c:
          if (lVar14 != lVar18) goto LAB_0388acc0;
          uVar15 = (uint)*(byte *)(lVar12 + 0x18);
        }
        if (uVar15 != 0) {
          *(long *)(lVar12 + 0x10) = lVar9;
          *(ushort *)(lVar12 + 0x18) = (ushort)lVar1 & 0xff00 | (ushort)bVar2;
        }
      }
LAB_0388acc0:
      plVar11 = plVar11 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
    lVar10 = param_1[0x1f];
  }
  FUN_0388d4f0(lVar10);
  lVar10 = param_1[0x1f];
  if (*(int *)(lVar10 + 0x28) != 0) {
    plVar11 = *(long **)(lVar10 + 0x30);
    lVar12 = (long)*(int *)(lVar10 + 0x28) << 3;
    do {
      lVar14 = *plVar11;
      if (((*(long *)(lVar14 + 0x10) == param_1[5]) &&
          (*(char *)(lVar14 + 0x18) == (char)param_1[6])) &&
         (*(char *)(lVar14 + 0x19) == *(char *)((long)param_1 + 0x31))) goto LAB_0388add8;
      plVar11 = plVar11 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  if (((*(long *)(lVar10 + 0x88) != param_1[5]) || (*(char *)(lVar10 + 0x90) != (char)param_1[6]))
     || (*(char *)(lVar10 + 0x91) != *(char *)((long)param_1 + 0x31))) {
LAB_0388afc4:
    (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68) + 0x1d8))
              (*(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x68),0);
                    /* WARNING: Does not return */
    pcVar7 = (code *)UndefinedInstructionException(0,0x388afe4);
    (*pcVar7)();
  }
  lVar14 = lVar10 + 0x78;
LAB_0388add8:
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(lVar14 + 0x21);
  lVar12 = param_1[2];
  plVar11 = *(long **)(lVar10 + 0x30);
  iVar5 = *(int *)(lVar10 + 0x28);
  if (iVar5 != 0) {
    cVar4 = (char)param_1[3];
    lVar14 = (long)iVar5 << 3;
    cVar3 = *(char *)((long)param_1 + 0x19);
    plVar13 = plVar11;
    do {
      lVar16 = *plVar13;
      if (((*(long *)(lVar16 + 0x10) == lVar12) && (*(char *)(lVar16 + 0x18) == cVar4)) &&
         (*(char *)(lVar16 + 0x19) == cVar3)) goto LAB_0388ae68;
      plVar13 = plVar13 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  if (((*(long *)(lVar10 + 0x88) == lVar12) &&
      (cVar4 = *(char *)(lVar10 + 0x90), cVar4 == (char)param_1[3])) &&
     (cVar3 = *(char *)((long)param_1 + 0x19), *(char *)(lVar10 + 0x91) == cVar3)) {
LAB_0388ae68:
    if (iVar5 != 0) {
      lVar14 = (long)iVar5 << 3;
      do {
        lVar16 = *plVar11;
        if (((*(long *)(lVar16 + 0x10) == lVar12) && (*(char *)(lVar16 + 0x18) == cVar4)) &&
           (*(char *)(lVar16 + 0x19) == cVar3)) goto LAB_0388aed4;
        plVar11 = plVar11 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
    if (((*(long *)(lVar10 + 0x88) != lVar12) || (*(char *)(lVar10 + 0x90) != cVar4)) ||
       (*(char *)(lVar10 + 0x91) != cVar3)) goto LAB_0388afc4;
    lVar16 = lVar10 + 0x78;
LAB_0388aed4:
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar16 + 0x21);
  }
  param_1[8] = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x90) + 0xc0) + 0x4f0);
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  FUN_0388d4f0(param_1[0x1f]);
  plVar11 = (long *)param_1[0x21];
  if (plVar11 != param_1 + 0x20) {
    plVar13 = plVar11 + -0xd;
    do {
      plVar11 = (long *)plVar11[1];
      if ((int)plVar13[3] != 3) {
        lVar10 = plVar13[1];
        uVar8 = plVar13[2] & 0xff;
        uVar6 = (ushort)uVar8 | (ushort)lVar1 & 0xff00;
        if (lVar10 == lVar18) {
          uVar15 = (uint)plVar13[2];
          if ((uVar19 == (uVar15 & 0xff)) && (uVar17 == (uVar15 >> 8 & 0xff))) {
            plVar13[1] = lVar9;
            *(ushort *)(plVar13 + 2) = uVar6;
            lVar10 = lVar9;
          }
        }
        if ((lVar10 == lVar18) && (uVar8 != 0)) {
          plVar13[1] = lVar9;
          *(ushort *)(plVar13 + 2) = uVar6;
        }
      }
      plVar13 = plVar11 + -0xd;
    } while (plVar13 != param_1 + 0x13);
  }
LAB_0388afa4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x43));
  return;
}


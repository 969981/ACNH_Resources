
void FUN_003c3700(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (0 < *(int *)(param_1 + 0xa4)) {
    uVar8 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x68);
      lVar7 = lVar5 + uVar8 * 0x14;
      cVar1 = *(char *)(lVar7 + 0x12);
      *(undefined1 *)(lVar7 + 0x12) = 0;
      if (*(int *)(lVar7 + 0xc) < *(int *)(lVar7 + 8)) {
        *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
LAB_003c37a4:
        iVar3 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
        iVar4 = (**(code **)(**(long **)(param_1 + 0x60) + 8))();
        if ((0 < iVar4 && 0 < iVar3) && 0 < *(int *)(param_1 + 0xa0)) {
          iVar9 = 0;
          do {
            iVar10 = 0;
            do {
              iVar11 = 0;
              do {
                FUN_003c3afc(param_1,uVar8 & 0xffffffff,iVar9,iVar10,iVar11);
                iVar11 = iVar11 + 1;
              } while (iVar4 != iVar11);
              iVar10 = iVar10 + 1;
            } while (iVar10 != iVar3);
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(param_1 + 0xa0));
        }
      }
      else {
        lVar5 = lVar5 + uVar8 * 0x14;
        pcVar6 = (char *)(lVar5 + 0x11);
        cVar2 = *(char *)(lVar5 + 0x10);
        if (cVar2 != *pcVar6) {
          *pcVar6 = cVar2;
          goto LAB_003c37a4;
        }
        if (cVar1 != '\0') goto LAB_003c37a4;
      }
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)*(int *)(param_1 + 0xa4));
  }
  if (0 < *(int *)(param_1 + 0xa0)) {
    uVar8 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x70);
      lVar7 = lVar5 + uVar8 * 0x14;
      cVar1 = *(char *)(lVar7 + 0x12);
      *(undefined1 *)(lVar7 + 0x12) = 0;
      if (*(int *)(lVar7 + 0xc) < *(int *)(lVar7 + 8)) {
        *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
LAB_003c38b4:
        iVar3 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
        iVar4 = (**(code **)(**(long **)(param_1 + 0x60) + 8))();
        if ((0 < iVar4 && 0 < iVar3) && 0 < *(int *)(param_1 + 0xa4)) {
          iVar9 = 0;
          do {
            iVar10 = 0;
            do {
              iVar11 = 0;
              do {
                FUN_003c3afc(param_1,iVar9,uVar8 & 0xffffffff,iVar10,iVar11);
                iVar11 = iVar11 + 1;
              } while (iVar4 != iVar11);
              iVar10 = iVar10 + 1;
            } while (iVar10 != iVar3);
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(param_1 + 0xa4));
        }
      }
      else {
        lVar5 = lVar5 + uVar8 * 0x14;
        pcVar6 = (char *)(lVar5 + 0x11);
        cVar2 = *(char *)(lVar5 + 0x10);
        if (cVar2 != *pcVar6) {
          *pcVar6 = cVar2;
          goto LAB_003c38b4;
        }
        if (cVar1 != '\0') goto LAB_003c38b4;
      }
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)*(int *)(param_1 + 0xa0));
  }
  cVar1 = *(char *)(param_1 + 0x8a);
  *(undefined1 *)(param_1 + 0x8a) = 0;
  if (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x80)) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  }
  else if (*(char *)(param_1 + 0x88) == *(char *)(param_1 + 0x89)) {
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    *(char *)(param_1 + 0x89) = *(char *)(param_1 + 0x88);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  fVar14 = 0.0;
  if (*(char *)(param_1 + 0x88) == '\0') {
    if (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x80)) {
      fVar14 = *(float *)(param_1 + 0x78) +
               ((*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x78)) *
               (float)*(int *)(param_1 + 0x84)) / (float)*(int *)(param_1 + 0x80);
    }
    else {
      fVar14 = *(float *)(param_1 + 0x7c);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb0));
  fVar12 = -128.0;
  if (-128.0 <= fVar14) {
    fVar12 = fVar14;
  }
  fVar13 = 128.0;
  if (fVar14 <= 128.0) {
    fVar13 = fVar12;
  }
  nn::audio::SetSubMixVolume((SubMixType *)(param_1 + 0x50),fVar13);
  return;
}



void FUN_03c3a6a0(long param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  byte bVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  if ((*(char *)(param_1 + 0x50) == '\0') && (*(int *)(param_1 + 0x14) == 2)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      nn::hid::VibrationPlayer::SetCurrentPosition((int)*(undefined8 *)(param_1 + 0x250));
      nn::hid::VibrationPlayer::Play();
    }
    if (0.0 < *(float *)(param_1 + 100)) {
      lVar6 = *(long *)(param_1 + 0x68);
      *(undefined8 *)(lVar6 + 8) = 0;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      fVar8 = *(float *)(param_1 + 100);
      if (0.0 <= fVar8) {
        lVar7 = *(long *)(param_1 + 0x68);
        *(undefined4 *)(lVar7 + 0x10) = 0x3f800000;
        lVar6 = DAT_05aebb78;
        if ((fVar8 == 0.0) || (fVar9 = *(float *)(lVar7 + 8), fVar9 == 1.0)) {
          *(undefined4 *)(lVar7 + 0x14) = 0;
          *(undefined1 **)(lVar7 + 8) = &DAT_3f8000003f800000;
        }
        else {
          fVar8 = (1.0 - fVar9) / fVar8;
          *(float *)(lVar7 + 0x14) = fVar8;
          fVar9 = fVar9 + *(float *)(*(long *)(lVar6 + 0x10) + 0x1c) * fVar8;
          if (0.0 <= fVar8) {
            if (1.0 < fVar9) goto LAB_03c3a768;
          }
          else if (fVar9 < 1.0) {
LAB_03c3a768:
            fVar9 = 1.0;
          }
          *(float *)(lVar7 + 0xc) = fVar9;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x14) = 3;
  }
  if ((*(int *)(param_1 + 0x14) < 3) || (5 < *(int *)(param_1 + 0x14))) {
LAB_03c3a8a8:
    cVar2 = *(char *)(param_1 + 0x50);
    if (cVar2 != '\0') goto LAB_03c3a8b0;
  }
  else {
    if ((*(char *)(param_1 + 0x23a) != '\0') &&
       ((lVar6 = *(long *)(param_1 + 0x240), lVar6 != 0 &&
        (*(int *)(param_1 + 0x248) == *(int *)(lVar6 + 0x10))))) {
      fVar8 = *(float *)(*(long *)(lVar6 + 0xd8) + 0x20);
      *(float *)(param_1 + 0x80) = fVar8;
      if ((0.0 < fVar8) && (*(long *)(param_1 + 0x250) != 0)) {
        *(float *)(*(long *)(param_1 + 0x250) + 0xd0) = fVar8;
      }
    }
    if (*(char *)(param_1 + 0x239) != '\0') {
      lVar6 = *(long *)(param_1 + 0x240);
      if ((((lVar6 == 0) || (*(int *)(param_1 + 0x248) != *(int *)(lVar6 + 0x10))) ||
          (*(int *)(lVar6 + 0xc) == 0)) ||
         ((*(int *)(lVar6 + 0xc) == 6 || (*(int *)(lVar6 + 0xc) == 7)))) {
        if (*(int *)(param_1 + 0x20) == 0) {
          nn::hid::VibrationPlayer::Stop();
        }
        *(undefined4 *)(param_1 + 0x14) = 6;
      }
      if (((*(char *)(param_1 + 0x23b) != '\0') && (lVar6 = *(long *)(param_1 + 0x240), lVar6 != 0))
         && ((*(int *)(param_1 + 0x248) == *(int *)(lVar6 + 0x10) &&
             ((*(int *)(lVar6 + 0xc) != 0 && (*(int *)(lVar6 + 0xc) != 7)))))) {
        if (*(char *)(lVar6 + 0x16) == '\0') {
          iVar1 = *(int *)(*(long *)(lVar6 + 0x120) + 0x14);
          if (iVar1 == 4) {
            *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0xdf;
            bVar4 = *(byte *)(param_1 + 0x85) & 0xdf;
            goto LAB_03c3ad60;
          }
          if ((((iVar1 == 3) || (iVar1 == 2)) &&
              (bVar4 = *(byte *)(param_1 + 0x50), *(byte *)(param_1 + 0x50) = bVar4 & 0xdf,
              bVar4 == 0x20)) && ((2 < *(int *)(param_1 + 0x14) && (*(int *)(param_1 + 0x14) < 6))))
          {
            nn::hid::VibrationPlayer::Play();
          }
        }
        else {
          switch(*(undefined4 *)(*(long *)(lVar6 + 0x120) + 0x14)) {
          case 1:
            if (*(int *)(param_1 + 0x20) == 0) {
              nn::hid::VibrationPlayer::Stop();
            }
            *(undefined4 *)(param_1 + 0x14) = 6;
            break;
          case 2:
            bVar4 = *(byte *)(param_1 + 0x50);
            *(byte *)(param_1 + 0x50) = bVar4 | 0x20;
            if (((bVar4 == 0) && (2 < *(int *)(param_1 + 0x14))) && (*(int *)(param_1 + 0x14) < 6))
            {
              nn::hid::VibrationPlayer::Stop();
              nn::hid::VibrationWriter::Write(*(VibrationValue **)(param_1 + 600));
            }
            nn::hid::VibrationPlayer::SetCurrentPosition((int)*(undefined8 *)(param_1 + 0x250));
            break;
          case 3:
            bVar4 = *(byte *)(param_1 + 0x50);
            *(byte *)(param_1 + 0x50) = bVar4 | 0x20;
            if (((bVar4 == 0) && (2 < *(int *)(param_1 + 0x14))) && (*(int *)(param_1 + 0x14) < 6))
            {
              nn::hid::VibrationPlayer::Stop();
              nn::hid::VibrationWriter::Write(*(VibrationValue **)(param_1 + 600));
            }
            break;
          case 4:
            *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) | 0x20;
            bVar4 = *(byte *)(param_1 + 0x85) | 0x20;
LAB_03c3ad60:
            *(byte *)(param_1 + 0x85) = bVar4;
          }
        }
      }
    }
    if ((*(int *)(param_1 + 0x20) - 1U < 2) ||
       ((*(int *)(param_1 + 0x20) == 0 &&
        (uVar3 = nn::hid::VibrationPlayer::IsPlaying(), (uVar3 & 1) != 0)))) goto LAB_03c3a8a8;
    cVar2 = *(char *)(param_1 + 0x50);
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0x20) == 0) {
        nn::hid::VibrationPlayer::Stop();
      }
      *(undefined4 *)(param_1 + 0x14) = 6;
      goto LAB_03c3a8a8;
    }
LAB_03c3a8b0:
    if (*(int *)(param_1 + 0x14) != 5) {
      return;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 1:
    fVar8 = *(float *)(param_1 + 0x60);
    if (0.0 < fVar8) {
      fVar8 = fVar8 - *(float *)(*(long *)(param_1 + 0x18) + 0x5a4c);
      *(float *)(param_1 + 0x60) = fVar8;
    }
    if (0.0 < fVar8) {
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 2;
    return;
  default:
    goto switchD_03c3a8e0_caseD_2;
  case 3:
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      lVar6 = *(long *)(param_1 + 0x250);
joined_r0x03c3aa1c:
      if ((lVar6 != 0) && (*(int *)(param_1 + 0x20) == 2)) {
        nn::hid::VibrationWriter::Write(*(VibrationValue **)(param_1 + 600));
      }
    }
    else if ((iVar1 == 2) || (iVar1 == 1)) {
      lVar6 = *(long *)(param_1 + 600);
      goto joined_r0x03c3aa1c;
    }
    lVar6 = *(long *)(param_1 + 0x68);
    fVar8 = *(float *)(lVar6 + 0x10);
    if (*(float *)(lVar6 + 8) != fVar8) {
      *(float *)(lVar6 + 8) = *(float *)(lVar6 + 0xc);
      fVar9 = *(float *)(lVar6 + 0xc) +
              *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x1c) *
              *(float *)(lVar6 + 0x14);
      if (0.0 <= *(float *)(lVar6 + 0x14)) {
        if (fVar8 < fVar9) goto LAB_03c3ab74;
      }
      else if (fVar9 < fVar8) {
LAB_03c3ab74:
        fVar9 = fVar8;
      }
      *(float *)(lVar6 + 0xc) = fVar9;
    }
    break;
  case 4:
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      lVar6 = *(long *)(param_1 + 0x250);
joined_r0x03c3aa48:
      if ((lVar6 != 0) && (*(int *)(param_1 + 0x20) == 2)) {
        nn::hid::VibrationWriter::Write(*(VibrationValue **)(param_1 + 600));
      }
    }
    else if ((iVar1 == 2) || (iVar1 == 1)) {
      lVar6 = *(long *)(param_1 + 600);
      goto joined_r0x03c3aa48;
    }
    fVar8 = *(float *)(param_1 + 0x60);
    if (0.0 < fVar8) {
      fVar8 = fVar8 - *(float *)(*(long *)(param_1 + 0x18) + 0x5a4c);
      *(float *)(param_1 + 0x60) = fVar8;
    }
    if (fVar8 <= 0.0) {
      if (0.0 <= *(float *)(param_1 + 100)) {
        if (*(float *)(param_1 + 100) == 0.0) {
          iVar1 = *(int *)(param_1 + 0x20);
          goto joined_r0x03c3ac10;
        }
        if (*(long *)(param_1 + 0x68) != 0) {
          FUN_03b761f4(0);
        }
        uVar5 = 5;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x20);
joined_r0x03c3ac10:
        if (iVar1 == 0) {
          nn::hid::VibrationPlayer::Stop();
        }
        uVar5 = 6;
      }
      *(undefined4 *)(param_1 + 0x14) = uVar5;
    }
    break;
  case 5:
    if (cVar2 == '\0') {
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == 0) {
        lVar6 = *(long *)(param_1 + 0x250);
      }
      else {
        if ((iVar1 != 2) && (iVar1 != 1)) goto LAB_03c3a964;
        lVar6 = *(long *)(param_1 + 600);
      }
      if ((lVar6 != 0) && (*(int *)(param_1 + 0x20) == 2)) {
        nn::hid::VibrationWriter::Write(*(VibrationValue **)(param_1 + 600));
      }
    }
LAB_03c3a964:
    lVar6 = *(long *)(param_1 + 0x68);
    if (lVar6 == 0) {
      return;
    }
    fVar8 = *(float *)(lVar6 + 0x10);
    if ((0.0 < *(float *)(param_1 + 100)) && (*(float *)(lVar6 + 8) == fVar8)) {
      if (*(int *)(param_1 + 0x20) == 0) {
        nn::hid::VibrationPlayer::Stop();
      }
      *(undefined4 *)(param_1 + 0x14) = 6;
      return;
    }
    if (*(float *)(lVar6 + 8) != fVar8) {
      *(float *)(lVar6 + 8) = *(float *)(lVar6 + 0xc);
      fVar9 = *(float *)(lVar6 + 0xc) +
              *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x1c) *
              *(float *)(lVar6 + 0x14);
      if (0.0 <= *(float *)(lVar6 + 0x14)) {
        if (fVar8 < fVar9) goto LAB_03c3aa04;
      }
      else if (fVar9 < fVar8) {
LAB_03c3aa04:
        fVar9 = fVar8;
      }
      *(float *)(lVar6 + 0xc) = fVar9;
    }
    if (*(char *)(param_1 + 0x50) != '\0') {
      return;
    }
  }
  FUN_03c3aff8(param_1);
switchD_03c3a8e0_caseD_2:
  return;
}


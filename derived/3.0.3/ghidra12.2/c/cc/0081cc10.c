
void FUN_0081cc10(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  puVar3 = PTR_DAT_04bc3ee8;
  lVar9 = 0;
  do {
    lVar1 = param_1 + lVar9;
    if (*(char *)(lVar1 + 0x18) != '\0') {
      if ((*(char *)(lVar1 + 0x41) == '\0') || (*(char *)(lVar1 + 0x40) != '\0')) {
        plVar5 = *(long **)(lVar1 + 0x38);
        if ((plVar5 == (long *)0x0) ||
           ((((*plVar5 != 0 && ((int)plVar5[1] == *(int *)(*plVar5 + 0x34))) &&
             (lVar10 = FUN_00322a20(), 0 < *(int *)(lVar10 + 0x18c))) &&
            (*(char *)(lVar10 + 0x1c) != '\0')))) {
LAB_0081cdc0:
          lVar10 = *(long *)(lVar1 + 8);
          if ((lVar10 == 0) || (*(int *)(lVar1 + 0x10) != *(int *)(lVar10 + 0x10)))
          goto LAB_0081ce00;
          iVar2 = *(int *)(lVar10 + 0x20);
          if (iVar2 == 2) {
            bVar4 = 1;
          }
          else if (iVar2 == 1) {
            pcVar6 = (char *)(**(code **)(*(long *)(*(long *)(lVar10 + 0x38) + 0x1a8) + 0xf0))
                                       (*(long *)(lVar10 + 0x38) + 0x1a8);
            bVar4 = *pcVar6 != '\0';
          }
          else {
            if (iVar2 != 0) goto LAB_0081ce00;
            bVar4 = 0;
            if (*(long *)(lVar10 + 0x250) != 0) {
              bVar4 = nn::hid::VibrationPlayer::IsLoop();
            }
          }
          goto LAB_0081ce04;
        }
        lVar10 = *(long *)(lVar1 + 8);
        if (lVar10 == 0) goto LAB_0081ce00;
        if (*(int *)(lVar1 + 0x10) != *(int *)(lVar10 + 0x10)) goto LAB_0081cdc0;
        if ((4 < *(int *)(lVar10 + 0x14)) && (*(int *)(lVar10 + 0x14) < 7)) goto LAB_0081ce34;
        if (*(int *)(lVar10 + 0x14) < 3) goto LAB_0081cd98;
        lVar7 = *(long *)(lVar10 + 0x68);
        *(undefined8 *)(lVar10 + 0x60) = 0x3e4ccccd00000000;
        if (lVar7 == 0) goto LAB_0081cec0;
        fVar11 = *(float *)(lVar7 + 8);
        *(undefined4 *)(lVar7 + 0x10) = 0;
        if (fVar11 == 0.0) goto LAB_0081ceb8;
        fVar12 = (0.0 - fVar11) / 0.2;
        lVar8 = *(long *)puVar3;
        *(float *)(lVar7 + 0x14) = fVar12;
        fVar11 = fVar11 + *(float *)(*(long *)(lVar8 + 0x10) + 0x1c) * fVar12;
        if (0.0 <= fVar12) {
          if (0.0 < fVar11) goto LAB_0081cf0c;
        }
        else if (fVar11 < 0.0) {
LAB_0081cf0c:
          fVar11 = 0.0;
        }
        *(float *)(lVar7 + 0xc) = fVar11;
LAB_0081cec0:
        *(undefined4 *)(lVar10 + 0x14) = 5;
        lVar10 = *(long *)(lVar1 + 8);
        if (lVar10 == 0) goto LAB_0081cc60;
LAB_0081ce3c:
        if (*(int *)(lVar1 + 0x10) == *(int *)(lVar10 + 0x10)) goto LAB_0081cc64;
      }
      else {
        lVar10 = *(long *)(lVar1 + 8);
        if (lVar10 == 0) {
LAB_0081ce00:
          bVar4 = 0;
LAB_0081ce04:
          if (*(byte *)(lVar1 + 0x41) == (bVar4 & 1)) {
LAB_0081ce34:
            lVar10 = *(long *)(lVar1 + 8);
            goto joined_r0x0081cdb0;
          }
          lVar10 = *(long *)(lVar1 + 8);
          if (lVar10 != 0) {
            if (((*(int *)(lVar1 + 0x10) == *(int *)(lVar10 + 0x10)) &&
                (*(int *)(lVar10 + 0x20) == 0)) && (*(long *)(lVar10 + 0x250) != 0)) {
              nn::hid::VibrationPlayer::SetLoop(SUB81(*(long *)(lVar10 + 0x250),0));
              lVar10 = *(long *)(lVar1 + 8);
              goto joined_r0x0081cdb0;
            }
            goto LAB_0081ce34;
          }
        }
        else {
          if (*(int *)(lVar1 + 0x10) != *(int *)(lVar10 + 0x10)) goto LAB_0081cdc0;
          if ((4 < *(int *)(lVar10 + 0x14)) && (*(int *)(lVar10 + 0x14) < 7)) goto LAB_0081ce34;
          if (2 < *(int *)(lVar10 + 0x14)) {
            lVar7 = *(long *)(lVar10 + 0x68);
            *(undefined8 *)(lVar10 + 0x60) = 0x3e4ccccd00000000;
            if (lVar7 != 0) {
              fVar11 = *(float *)(lVar7 + 8);
              *(undefined4 *)(lVar7 + 0x10) = 0;
              if (fVar11 == 0.0) {
LAB_0081ceb8:
                *(undefined8 *)(lVar7 + 8) = 0;
                *(undefined4 *)(lVar7 + 0x14) = 0;
                goto LAB_0081cec0;
              }
              fVar12 = (0.0 - fVar11) / 0.2;
              lVar8 = *(long *)puVar3;
              *(float *)(lVar7 + 0x14) = fVar12;
              fVar11 = fVar11 + *(float *)(*(long *)(lVar8 + 0x10) + 0x1c) * fVar12;
              if (0.0 <= fVar12) {
                if (0.0 < fVar11) goto LAB_0081cd14;
              }
              else if (fVar11 < 0.0) {
LAB_0081cd14:
                fVar11 = 0.0;
              }
              *(float *)(lVar7 + 0xc) = fVar11;
            }
            *(undefined4 *)(lVar10 + 0x14) = 5;
            goto LAB_0081ce34;
          }
LAB_0081cd98:
          if (*(int *)(lVar10 + 0x20) == 0) {
            nn::hid::VibrationPlayer::Stop();
          }
          *(undefined4 *)(lVar10 + 0x14) = 6;
          lVar10 = *(long *)(lVar1 + 8);
joined_r0x0081cdb0:
          if (lVar10 != 0) goto LAB_0081ce3c;
        }
      }
LAB_0081cc60:
      *(undefined1 *)(lVar1 + 0x18) = 0;
    }
LAB_0081cc64:
    lVar9 = lVar9 + 0x48;
    if (lVar9 == 0x6c0) {
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x88) = 0;
      *(undefined1 *)(param_1 + 0xd0) = 0;
      *(undefined1 *)(param_1 + 0x118) = 0;
      *(undefined1 *)(param_1 + 0x160) = 0;
      *(undefined1 *)(param_1 + 0x1a8) = 0;
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      *(undefined1 *)(param_1 + 0x238) = 0;
      *(undefined1 *)(param_1 + 0x280) = 0;
      *(undefined1 *)(param_1 + 0x2c8) = 0;
      *(undefined1 *)(param_1 + 0x310) = 0;
      *(undefined1 *)(param_1 + 0x358) = 0;
      *(undefined1 *)(param_1 + 0x3a0) = 0;
      *(undefined1 *)(param_1 + 1000) = 0;
      *(undefined1 *)(param_1 + 0x430) = 0;
      *(undefined1 *)(param_1 + 0x478) = 0;
      *(undefined1 *)(param_1 + 0x4c0) = 0;
      *(undefined1 *)(param_1 + 0x508) = 0;
      *(undefined1 *)(param_1 + 0x550) = 0;
      *(undefined1 *)(param_1 + 0x598) = 0;
      *(undefined1 *)(param_1 + 0x5e0) = 0;
      *(undefined1 *)(param_1 + 0x628) = 0;
      *(undefined1 *)(param_1 + 0x670) = 0;
      *(undefined1 *)(param_1 + 0x6b8) = 0;
      return;
    }
  } while( true );
}


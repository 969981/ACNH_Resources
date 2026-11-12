
void FUN_0081c9d0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  
  plVar13 = (long *)PTR_DAT_04bb3350;
  plVar1 = (long *)(param_1 + 0x6c8);
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  do {
    while (*plVar1 == 0) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        iVar8 = 1;
        goto LAB_0081ca54;
      }
    }
    ClearExclusiveLocal();
  } while (*plVar1 != lVar7);
  iVar8 = *(int *)(param_1 + 0x6d0) + 1;
LAB_0081ca54:
  *(int *)(param_1 + 0x6d0) = iVar8;
  puVar6 = PTR_DAT_04bc3ee8;
  lVar3 = *(long *)(param_2 + 0x10);
  lVar7 = 0;
  lVar12 = *(long *)(*(long *)(param_2 + 0x18) + 0x40);
  do {
    uVar10 = 5;
    lVar2 = param_1 + lVar7;
    if ((((*(char *)(lVar2 + 0x18) != '\0') && (*(long *)(lVar2 + 0x28) != 0)) &&
        (*(long *)(lVar2 + 0x28) == lVar12)) &&
       ((*(long *)(lVar2 + 0x30) != 0 && (*(long *)(lVar2 + 0x30) == lVar3)))) {
      lVar14 = *(long *)(lVar2 + 8);
      if (((lVar14 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(lVar14 + 0x10))) &&
         ((*(int *)(lVar14 + 0x14) < 5 || (6 < *(int *)(lVar14 + 0x14))))) {
        if (*(int *)(lVar14 + 0x14) < 3) {
          if (*(int *)(lVar14 + 0x20) == 0) {
            nn::hid::VibrationPlayer::Stop();
            plVar13 = &DAT_05ae7790;
            uVar10 = 6;
          }
          else {
            uVar10 = 6;
          }
        }
        else {
          lVar9 = *(long *)(lVar14 + 0x68);
          *(undefined8 *)(lVar14 + 0x60) = 0x3e4ccccd00000000;
          if (lVar9 != 0) {
            fVar15 = *(float *)(lVar9 + 8);
            *(undefined4 *)(lVar9 + 0x10) = 0;
            if (fVar15 == 0.0) {
              *(undefined8 *)(lVar9 + 8) = 0;
              uVar10 = 5;
              *(undefined4 *)(lVar9 + 0x14) = 0;
            }
            else {
              fVar16 = (0.0 - fVar15) / 0.2;
              lVar11 = *(long *)puVar6;
              *(float *)(lVar9 + 0x14) = fVar16;
              fVar15 = fVar15 + *(float *)(*(long *)(lVar11 + 0x10) + 0x1c) * fVar16;
              if (0.0 <= fVar16) {
                if (0.0 < fVar15) goto LAB_0081ca88;
              }
              else if (fVar15 < 0.0) {
LAB_0081ca88:
                fVar15 = 0.0;
              }
              *(float *)(lVar9 + 0xc) = fVar15;
            }
          }
        }
        *(undefined4 *)(lVar14 + 0x14) = uVar10;
      }
      *(undefined8 *)(lVar2 + 0x38) = 0;
    }
    lVar7 = lVar7 + 0x48;
    if (lVar7 == 0x6c0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*plVar13 + 0x68));
      if ((*plVar1 == lVar7) &&
         (iVar8 = *(int *)(param_1 + 0x6d0) + -1, *(int *)(param_1 + 0x6d0) = iVar8, iVar8 == 0)) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      return;
    }
  } while( true );
}


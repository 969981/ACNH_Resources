
bool FUN_03f169a0(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  do {
    bVar1 = *param_2;
    if (7 < bVar1) {
      return false;
    }
    lVar9 = (ulong)*(byte *)(param_1 + 4) + param_1;
    pcVar7 = (char *)(lVar9 + (ulong)param_2[1] * 4);
    param_2 = (byte *)(lVar9 + (ulong)param_2[2] * 4);
    switch(bVar1) {
    case 0:
      uVar6 = FUN_03f169a0(param_1,pcVar7,param_3);
      if ((uVar6 & 1) == 0) {
        return false;
      }
      break;
    case 1:
      uVar6 = FUN_03f169a0(param_1,pcVar7,param_3);
      if ((uVar6 & 1) != 0) {
        return true;
      }
      break;
    case 2:
      cVar2 = *pcVar7;
      fVar10 = 0.0;
      if (cVar2 == '\b') {
        uVar3 = *(ushort *)(pcVar7 + 2);
        if ((int)(uint)uVar3 < *(int *)(param_3 + 0x60)) {
          fVar11 = *(float *)(*(long *)(param_3 + 0x80) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)uVar3);
LAB_03f16bac:
          fVar10 = (float)(int)fVar11;
          if (cVar2 != '\0') {
            fVar10 = fVar11;
          }
        }
      }
      else if (cVar2 == '\t') {
        lVar9 = *(long *)(param_3 + 8);
        uVar3 = *(ushort *)(pcVar7 + 2);
        if ((int)(uint)uVar3 < *(int *)(lVar9 + 0x104)) {
          fVar11 = *(float *)(*(long *)(lVar9 + 0x120) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(lVar9 + 0x110) + (ulong)uVar3);
          goto LAB_03f16bac;
        }
      }
      else if (cVar2 == '\v') {
        fVar10 = *(float *)(pcVar7 + *(ushort *)(pcVar7 + 2));
      }
      bVar1 = *param_2;
      fVar11 = 0.0;
      if (bVar1 == 8) {
        uVar3 = *(ushort *)(param_2 + 2);
        if (*(int *)(param_3 + 0x60) <= (int)(uint)uVar3) goto LAB_03f16eac;
        fVar12 = *(float *)(*(long *)(param_3 + 0x80) + (ulong)uVar3 * 4);
        cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)uVar3);
      }
      else {
        if (bVar1 != 9) {
          if (bVar1 == 0xb) {
            fVar11 = *(float *)(param_2 + *(ushort *)(param_2 + 2));
          }
          goto LAB_03f16eac;
        }
        lVar9 = *(long *)(param_3 + 8);
        uVar3 = *(ushort *)(param_2 + 2);
        if (*(int *)(lVar9 + 0x104) <= (int)(uint)uVar3) goto LAB_03f16eac;
        fVar12 = *(float *)(*(long *)(lVar9 + 0x120) + (ulong)uVar3 * 4);
        cVar2 = *(char *)(*(long *)(lVar9 + 0x110) + (ulong)uVar3);
      }
      fVar11 = (float)(int)fVar12;
      if (cVar2 != '\0') {
        fVar11 = fVar12;
      }
LAB_03f16eac:
      return fVar10 < fVar11;
    case 3:
      cVar2 = *pcVar7;
      fVar10 = 0.0;
      if (cVar2 == '\b') {
        uVar3 = *(ushort *)(pcVar7 + 2);
        if ((int)(uint)uVar3 < *(int *)(param_3 + 0x60)) {
          fVar11 = *(float *)(*(long *)(param_3 + 0x80) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)uVar3);
LAB_03f16c38:
          fVar10 = (float)(int)fVar11;
          if (cVar2 != '\0') {
            fVar10 = fVar11;
          }
        }
      }
      else if (cVar2 == '\t') {
        lVar9 = *(long *)(param_3 + 8);
        uVar3 = *(ushort *)(pcVar7 + 2);
        if ((int)(uint)uVar3 < *(int *)(lVar9 + 0x104)) {
          fVar11 = *(float *)(*(long *)(lVar9 + 0x120) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(lVar9 + 0x110) + (ulong)uVar3);
          goto LAB_03f16c38;
        }
      }
      else if (cVar2 == '\v') {
        fVar10 = *(float *)(pcVar7 + *(ushort *)(pcVar7 + 2));
      }
      bVar1 = *param_2;
      fVar11 = 0.0;
      if (bVar1 == 8) {
        uVar3 = *(ushort *)(param_2 + 2);
        if (*(int *)(param_3 + 0x60) <= (int)(uint)uVar3) goto LAB_03f16f18;
        fVar12 = *(float *)(*(long *)(param_3 + 0x80) + (ulong)uVar3 * 4);
        cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)uVar3);
      }
      else {
        if (bVar1 != 9) {
          if (bVar1 == 0xb) {
            fVar11 = *(float *)(param_2 + *(ushort *)(param_2 + 2));
          }
          goto LAB_03f16f18;
        }
        lVar9 = *(long *)(param_3 + 8);
        uVar3 = *(ushort *)(param_2 + 2);
        if (*(int *)(lVar9 + 0x104) <= (int)(uint)uVar3) goto LAB_03f16f18;
        fVar12 = *(float *)(*(long *)(lVar9 + 0x120) + (ulong)uVar3 * 4);
        cVar2 = *(char *)(*(long *)(lVar9 + 0x110) + (ulong)uVar3);
      }
      fVar11 = (float)(int)fVar12;
      if (cVar2 != '\0') {
        fVar11 = fVar12;
      }
LAB_03f16f18:
      return fVar10 <= fVar11;
    case 4:
      cVar2 = *pcVar7;
      fVar10 = 0.0;
      if (cVar2 == '\b') {
        uVar3 = *(ushort *)(pcVar7 + 2);
        if ((int)(uint)uVar3 < *(int *)(param_3 + 0x60)) {
          fVar11 = *(float *)(*(long *)(param_3 + 0x80) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)uVar3);
LAB_03f16cc4:
          fVar10 = (float)(int)fVar11;
          if (cVar2 != '\0') {
            fVar10 = fVar11;
          }
        }
      }
      else if (cVar2 == '\t') {
        lVar9 = *(long *)(param_3 + 8);
        uVar3 = *(ushort *)(pcVar7 + 2);
        if ((int)(uint)uVar3 < *(int *)(lVar9 + 0x104)) {
          fVar11 = *(float *)(*(long *)(lVar9 + 0x120) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(lVar9 + 0x110) + (ulong)uVar3);
          goto LAB_03f16cc4;
        }
      }
      else if (cVar2 == '\v') {
        fVar10 = *(float *)(pcVar7 + *(ushort *)(pcVar7 + 2));
      }
      bVar1 = *param_2;
      fVar11 = 0.0;
      if (bVar1 == 8) {
        uVar3 = *(ushort *)(param_2 + 2);
        if (*(int *)(param_3 + 0x60) <= (int)(uint)uVar3) goto LAB_03f16f84;
        fVar12 = *(float *)(*(long *)(param_3 + 0x80) + (ulong)uVar3 * 4);
        cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)uVar3);
      }
      else {
        if (bVar1 != 9) {
          if (bVar1 == 0xb) {
            fVar11 = *(float *)(param_2 + *(ushort *)(param_2 + 2));
          }
          goto LAB_03f16f84;
        }
        lVar9 = *(long *)(param_3 + 8);
        uVar3 = *(ushort *)(param_2 + 2);
        if (*(int *)(lVar9 + 0x104) <= (int)(uint)uVar3) goto LAB_03f16f84;
        fVar12 = *(float *)(*(long *)(lVar9 + 0x120) + (ulong)uVar3 * 4);
        cVar2 = *(char *)(*(long *)(lVar9 + 0x110) + (ulong)uVar3);
      }
      fVar11 = (float)(int)fVar12;
      if (cVar2 != '\0') {
        fVar11 = fVar12;
      }
LAB_03f16f84:
      return fVar11 < fVar10;
    case 5:
      cVar2 = *pcVar7;
      fVar10 = 0.0;
      if (cVar2 == '\b') {
        uVar3 = *(ushort *)(pcVar7 + 2);
        if ((int)(uint)uVar3 < *(int *)(param_3 + 0x60)) {
          fVar11 = *(float *)(*(long *)(param_3 + 0x80) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)uVar3);
LAB_03f16d50:
          fVar10 = (float)(int)fVar11;
          if (cVar2 != '\0') {
            fVar10 = fVar11;
          }
        }
      }
      else if (cVar2 == '\t') {
        lVar9 = *(long *)(param_3 + 8);
        uVar3 = *(ushort *)(pcVar7 + 2);
        if ((int)(uint)uVar3 < *(int *)(lVar9 + 0x104)) {
          fVar11 = *(float *)(*(long *)(lVar9 + 0x120) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(lVar9 + 0x110) + (ulong)uVar3);
          goto LAB_03f16d50;
        }
      }
      else if (cVar2 == '\v') {
        fVar10 = *(float *)(pcVar7 + *(ushort *)(pcVar7 + 2));
      }
      bVar1 = *param_2;
      fVar11 = 0.0;
      if (bVar1 == 8) {
        uVar3 = *(ushort *)(param_2 + 2);
        if (*(int *)(param_3 + 0x60) <= (int)(uint)uVar3) goto LAB_03f16ff0;
        fVar12 = *(float *)(*(long *)(param_3 + 0x80) + (ulong)uVar3 * 4);
        cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)uVar3);
      }
      else {
        if (bVar1 != 9) {
          if (bVar1 == 0xb) {
            fVar11 = *(float *)(param_2 + *(ushort *)(param_2 + 2));
          }
          goto LAB_03f16ff0;
        }
        lVar9 = *(long *)(param_3 + 8);
        uVar3 = *(ushort *)(param_2 + 2);
        if (*(int *)(lVar9 + 0x104) <= (int)(uint)uVar3) goto LAB_03f16ff0;
        fVar12 = *(float *)(*(long *)(lVar9 + 0x120) + (ulong)uVar3 * 4);
        cVar2 = *(char *)(*(long *)(lVar9 + 0x110) + (ulong)uVar3);
      }
      fVar11 = (float)(int)fVar12;
      if (cVar2 != '\0') {
        fVar11 = fVar12;
      }
LAB_03f16ff0:
      return fVar11 <= fVar10;
    case 6:
      cVar2 = *pcVar7;
      if (cVar2 == '\n') {
LAB_03f16db0:
        bVar1 = *param_2;
        if (bVar1 == 10) goto LAB_03f17028;
        if (bVar1 == 9) {
          if ((int)(uint)*(ushort *)(param_2 + 2) < *(int *)(*(long *)(param_3 + 8) + 0x104)) {
            cVar2 = *(char *)(*(long *)(*(long *)(param_3 + 8) + 0x110) +
                             (ulong)*(ushort *)(param_2 + 2));
            goto LAB_03f17018;
          }
        }
        else if ((bVar1 == 8) && ((int)(uint)*(ushort *)(param_2 + 2) < *(int *)(param_3 + 0x60))) {
          cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)*(ushort *)(param_2 + 2));
LAB_03f17018:
          if (cVar2 == '\x02') {
LAB_03f17028:
            pcVar7 = (char *)FUN_03f17310(pcVar7,param_3);
            pcVar8 = (char *)FUN_03f17310(param_2,param_3);
            iVar5 = strcmp(pcVar7,pcVar8);
            return iVar5 == 0;
          }
        }
LAB_03f1705c:
        cVar2 = *pcVar7;
      }
      else {
        if (cVar2 == '\t') {
          if ((int)(uint)*(ushort *)(pcVar7 + 2) < *(int *)(*(long *)(param_3 + 8) + 0x104)) {
            cVar2 = *(char *)(*(long *)(*(long *)(param_3 + 8) + 0x110) +
                             (ulong)*(ushort *)(pcVar7 + 2));
LAB_03f16da0:
            if (cVar2 == '\x02') goto LAB_03f16db0;
          }
          goto LAB_03f1705c;
        }
        if (cVar2 == '\b') {
          if ((int)(uint)*(ushort *)(pcVar7 + 2) < *(int *)(param_3 + 0x60)) {
            cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)*(ushort *)(pcVar7 + 2));
            goto LAB_03f16da0;
          }
          goto LAB_03f1705c;
        }
      }
      fVar10 = 0.0;
      if (cVar2 == '\b') {
        uVar3 = *(ushort *)(pcVar7 + 2);
        if ((int)(uint)uVar3 < *(int *)(param_3 + 0x60)) {
          fVar11 = *(float *)(*(long *)(param_3 + 0x80) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)uVar3);
LAB_03f170e0:
          fVar10 = (float)(int)fVar11;
          if (cVar2 != '\0') {
            fVar10 = fVar11;
          }
        }
      }
      else if (cVar2 == '\t') {
        lVar9 = *(long *)(param_3 + 8);
        uVar3 = *(ushort *)(pcVar7 + 2);
        if ((int)(uint)uVar3 < *(int *)(lVar9 + 0x104)) {
          fVar11 = *(float *)(*(long *)(lVar9 + 0x120) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(lVar9 + 0x110) + (ulong)uVar3);
          goto LAB_03f170e0;
        }
      }
      else if (cVar2 == '\v') {
        fVar10 = *(float *)(pcVar7 + *(ushort *)(pcVar7 + 2));
      }
      bVar1 = *param_2;
      fVar11 = 0.0;
      if (bVar1 == 8) {
        uVar3 = *(ushort *)(param_2 + 2);
        if (*(int *)(param_3 + 0x60) <= (int)(uint)uVar3) goto LAB_03f17174;
        fVar12 = *(float *)(*(long *)(param_3 + 0x80) + (ulong)uVar3 * 4);
        cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)uVar3);
      }
      else {
        if (bVar1 != 9) {
          if (bVar1 == 0xb) {
            fVar11 = *(float *)(param_2 + *(ushort *)(param_2 + 2));
          }
          goto LAB_03f17174;
        }
        lVar9 = *(long *)(param_3 + 8);
        uVar3 = *(ushort *)(param_2 + 2);
        if (*(int *)(lVar9 + 0x104) <= (int)(uint)uVar3) goto LAB_03f17174;
        fVar12 = *(float *)(*(long *)(lVar9 + 0x120) + (ulong)uVar3 * 4);
        cVar2 = *(char *)(*(long *)(lVar9 + 0x110) + (ulong)uVar3);
      }
      fVar11 = (float)(int)fVar12;
      if (cVar2 != '\0') {
        fVar11 = fVar12;
      }
LAB_03f17174:
      return fVar10 == fVar11;
    case 7:
      cVar2 = *pcVar7;
      if (cVar2 == '\n') {
LAB_03f16e14:
        bVar1 = *param_2;
        if (bVar1 == 10) {
LAB_03f171ac:
          pcVar7 = (char *)FUN_03f17310(pcVar7,param_3);
          pcVar8 = (char *)FUN_03f17310(param_2,param_3);
          iVar5 = strcmp(pcVar7,pcVar8);
          bVar4 = iVar5 == 0;
          goto LAB_03f172f8;
        }
        if (bVar1 == 9) {
          if ((int)(uint)*(ushort *)(param_2 + 2) < *(int *)(*(long *)(param_3 + 8) + 0x104)) {
            cVar2 = *(char *)(*(long *)(*(long *)(param_3 + 8) + 0x110) +
                             (ulong)*(ushort *)(param_2 + 2));
            goto LAB_03f1719c;
          }
        }
        else if ((bVar1 == 8) && ((int)(uint)*(ushort *)(param_2 + 2) < *(int *)(param_3 + 0x60))) {
          cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)*(ushort *)(param_2 + 2));
LAB_03f1719c:
          if (cVar2 == '\x02') goto LAB_03f171ac;
        }
LAB_03f171dc:
        cVar2 = *pcVar7;
      }
      else {
        if (cVar2 == '\t') {
          if ((int)(uint)*(ushort *)(pcVar7 + 2) < *(int *)(*(long *)(param_3 + 8) + 0x104)) {
            cVar2 = *(char *)(*(long *)(*(long *)(param_3 + 8) + 0x110) +
                             (ulong)*(ushort *)(pcVar7 + 2));
LAB_03f16e04:
            if (cVar2 == '\x02') goto LAB_03f16e14;
          }
          goto LAB_03f171dc;
        }
        if (cVar2 == '\b') {
          if ((int)(uint)*(ushort *)(pcVar7 + 2) < *(int *)(param_3 + 0x60)) {
            cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)*(ushort *)(pcVar7 + 2));
            goto LAB_03f16e04;
          }
          goto LAB_03f171dc;
        }
      }
      fVar10 = 0.0;
      if (cVar2 == '\b') {
        uVar3 = *(ushort *)(pcVar7 + 2);
        if ((int)(uint)uVar3 < *(int *)(param_3 + 0x60)) {
          fVar11 = *(float *)(*(long *)(param_3 + 0x80) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)uVar3);
LAB_03f17260:
          fVar10 = (float)(int)fVar11;
          if (cVar2 != '\0') {
            fVar10 = fVar11;
          }
        }
      }
      else if (cVar2 == '\t') {
        lVar9 = *(long *)(param_3 + 8);
        uVar3 = *(ushort *)(pcVar7 + 2);
        if ((int)(uint)uVar3 < *(int *)(lVar9 + 0x104)) {
          fVar11 = *(float *)(*(long *)(lVar9 + 0x120) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(lVar9 + 0x110) + (ulong)uVar3);
          goto LAB_03f17260;
        }
      }
      else if (cVar2 == '\v') {
        fVar10 = *(float *)(pcVar7 + *(ushort *)(pcVar7 + 2));
      }
      bVar1 = *param_2;
      fVar11 = 0.0;
      if (bVar1 == 8) {
        uVar3 = *(ushort *)(param_2 + 2);
        if ((int)(uint)uVar3 < *(int *)(param_3 + 0x60)) {
          fVar12 = *(float *)(*(long *)(param_3 + 0x80) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(param_3 + 0x70) + (ulong)uVar3);
LAB_03f172ec:
          fVar11 = (float)(int)fVar12;
          if (cVar2 != '\0') {
            fVar11 = fVar12;
          }
        }
      }
      else if (bVar1 == 9) {
        lVar9 = *(long *)(param_3 + 8);
        uVar3 = *(ushort *)(param_2 + 2);
        if ((int)(uint)uVar3 < *(int *)(lVar9 + 0x104)) {
          fVar12 = *(float *)(*(long *)(lVar9 + 0x120) + (ulong)uVar3 * 4);
          cVar2 = *(char *)(*(long *)(lVar9 + 0x110) + (ulong)uVar3);
          goto LAB_03f172ec;
        }
      }
      else if (bVar1 == 0xb) {
        fVar11 = *(float *)(param_2 + *(ushort *)(param_2 + 2));
      }
      bVar4 = false;
      if (!NAN(fVar10) && !NAN(fVar11)) {
        bVar4 = fVar10 == fVar11;
      }
LAB_03f172f8:
      return !bVar4;
    }
  } while( true );
}



/* WARNING: Type propagation algorithm not settling */

void FUN_003befcc(long param_1,byte param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(char *)(param_1 + 0xc1) == '\0') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xc0);
  uVar3 = *(ushort *)(param_1 + 0x156);
  uVar4 = *(ushort *)(param_1 + 0x158);
  uVar8 = (uint)uVar4;
  if ((uint)uVar4 < (uint)uVar3) {
    uVar8 = uVar4 + 1;
    *(short *)(param_1 + 0x158) = (short)uVar8;
  }
  if (uVar8 < uVar3) {
    iVar5 = 0;
    if (uVar3 != 0) {
      iVar5 = (int)(((uint)*(byte *)(param_1 + 0x155) - (uint)*(byte *)(param_1 + 0x154)) * uVar8) /
              (int)(uint)uVar3;
    }
    uVar8 = (uint)*(byte *)(param_1 + 0x154) + iVar5;
  }
  else {
    uVar8 = (uint)*(byte *)(param_1 + 0x155);
  }
  fVar14 = *(float *)(param_1 + 0x178);
  fVar17 = *(float *)(param_1 + 0x174);
  fVar13 = *(float *)(param_1 + 200);
  piVar9 = (int *)(param_1 + 0x20);
  if ((*piVar9 == 4) && (fVar10 = (float)FUN_003bff00(piVar9), fVar10 < -90.4)) {
    if (*(long *)(param_1 + 400) == 0) {
      return;
    }
    FUN_003c0c30();
    FUN_003c0ba0(*(undefined8 *)(param_1 + 400));
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    return;
  }
  fVar10 = 0.0;
  if (*(float *)(param_1 + 0x13c) != 0.0) {
    iVar5 = *(int *)(param_1 + 0x144);
    iVar6 = iVar5 - *(int *)(param_1 + 0x140);
    if (iVar6 != 0 && *(int *)(param_1 + 0x140) <= iVar5) {
      fVar10 = (*(float *)(param_1 + 0x13c) * (float)iVar6) / (float)iVar5;
    }
  }
  fVar10 = *(float *)(param_1 + 0x138) +
           (float)(int)((uint)*(byte *)(param_1 + 0x170) - (uint)*(byte *)(param_1 + 0x171)) +
           fVar10;
  if (*(char *)(param_1 + 0xbc) == '\0') {
    fVar12 = (float)FUN_003bec78(param_1 + 0x3c);
    fVar10 = fVar10 + fVar12;
    if (*(char *)(param_1 + 0xbd) != '\0') goto LAB_003bf104;
LAB_003bf13c:
    fVar12 = (float)FUN_003bec78(param_1 + 0x5c);
    fVar10 = fVar10 + fVar12;
    if (*(char *)(param_1 + 0xbe) != '\0') goto LAB_003bf10c;
LAB_003bf150:
    fVar12 = (float)FUN_003bec78(param_1 + 0x7c);
    fVar10 = fVar10 + fVar12;
    if (*(char *)(param_1 + 0xbf) != '\0') goto LAB_003bf114;
LAB_003bf164:
    fVar12 = (float)FUN_003bec78(param_1 + 0x9c);
    fVar10 = fVar10 + fVar12;
    if (fVar10 != *(float *)(param_1 + 0x15c)) {
LAB_003bf17c:
      fVar12 = (float)FUN_003b7dd0((int)(fVar10 * 256.0));
      *(float *)(param_1 + 0x15c) = fVar10;
      *(float *)(param_1 + 0x160) = fVar12;
      goto LAB_003bf190;
    }
  }
  else {
    if (*(char *)(param_1 + 0xbd) == '\0') goto LAB_003bf13c;
LAB_003bf104:
    if (*(char *)(param_1 + 0xbe) == '\0') goto LAB_003bf150;
LAB_003bf10c:
    if (*(char *)(param_1 + 0xbf) == '\0') goto LAB_003bf164;
LAB_003bf114:
    if (fVar10 != *(float *)(param_1 + 0x15c)) goto LAB_003bf17c;
  }
  fVar12 = *(float *)(param_1 + 0x160);
LAB_003bf190:
  fVar15 = *(float *)(param_1 + 0x150);
  local_c0 = *(undefined8 *)(param_1 + 0xdc);
  fVar16 = *(float *)(param_1 + 0xcc);
  local_88 = *(undefined8 *)(param_1 + 0x114);
  local_80 = *(undefined8 *)(param_1 + 0x11c);
  uStack_98 = *(undefined8 *)(param_1 + 0x104);
  local_90 = *(undefined8 *)(param_1 + 0x10c);
  uStack_78 = *(undefined8 *)(param_1 + 0x124);
  uStack_a8 = *(undefined8 *)(param_1 + 0xf4);
  local_a0 = *(undefined8 *)(param_1 + 0xfc);
  fVar10 = *(float *)(param_1 + 0x148) + (float)local_88;
  uStack_b8 = *(undefined8 *)(param_1 + 0xe4);
  local_b0 = *(undefined8 *)(param_1 + 0xec);
  if (*(char *)(param_1 + 0xbc) == '\x02') {
    fVar11 = (float)FUN_003bec78(param_1 + 0x3c);
    fVar10 = fVar11 + fVar10;
  }
  if (*(char *)(param_1 + 0xbd) == '\x02') {
    fVar11 = (float)FUN_003bec78(param_1 + 0x5c);
    fVar10 = fVar11 + fVar10;
  }
  if (*(char *)(param_1 + 0xbe) == '\x02') {
    fVar11 = (float)FUN_003bec78(param_1 + 0x7c);
    fVar10 = fVar11 + fVar10;
    cVar2 = *(char *)(param_1 + 0xbf);
  }
  else {
    cVar2 = *(char *)(param_1 + 0xbf);
  }
  if (cVar2 == '\x02') {
    fVar11 = (float)FUN_003bec78(param_1 + 0x9c);
    local_88 = CONCAT44(*(float *)(param_1 + 0x14c) + local_88._4_4_,fVar11 + fVar10);
  }
  else {
    local_88._4_4_ = (float)((ulong)local_88 >> 0x20);
    local_88 = CONCAT44(*(float *)(param_1 + 0x14c) + local_88._4_4_,fVar10);
  }
  if ((cVar1 == '\0' & param_2) != 0) {
    if (*(char *)(param_1 + 0xc3) != '\0') {
      iVar5 = *(int *)(param_1 + 0x140) + 5;
      if (*(int *)(param_1 + 0x144) <= iVar5) {
        iVar5 = *(int *)(param_1 + 0x144);
      }
      *(int *)(param_1 + 0x140) = iVar5;
    }
    if (*(char *)(param_1 + 0xbc) != -1) {
      FUN_003bebdc(param_1 + 0x3c,5);
    }
    if (*(char *)(param_1 + 0xbd) != -1) {
      FUN_003bebdc(param_1 + 0x5c,5);
    }
    if (*(char *)(param_1 + 0xbe) != -1) {
      FUN_003bebdc(param_1 + 0x7c,5);
    }
    if (*(char *)(param_1 + 0xbf) != -1) {
      FUN_003bebdc(param_1 + 0x9c,5);
    }
    FUN_003bff30(piVar9,5);
    if (*(char *)(param_1 + 0x3d1) != '\0') {
      if (*piVar9 != 4) {
        if ((*(long *)(param_1 + 400) != 0) && (*(char *)(param_1 + 0xc4) == '\0')) {
          FUN_003c1660(*(long *)(param_1 + 400),1);
        }
        *piVar9 = 4;
      }
      *(undefined1 *)(param_1 + 0xc0) = 0;
      *(undefined1 *)(param_1 + 0x3d1) = 0;
    }
  }
  fVar11 = *(float *)(param_1 + 0xd0);
  FUN_003bff00(piVar9);
  fVar10 = (float)FUN_003b7f38();
  fVar10 = fVar14 * fVar14 * fVar17 * fVar13 * (float)(uVar8 & 0xff) * 0.003921569 * fVar10;
  if (*(char *)(param_1 + 0xbc) == '\x01') {
    fVar13 = (float)FUN_003bec78(param_1 + 0x3c);
    fVar13 = (float)FUN_003b7f38(fVar13 * 6.0);
    fVar10 = fVar10 * fVar13;
    cVar1 = *(char *)(param_1 + 0xbd);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xbd);
  }
  if (cVar1 == '\x01') {
    fVar13 = (float)FUN_003bec78(param_1 + 0x5c);
    fVar13 = (float)FUN_003b7f38(fVar13 * 6.0);
    fVar10 = fVar10 * fVar13;
    cVar1 = *(char *)(param_1 + 0xbe);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xbe);
  }
  if (cVar1 == '\x01') {
    fVar13 = (float)FUN_003bec78(param_1 + 0x7c);
    fVar13 = (float)FUN_003b7f38(fVar13 * 6.0);
    fVar10 = fVar10 * fVar13;
    cVar1 = *(char *)(param_1 + 0xbf);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xbf);
  }
  if (cVar1 == '\x01') {
    fVar13 = (float)FUN_003bec78(param_1 + 0x9c);
    fVar13 = (float)FUN_003b7f38(fVar13 * 6.0);
    fVar10 = fVar10 * fVar13;
    lVar7 = *(long *)(param_1 + 400);
  }
  else {
    lVar7 = *(long *)(param_1 + 400);
  }
  if (lVar7 != 0) {
    FUN_003c1550(fVar10);
    FUN_003c157c(fVar12 * fVar15 * fVar16,*(undefined8 *)(param_1 + 400));
    FUN_003c159c(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x168));
    FUN_003c15bc(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x16c));
    FUN_003c15dc(fVar11 + 1.0,*(undefined8 *)(param_1 + 400));
    FUN_003c15fc(*(undefined4 *)(param_1 + 0xd4),*(undefined8 *)(param_1 + 400),
                 *(undefined1 *)(param_1 + 0xc6));
    FUN_003c16d0(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0xd8));
    FUN_003c1d84(*(undefined8 *)(param_1 + 400),&local_c0);
    if (*(long *)(param_1 + 0x130) != 0) {
      FUN_003c1d8c(*(undefined8 *)(param_1 + 400));
    }
  }
  *(undefined1 *)(param_1 + 0x3d2) = 1;
  return;
}


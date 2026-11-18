
void FUN_03284940(long param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  byte bVar10;
  char *pcVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_a8 [8];
  undefined *local_a0;
  char *pcStack_98;
  
  puVar5 = PTR_PTR_04bb2238;
  if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x390) + 0xf0) + 0x18);
  }
  else {
    local_a0 = &DAT_04b177a8;
    pcStack_98 = *(char **)(PTR_PTR_04bb2238 + 8);
    plVar8 = (long *)FUN_032cb8e0(auStack_a8,&local_a0,
                                  *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0));
  }
  lVar9 = (**(code **)(*plVar8 + 0x60))(plVar8,"L_BtnBalloon_00",1);
  fVar21 = *(float *)(lVar9 + 0x50);
  if (**(char **)(puVar5 + 8) == '\0') {
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x390) + 0xf0) + 0x18);
  }
  else {
    local_a0 = &DAT_04b177a8;
    pcStack_98 = *(char **)(puVar5 + 8);
    plVar8 = (long *)FUN_032cb8e0(auStack_a8,&local_a0,
                                  *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0));
  }
  lVar9 = (**(code **)(*plVar8 + 0x60))(plVar8,"N_BtnMarginX",1);
  fVar22 = *(float *)(lVar9 + 0x50);
  if (**(char **)(puVar5 + 8) == '\0') {
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x390) + 0xf0) + 0x18);
  }
  else {
    local_a0 = &DAT_04b177a8;
    pcStack_98 = *(char **)(puVar5 + 8);
    plVar8 = (long *)FUN_032cb8e0(auStack_a8,&local_a0,
                                  *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0));
  }
  (**(code **)(*plVar8 + 0x60))(plVar8,"N_BalloonMarginX",1);
  fVar23 = 0.0;
  lVar17 = 0;
  lVar9 = param_1 + 0x398;
  *(undefined4 *)(param_1 + 0x740) = 0;
  do {
    lVar15 = *(long *)(param_1 + 0x4a0 + lVar17 * 8);
    if (*(short *)(param_1 + 0x500 + lVar17 * 2) == 0) {
      FUN_0328a0b0(lVar15,6,1,0);
      if (((*(ushort *)(lVar15 + 0x578) >> 5 & 1) == 0) ||
         ((*(ushort *)(lVar15 + 0x578) >> 4 & 1) == 0)) {
        uVar4 = *(ushort *)(lVar15 + 0x250) | 0x200;
      }
      else {
        uVar4 = *(ushort *)(lVar15 + 0x250) & 0xfdff;
      }
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,9);
      *(ushort *)(lVar15 + 0x250) = uVar4;
      FUN_0328a2b0(lVar15,0);
      lVar15 = *(long *)(lVar15 + 0x428);
      if ((lVar15 != 0) && (plVar8 = (long *)(lVar15 + 8), *plVar8 != 0)) {
        lVar16 = *(long *)(*(long *)(param_1 + 0x4f8) + 0x18);
        if (*(long *)(lVar16 + 0x18) == lVar15) {
          plVar13 = *(long **)(lVar16 + 0x138);
          *(undefined8 *)(lVar16 + 0x18) = 0;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x20))(plVar13,lVar15,0);
          }
          *(long *)(lVar16 + 0x48) = lVar16 + 0x28;
          *(long *)(lVar16 + 0x50) = lVar16 + 0x28;
LAB_03284ca4:
          *(undefined8 *)(lVar16 + 0x60) = 0;
        }
        else if (*(long *)(lVar16 + 0x60) == lVar15) goto LAB_03284ca4;
        lVar1 = *(long *)(lVar15 + 0x10);
        lVar2 = *(long *)(lVar15 + 0x18);
        *(undefined8 *)(lVar15 + 0x18) = 0;
        *plVar8 = 0;
        *(undefined8 *)(lVar15 + 0x10) = 0;
        if (*(long **)(lVar16 + 0x58) == plVar8) {
          *(long *)(lVar16 + 0x58) = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x10) = lVar2;
        }
      }
      lVar15 = *(long *)(lVar9 + lVar17 * 8);
      if (**(char **)(puVar5 + 8) == '\0') {
        lVar15 = *(long *)(*(long *)(lVar15 + 0xf0) + 0x18);
      }
      else {
        local_a0 = &DAT_04b177a8;
        pcStack_98 = *(char **)(puVar5 + 8);
        lVar15 = FUN_032cb8e0(auStack_a8,&local_a0,*(undefined8 *)(lVar15 + 0xf0));
      }
      bVar10 = *(byte *)(lVar15 + 0x58) & 0xfe;
    }
    else {
      FUN_0328a0b0(lVar15,6,1,1);
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,9);
      *(ushort *)(lVar15 + 0x250) = *(ushort *)(lVar15 + 0x250) & 0xfdff;
      FUN_0328a2b0(lVar15,1);
      lVar15 = *(long *)(lVar15 + 0x428);
      if ((lVar15 != 0) && (plVar8 = (long *)(lVar15 + 8), *plVar8 == 0)) {
        plVar13 = (long *)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x18) + 0x58);
        puVar6 = (undefined8 *)*plVar13;
        if ((undefined8 *)*plVar13 == (undefined8 *)0x0) {
          *plVar13 = (long)plVar8;
        }
        else {
          do {
            puVar14 = puVar6;
            puVar6 = (undefined8 *)puVar14[2];
          } while ((undefined8 *)puVar14[2] != (undefined8 *)0x0);
          puVar14[2] = plVar8;
          *(undefined8 **)(lVar15 + 0x10) = puVar14;
          plVar13 = (long *)*puVar14;
        }
        *plVar8 = (long)plVar13;
      }
      pcVar11 = *(char **)(puVar5 + 8);
      lVar15 = *(long *)(lVar9 + lVar17 * 8);
      if (*pcVar11 == '\0') {
        lVar15 = *(long *)(*(long *)(lVar15 + 0xf0) + 0x18);
      }
      else {
        local_a0 = &DAT_04b177a8;
        pcStack_98 = pcVar11;
        lVar15 = FUN_032cb8e0(auStack_a8,&local_a0,*(undefined8 *)(lVar15 + 0xf0));
        pcVar11 = *(char **)(puVar5 + 8);
      }
      *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 1;
      *(int *)(param_1 + 0x740) = *(int *)(param_1 + 0x740) + 1;
      lVar15 = *(long *)(lVar9 + lVar17 * 8);
      if (*pcVar11 == '\0') {
        lVar15 = *(long *)(*(long *)(lVar15 + 0xf0) + 0x18);
      }
      else {
        local_a0 = &DAT_04b177a8;
        pcStack_98 = pcVar11;
        lVar15 = FUN_032cb8e0(auStack_a8,&local_a0,*(undefined8 *)(lVar15 + 0xf0));
      }
      *(float *)(lVar15 + 0x30) = fVar23;
      *(undefined8 *)(lVar15 + 0x34) = 0;
      fVar23 = fVar21 + fVar22 + fVar23;
      bVar10 = *(byte *)(lVar15 + 0x58) | 0x10;
    }
    *(byte *)(lVar15 + 0x58) = bVar10;
    lVar17 = lVar17 + 1;
  } while (lVar17 != 0xb);
  if (**(char **)(puVar5 + 8) == '\0') {
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x390) + 0xf0) + 0x18);
  }
  else {
    local_a0 = &DAT_04b177a8;
    pcStack_98 = *(char **)(puVar5 + 8);
    plVar8 = (long *)FUN_032cb8e0(auStack_a8,&local_a0,
                                  *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0));
  }
  lVar9 = (**(code **)(*plVar8 + 0x60))(plVar8,"L_BtnBalloon_00",1);
  fVar21 = *(float *)(lVar9 + 0x50);
  if (**(char **)(puVar5 + 8) == '\0') {
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x390) + 0xf0) + 0x18);
  }
  else {
    local_a0 = &DAT_04b177a8;
    pcStack_98 = *(char **)(puVar5 + 8);
    plVar8 = (long *)FUN_032cb8e0(auStack_a8,&local_a0,
                                  *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0));
  }
  lVar9 = (**(code **)(*plVar8 + 0x60))(plVar8,"N_BtnMarginX",1);
  fVar22 = *(float *)(lVar9 + 0x50);
  if (**(char **)(puVar5 + 8) == '\0') {
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x390) + 0xf0) + 0x18);
  }
  else {
    local_a0 = &DAT_04b177a8;
    pcStack_98 = *(char **)(puVar5 + 8);
    plVar8 = (long *)FUN_032cb8e0(auStack_a8,&local_a0,
                                  *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0));
  }
  lVar17 = (**(code **)(*plVar8 + 0x60))(plVar8,"N_BalloonMarginX",1);
  lVar9 = 0;
  fVar23 = *param_2;
  fVar24 = param_2[2];
  fVar22 = fVar22 * (float)(*(int *)(param_1 + 0x740) + -1) +
           (float)*(int *)(param_1 + 0x740) * fVar21 + *(float *)(lVar17 + 0x50) * 2.0;
  fVar21 = ((fVar22 - fVar21) - *(float *)(lVar17 + 0x50) * 2.0) * 0.5;
  do {
    lVar17 = param_1 + lVar9;
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,4);
    if ((*(ushort *)(*(long *)(lVar17 + 0x4a0) + 0x578) >> 4 & 1) != 0) {
      if (**(char **)(puVar5 + 8) == '\0') {
        lVar17 = *(long *)(*(long *)(*(long *)(lVar17 + 0x398) + 0xf0) + 0x18);
        fVar25 = *(float *)(lVar17 + 0x30);
      }
      else {
        local_a0 = &DAT_04b177a8;
        pcStack_98 = *(char **)(puVar5 + 8);
        lVar15 = FUN_032cb8e0(auStack_a8,&local_a0,*(undefined8 *)(*(long *)(lVar17 + 0x398) + 0xf0)
                             );
        fVar25 = *(float *)(lVar15 + 0x30);
        if (**(char **)(puVar5 + 8) == '\0') {
          lVar17 = *(long *)(*(long *)(*(long *)(lVar17 + 0x398) + 0xf0) + 0x18);
        }
        else {
          local_a0 = &DAT_04b177a8;
          pcStack_98 = *(char **)(puVar5 + 8);
          lVar17 = FUN_032cb8e0(auStack_a8,&local_a0,
                                *(undefined8 *)(*(long *)(lVar17 + 0x398) + 0xf0));
        }
      }
      *(undefined8 *)(lVar17 + 0x34) = 0;
      *(float *)(lVar17 + 0x30) = fVar25 - fVar21;
      *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
    }
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x58);
  fVar25 = fVar22 * 0.5;
  fVar23 = (fVar23 + fVar24) * 0.5;
  if (-960.0 <= fVar23 - fVar25) {
    if (fVar23 + fVar25 <= 960.0) {
      uVar19 = 1;
    }
    else {
      uVar19 = 2;
    }
    *(undefined4 *)(param_1 + 0x744) = uVar19;
  }
  else {
    *(undefined4 *)(param_1 + 0x744) = 0;
  }
  fVar24 = param_2[1];
  fVar18 = param_2[3];
  fVar23 = (*param_2 + param_2[2]) * 0.5;
  *(float *)(param_1 + 0x764) = fVar23;
  fVar24 = (fVar24 + fVar18) * 0.5 + 100.0;
  fVar18 = *(float *)(param_1 + 0x760);
  pcVar11 = *(char **)(puVar5 + 8);
  *(float *)(param_1 + 0x768) = fVar24;
  if (*pcVar11 == '\0') {
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x390) + 0xf0) + 0x18);
  }
  else {
    local_a0 = &DAT_04b177a8;
    pcStack_98 = pcVar11;
    lVar9 = FUN_032cb8e0(auStack_a8,&local_a0,*(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0));
    pcVar11 = *(char **)(puVar5 + 8);
  }
  *(float *)(lVar9 + 0x30) = fVar23;
  *(float *)(lVar9 + 0x34) = fVar24 + (1.0 - fVar18) * -80.0;
  *(undefined4 *)(lVar9 + 0x38) = 0;
  *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
  if (*pcVar11 == '\0') {
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x390) + 0xf0) + 0x18);
  }
  else {
    local_a0 = &DAT_04b177a8;
    pcStack_98 = pcVar11;
    plVar8 = (long *)FUN_032cb8e0(auStack_a8,&local_a0,
                                  *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0));
  }
  lVar9 = (**(code **)(*plVar8 + 0x60))(plVar8,"P_BalloonBase",1);
  if (**(char **)(puVar5 + 8) == '\0') {
    plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 0x390) + 0xf0) + 0x18);
  }
  else {
    local_a0 = &DAT_04b177a8;
    pcStack_98 = *(char **)(puVar5 + 8);
    plVar8 = (long *)FUN_032cb8e0(auStack_a8,&local_a0,
                                  *(undefined8 *)(*(long *)(param_1 + 0x390) + 0xf0));
  }
  lVar17 = (**(code **)(*plVar8 + 0x60))(plVar8,"P_Tri",1);
  *(float *)(lVar9 + 0x50) = fVar22;
  bVar10 = *(byte *)(lVar9 + 0x58) | 0x10;
  *(byte *)(lVar9 + 0x58) = bVar10;
  iVar3 = *(int *)(param_1 + 0x744);
  if (iVar3 == 2) {
    fVar24 = *(float *)(param_1 + 0x748) - fVar21;
    fVar18 = *(float *)(param_1 + 0x754);
    uVar19 = *(undefined4 *)(param_1 + 0x74c);
    uVar20 = *(undefined4 *)(param_1 + 0x758);
    *(undefined4 *)(lVar9 + 0x38) = 0;
    *(byte *)(lVar9 + 0x58) = bVar10;
    *(undefined4 *)(lVar9 + 0x34) = uVar19;
    bVar7 = -960.0 <= (fVar23 + fVar24) - fVar25;
    fVar22 = -fVar23;
    if (bVar7) {
      fVar22 = fVar24;
    }
    *(float *)(lVar9 + 0x30) = fVar22;
    if (bVar7) {
      fVar23 = fVar21 + fVar18;
    }
  }
  else {
    if (iVar3 == 1) {
      uVar12 = *(undefined8 *)(param_1 + 0x748);
      uVar19 = *(undefined4 *)(param_1 + 0x750);
      *(byte *)(lVar9 + 0x58) = bVar10;
      *(undefined4 *)(lVar9 + 0x38) = uVar19;
      *(undefined8 *)(lVar9 + 0x30) = uVar12;
      uVar12 = *(undefined8 *)(param_1 + 0x754);
      *(undefined4 *)(lVar17 + 0x38) = *(undefined4 *)(param_1 + 0x75c);
      *(undefined8 *)(lVar17 + 0x30) = uVar12;
      goto LAB_03285158;
    }
    if (iVar3 != 0) {
      return;
    }
    fVar24 = fVar21 + *(float *)(param_1 + 0x748);
    fVar18 = *(float *)(param_1 + 0x754);
    uVar19 = *(undefined4 *)(param_1 + 0x74c);
    uVar20 = *(undefined4 *)(param_1 + 0x758);
    *(undefined4 *)(lVar9 + 0x38) = 0;
    *(byte *)(lVar9 + 0x58) = bVar10;
    *(undefined4 *)(lVar9 + 0x34) = uVar19;
    fVar25 = fVar25 + fVar23 + fVar24;
    fVar22 = -fVar23;
    if (fVar25 <= 960.0) {
      fVar22 = fVar24;
    }
    *(float *)(lVar9 + 0x30) = fVar22;
    if (fVar25 <= 960.0) {
      fVar23 = fVar18 - fVar21;
    }
  }
  *(float *)(lVar17 + 0x30) = fVar23;
  *(undefined4 *)(lVar17 + 0x34) = uVar20;
  *(undefined4 *)(lVar17 + 0x38) = 0;
LAB_03285158:
  *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
  return;
}


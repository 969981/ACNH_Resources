
int FUN_00164b80(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  char *pcVar19;
  long *plVar20;
  char *pcVar21;
  int *piVar22;
  size_t sVar23;
  long lVar24;
  uint uVar25;
  int local_184;
  char *local_180;
  ulong local_178;
  long local_170 [29];
  
  plVar7 = (long *)FUN_00143330(1,0x80);
  if (plVar7 == (long *)0x0) {
    return 1;
  }
  iVar18 = 0;
  piVar22 = (int *)0x0;
  lVar24 = 0;
  bVar6 = false;
  uVar25 = 0xffffffd0;
  plVar20 = (long *)register0x00000008;
  plVar17 = plVar7;
  do {
    do {
      if (iVar18 != 0) {
        plVar20 = plVar7;
        do {
          if ((char)plVar20[1] != '\0') {
            FUN_00143300(*plVar20);
            *plVar20 = 0;
            *(undefined1 *)(plVar20 + 1) = 0;
          }
          if ((char)plVar20[4] != '\0') {
            FUN_00143300(plVar20[3]);
            plVar20[3] = 0;
            *(undefined1 *)(plVar20 + 4) = 0;
          }
          if ((char)plVar20[7] != '\0') {
            FUN_00143300(plVar20[6]);
            plVar20[6] = 0;
            *(undefined1 *)(plVar20 + 7) = 0;
          }
          if ((char)plVar20[0xc] != '\0') {
            FUN_00143300(plVar20[0xb]);
            plVar20[0xb] = 0;
            *(undefined1 *)(plVar20 + 0xc) = 0;
          }
          plVar20 = (long *)plVar20[0xf];
        } while (plVar20 != (long *)0x0);
        goto LAB_0016543c;
      }
      plVar8 = plVar20;
      if (!(bool)(bVar6 & piVar22 != (int *)0x0)) {
        if ((int)uVar25 < 0) {
          uVar16 = uVar25 + 8;
          if (0xfffffff8 < uVar25) goto LAB_00164c8c;
          plVar20 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
          uVar25 = uVar16;
        }
        else {
          uVar16 = uVar25;
LAB_00164c8c:
          plVar8 = plVar20 + 1;
          uVar25 = uVar16;
        }
        iVar12 = (int)*plVar20;
        if (iVar12 != 0x11) goto LAB_00164ca4;
        pcVar19 = (char *)0x0;
        local_184 = 5;
        plVar20 = plVar7;
        lVar24 = 0;
        goto LAB_00165490;
      }
      iVar12 = *piVar22;
      iVar18 = 0;
      bVar6 = false;
      lVar24 = *(long *)(piVar22 + 2);
      piVar22 = piVar22 + 4;
    } while (iVar12 == 0x11);
    bVar6 = true;
LAB_00164ca4:
    iVar18 = 4;
    plVar20 = plVar8;
    lVar10 = lVar24;
    switch(iVar12) {
    case 2:
      plVar17[8] = plVar17[8] | 4;
    case 1:
      iVar18 = 2;
      if (*plVar17 == 0) {
        if (bVar6) {
        }
        else {
          if ((int)uVar25 < 0) {
            uVar16 = uVar25 + 8;
            if (0xfffffff8 < uVar25) goto LAB_00165160;
            plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
            uVar25 = uVar16;
          }
          else {
            uVar16 = uVar25;
LAB_00165160:
            plVar20 = plVar8 + 1;
            uVar25 = uVar16;
          }
          lVar10 = *plVar8;
        }
        iVar18 = 3;
        if (lVar10 != 0) {
          iVar18 = 0;
          *plVar17 = lVar10;
        }
      }
      break;
    case 3:
      iVar18 = 2;
      if (plVar17[2] == 0) {
        if (bVar6) {
        }
        else {
          if ((int)uVar25 < 0) {
            uVar16 = uVar25 + 8;
            if (0xfffffff8 < uVar25) goto LAB_001651e8;
            plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
            uVar25 = uVar16;
          }
          else {
            uVar16 = uVar25;
LAB_001651e8:
            plVar20 = plVar8 + 1;
            uVar25 = uVar16;
          }
          lVar10 = *plVar8;
        }
        iVar18 = 0;
        plVar17[2] = lVar10;
      }
      break;
    case 4:
      goto switchD_00164cc8_caseD_4;
    case 5:
      plVar17[8] = plVar17[8] | 8;
switchD_00164cc8_caseD_4:
      iVar18 = 2;
      if (plVar17[3] == 0) {
        if (bVar6) {
        }
        else {
          if ((int)uVar25 < 0) {
            uVar16 = uVar25 + 8;
            if (0xfffffff8 < uVar25) goto LAB_001651a4;
            plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
            uVar25 = uVar16;
          }
          else {
            uVar16 = uVar25;
LAB_001651a4:
            plVar20 = plVar8 + 1;
            uVar25 = uVar16;
          }
          lVar10 = *plVar8;
        }
        iVar18 = 3;
        if (lVar10 != 0) {
          iVar18 = 0;
          plVar17[3] = lVar10;
        }
      }
      break;
    case 6:
      goto switchD_00164cc8_caseD_6;
    case 7:
      iVar18 = 2;
      if ((*(byte *)(plVar17 + 8) & 10) == 0) {
        if (bVar6) {
        }
        else {
          if ((int)uVar25 < 0) {
            uVar16 = uVar25 + 8;
            if (0xfffffff8 < uVar25) goto LAB_001652e0;
            plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
            uVar25 = uVar16;
          }
          else {
            uVar16 = uVar25;
LAB_001652e0:
            plVar20 = plVar8 + 1;
            uVar25 = uVar16;
          }
          lVar10 = *plVar8;
        }
        iVar18 = 3;
        if (lVar10 != 0) {
          lVar10 = FUN_00143320();
          plVar17[3] = lVar10;
          iVar18 = 1;
          if (lVar10 != 0) {
            uVar13 = plVar17[8] | 2;
            goto LAB_00165330;
          }
        }
      }
      break;
    case 8:
      iVar18 = 6;
      bVar5 = !bVar6;
      bVar6 = true;
      if (bVar5) {
        if ((int)uVar25 < 0) {
          uVar16 = uVar25 + 8;
          if (0xfffffff8 < uVar25) goto LAB_00164f50;
          plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
          uVar25 = uVar16;
        }
        else {
          uVar16 = uVar25;
LAB_00164f50:
          plVar20 = plVar8 + 1;
          uVar25 = uVar16;
        }
        piVar22 = (int *)*plVar8;
        bVar6 = piVar22 != (int *)0x0;
        iVar18 = 0;
        if (!bVar6) {
          iVar18 = 3;
        }
      }
      break;
    case 10:
      if (bVar6) {
      }
      else {
        if ((int)uVar25 < 0) {
          uVar16 = uVar25 + 8;
          if (0xfffffff8 < uVar25) goto LAB_00164fac;
          plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
          uVar25 = uVar16;
        }
        else {
          uVar16 = uVar25;
LAB_00164fac:
          plVar20 = plVar8 + 1;
          uVar25 = uVar16;
        }
        lVar10 = *plVar8;
      }
      if (plVar17[3] == 0) {
        iVar18 = 3;
        if (lVar10 != 0) {
          lVar10 = FUN_00143320();
          plVar17[3] = lVar10;
          iVar18 = 1;
          if (lVar10 != 0) {
            uVar13 = plVar17[8] | 1;
LAB_00165330:
            iVar18 = 0;
            plVar17[8] = uVar13;
            *(undefined1 *)(plVar17 + 4) = 1;
          }
        }
      }
      else {
        iVar18 = 2;
        if ((*(byte *)(plVar17 + 8) & 1) != 0) {
          iVar18 = 3;
          if (lVar10 != 0) {
            lVar10 = FUN_00143320();
            iVar18 = 1;
            if (lVar10 != 0) {
              plVar8 = (long *)FUN_00143330(1,0x80);
              if (plVar8 == (long *)0x0) goto LAB_001653b8;
              plVar8[3] = lVar10;
              plVar8[8] = 1;
              plVar8[0xf] = plVar17[0xf];
              plVar17[0xf] = (long)plVar8;
              *(undefined1 *)(plVar8 + 4) = 1;
LAB_001653b0:
              iVar18 = 0;
              plVar17 = plVar8;
            }
          }
        }
      }
      break;
    case 0xb:
    case 0x10:
      if (bVar6) {
      }
      else {
        if ((int)uVar25 < 0) {
          uVar16 = uVar25 + 8;
          if (0xfffffff8 < uVar25) goto LAB_00164e8c;
          plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
          uVar25 = uVar16;
        }
        else {
          uVar16 = uVar25;
LAB_00164e8c:
          plVar20 = plVar8 + 1;
          uVar25 = uVar16;
        }
        lVar10 = *plVar8;
      }
      iVar18 = 2;
      if (plVar17[0xb] == 0) {
        lVar10 = FUN_00143320(lVar10);
        plVar17[0xb] = lVar10;
        iVar18 = 1;
        if (lVar10 != 0) {
          iVar18 = 0;
          *(undefined1 *)(plVar17 + 0xc) = 1;
        }
      }
      break;
    case 0xc:
      iVar18 = 2;
      plVar17[8] = plVar17[8] | 0x30;
      if (plVar17[9] == 0) {
        if (!bVar6) {
          if ((int)uVar25 < 0) {
            uVar16 = uVar25 + 8;
            if (0xfffffff8 < uVar25) goto LAB_00165220;
            plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
            uVar25 = uVar16;
          }
          else {
            uVar16 = uVar25;
LAB_00165220:
            plVar20 = plVar8 + 1;
            uVar25 = uVar16;
          }
          lVar10 = *plVar8;
        }
        iVar18 = 3;
        if (lVar10 != 0) {
          plVar17[9] = lVar10;
          goto LAB_001652bc;
        }
      }
      break;
    case 0xd:
      iVar18 = 2;
      if (plVar17[10] == 0) {
        if (bVar6) {
        }
        else {
          if ((int)uVar25 < 0) {
            uVar16 = uVar25 + 8;
            if (0xfffffff8 < uVar25) goto LAB_00165260;
            plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
            uVar25 = uVar16;
          }
          else {
            uVar16 = uVar25;
LAB_00165260:
            plVar20 = plVar8 + 1;
            uVar25 = uVar16;
          }
          lVar10 = *plVar8;
        }
        iVar18 = 0;
        plVar17[10] = lVar10;
      }
      break;
    case 0xe:
      if (bVar6) {
      }
      else {
        if ((int)uVar25 < 0) {
          uVar16 = uVar25 + 8;
          if (0xfffffff8 < uVar25) goto LAB_00165060;
          plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
          uVar25 = uVar16;
        }
        else {
          uVar16 = uVar25;
LAB_00165060:
          plVar20 = plVar8 + 1;
          uVar25 = uVar16;
        }
        lVar10 = *plVar8;
      }
      if (plVar17[6] == 0) {
        iVar18 = 3;
        if (lVar10 != 0) {
          lVar10 = FUN_00143320();
          plVar17[6] = lVar10;
          iVar18 = 1;
          if (lVar10 != 0) {
            iVar18 = 0;
            *(undefined1 *)(plVar17 + 7) = 1;
          }
        }
      }
      else {
        iVar18 = 2;
        if ((*(byte *)(plVar17 + 8) & 1) != 0) {
          iVar18 = 3;
          if (lVar10 != 0) {
            lVar10 = FUN_00143320();
            iVar18 = 1;
            if (lVar10 != 0) {
              plVar8 = (long *)FUN_00143330(1,0x80);
              if (plVar8 != (long *)0x0) {
                plVar8[6] = lVar10;
                plVar8[8] = 1;
                plVar8[0xf] = plVar17[0xf];
                plVar17[0xf] = (long)plVar8;
                *(undefined1 *)(plVar8 + 7) = 1;
                goto LAB_001653b0;
              }
LAB_001653b8:
              iVar18 = 1;
              FUN_00143300(lVar10);
            }
          }
        }
      }
      break;
    case 0xf:
      if (bVar6) {
      }
      else {
        if ((int)uVar25 < 0) {
          uVar16 = uVar25 + 8;
          if (0xfffffff8 < uVar25) goto LAB_00165118;
          plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
          uVar25 = uVar16;
        }
        else {
          uVar16 = uVar25;
LAB_00165118:
          plVar20 = plVar8 + 1;
          uVar25 = uVar16;
        }
        lVar10 = *plVar8;
      }
      iVar18 = 2;
      if (plVar17[0xe] == 0) {
        iVar18 = 0;
        plVar17[0xe] = lVar10;
      }
      break;
    case 0x13:
      iVar18 = 2;
      plVar17[8] = plVar17[8] | 0x40;
      if (plVar17[0xd] == 0) {
        if (!bVar6) {
          if ((int)uVar25 < 0) {
            uVar16 = uVar25 + 8;
            if (0xfffffff8 < uVar25) goto LAB_00165298;
            plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
            uVar25 = uVar16;
          }
          else {
            uVar16 = uVar25;
LAB_00165298:
            plVar20 = plVar8 + 1;
            uVar25 = uVar16;
          }
          lVar10 = *plVar8;
        }
        iVar18 = 3;
        if (lVar10 != 0) {
          plVar17[0xd] = lVar10;
LAB_001652bc:
          iVar18 = 0;
          plVar17[3] = lVar10;
        }
      }
      break;
    case 0x14:
      plVar17[8] = plVar17[8] | 0x80;
switchD_00164cc8_caseD_6:
      if (bVar6) {
      }
      else {
        if ((int)uVar25 < 0) {
          uVar16 = uVar25 + 8;
          if (0xfffffff8 < uVar25) goto LAB_00164f00;
          plVar8 = (long *)((long)local_170 + (long)(int)uVar25 + 0xe8);
          uVar25 = uVar16;
        }
        else {
          uVar16 = uVar25;
LAB_00164f00:
          plVar20 = plVar8 + 1;
          uVar25 = uVar16;
        }
        lVar10 = *plVar8;
      }
      iVar18 = 0;
      plVar17[5] = lVar10;
    }
  } while( true );
LAB_00165490:
  pcVar21 = (char *)*plVar20;
  if (pcVar21 == (char *)0x0) {
    if (lVar24 == 0) goto LAB_00165724;
  }
  else if (lVar24 == 0 && plVar20[3] == 0) goto LAB_00165724;
  uVar13 = plVar20[8];
  if ((((((uint)(plVar20[5] != 0) & (uint)uVar13) != 0) || ((uVar13 & 9) == 9)) ||
      (uVar25 = ~(uint)uVar13, (uVar25 & 10) == 0)) || ((uVar25 & 0x30) == 0 && plVar20[9] == 0))
  goto LAB_00165724;
  if (((uVar13 & 0x11) != 0) && (plVar20[6] == 0)) {
    lVar10 = 0x18;
    if ((uVar13 & 0x10) != 0) {
      lVar10 = 0x58;
    }
    pcVar9 = (char *)FUN_001547d0(*(undefined8 *)((long)plVar20 + lVar10));
    pcVar21 = pcVar19;
    if (pcVar9 != (char *)0x0) {
      pcVar21 = pcVar9;
    }
    pcVar9 = "application/octet-stream";
    if (pcVar21 != (char *)0x0) {
      pcVar9 = pcVar21;
    }
    lVar10 = FUN_00143320(pcVar9);
    plVar20[6] = lVar10;
    if (lVar10 != 0) {
      pcVar21 = (char *)*plVar20;
      *(undefined1 *)(plVar20 + 7) = 1;
      goto LAB_00165558;
    }
LAB_0016571c:
    local_184 = 1;
LAB_00165724:
    do {
      if ((char)plVar20[1] != '\0') {
        FUN_00143300(*plVar20);
        *plVar20 = 0;
        *(undefined1 *)(plVar20 + 1) = 0;
      }
      if ((char)plVar20[4] != '\0') {
        FUN_00143300(plVar20[3]);
        plVar20[3] = 0;
        *(undefined1 *)(plVar20 + 4) = 0;
      }
      if ((char)plVar20[7] != '\0') {
        FUN_00143300(plVar20[6]);
        plVar20[6] = 0;
        *(undefined1 *)(plVar20 + 7) = 0;
      }
      if ((char)plVar20[0xc] != '\0') {
        FUN_00143300(plVar20[0xb]);
        plVar20[0xb] = 0;
        *(undefined1 *)(plVar20 + 0xc) = 0;
      }
      plVar20 = (long *)plVar20[0xf];
    } while (plVar20 != (long *)0x0);
    iVar18 = local_184;
LAB_0016543c:
    do {
      plVar20 = (long *)plVar7[0xf];
      FUN_00143300(plVar7);
      plVar7 = plVar20;
    } while (plVar20 != (long *)0x0);
    return iVar18;
  }
LAB_00165558:
  if (pcVar21 == (char *)0x0) {
    local_178 = plVar20[8];
    if ((plVar20 != plVar7) || (((uint)local_178 >> 2 & 1) != 0)) goto LAB_001655ec;
    pcVar9 = (char *)*plVar7;
    pcVar21 = (char *)0x0;
LAB_001655dc:
    if (pcVar9 == (char *)0x0) goto LAB_0016571c;
    local_178 = plVar20[8];
    *(undefined1 *)(plVar20 + 1) = 1;
  }
  else {
    lVar10 = plVar20[2];
    if (lVar10 == 0) {
      local_178 = plVar20[8];
      if ((plVar20 == plVar7) && (((uint)local_178 >> 2 & 1) == 0)) {
        sVar23 = strlen(pcVar21);
        lVar10 = sVar23 + 1;
        goto LAB_001655c8;
      }
    }
    else {
      lVar14 = 0;
      do {
        if (pcVar21[lVar14] == '\0') {
          iVar18 = 3;
          local_184 = 3;
          if (plVar20 != (long *)0x0) goto LAB_00165724;
          goto LAB_0016543c;
        }
        lVar14 = lVar14 + 1;
      } while (lVar10 != lVar14);
      local_178 = plVar20[8];
      if ((plVar20 == plVar7) && (((uint)local_178 >> 2 & 1) == 0)) {
LAB_001655c8:
        pcVar9 = (char *)FUN_00144e40(pcVar21,lVar10);
        *plVar20 = (long)pcVar9;
        pcVar21 = pcVar9;
        goto LAB_001655dc;
      }
    }
  }
LAB_001655ec:
  local_180 = (char *)plVar20[3];
  if ((local_178 & 0x6b) == 0) {
    if (local_180 == (char *)0x0) {
      local_180 = (char *)0x0;
    }
    else {
      lVar10 = plVar20[5];
      if (lVar10 == 0) {
        sVar23 = strlen(local_180);
        lVar10 = sVar23 + 1;
      }
      local_180 = (char *)FUN_00144e40(local_180,lVar10);
      plVar20[3] = (long)local_180;
      if (local_180 == (char *)0x0) goto LAB_0016571c;
      pcVar21 = (char *)*plVar20;
      *(undefined1 *)(plVar20 + 4) = 1;
      local_178 = plVar20[8];
    }
  }
  lVar10 = plVar20[5];
  lVar2 = plVar20[6];
  lVar15 = plVar20[0xb];
  sVar23 = plVar20[2];
  lVar14 = plVar20[9];
  lVar3 = plVar20[10];
  lVar1 = plVar20[0xd];
  lVar4 = plVar20[0xe];
  lVar11 = FUN_00143330(1,0x70);
  if (lVar11 == 0) goto LAB_0016571c;
  *(char **)(lVar11 + 8) = pcVar21;
  if (pcVar21 == (char *)0x0) {
    sVar23 = 0;
  }
  else if (sVar23 == 0) {
    sVar23 = strlen(pcVar21);
  }
  *(long *)(lVar11 + 0x28) = lVar14;
  *(long *)(lVar11 + 0x30) = lVar3;
  *(long *)(lVar11 + 0x38) = lVar2;
  *(long *)(lVar11 + 0x40) = lVar4;
  *(size_t *)(lVar11 + 0x10) = sVar23;
  *(char **)(lVar11 + 0x18) = local_180;
  *(long *)(lVar11 + 0x60) = lVar1;
  *(long *)(lVar11 + 0x68) = lVar10;
  *(ulong *)(lVar11 + 0x50) = local_178 | 0x80;
  *(long *)(lVar11 + 0x58) = lVar15;
  if (lVar24 == 0) {
    plVar17 = param_1;
    if ((long *)*param_2 != (long *)0x0) {
      plVar17 = (long *)*param_2;
    }
    *plVar17 = lVar11;
    plVar17 = param_2;
  }
  else {
    *(long *)(lVar11 + 0x48) = *(long *)(lVar24 + 0x48);
    plVar17 = (long *)(lVar24 + 0x48);
  }
  *plVar17 = lVar11;
  iVar18 = 0;
  plVar17 = plVar20 + 6;
  plVar20 = (long *)plVar20[0xf];
  if ((char *)*plVar17 != (char *)0x0) {
    pcVar19 = (char *)*plVar17;
  }
  lVar24 = lVar11;
  if (plVar20 == (long *)0x0) goto LAB_0016543c;
  goto LAB_00165490;
}


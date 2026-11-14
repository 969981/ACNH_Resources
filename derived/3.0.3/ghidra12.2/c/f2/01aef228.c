
undefined8 FUN_01aef228(short *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  byte bVar10;
  ushort uVar11;
  uint *puVar12;
  int iVar13;
  char cVar14;
  uint *puVar15;
  int *piVar16;
  uint *puVar17;
  bool bVar18;
  long lVar19;
  bool bVar20;
  short local_50;
  byte local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  uint *local_48;
  
  if (*param_1 == -2) {
    return 1;
  }
  uVar7 = FUN_0277e294();
  puVar4 = PTR_DAT_04bb43c0;
  if ((uVar7 & 1) == 0) {
    return 1;
  }
  bVar3 = *(byte *)(param_1 + 1);
  local_48 = (uint *)0x0;
  local_50 = *param_1;
  local_4d = *(undefined1 *)((long)param_1 + 3);
  local_4c = *(undefined4 *)(param_1 + 2);
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  local_4e = bVar3;
  uVar6 = FUN_0277d6c4(&local_50);
  lVar8 = DAT_0532a768;
  if (*(long *)puVar4 == 0) {
    return 1;
  }
  lVar19 = *(long *)(lVar19 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
  if (*(uint *)(lVar19 + 0x1d8) <= uVar6) {
    return 1;
  }
  if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return 1;
  }
  uVar6 = FUN_0277d6c4(param_1);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar6) {
    return 1;
  }
  puVar17 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8);
  if (puVar17 == (uint *)0x0) {
    return 1;
  }
  uVar6 = *puVar17;
  if ((uVar6 == 0) || (puVar17 == (uint *)(ulong)uVar6)) {
LAB_01aef3a8:
    uVar11 = 0;
    uVar6 = *(uint *)PTR_DAT_04bc0078;
  }
  else {
    puVar12 = (uint *)((long)puVar17 - (long)(ulong)uVar6);
    if ((*puVar12 == 0) || ((uVar6 = puVar12[1], uVar6 == 0 || ((ulong)(ushort)puVar12[2] == 0))))
    goto LAB_01aef3a8;
    lVar8 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      lVar8 = 0x1c;
    }
    lVar8 = (long)puVar12 + lVar8 + (ulong)(ushort)puVar12[2] * 8;
    if (lVar8 == 0) goto LAB_01aef3a8;
    uVar1 = 0;
    if ((ulong)uVar6 != 0) {
      uVar1 = (uint)((ulong)((long)puVar17 - lVar8) / (ulong)uVar6);
    }
    uVar6 = *(uint *)PTR_DAT_04bc0078;
    if (*puVar12 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if ((uVar6 <= uVar1) ||
       (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc0078 + 8) + (long)(int)uVar1 * 2), 6 < uVar11)) {
      uVar11 = 0;
    }
  }
  if (uVar11 == 0) {
    return 1;
  }
  uVar1 = *puVar17;
  uVar11 = 0;
  if ((uVar1 != 0) && (puVar17 != (uint *)(ulong)uVar1)) {
    puVar12 = (uint *)((long)puVar17 - (long)(ulong)uVar1);
    uVar11 = 0;
    if (*puVar12 != 0) {
      uVar1 = puVar12[1];
      if ((uVar1 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar12 + lVar8 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar8 != 0) {
          uVar2 = 0;
          if ((ulong)uVar1 != 0) {
            uVar2 = (uint)((ulong)((long)puVar17 - lVar8) / (ulong)uVar1);
          }
          if (*puVar12 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < uVar6) &&
             (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc0078 + 8) + (long)(int)uVar2 * 2),
             uVar11 < 7)) goto LAB_01aef44c;
        }
      }
      uVar11 = 0;
    }
  }
LAB_01aef44c:
  bVar18 = true;
  bVar20 = true;
  local_48 = puVar17;
  switch(uVar11) {
  case 1:
    uVar6 = FUN_03853b94(puVar17);
    if ((*(uint *)PTR_DAT_04bc00c8 <= uVar6) ||
       (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2), 0xbc < uVar11)
       ) {
      uVar11 = 0;
    }
    lVar8 = FUN_01a60fe8(DAT_0532a778,uVar11);
    if (((lVar8 != 0) &&
        (pcVar9 = (char *)FUN_01a61580(lVar8,0xb,0x90bc0855,DAT_0532ad50), pcVar9 != (char *)0x0))
       && (*pcVar9 != '\0')) {
      iVar13 = 0x20000000;
      goto LAB_01aef958;
    }
    uVar6 = 2;
    goto LAB_01aefa14;
  case 2:
    goto switchD_01aef47c_caseD_2;
  case 3:
    goto switchD_01aef47c_caseD_3;
  case 4:
    goto switchD_01aef47c_caseD_4;
  case 5:
    goto switchD_01aef47c_caseD_5;
  case 6:
    break;
  default:
    goto switchD_01aef47c_default;
  }
  bVar18 = false;
switchD_01aef47c_caseD_5:
  bVar20 = false;
switchD_01aef47c_caseD_4:
  uVar6 = FUN_03853b94(puVar17);
  if ((*(uint *)PTR_DAT_04bc00c8 <= uVar6) ||
     (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
     uVar6 = (uint)uVar11, 0xbc < uVar11)) {
    uVar6 = 0;
  }
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar12 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= uVar6 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) != '\0')))) &&
       (((uVar6 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
      iVar13 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      lVar8 = (ulong)(puVar12[1] * uVar6 + (uint)(ushort)puVar12[2] * 8 + iVar13) + (long)puVar12;
      if (lVar8 != 0) goto LAB_01aef574;
    }
LAB_01aef60c:
    bVar10 = 0;
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar6) goto LAB_01aef60c;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    lVar8 = *(long *)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
    if (lVar8 == 0) goto LAB_01aef60c;
LAB_01aef574:
    pcVar9 = (char *)FUN_01a61580(lVar8,0xb,0x90bc0855,DAT_0532ad50);
    if (pcVar9 == (char *)0x0) goto LAB_01aef60c;
    bVar10 = 0;
    if (*pcVar9 != '\0') {
      bVar10 = bVar3 & 3;
    }
  }
  if ((int)(long)((float)((int)(long)((float)bVar10 * 90.0 * 11930465.0) + 0x60000000U >> 0x1e) *
                  90.0 * 11930465.0) + 0xa0000000U >> 0x1e == param_2) {
    return 0;
  }
  if (!bVar20) {
switchD_01aef47c_caseD_2:
    puVar5 = PTR_DAT_04bbfeb8;
    puVar4 = PTR_DAT_04bbfeb0;
    uVar1 = *puVar17;
    uVar6 = 0;
    if ((uVar1 != 0) && (puVar17 != (uint *)(ulong)uVar1)) {
      puVar12 = (uint *)((long)puVar17 - (long)(ulong)uVar1);
      uVar6 = 0;
      if (*puVar12 != 0) {
        uVar6 = puVar12[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar12 + lVar8 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)puVar17 - lVar8) / (ulong)uVar6);
            }
            if (*puVar12 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar6 < 0xbd)) goto LAB_01aef700;
          }
        }
        uVar6 = 0;
      }
    }
LAB_01aef700:
    if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
           (puVar12 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
          ((*(uint *)(DAT_0532a778 + 200) <= uVar6 ||
           (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) != '\0')))) &&
         (((uVar6 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
        iVar13 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar12 = (uint *)((ulong)(puVar12[1] * uVar6 + (uint)(ushort)puVar12[2] * 8 + iVar13) +
                          (long)puVar12);
        goto joined_r0x01aef89c;
      }
    }
    else if (uVar6 < *(uint *)(DAT_0532a778 + 0x1c0)) {
      if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
        uVar6 = 0;
      }
      puVar12 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
joined_r0x01aef89c:
      if ((puVar12 != (uint *)0x0) && (*puVar12 != 0)) {
        cVar14 = *PTR_DAT_04bbfeb0;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
          }
          else {
            uVar6 = *(uint *)(puVar5 + 0x2c);
            if (-1 < (int)uVar6) {
              if (((char *)((ulong)uVar6 + (long)puVar12) == (char *)0x0) ||
                 (*(char *)((ulong)uVar6 + (long)puVar12) == '\0')) break;
              uVar6 = (int)(long)((float)((int)(long)((float)(bVar3 & 3) * 90.0 * 11930465.0) +
                                          0xa0000000U >> 0x1e) * 90.0 * 11930465.0) + 0xa0000000U >>
                      0x1e;
              goto LAB_01aef8a4;
            }
            if (uVar6 != 0xffffffff) break;
          }
          puVar15 = (uint *)(ulong)*puVar12;
          uVar6 = 0;
          if ((*puVar12 == 0) || (puVar12 == puVar15)) goto LAB_01aef8a4;
          lVar8 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar15)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar12 + (lVar8 - (long)puVar15);
          if (lVar8 == 0) break;
          uVar7 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar15));
          *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
          uVar6 = 0;
          if (uVar7 == 0) goto LAB_01aef8a4;
          piVar16 = (int *)(lVar8 + 4);
          while (piVar16[-1] != -0x6f43f7ab) {
            piVar16 = piVar16 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              uVar6 = 0;
              goto LAB_01aef8a4;
            }
          }
          uVar6 = 0;
          iVar13 = 0;
          if (*piVar16 != -1) {
            iVar13 = *piVar16;
          }
          *(int *)(puVar5 + 0x2c) = iVar13;
          if (*puVar12 == 0) goto LAB_01aef8a4;
        } while( true );
      }
    }
    uVar6 = 0;
LAB_01aef8a4:
    if (uVar6 == param_2) {
      return 0;
    }
  }
  if (bVar18) {
    return 1;
  }
switchD_01aef47c_caseD_3:
  uVar6 = FUN_03853b94(puVar17);
  if ((*(uint *)PTR_DAT_04bc00c8 <= uVar6) ||
     (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
     uVar6 = (uint)uVar11, 0xbc < uVar11)) {
    uVar6 = 0;
  }
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar17 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar17 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= uVar6 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar6) != '\0')))) &&
       (((uVar6 < *puVar17 && (puVar17[1] != 0)) && ((ushort)puVar17[2] != 0)))) {
      iVar13 = 0xc;
      if (*(char *)((long)puVar17 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      lVar8 = (ulong)(puVar17[1] * uVar6 + (uint)(ushort)puVar17[2] * 8 + iVar13) + (long)puVar17;
      if (lVar8 != 0) goto LAB_01aef92c;
    }
LAB_01aefa10:
    uVar6 = 1;
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar6) goto LAB_01aefa10;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    lVar8 = *(long *)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar6 * 8);
    if (lVar8 == 0) goto LAB_01aefa10;
LAB_01aef92c:
    pcVar9 = (char *)FUN_01a61580(lVar8,0xb,0x90bc0855,DAT_0532ad50);
    if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) goto LAB_01aefa10;
    iVar13 = -0x20000000;
LAB_01aef958:
    uVar6 = (int)(long)((float)((uint)((int)(long)((float)(bVar3 & 3) * 90.0 * 11930465.0) + iVar13)
                               >> 0x1e) * 90.0 * 11930465.0) + 0xa0000000U >> 0x1e;
  }
LAB_01aefa14:
  if (uVar6 == param_2) {
    return 0;
  }
switchD_01aef47c_default:
  return 1;
}


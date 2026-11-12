
void FUN_009bdbf8(long param_1,uint param_2,byte *param_3)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  float *pfVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  char cVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 local_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  
  lVar21 = *(long *)PTR_DAT_04bb26a8;
  iVar24 = *(int *)(lVar21 + 0xa5e64);
  iVar6 = *(int *)(lVar21 + 0xa5e68);
  iVar7 = *(int *)(lVar21 + 0xa5e6c);
  if (*(int *)(lVar21 + 0xa5e40) == 1) {
    *(undefined2 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x26) = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0x100000001;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    return;
  }
  iVar4 = *(int *)(lVar21 + 0xa5e70);
  iVar5 = *(int *)(lVar21 + 0xa5e74);
  uVar26 = (ulong)param_2;
  fVar29 = (float)iVar4;
  if (fVar29 <= *(float *)(param_1 + 0x30)) {
    cVar16 = *(char *)(param_1 + 0x26);
  }
  else {
    cVar16 = '\0';
    *(undefined1 *)(param_1 + 0x26) = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  iVar8 = *(int *)(param_1 + 0xc);
  uVar23 = 2;
  if (1 < *(int *)(param_1 + 0x1c) - 3U) {
    uVar23 = 4;
  }
  if (cVar16 == '\0') {
    uVar25 = 1;
    if (*(int *)(param_1 + 0x14) < (int)uVar23) {
      uVar25 = *(int *)(param_1 + 0x14) + 1;
    }
    if ((3 < uVar25 - 1) || (7 < iVar6 - 2U)) goto LAB_009bdda0;
    pfVar12 = (float *)(**(code **)(**(long **)(*(long *)(*(long *)(DAT_04d07da8 + 0x48) + 0x2058) +
                                               (ulong)((uVar25 + iVar6 * 4) - 5) * 8) + 0xf0))();
    fVar28 = *pfVar12;
    cVar16 = *(char *)(param_1 + 0x26);
    bVar10 = true;
    bVar11 = false;
    if (fVar28 != 0.0) {
      bVar10 = false;
      bVar11 = true;
      if (!NAN(fVar28) && !NAN(fVar29)) {
        bVar10 = fVar28 < fVar29;
        bVar11 = false;
      }
    }
    if (bVar10 == bVar11 && cVar16 == '\0') {
      fVar27 = 0.0;
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(undefined1 *)(param_1 + 0x26) = 1;
      uVar19 = 1;
      if (uVar25 < uVar23) {
        uVar19 = uVar25 + 1;
      }
      if ((uVar19 < 5) && (iVar7 - 2U < 8)) {
        pfVar12 = (float *)(**(code **)(**(long **)(*(long *)(*(long *)(DAT_04d07da8 + 0x48) +
                                                             0x2058) +
                                                   (ulong)((uVar19 + iVar7 * 4) - 5) * 8) + 0xf0))()
        ;
        fVar27 = *pfVar12;
      }
      *(float *)(param_1 + 0x30) = fVar28;
      *(uint *)(param_1 + 0x28) = uVar25;
      *(uint *)(param_1 + 0x2c) = uVar19;
      *(int *)(param_1 + 8) = (int)((float)(iVar5 + iVar4) - fVar27);
      if (*(int *)(param_1 + 0x1c) != 0) {
        pfVar12 = (float *)(param_1 + 0x38);
        pfVar1 = pfVar12 + (ulong)*(uint *)(param_1 + 0x1c) * 2;
        if (7 < *(uint *)(param_1 + 0x1c)) {
          pfVar1 = pfVar12;
        }
        *pfVar1 = *pfVar1 + 1.0;
        pfVar1 = (float *)(param_1 + 0x78);
        pfVar3 = pfVar1 + (ulong)*(uint *)(param_1 + 0x1c) * 2;
        if (7 < *(uint *)(param_1 + 0x1c)) {
          pfVar3 = pfVar1;
        }
        *pfVar3 = *pfVar3 + 1.0;
        if (*(char *)(param_1 + 0xcc) != '\0') {
          pfVar3 = pfVar12 + (ulong)*(uint *)(param_1 + 0x1c) * 2;
          if (7 < *(uint *)(param_1 + 0x1c)) {
            pfVar3 = pfVar12;
          }
          pfVar3[1] = pfVar3[1] + 1.0;
        }
        if (*(char *)(param_1 + 0x244) != '\0') {
          pfVar12 = pfVar1 + (ulong)*(uint *)(param_1 + 0x1c) * 2;
          if (7 < *(uint *)(param_1 + 0x1c)) {
            pfVar12 = pfVar1;
          }
          pfVar12[1] = pfVar12[1] + 1.0;
        }
      }
      cVar16 = *(char *)(param_1 + 0x26);
      *(undefined1 *)(param_1 + 0xcc) = 0;
      *(undefined1 *)(param_1 + 0x244) = 0;
    }
    iVar18 = (int)(fVar29 - fVar28);
    *(int *)(param_1 + 0xc) = iVar18;
    if (cVar16 != '\0') goto LAB_009bdd00;
  }
  else {
LAB_009bdd00:
    lVar21 = *(long *)(DAT_04d07da8 + 0x48);
    if ((iVar6 - 2U < 8) && (*(uint *)(param_1 + 0x14) - 1 < 4)) {
      (**(code **)(**(long **)(*(long *)(lVar21 + 0x2058) +
                              ((ulong)(iVar6 * 4 - 5) + (ulong)*(uint *)(param_1 + 0x14)) * 8) +
                  0xf0))();
      lVar21 = *(long *)(DAT_04d07da8 + 0x48);
    }
    fVar29 = 0.0;
    if ((iVar7 - 2U < 8) && (*(uint *)(param_1 + 0x2c) - 1 < 4)) {
      pfVar12 = (float *)(**(code **)(**(long **)(*(long *)(lVar21 + 0x2058) +
                                                 ((ulong)(iVar7 * 4 - 5) +
                                                 (ulong)*(uint *)(param_1 + 0x2c)) * 8) + 0xf0))();
      fVar29 = *pfVar12;
    }
    fVar29 = (float)(iVar5 + iVar4) - fVar29;
LAB_009bdda0:
    iVar18 = (int)fVar29;
    *(int *)(param_1 + 0xc) = iVar18;
  }
  uVar25 = *(uint *)(param_1 + 8);
  if (-1 < (int)uVar25) {
    if ((int)(uVar25 >> 1) < iVar18) {
      if (*(char *)(param_1 + 0x24) == '\0') {
        *(undefined1 *)(param_1 + 0x24) = 1;
        iVar7 = *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar7 + 1;
        if (((int)uVar23 <= iVar7) && (*(int *)(param_1 + 0x1c) != 0)) {
          *(undefined4 *)(param_1 + 0x14) = 1;
        }
      }
    }
    else if (iVar18 <= (int)(uVar25 >> 3)) {
      *(undefined1 *)(param_1 + 0x24) = 0;
    }
  }
  if (iVar8 < iVar18 && *(char *)(param_1 + 0x26) == '\0') {
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x20)) {
        *(undefined4 *)(param_1 + 0x14) = 1;
      }
      *(int *)(param_1 + 8) = iVar4;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      pfVar12 = (float *)(param_1 + 0x38);
      pfVar1 = pfVar12 + (ulong)*(uint *)(param_1 + 0x1c) * 2;
      if (7 < *(uint *)(param_1 + 0x1c)) {
        pfVar1 = pfVar12;
      }
      *pfVar1 = *pfVar1 + 1.0;
      pfVar1 = (float *)(param_1 + 0x78);
      pfVar3 = pfVar1 + (ulong)*(uint *)(param_1 + 0x1c) * 2;
      if (7 < *(uint *)(param_1 + 0x1c)) {
        pfVar3 = pfVar1;
      }
      *pfVar3 = *pfVar3 + 1.0;
      if (*(char *)(param_1 + 0xcc) != '\0') {
        pfVar3 = pfVar12 + (ulong)*(uint *)(param_1 + 0x1c) * 2;
        if (7 < *(uint *)(param_1 + 0x1c)) {
          pfVar3 = pfVar12;
        }
        pfVar3[1] = pfVar3[1] + 1.0;
      }
      if (*(char *)(param_1 + 0x244) != '\0') {
        pfVar12 = pfVar1 + (ulong)*(uint *)(param_1 + 0x1c) * 2;
        if (7 < *(uint *)(param_1 + 0x1c)) {
          pfVar12 = pfVar1;
        }
        pfVar12[1] = pfVar12[1] + 1.0;
      }
    }
    *(undefined1 *)(param_1 + 0xcc) = 0;
    *(undefined1 *)(param_1 + 0x244) = 0;
  }
  uVar25 = iVar24 - 2;
  if (uVar25 < 9) {
    uVar20 = *(undefined4 *)(&DAT_04168094 + (long)(int)uVar25 * 4);
  }
  else {
    uVar20 = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar20;
  if (iVar6 - 2U < 9) {
    uVar20 = *(undefined4 *)(&DAT_04168094 + (long)(int)(iVar6 - 2U) * 4);
  }
  else {
    uVar20 = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar20;
  if (*(char *)(param_1 + 0x26) != '\0') {
    if (iVar6 - 2U < 9) {
      uVar20 = *(undefined4 *)(&DAT_04168094 + (long)(int)(iVar6 - 2U) * 4);
    }
    else {
      uVar20 = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = uVar20;
  }
  if ((ulong)*param_3 < 8) {
    if (param_2 < 2) {
      lVar21 = param_1 + uVar26 * 0x40;
      fVar29 = *(float *)(lVar21 + 0x38) + 0.0 + *(float *)(lVar21 + 0x40) +
               *(float *)(lVar21 + 0x48) + *(float *)(lVar21 + 0x50) + *(float *)(lVar21 + 0x58) +
               *(float *)(lVar21 + 0x60) + *(float *)(lVar21 + 0x68) + *(float *)(lVar21 + 0x70);
      if (fVar29 == 0.0) goto LAB_009be148;
      fVar29 = (*(float *)(lVar21 + 0x3c) + 0.0 + *(float *)(lVar21 + 0x44) +
                *(float *)(lVar21 + 0x4c) + *(float *)(lVar21 + 0x54) + *(float *)(lVar21 + 0x5c) +
                *(float *)(lVar21 + 100) + *(float *)(lVar21 + 0x6c) + *(float *)(lVar21 + 0x74)) /
               fVar29;
      if (0.8 <= fVar29) {
        local_90 = 0;
      }
      else {
        if (fVar29 < 0.5) goto LAB_009be148;
        local_90 = 1;
      }
    }
    else {
LAB_009be148:
      local_90 = 2;
    }
    *(char *)(DAT_04d07da8 + (ulong)*param_3 + 0x40) = (char)local_90;
  }
  fVar28 = *(float *)(param_1 + 0x3ac) + 1.0;
  *(float *)(param_1 + 0x3ac) = fVar28;
  fVar29 = 0.0;
  if (0 < *(int *)(param_1 + 8)) {
    fVar29 = (float)*(int *)(param_1 + 8);
  }
  if (fVar29 <= fVar28) {
    *(undefined4 *)(param_1 + 0x3ac) = 0;
  }
  lVar21 = DAT_04d02f58;
  if (DAT_04d02f58 != 0) {
    if (3 < param_2) {
      uVar26 = 0;
    }
    if (*(long *)(DAT_04d02f58 + uVar26 * 8 + 0xf5b20) != 0) {
      uVar25 = *(uint *)(param_1 + 0x3a8);
      *(uint *)(param_1 + 0x3a8) = param_2;
      if (uVar25 != param_2) {
        *(undefined1 *)(param_1 + 0xc4) = 0;
        *(undefined8 *)(param_1 + 0xbc) = 0;
        *(undefined1 *)(param_1 + 0x23c) = 0;
        *(undefined8 *)(param_1 + 0x234) = 0;
      }
      if (param_2 < *(uint *)(lVar21 + 0x60)) {
        lVar21 = *(long *)(*(long *)(lVar21 + 0x68) + (long)(int)param_2 * 8);
      }
      else {
        lVar21 = 0;
      }
      uVar20 = *(undefined4 *)(param_1 + 0x14);
      *(undefined1 *)(param_1 + 0xc4) = 0;
      if (0 < *(int *)(lVar21 + 0x10)) {
        local_90 = 1;
        if (*(char *)(DAT_04d07da8 + 0x38) == '\0') {
          FUN_009bbcd8(param_1 + 0xd0,lVar21,&local_90);
          FUN_009bce30(param_1 + 0x160,lVar21,&local_90);
          if (0 < *(int *)(lVar21 + 0x10)) {
            *(undefined4 *)(param_1 + 0x110) = local_90;
            if (*(char *)(param_1 + 0x108) == '\0') {
              lVar22 = *(long *)(DAT_04d07da8 + 0x48);
              if (lVar22 != 0) {
                puVar13 = (undefined4 *)
                          (**(code **)(*(long *)(lVar22 + 0x548) + 0xf0))(lVar22 + 0x548);
                *(undefined4 *)(param_1 + 0x10c) = *puVar13;
                uVar26 = FUN_009cb270(param_1 + 0x100,auStack_84,lVar21);
                uVar14 = FUN_009cb6f0(param_1 + 0x100,auStack_88,lVar21);
                if (((uVar26 & 1) != 0) && ((uVar14 & 1) != 0)) {
                  *(undefined1 *)(param_1 + 0x108) = 1;
                }
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x108) = 0;
            }
            if (0 < *(int *)(lVar21 + 0x10)) {
              *(undefined4 *)(param_1 + 0x128) = local_90;
              if (*(char *)(param_1 + 0x120) == '\0') {
                lVar22 = *(long *)(DAT_04d07da8 + 0x48);
                if (lVar22 != 0) {
                  puVar13 = (undefined4 *)
                            (**(code **)(*(long *)(lVar22 + 0x908) + 0xf0))(lVar22 + 0x908);
                  *(undefined4 *)(param_1 + 0x124) = *puVar13;
                  uVar26 = FUN_009cc630(param_1 + 0x118,auStack_84,lVar21,uVar20);
                  if ((uVar26 & 1) != 0) {
                    *(undefined1 *)(param_1 + 0x120) = 1;
                  }
                }
              }
              else {
                *(undefined1 *)(param_1 + 0x120) = 0;
              }
              if (0 < *(int *)(lVar21 + 0x10)) {
                *(undefined4 *)(param_1 + 0xf8) = local_90;
                if (*(char *)(param_1 + 0xf0) == '\0') {
                  lVar22 = *(long *)(DAT_04d07da8 + 0x48);
                  if (lVar22 != 0) {
                    puVar13 = (undefined4 *)
                              (**(code **)(*(long *)(lVar22 + 0xd60) + 0xf0))(lVar22 + 0xd60);
                    *(undefined4 *)(param_1 + 0xf4) = *puVar13;
                    uVar26 = FUN_009b7a80(param_1 + 0xe8,auStack_84,lVar21);
                    uVar14 = FUN_009b7ef0(param_1 + 0xe8,auStack_88,lVar21);
                    if (((uVar26 & 1) != 0) && ((uVar14 & 1) != 0)) {
                      *(undefined1 *)(param_1 + 0xf0) = 1;
                    }
                  }
                }
                else {
                  *(undefined1 *)(param_1 + 0xf0) = 0;
                }
              }
            }
          }
          FUN_009ba3c8(param_1 + 0x130,lVar21,&local_90);
          if (0 < *(int *)(lVar21 + 0x10)) {
            *(undefined4 *)(param_1 + 0x158) = local_90;
            if (*(char *)(param_1 + 0x150) == '\0') {
              lVar22 = *(long *)(DAT_04d07da8 + 0x48);
              if (lVar22 != 0) {
                lVar2 = param_1 + 0x148;
                puVar13 = (undefined4 *)
                          (**(code **)(*(long *)(lVar22 + 0x1250) + 0xf0))(lVar22 + 0x1250);
                *(undefined4 *)(param_1 + 0x154) = *puVar13;
                uVar26 = FUN_009c9bd0(lVar2,auStack_88,lVar21);
                uVar14 = FUN_009c9f80(lVar2,auStack_84,lVar21);
                uVar15 = FUN_009ca360(lVar2,auStack_8c,lVar21);
                if ((((uVar26 & 1) != 0) && ((uVar14 & 1) != 0)) && ((uVar15 & 1) != 0)) {
                  *(undefined1 *)(param_1 + 0x150) = 1;
                }
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x150) = 0;
            }
          }
          bVar9 = *(byte *)(param_1 + 0xc4) & 0x21 | *(char *)(param_1 + 0x108) << 3 |
                  *(char *)(param_1 + 0xf0) << 2 | *(char *)(param_1 + 0xd8) << 1 |
                  (*(char *)(param_1 + 0x168) != '\0') << 7 | *(char *)(param_1 + 0x120) << 4;
          bVar17 = *(char *)(param_1 + 0x150) << 6;
          if (*(char *)(param_1 + 0x138) == '\0') {
            bVar17 = bVar9 & 0xdf | bVar17;
          }
          else {
            bVar17 = bVar9 | bVar17 | 0x20;
          }
        }
        else {
          if (((*(char *)(param_1 + 0x1a1) == '\0') || (*(char *)(param_1 + 0x1a2) == '\0')) ||
             ((*(int *)(param_1 + 0x1a4) == -1 ||
              ((*(int *)(param_1 + 0x1a4) != *(int *)(param_1 + 0x1c) ||
               (uVar25 = *(int *)(param_1 + 0x1c) - 1, 6 < uVar25)))))) goto LAB_009be408;
          bVar17 = (byte)(0x80402010080402 >> (((ulong)uVar25 & 7) << 3));
        }
        *(byte *)(param_1 + 0xc4) = bVar17;
      }
LAB_009be408:
      if (*(int *)(param_1 + 0xc) < 0x14) {
        uVar20 = *(undefined4 *)(param_1 + 0x20);
        iVar24 = 1;
        if (*(int *)(param_1 + 0x14) < (int)uVar23) {
          iVar24 = *(int *)(param_1 + 0x14) + 1;
        }
      }
      else {
        uVar20 = *(undefined4 *)(param_1 + 0x1c);
        iVar24 = *(int *)(param_1 + 0x14);
      }
      FUN_009b8ef8(param_1 + 400,lVar21,uVar20,iVar24);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(param_1 + 0x234) = 0;
  return;
}



undefined8
FUN_009692a0(float param_1,float param_2,long param_3,long param_4,long param_5,uint param_6)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  
  uVar9 = *(int *)(param_5 + 8) * 2;
  if ((param_6 & 1) == 0) {
    uVar10 = *(int *)(param_5 + 0xc) << 1;
  }
  else {
    uVar9 = *(int *)(param_4 + 0xc) + uVar9;
    uVar10 = *(int *)(param_4 + 0x10) + *(int *)(param_5 + 0xc) * 2;
  }
  iVar3 = *(int *)(param_4 + 4) + -1;
  iVar4 = *(int *)(param_4 + 8) + -1;
  uVar14 = uVar10;
  uVar13 = uVar9;
  if (param_2 == 0.0) {
    uVar8 = iVar3 + uVar9;
    uVar6 = iVar4 + uVar10;
  }
  else if (param_2 == 90.0) {
    uVar8 = iVar4 + uVar9;
    uVar6 = iVar3 + uVar10;
    uVar14 = iVar4 + uVar10;
  }
  else if (param_2 == 180.0) {
    uVar8 = iVar3 + uVar9;
    uVar6 = iVar4 + uVar10;
    uVar14 = iVar4 + uVar10;
    uVar13 = iVar3 + uVar9;
  }
  else {
    uVar8 = uVar9;
    uVar6 = uVar10;
    if (param_2 == 270.0) {
      uVar13 = iVar3 + uVar9;
      uVar8 = iVar4 + uVar9;
      uVar6 = iVar3 + uVar10;
    }
  }
  uVar11 = 0;
  if (((((-1 < (int)uVar9) && (-1 < (int)uVar10)) && (uVar9 < *(uint *)(param_3 + 0x38))) &&
      ((uVar10 < *(uint *)(param_3 + 0x3c) && (-1 < (int)uVar8)))) &&
     ((uVar11 = 0, -1 < (int)uVar6 &&
      ((uVar8 < *(uint *)(param_3 + 0x38) && (uVar6 < *(uint *)(param_3 + 0x3c))))))) {
    if (*(int *)(param_4 + 8) != 0) {
      if (*(int *)(param_4 + 4) == 0) {
        return 1;
      }
      uVar8 = 0;
      puVar16 = (undefined8 *)(param_4 + 0x14);
      uVar6 = 1;
      do {
        if (uVar6 != 0) {
          uVar15 = 0;
          do {
            pfVar12 = (float *)0x0;
            if ((int)uVar13 < 0) {
              puVar7 = (uint *)0x0;
            }
            else if (((int)uVar14 < 0) || (*(uint *)(param_3 + 0x38) <= uVar13)) {
              puVar7 = (uint *)0x0;
            }
            else {
              puVar7 = (uint *)0x0;
              if (uVar14 < *(uint *)(param_3 + 0x3c)) {
                uVar6 = uVar13 + *(uint *)(param_3 + 0x38) * uVar14;
                pfVar12 = (float *)(*(long *)(param_3 + 0x50) + (long)(int)uVar6 * 0x34);
                if (*(uint *)(param_3 + 0x48) <= uVar6) {
                  pfVar12 = (float *)0x0;
                }
                puVar7 = (uint *)(*(long *)(param_3 + 0x70) + (long)(int)uVar6 * 4);
                if (*(uint *)(param_3 + 0x68) <= uVar6) {
                  puVar7 = (uint *)0x0;
                }
              }
            }
            if ((((*(char *)(pfVar12 + 0xc) == '\x0f') &&
                 (*(char *)((long)pfVar12 + 0x31) == '\x0f')) &&
                (*(char *)((long)pfVar12 + 0x32) == '\x0f')) &&
               (*(char *)((long)pfVar12 + 0x33) == '\x0f')) {
              uVar6 = *puVar7 | 0x40000;
            }
            else {
              uVar6 = *puVar7 & 0xfffbffff;
            }
            *puVar7 = uVar6;
            if (((*(char *)(puVar16 + 6) == '@') || (*(char *)((long)puVar16 + 0x31) == '@')) ||
               ((*(char *)((long)puVar16 + 0x32) == '@' || (*(char *)((long)puVar16 + 0x33) == '@'))
               )) {
              uVar6 = uVar6 | 0x80000;
            }
            else {
              uVar6 = uVar6 & 0xfff7ffff;
            }
            *puVar7 = uVar6;
            if (param_2 == 0.0) {
              bVar2 = *(byte *)(puVar16 + 6);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)(puVar16 + 1);
                *(undefined8 *)pfVar12 = *puVar16;
                pfVar12[2] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_00969618_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_00969618_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_00969618_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)(pfVar12 + 0xc) = bVar5;
                pfVar12[1] = pfVar12[1] + param_1;
                *pfVar12 = *pfVar12 + param_1;
                pfVar12[2] = pfVar12[2] + param_1;
              }
              bVar2 = *(byte *)((long)puVar16 + 0x31);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)((long)puVar16 + 0x14);
                *(undefined8 *)(pfVar12 + 3) = *(undefined8 *)((long)puVar16 + 0xc);
                pfVar12[5] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_00969870_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_00969870_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_00969870_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)((long)pfVar12 + 0x31) = bVar5;
                pfVar12[4] = pfVar12[4] + param_1;
                pfVar12[3] = pfVar12[3] + param_1;
                pfVar12[5] = pfVar12[5] + param_1;
              }
              bVar2 = *(byte *)((long)puVar16 + 0x32);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)(puVar16 + 4);
                *(undefined8 *)(pfVar12 + 6) = puVar16[3];
                pfVar12[8] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_0096994c_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_0096994c_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_0096994c_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)((long)pfVar12 + 0x32) = bVar5;
                pfVar12[7] = pfVar12[7] + param_1;
                pfVar12[6] = pfVar12[6] + param_1;
                pfVar12[8] = pfVar12[8] + param_1;
              }
              bVar2 = *(byte *)((long)puVar16 + 0x33);
              uVar6 = (uint)bVar2;
              if ((0xf < uVar6) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)((long)puVar16 + 0x2c);
                *(undefined8 *)(pfVar12 + 9) = *(undefined8 *)((long)puVar16 + 0x24);
                pfVar12[0xb] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_00969a28_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_00969a28_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_00969a28_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)((long)pfVar12 + 0x33) = bVar5;
                pfVar12[9] = pfVar12[9] + param_1;
                pfVar12[10] = pfVar12[10] + param_1;
                pfVar12[0xb] = pfVar12[0xb] + param_1;
              }
              uVar13 = uVar13 + 1;
            }
            else if (param_2 == 90.0) {
              bVar2 = *(byte *)((long)puVar16 + 0x33);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)((long)puVar16 + 0x2c);
                *(undefined8 *)pfVar12 = *(undefined8 *)((long)puVar16 + 0x24);
                pfVar12[2] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_0096969c_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_0096969c_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_0096969c_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)(pfVar12 + 0xc) = bVar5;
                *pfVar12 = *pfVar12 + param_1;
                pfVar12[1] = pfVar12[1] + param_1;
                pfVar12[2] = pfVar12[2] + param_1;
              }
              bVar2 = *(byte *)(puVar16 + 6);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)(puVar16 + 1);
                *(undefined8 *)(pfVar12 + 3) = *puVar16;
                pfVar12[5] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_00969b30_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_00969b30_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_00969b30_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)((long)pfVar12 + 0x31) = bVar5;
                pfVar12[3] = pfVar12[3] + param_1;
                pfVar12[4] = pfVar12[4] + param_1;
                pfVar12[5] = pfVar12[5] + param_1;
              }
              bVar2 = *(byte *)((long)puVar16 + 0x31);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)((long)puVar16 + 0x14);
                *(undefined8 *)(pfVar12 + 6) = *(undefined8 *)((long)puVar16 + 0xc);
                pfVar12[8] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_00969c08_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_00969c08_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_00969c08_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)((long)pfVar12 + 0x32) = bVar5;
                pfVar12[6] = pfVar12[6] + param_1;
                pfVar12[7] = pfVar12[7] + param_1;
                pfVar12[8] = pfVar12[8] + param_1;
              }
              bVar2 = *(byte *)((long)puVar16 + 0x32);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)(puVar16 + 4);
                *(undefined8 *)(pfVar12 + 9) = puVar16[3];
                pfVar12[0xb] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_00969ce0_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_00969ce0_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_00969ce0_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)((long)pfVar12 + 0x33) = bVar5;
                pfVar12[9] = pfVar12[9] + param_1;
                pfVar12[10] = pfVar12[10] + param_1;
                pfVar12[0xb] = pfVar12[0xb] + param_1;
              }
              uVar14 = uVar14 - 1;
            }
            else if (param_2 == 180.0) {
              bVar2 = *(byte *)((long)puVar16 + 0x32);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)(puVar16 + 4);
                *(undefined8 *)pfVar12 = puVar16[3];
                pfVar12[2] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_00969718_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_00969718_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_00969718_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)(pfVar12 + 0xc) = bVar5;
                *pfVar12 = *pfVar12 + param_1;
                pfVar12[1] = pfVar12[1] + param_1;
                pfVar12[2] = pfVar12[2] + param_1;
              }
              bVar2 = *(byte *)((long)puVar16 + 0x33);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)((long)puVar16 + 0x2c);
                *(undefined8 *)(pfVar12 + 3) = *(undefined8 *)((long)puVar16 + 0x24);
                pfVar12[5] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_00969e28_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_00969e28_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_00969e28_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)((long)pfVar12 + 0x31) = bVar5;
                pfVar12[3] = pfVar12[3] + param_1;
                pfVar12[4] = pfVar12[4] + param_1;
                pfVar12[5] = pfVar12[5] + param_1;
              }
              bVar2 = *(byte *)(puVar16 + 6);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)(puVar16 + 1);
                *(undefined8 *)(pfVar12 + 6) = *puVar16;
                pfVar12[8] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_00969f00_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_00969f00_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_00969f00_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)((long)pfVar12 + 0x32) = bVar5;
                pfVar12[6] = pfVar12[6] + param_1;
                pfVar12[7] = pfVar12[7] + param_1;
                pfVar12[8] = pfVar12[8] + param_1;
              }
              bVar2 = *(byte *)((long)puVar16 + 0x31);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)((long)puVar16 + 0x14);
                *(undefined8 *)(pfVar12 + 9) = *(undefined8 *)((long)puVar16 + 0xc);
                pfVar12[0xb] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_00969fd8_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_00969fd8_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_00969fd8_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)((long)pfVar12 + 0x33) = bVar5;
                pfVar12[9] = pfVar12[9] + param_1;
                pfVar12[10] = pfVar12[10] + param_1;
                pfVar12[0xb] = pfVar12[0xb] + param_1;
              }
              uVar13 = uVar13 - 1;
            }
            else if (param_2 == 270.0) {
              bVar2 = *(byte *)((long)puVar16 + 0x31);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)((long)puVar16 + 0x14);
                *(undefined8 *)pfVar12 = *(undefined8 *)((long)puVar16 + 0xc);
                pfVar12[2] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_00969794_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_00969794_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_00969794_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)(pfVar12 + 0xc) = bVar5;
                *pfVar12 = *pfVar12 + param_1;
                pfVar12[1] = pfVar12[1] + param_1;
                pfVar12[2] = pfVar12[2] + param_1;
              }
              bVar2 = *(byte *)((long)puVar16 + 0x32);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)(puVar16 + 4);
                *(undefined8 *)(pfVar12 + 3) = puVar16[3];
                pfVar12[5] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_0096a120_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_0096a120_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_0096a120_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)((long)pfVar12 + 0x31) = bVar5;
                pfVar12[3] = pfVar12[3] + param_1;
                pfVar12[4] = pfVar12[4] + param_1;
                pfVar12[5] = pfVar12[5] + param_1;
              }
              bVar2 = *(byte *)((long)puVar16 + 0x33);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)((long)puVar16 + 0x2c);
                *(undefined8 *)(pfVar12 + 6) = *(undefined8 *)((long)puVar16 + 0x24);
                pfVar12[8] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_0096a1f8_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_0096a1f8_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_0096a1f8_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)((long)pfVar12 + 0x32) = bVar5;
                pfVar12[6] = pfVar12[6] + param_1;
                pfVar12[7] = pfVar12[7] + param_1;
                pfVar12[8] = pfVar12[8] + param_1;
              }
              bVar2 = *(byte *)(puVar16 + 6);
              uVar6 = (uint)bVar2;
              if ((0xf < bVar2) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                fVar1 = *(float *)(puVar16 + 1);
                *(undefined8 *)(pfVar12 + 9) = *puVar16;
                pfVar12[0xb] = fVar1;
                bVar5 = 8;
                switch(uVar6) {
                case 10:
                case 0x2f:
                  break;
                case 0xb:
                case 0xc:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
switchD_0096a2d0_caseD_b:
                  bVar5 = bVar2;
                  if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                    bVar5 = 0x44;
                  }
                  break;
                case 0xd:
                  if (DAT_05292338 == 0) goto switchD_0096a2d0_caseD_b;
                  bVar5 = FUN_017f1f38(DAT_05292338 + 0xda0);
                  break;
                case 0xe:
                  bVar5 = FUN_017f21e0(DAT_05292338 + 0xda0);
                  break;
                default:
                  if (uVar6 != 0x40) goto switchD_0096a2d0_caseD_b;
                  bVar5 = 5;
                }
                *(byte *)((long)pfVar12 + 0x33) = bVar5;
                pfVar12[9] = pfVar12[9] + param_1;
                pfVar12[10] = pfVar12[10] + param_1;
                pfVar12[0xb] = pfVar12[0xb] + param_1;
              }
              uVar14 = uVar14 + 1;
            }
            uVar6 = *(uint *)(param_4 + 4);
            uVar15 = uVar15 + 1;
            puVar16 = (undefined8 *)((long)puVar16 + 0x34);
          } while (uVar15 < uVar6);
        }
        if (param_2 == 0.0) {
          uVar14 = uVar14 + 1;
          uVar13 = uVar9;
        }
        else if (param_2 == 90.0) {
          uVar14 = (uVar10 - 1) + *(int *)(param_4 + 8);
          uVar13 = uVar13 + 1;
        }
        else if (param_2 == 180.0) {
          uVar14 = uVar14 - 1;
          uVar13 = (uVar9 - 1) + uVar6;
        }
        else if (param_2 == 270.0) {
          uVar14 = uVar10;
          uVar13 = uVar13 - 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_4 + 8));
    }
    uVar11 = 1;
  }
  return uVar11;
}


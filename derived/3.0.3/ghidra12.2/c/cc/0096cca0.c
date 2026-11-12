
undefined8
FUN_0096cca0(float param_1,float param_2,long param_3,long param_4,long param_5,long param_6,
            uint param_7)

{
  uint *puVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  
  uVar9 = *(uint *)(param_5 + 8);
  uVar8 = *(uint *)(param_5 + 0xc);
  if (param_2 == 0.0) {
    uVar9 = *(int *)(param_4 + 0xc) + uVar9;
    iVar7 = *(int *)(param_4 + 8);
    uVar8 = *(int *)(param_4 + 0x10) + uVar8;
    uVar5 = (uVar9 + *(int *)(param_4 + 4)) - 1;
  }
  else {
    if (param_2 == 90.0) {
      iVar7 = uVar8 - *(int *)(param_4 + 4);
      uVar9 = *(int *)(param_4 + 0x10) + uVar9;
      uVar8 = uVar8 + ~*(uint *)(param_4 + 0xc);
      uVar5 = (uVar9 + *(int *)(param_4 + 8)) - 1;
      uVar11 = iVar7 - *(uint *)(param_4 + 0xc);
      goto joined_r0x0096cde0;
    }
    if (param_2 == 180.0) {
      uVar9 = uVar9 + ~*(uint *)(param_4 + 0xc);
      uVar8 = uVar8 + ~*(uint *)(param_4 + 0x10);
    }
    else if (param_2 == 270.0) {
      uVar8 = *(int *)(param_4 + 0xc) + uVar8;
      uVar9 = uVar9 + ~*(uint *)(param_4 + 0x10);
    }
    iVar7 = *(int *)(param_4 + 4);
    if (param_2 == 180.0) {
      uVar5 = (uVar9 - iVar7) + 1;
      uVar11 = (uVar8 - *(int *)(param_4 + 8)) + 1;
      goto joined_r0x0096cde0;
    }
    uVar5 = uVar9;
    uVar11 = uVar8;
    if (param_2 != 270.0) goto joined_r0x0096cde0;
    uVar5 = (uVar9 - *(int *)(param_4 + 8)) + 1;
  }
  uVar11 = (uVar8 + iVar7) - 1;
joined_r0x0096cde0:
  uVar10 = 0;
  if (-1 < (int)uVar9) {
    uVar10 = 0;
    if ((((-1 < (int)uVar8) && (uVar9 < *(uint *)(param_3 + 0x38))) &&
        (uVar8 < *(uint *)(param_3 + 0x3c))) &&
       (((-1 < (int)uVar5 && (uVar10 = 0, -1 < (int)uVar11)) &&
        ((uVar5 < *(uint *)(param_3 + 0x38) && (uVar11 < *(uint *)(param_3 + 0x3c))))))) {
      uVar15 = uVar9;
      if ((int)uVar5 <= (int)uVar9) {
        uVar15 = uVar5;
      }
      uVar6 = uVar9;
      if ((int)uVar9 <= (int)uVar5) {
        uVar6 = uVar5;
      }
      uVar5 = uVar8;
      if ((int)uVar11 <= (int)uVar8) {
        uVar5 = uVar11;
      }
      uVar13 = uVar8;
      if ((int)uVar8 <= (int)uVar11) {
        uVar13 = uVar11;
      }
      *(uint *)(param_6 + 0x10) = uVar15;
      *(uint *)(param_6 + 0x14) = uVar5;
      *(uint *)(param_6 + 0x20) = uVar6;
      *(uint *)(param_6 + 0x24) = uVar13;
      if (*(uint *)(param_4 + 8) != 0) {
        if (*(uint *)(param_4 + 4) == 0) {
          return 1;
        }
        uVar5 = 0;
        puVar14 = (undefined8 *)(param_4 + 0x14);
        uVar6 = 1;
        uVar15 = uVar8;
        uVar11 = uVar9;
        do {
          if (uVar6 != 0) {
            uVar13 = 0;
            do {
              pfVar12 = (float *)0x0;
              if (((-1 < (int)uVar11) && (-1 < (int)uVar15)) &&
                 ((uVar11 < *(uint *)(param_3 + 0x38) &&
                  ((uVar15 < *(uint *)(param_3 + 0x3c) &&
                   (uVar6 = uVar11 + *(uint *)(param_3 + 0x38) * uVar15,
                   pfVar12 = (float *)(*(long *)(param_3 + 0x50) + (long)(int)uVar6 * 0x34),
                   *(uint *)(param_3 + 0x48) <= uVar6)))))) {
                pfVar12 = (float *)0x0;
              }
              if (param_2 == 0.0) {
                bVar4 = *(byte *)(puVar14 + 6);
                uVar6 = (uint)bVar4;
                if ((0xf < bVar4) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)(puVar14 + 1);
                  *(undefined8 *)pfVar12 = *puVar14;
                  pfVar12[2] = fVar2;
                  bVar3 = 8;
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
switchD_0096cf64_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096cf64_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (uVar6 != 0x40) goto switchD_0096cf64_caseD_b;
                    bVar3 = 5;
                  }
                  *(byte *)(pfVar12 + 0xc) = bVar3;
                  *pfVar12 = *pfVar12 + param_1;
                  pfVar12[1] = pfVar12[1] + param_1;
                  pfVar12[2] = pfVar12[2] + param_1;
                }
                bVar4 = *(byte *)((long)puVar14 + 0x31);
                uVar6 = (uint)bVar4;
                if ((0xf < bVar4) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)((long)puVar14 + 0x14);
                  *(undefined8 *)(pfVar12 + 3) = *(undefined8 *)((long)puVar14 + 0xc);
                  pfVar12[5] = fVar2;
                  bVar3 = 8;
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
switchD_0096d1f8_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096d1f8_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (uVar6 != 0x40) goto switchD_0096d1f8_caseD_b;
                    bVar3 = 5;
                  }
                  *(byte *)((long)pfVar12 + 0x31) = bVar3;
                  pfVar12[3] = pfVar12[3] + param_1;
                  pfVar12[4] = pfVar12[4] + param_1;
                  pfVar12[5] = pfVar12[5] + param_1;
                }
                bVar4 = *(byte *)((long)puVar14 + 0x32);
                uVar6 = (uint)bVar4;
                if ((0xf < bVar4) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)(puVar14 + 4);
                  *(undefined8 *)(pfVar12 + 6) = puVar14[3];
                  pfVar12[8] = fVar2;
                  bVar3 = 8;
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
switchD_0096d2d0_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096d2d0_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (uVar6 != 0x40) goto switchD_0096d2d0_caseD_b;
                    bVar3 = 5;
                  }
                  *(byte *)((long)pfVar12 + 0x32) = bVar3;
                  pfVar12[6] = pfVar12[6] + param_1;
                  pfVar12[7] = pfVar12[7] + param_1;
                  pfVar12[8] = pfVar12[8] + param_1;
                }
                bVar4 = *(byte *)((long)puVar14 + 0x33);
                if ((0xf < bVar4) || ((1 << (ulong)(bVar4 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)((long)puVar14 + 0x2c);
                  *(undefined8 *)(pfVar12 + 9) = *(undefined8 *)((long)puVar14 + 0x24);
                  pfVar12[0xb] = fVar2;
                  bVar3 = 8;
                  switch((uint)bVar4) {
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
switchD_0096d3a8_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && bVar4 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
switchD_0096d3a8_caseD_d:
                    if (DAT_05292338 == 0) goto switchD_0096d3a8_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
switchD_0096d3a8_caseD_e:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
switchD_0096d3a8_default:
                    if (bVar4 != 0x40) goto switchD_0096d3a8_caseD_b;
                    bVar3 = 5;
                  }
switchD_0096d3a8_caseD_a:
                  *(byte *)((long)pfVar12 + 0x33) = bVar3;
                  pfVar12[10] = pfVar12[10] + param_1;
                  pfVar12[9] = pfVar12[9] + param_1;
                  pfVar12[0xb] = pfVar12[0xb] + param_1;
                }
              }
              else if (param_2 == 90.0) {
                bVar4 = *(byte *)((long)puVar14 + 0x33);
                uVar6 = (uint)bVar4;
                if ((0xf < bVar4) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)((long)puVar14 + 0x2c);
                  *(undefined8 *)pfVar12 = *(undefined8 *)((long)puVar14 + 0x24);
                  pfVar12[2] = fVar2;
                  bVar3 = 8;
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
switchD_0096cff8_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096cff8_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (uVar6 != 0x40) goto switchD_0096cff8_caseD_b;
                    bVar3 = 5;
                  }
                  *(byte *)(pfVar12 + 0xc) = bVar3;
                  pfVar12[1] = pfVar12[1] + param_1;
                  *pfVar12 = *pfVar12 + param_1;
                  pfVar12[2] = pfVar12[2] + param_1;
                }
                bVar4 = *(byte *)(puVar14 + 6);
                uVar6 = (uint)bVar4;
                if ((0xf < bVar4) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)(puVar14 + 1);
                  *(undefined8 *)(pfVar12 + 3) = *puVar14;
                  pfVar12[5] = fVar2;
                  bVar3 = 8;
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
switchD_0096d468_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096d468_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (uVar6 != 0x40) goto switchD_0096d468_caseD_b;
                    bVar3 = 5;
                  }
                  *(byte *)((long)pfVar12 + 0x31) = bVar3;
                  pfVar12[4] = pfVar12[4] + param_1;
                  pfVar12[3] = pfVar12[3] + param_1;
                  pfVar12[5] = pfVar12[5] + param_1;
                }
                bVar4 = *(byte *)((long)puVar14 + 0x31);
                uVar6 = (uint)bVar4;
                if ((0xf < bVar4) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)((long)puVar14 + 0x14);
                  *(undefined8 *)(pfVar12 + 6) = *(undefined8 *)((long)puVar14 + 0xc);
                  pfVar12[8] = fVar2;
                  bVar3 = 8;
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
switchD_0096d544_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096d544_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (uVar6 != 0x40) goto switchD_0096d544_caseD_b;
                    bVar3 = 5;
                  }
                  *(byte *)((long)pfVar12 + 0x32) = bVar3;
                  pfVar12[7] = pfVar12[7] + param_1;
                  pfVar12[6] = pfVar12[6] + param_1;
                  pfVar12[8] = pfVar12[8] + param_1;
                }
                bVar4 = *(byte *)((long)puVar14 + 0x32);
                if ((0xf < bVar4) || ((1 << (ulong)(bVar4 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)(puVar14 + 4);
                  *(undefined8 *)(pfVar12 + 9) = puVar14[3];
                  pfVar12[0xb] = fVar2;
                  bVar3 = 8;
                  switch((uint)bVar4) {
                  case 10:
                  case 0x2f:
                    goto switchD_0096d3a8_caseD_a;
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
                    goto switchD_0096d3a8_caseD_b;
                  case 0xd:
                    goto switchD_0096d3a8_caseD_d;
                  case 0xe:
                    goto switchD_0096d3a8_caseD_e;
                  default:
                    goto switchD_0096d3a8_default;
                  }
                }
              }
              else if (param_2 == 180.0) {
                bVar4 = *(byte *)((long)puVar14 + 0x32);
                uVar6 = (uint)bVar4;
                if ((0xf < bVar4) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)(puVar14 + 4);
                  *(undefined8 *)pfVar12 = puVar14[3];
                  pfVar12[2] = fVar2;
                  bVar3 = 8;
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
switchD_0096d08c_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096d08c_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (uVar6 != 0x40) goto switchD_0096d08c_caseD_b;
                    bVar3 = 5;
                  }
                  *(byte *)(pfVar12 + 0xc) = bVar3;
                  *pfVar12 = *pfVar12 + param_1;
                  pfVar12[1] = pfVar12[1] + param_1;
                  pfVar12[2] = pfVar12[2] + param_1;
                }
                bVar4 = *(byte *)((long)puVar14 + 0x33);
                uVar6 = (uint)bVar4;
                if ((0xf < bVar4) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)((long)puVar14 + 0x2c);
                  *(undefined8 *)(pfVar12 + 3) = *(undefined8 *)((long)puVar14 + 0x24);
                  pfVar12[5] = fVar2;
                  bVar3 = 8;
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
switchD_0096d6dc_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096d6dc_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (uVar6 != 0x40) goto switchD_0096d6dc_caseD_b;
                    bVar3 = 5;
                  }
                  *(byte *)((long)pfVar12 + 0x31) = bVar3;
                  pfVar12[3] = pfVar12[3] + param_1;
                  pfVar12[4] = pfVar12[4] + param_1;
                  pfVar12[5] = pfVar12[5] + param_1;
                }
                bVar4 = *(byte *)(puVar14 + 6);
                uVar6 = (uint)bVar4;
                if ((0xf < bVar4) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)(puVar14 + 1);
                  *(undefined8 *)(pfVar12 + 6) = *puVar14;
                  pfVar12[8] = fVar2;
                  bVar3 = 8;
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
switchD_0096d7b4_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096d7b4_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (uVar6 != 0x40) goto switchD_0096d7b4_caseD_b;
                    bVar3 = 5;
                  }
                  *(byte *)((long)pfVar12 + 0x32) = bVar3;
                  pfVar12[6] = pfVar12[6] + param_1;
                  pfVar12[7] = pfVar12[7] + param_1;
                  pfVar12[8] = pfVar12[8] + param_1;
                }
                bVar4 = *(byte *)((long)puVar14 + 0x31);
                if ((0xf < bVar4) || ((1 << (ulong)(bVar4 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)((long)puVar14 + 0x14);
                  *(undefined8 *)(pfVar12 + 9) = *(undefined8 *)((long)puVar14 + 0xc);
                  pfVar12[0xb] = fVar2;
                  bVar3 = 8;
                  switch((uint)bVar4) {
                  case 10:
                  case 0x2f:
                    goto switchD_0096d3a8_caseD_a;
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
                    goto switchD_0096d3a8_caseD_b;
                  case 0xd:
                    goto switchD_0096d3a8_caseD_d;
                  case 0xe:
                    goto switchD_0096d3a8_caseD_e;
                  default:
                    goto switchD_0096d3a8_default;
                  }
                }
              }
              else if (param_2 == 270.0) {
                bVar4 = *(byte *)((long)puVar14 + 0x31);
                uVar6 = (uint)bVar4;
                if ((0xf < bVar4) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)((long)puVar14 + 0x14);
                  *(undefined8 *)pfVar12 = *(undefined8 *)((long)puVar14 + 0xc);
                  pfVar12[2] = fVar2;
                  bVar3 = 8;
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
switchD_0096d120_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096d120_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (uVar6 != 0x40) goto switchD_0096d120_caseD_b;
                    bVar3 = 5;
                  }
                  *(byte *)(pfVar12 + 0xc) = bVar3;
                  *pfVar12 = *pfVar12 + param_1;
                  pfVar12[1] = pfVar12[1] + param_1;
                  pfVar12[2] = pfVar12[2] + param_1;
                }
                bVar4 = *(byte *)((long)puVar14 + 0x32);
                uVar6 = (uint)bVar4;
                if ((0xf < bVar4) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)(puVar14 + 4);
                  *(undefined8 *)(pfVar12 + 3) = puVar14[3];
                  pfVar12[5] = fVar2;
                  bVar3 = 8;
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
switchD_0096d948_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096d948_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (uVar6 != 0x40) goto switchD_0096d948_caseD_b;
                    bVar3 = 5;
                  }
                  *(byte *)((long)pfVar12 + 0x31) = bVar3;
                  pfVar12[3] = pfVar12[3] + param_1;
                  pfVar12[4] = pfVar12[4] + param_1;
                  pfVar12[5] = pfVar12[5] + param_1;
                }
                bVar4 = *(byte *)((long)puVar14 + 0x33);
                uVar6 = (uint)bVar4;
                if ((0xf < bVar4) || ((1 << (ulong)(uVar6 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)((long)puVar14 + 0x2c);
                  *(undefined8 *)(pfVar12 + 6) = *(undefined8 *)((long)puVar14 + 0x24);
                  pfVar12[8] = fVar2;
                  bVar3 = 8;
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
switchD_0096da20_caseD_b:
                    bVar3 = bVar4;
                    if (*(char *)(param_3 + 0x120) != '\0' && uVar6 == 0) {
                      bVar3 = 0x44;
                    }
                    break;
                  case 0xd:
                    if (DAT_05292338 == 0) goto switchD_0096da20_caseD_b;
                    bVar3 = FUN_017f1f38(DAT_05292338 + 0xda0);
                    break;
                  case 0xe:
                    bVar3 = FUN_017f21e0(DAT_05292338 + 0xda0);
                    break;
                  default:
                    if (uVar6 != 0x40) goto switchD_0096da20_caseD_b;
                    bVar3 = 5;
                  }
                  *(byte *)((long)pfVar12 + 0x32) = bVar3;
                  pfVar12[6] = pfVar12[6] + param_1;
                  pfVar12[7] = pfVar12[7] + param_1;
                  pfVar12[8] = pfVar12[8] + param_1;
                }
                bVar4 = *(byte *)(puVar14 + 6);
                if ((0xf < bVar4) || ((1 << (ulong)(bVar4 & 0x1f) & 0x8880U) == 0)) {
                  fVar2 = *(float *)(puVar14 + 1);
                  *(undefined8 *)(pfVar12 + 9) = *puVar14;
                  pfVar12[0xb] = fVar2;
                  bVar3 = 8;
                  switch((uint)bVar4) {
                  case 10:
                  case 0x2f:
                    goto switchD_0096d3a8_caseD_a;
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
                    goto switchD_0096d3a8_caseD_b;
                  case 0xd:
                    goto switchD_0096d3a8_caseD_d;
                  case 0xe:
                    goto switchD_0096d3a8_caseD_e;
                  default:
                    goto switchD_0096d3a8_default;
                  }
                }
              }
              if (((((param_7 & 1) != 0) && (*(char *)(puVar14 + 6) != '\a')) &&
                  (*(char *)((long)puVar14 + 0x31) != '\a')) &&
                 ((*(char *)((long)puVar14 + 0x32) != '\a' &&
                  (*(char *)((long)puVar14 + 0x33) != '\a')))) {
                uVar6 = uVar11 + *(int *)(param_3 + 0x38) * uVar15;
                puVar1 = (uint *)(*(long *)(param_3 + 0x70) + (long)(int)uVar6 * 4);
                if (*(uint *)(param_3 + 0x68) <= uVar6) {
                  puVar1 = (uint *)0x0;
                }
                *puVar1 = *puVar1 | 0x80;
              }
              if (param_2 == 0.0) {
                uVar11 = uVar11 + 1;
              }
              else if (param_2 == 90.0) {
                uVar15 = uVar15 - 1;
              }
              else if (param_2 == 180.0) {
                uVar11 = uVar11 - 1;
              }
              else if (param_2 == 270.0) {
                uVar15 = uVar15 + 1;
              }
              uVar6 = *(uint *)(param_4 + 4);
              uVar13 = uVar13 + 1;
              puVar14 = (undefined8 *)((long)puVar14 + 0x34);
            } while (uVar13 < uVar6);
          }
          if (param_2 == 0.0) {
            uVar15 = uVar15 + 1;
LAB_0096ce84:
            uVar11 = uVar9;
          }
          else if (param_2 == 90.0) {
            uVar11 = uVar11 + 1;
LAB_0096dc14:
            uVar15 = uVar8;
          }
          else {
            if (param_2 == 180.0) {
              uVar15 = uVar15 - 1;
              goto LAB_0096ce84;
            }
            if (param_2 == 270.0) {
              uVar11 = uVar11 - 1;
              goto LAB_0096dc14;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_4 + 8));
      }
      uVar10 = 1;
    }
  }
  return uVar10;
}


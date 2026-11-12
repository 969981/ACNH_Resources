
/* WARNING: Removing unreachable block (ram,0x0096a93c) */

undefined8 FUN_0096a6d0(float param_1,long param_2,long param_3,long param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  char cVar13;
  undefined8 uVar14;
  uint uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  byte local_64;
  
  if ((*(long *)(param_2 + 0x60) == 0) || (uVar3 = *(uint *)(param_4 + 8), (int)uVar3 < 0)) {
    uVar14 = 0;
  }
  else {
    uVar15 = *(uint *)(param_4 + 0xc);
    uVar14 = 0;
    if (((-1 < (int)uVar15) && (uVar3 < *(uint *)(param_2 + 0x38))) &&
       (uVar15 < *(uint *)(param_2 + 0x3c))) {
      uVar12 = (uVar3 + *(int *)(param_3 + 4)) - 1;
      if (-1 < (int)uVar12) {
        uVar8 = *(uint *)(param_3 + 8);
        uVar14 = 0;
        uVar10 = (uVar15 + uVar8) - 1;
        if (((-1 < (int)uVar10) && (uVar12 < *(uint *)(param_2 + 0x38))) &&
           ((uVar10 < *(uint *)(param_2 + 0x3c) &&
            ((uVar14 = 1, uVar8 != 0 && (*(int *)(param_3 + 4) != 0)))))) {
          uVar12 = 0;
          puVar17 = (undefined8 *)(param_3 + 0x14);
          uVar10 = 1;
          do {
            if (uVar10 != 0) {
              uVar8 = 0;
              do {
                uVar10 = uVar3 + uVar8;
                if ((param_5 & 1) == 0) {
                  if ((int)uVar10 < 0) goto LAB_0096a8f0;
                  uVar1 = *(uint *)(param_2 + 0x38);
                  uVar2 = *(uint *)(param_2 + 0x3c);
                  pfVar16 = (float *)0x0;
                  if (((-1 < (int)uVar15) && (uVar10 < uVar1)) && (uVar15 < uVar2)) {
                    if (*(long *)(param_2 + 0x60) == 0) {
                      pfVar16 = (float *)0x0;
                    }
                    else {
                      uVar7 = uVar10 + uVar15 * uVar1;
                      pfVar16 = (float *)(*(long *)(param_2 + 0x60) + (long)(int)uVar7 * 0x34);
                      if (*(uint *)(param_2 + 0x58) <= uVar7) {
                        pfVar16 = (float *)0x0;
                      }
                    }
                  }
joined_r0x0096a8b8:
                  puVar9 = (uint *)0x0;
                  if (((-1 < (int)uVar15) && (puVar9 = (uint *)0x0, uVar10 < uVar1)) &&
                     ((uVar15 < uVar2 &&
                      (uVar10 = uVar10 + uVar15 * uVar1,
                      puVar9 = (uint *)(*(long *)(param_2 + 0x70) + (long)(int)uVar10 * 4),
                      *(uint *)(param_2 + 0x68) <= uVar10)))) {
                    puVar9 = (uint *)0x0;
                  }
                }
                else {
                  if (-1 < (int)uVar10) {
                    uVar1 = *(uint *)(param_2 + 0x38);
                    uVar2 = *(uint *)(param_2 + 0x3c);
                    pfVar16 = (float *)0x0;
                    if (((-1 < (int)uVar15) && (uVar10 < uVar1)) &&
                       ((uVar15 < uVar2 &&
                        (uVar7 = uVar10 + uVar15 * uVar1,
                        pfVar16 = (float *)(*(long *)(param_2 + 0x50) + (long)(int)uVar7 * 0x34),
                        *(uint *)(param_2 + 0x48) <= uVar7)))) {
                      pfVar16 = (float *)0x0;
                    }
                    goto joined_r0x0096a8b8;
                  }
LAB_0096a8f0:
                  puVar9 = (uint *)0x0;
                  pfVar16 = (float *)0x0;
                }
                if ((((*(char *)(puVar17 + 6) == '\a') && (*(char *)((long)puVar17 + 0x31) == '\a'))
                    && (*(char *)((long)puVar17 + 0x32) == '\a')) &&
                   (*(char *)((long)puVar17 + 0x33) == '\a')) {
                  cVar11 = '\a';
                  cVar13 = '\a';
                  cVar5 = '\a';
LAB_0096aa00:
                  if (((cVar13 == '@') || (cVar11 == '@')) || (cVar5 == '@')) goto LAB_0096aa30;
                  uVar10 = *puVar9 & 0xfff7ffff;
                }
                else {
                  *puVar9 = *puVar9 | 4;
                  if (((*(byte *)(puVar17 + 6) < 0x34) &&
                      ((1L << ((ulong)*(byte *)(puVar17 + 6) & 0x3f) & 0x8000000000300U) != 0)) &&
                     ((((*(byte *)((long)puVar17 + 0x31) < 0x34 &&
                        (((1L << ((ulong)*(byte *)((long)puVar17 + 0x31) & 0x3f) & 0x8000000000300U)
                          != 0 && (*(byte *)((long)puVar17 + 0x32) < 0x34)))) &&
                       ((1L << ((ulong)*(byte *)((long)puVar17 + 0x32) & 0x3f) & 0x8000000000300U)
                        != 0)) &&
                      ((*(byte *)((long)puVar17 + 0x33) < 0x34 &&
                       ((1L << ((ulong)*(byte *)((long)puVar17 + 0x33) & 0x3f) & 0x8000000000300U)
                        != 0)))))) {
                    uVar10 = *puVar9 | 0x8000;
                  }
                  else {
                    uVar10 = *puVar9 & 0xffff7fff;
                  }
                  *puVar9 = uVar10;
                  cVar13 = *(char *)((long)puVar17 + 0x31);
                  cVar11 = *(char *)((long)puVar17 + 0x32);
                  cVar5 = *(char *)((long)puVar17 + 0x33);
                  if (*(char *)(puVar17 + 6) != '@') goto LAB_0096aa00;
LAB_0096aa30:
                  uVar10 = *puVar9 | 0x80000;
                }
                *puVar9 = uVar10;
                bVar6 = *(byte *)(puVar17 + 6);
                if ((bVar6 & 0xf7) != 7) {
                  if ((bVar6 == 9) || (bVar6 == 0x31)) {
                    local_64 = 9;
                  }
                  else {
                    local_64 = 8;
                    switch(bVar6) {
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
switchD_0096abe8_caseD_b:
                      local_64 = bVar6;
                      if (*(char *)(param_2 + 0x120) != '\0' && bVar6 == 0) {
                        local_64 = 0x44;
                      }
                      break;
                    case 0xd:
                      if (DAT_05292338 == 0) goto switchD_0096abe8_caseD_b;
                      local_64 = FUN_017f1f38(DAT_05292338 + 0xda0);
                      break;
                    case 0xe:
                      local_64 = FUN_017f21e0(DAT_05292338 + 0xda0);
                      break;
                    default:
                      if (bVar6 != 0x40) goto switchD_0096abe8_caseD_b;
                      local_64 = 5;
                    case 10:
                    case 0x2f:
                    }
                  }
                  *(byte *)(pfVar16 + 0xc) = local_64;
                  fVar4 = *(float *)(puVar17 + 1);
                  *(undefined8 *)pfVar16 = *puVar17;
                  pfVar16[2] = fVar4;
                  *pfVar16 = *pfVar16 + param_1;
                  pfVar16[1] = pfVar16[1] + param_1;
                  pfVar16[2] = pfVar16[2] + param_1;
                }
                bVar6 = *(byte *)((long)puVar17 + 0x31);
                if ((bVar6 & 0xf7) != 7) {
                  if ((bVar6 == 9) || (bVar6 == 0x31)) {
                    local_64 = 9;
                  }
                  else {
                    local_64 = 8;
                    switch(bVar6) {
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
switchD_0096ac2c_caseD_b:
                      local_64 = bVar6;
                      if (*(char *)(param_2 + 0x120) != '\0' && bVar6 == 0) {
                        local_64 = 0x44;
                      }
                      break;
                    case 0xd:
                      if (DAT_05292338 == 0) goto switchD_0096ac2c_caseD_b;
                      local_64 = FUN_017f1f38(DAT_05292338 + 0xda0);
                      break;
                    case 0xe:
                      local_64 = FUN_017f21e0(DAT_05292338 + 0xda0);
                      break;
                    default:
                      if (bVar6 != 0x40) goto switchD_0096ac2c_caseD_b;
                      local_64 = 5;
                    case 10:
                    case 0x2f:
                    }
                  }
                  *(byte *)((long)pfVar16 + 0x31) = local_64;
                  uVar14 = *(undefined8 *)((long)puVar17 + 0xc);
                  pfVar16[5] = *(float *)((long)puVar17 + 0x14);
                  *(undefined8 *)(pfVar16 + 3) = uVar14;
                  pfVar16[3] = pfVar16[3] + param_1;
                  pfVar16[4] = pfVar16[4] + param_1;
                  pfVar16[5] = pfVar16[5] + param_1;
                }
                bVar6 = *(byte *)((long)puVar17 + 0x32);
                if ((bVar6 & 0xf7) != 7) {
                  if ((bVar6 == 9) || (bVar6 == 0x31)) {
                    local_64 = 9;
                  }
                  else {
                    local_64 = 8;
                    switch(bVar6) {
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
switchD_0096ac70_caseD_b:
                      local_64 = bVar6;
                      if (*(char *)(param_2 + 0x120) != '\0' && bVar6 == 0) {
                        local_64 = 0x44;
                      }
                      break;
                    case 0xd:
                      if (DAT_05292338 == 0) goto switchD_0096ac70_caseD_b;
                      local_64 = FUN_017f1f38(DAT_05292338 + 0xda0);
                      break;
                    case 0xe:
                      local_64 = FUN_017f21e0(DAT_05292338 + 0xda0);
                      break;
                    default:
                      if (bVar6 != 0x40) goto switchD_0096ac70_caseD_b;
                      local_64 = 5;
                    case 10:
                    case 0x2f:
                    }
                  }
                  *(byte *)((long)pfVar16 + 0x32) = local_64;
                  uVar14 = puVar17[3];
                  pfVar16[8] = *(float *)(puVar17 + 4);
                  *(undefined8 *)(pfVar16 + 6) = uVar14;
                  pfVar16[6] = pfVar16[6] + param_1;
                  pfVar16[7] = pfVar16[7] + param_1;
                  pfVar16[8] = pfVar16[8] + param_1;
                }
                bVar6 = *(byte *)((long)puVar17 + 0x33);
                if ((bVar6 & 0xf7) != 7) {
                  if ((bVar6 == 9) || (bVar6 == 0x31)) {
                    local_64 = 9;
                  }
                  else {
                    local_64 = 8;
                    switch(bVar6) {
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
switchD_0096aba4_caseD_b:
                      local_64 = bVar6;
                      if (*(char *)(param_2 + 0x120) != '\0' && bVar6 == 0) {
                        local_64 = 0x44;
                      }
                      break;
                    case 0xd:
                      if (DAT_05292338 == 0) goto switchD_0096aba4_caseD_b;
                      local_64 = FUN_017f1f38(DAT_05292338 + 0xda0);
                      break;
                    case 0xe:
                      local_64 = FUN_017f21e0(DAT_05292338 + 0xda0);
                      break;
                    default:
                      if (bVar6 != 0x40) goto switchD_0096aba4_caseD_b;
                      local_64 = 5;
                    case 10:
                    case 0x2f:
                    }
                  }
                  *(byte *)((long)pfVar16 + 0x33) = local_64;
                  uVar14 = *(undefined8 *)((long)puVar17 + 0x24);
                  pfVar16[0xb] = *(float *)((long)puVar17 + 0x2c);
                  *(undefined8 *)(pfVar16 + 9) = uVar14;
                  pfVar16[9] = pfVar16[9] + param_1;
                  pfVar16[10] = pfVar16[10] + param_1;
                  pfVar16[0xb] = pfVar16[0xb] + param_1;
                }
                uVar10 = *(uint *)(param_3 + 4);
                uVar8 = uVar8 + 1;
                puVar17 = (undefined8 *)((long)puVar17 + 0x34);
              } while (uVar8 < uVar10);
              uVar8 = *(uint *)(param_3 + 8);
            }
            uVar12 = uVar12 + 1;
            uVar15 = uVar15 + 1;
          } while (uVar12 < uVar8);
          uVar14 = 1;
        }
      }
    }
  }
  return uVar14;
}


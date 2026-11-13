
/* WARNING: Removing unreachable block (ram,0x011cf178) */
/* WARNING: Removing unreachable block (ram,0x011cf168) */
/* WARNING: Removing unreachable block (ram,0x011cf184) */
/* WARNING: Removing unreachable block (ram,0x011cf378) */
/* WARNING: Removing unreachable block (ram,0x011cf388) */
/* WARNING: Removing unreachable block (ram,0x011cf394) */

void FUN_011cf0c0(long param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  char cVar9;
  uint uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined4 local_78;
  undefined4 uStack_74;
  
  if (((DAT_050de730 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_050de730), iVar4 != 0)) {
    DAT_050de720 = 0x100000000;
    DAT_050de728 = 0x300000002;
    __cxa_guard_release(&DAT_050de730);
  }
  fVar17 = (float)*(int *)(param_1 + 0xb4) * 0.5;
  fVar16 = (float)*(int *)(param_1 + 0xb0) * 0.5;
  uVar6 = 0;
  if (fVar16 != (float)(int)fVar16) {
    uVar6 = (uint)(fVar16 < 0.0);
  }
  uVar7 = 0;
  if (fVar17 != (float)(int)fVar17) {
    uVar7 = (uint)(fVar17 < 0.0);
  }
  cVar5 = '\0';
  if (*(long *)(DAT_0519d040 + 0x1f8) == 0) goto LAB_011cf228;
  lVar15 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0);
  cVar5 = '\0';
  if (lVar15 == 0) goto LAB_011cf228;
  uVar10 = ((int)fVar16 - uVar6) - *(int *)(lVar15 + 0x28);
  uVar2 = *(uint *)(lVar15 + 0x18);
  uVar3 = ((int)fVar17 - uVar7) - *(int *)(lVar15 + 0x2c);
  if ((uVar10 < uVar2 && uVar3 <= *(uint *)(lVar15 + 0x1c)) &&
      (uVar2 <= uVar10 || *(uint *)(lVar15 + 0x1c) != uVar3)) {
    uVar10 = uVar10 + uVar2 * uVar3;
LAB_011cf20c:
    if (*(uint *)(lVar15 + 0x30) <= uVar10) {
      uVar10 = 0;
    }
    puVar13 = (undefined8 *)(*(long *)(lVar15 + 0x38) + (long)(int)uVar10 * 0x68);
  }
  else {
    if (*(char *)(lVar15 + 0x88) != '\0') {
      uVar10 = ((int)fVar16 - uVar6) - *(int *)(lVar15 + 0x98);
      uVar7 = ((int)fVar17 - uVar7) - *(int *)(lVar15 + 0x9c);
      uVar6 = *(uint *)(lVar15 + 0xa0);
      if ((uVar10 < uVar6 && uVar7 <= *(uint *)(lVar15 + 0xa4)) &&
          (uVar6 <= uVar10 || *(uint *)(lVar15 + 0xa4) != uVar7)) {
        uVar10 = uVar10 + uVar6 * uVar7 + *(int *)(lVar15 + 0x8c);
        goto LAB_011cf20c;
      }
    }
    puVar13 = &DAT_051a50f0;
  }
  cVar5 = *(char *)(puVar13 + 2);
LAB_011cf228:
  if (0 < (int)param_3) {
    lVar15 = 0;
    do {
      iVar14 = *(int *)(param_1 + 0xb0);
      iVar4 = *(int *)(param_1 + 0xb4);
      switch(*(undefined4 *)((long)&DAT_050de720 + lVar15 * 4)) {
      case 0:
        iVar4 = iVar4 + 2;
        break;
      case 1:
        iVar14 = iVar14 + 2;
        break;
      case 2:
        iVar4 = iVar4 + -2;
        break;
      case 3:
        iVar14 = iVar14 + -2;
      }
      uVar8 = 0;
      puVar11 = param_2;
      do {
        puVar1 = puVar11;
        if (999 < uVar8) {
          puVar1 = param_2;
        }
        if ((puVar1[0x3f] == 2) && (iVar14 == puVar1[0x2c] && iVar4 == puVar1[0x2d])) {
          local_78 = *puVar1;
          uStack_74 = puVar1[1];
          uVar8 = FUN_0277d7b4(param_1,&local_78);
          if ((uVar8 & 1) != 0) {
            fVar17 = (float)iVar14 * 0.5;
            fVar16 = (float)iVar4 * 0.5;
            uVar6 = 0;
            if (fVar17 != (float)(int)fVar17) {
              uVar6 = (uint)(fVar17 < 0.0);
            }
            uVar7 = 0;
            if (fVar16 != (float)(int)fVar16) {
              uVar7 = (uint)(fVar16 < 0.0);
            }
            cVar9 = '\0';
            if (*(long *)(DAT_0519d040 + 0x1f8) != 0) {
              lVar12 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xb0);
              cVar9 = '\0';
              if (lVar12 != 0) {
                uVar10 = ((int)fVar17 - uVar6) - *(int *)(lVar12 + 0x28);
                uVar2 = *(uint *)(lVar12 + 0x18);
                uVar3 = ((int)fVar16 - uVar7) - *(int *)(lVar12 + 0x2c);
                if ((uVar10 < uVar2 && uVar3 <= *(uint *)(lVar12 + 0x1c)) &&
                    (uVar2 <= uVar10 || *(uint *)(lVar12 + 0x1c) != uVar3)) {
                  uVar10 = uVar10 + uVar2 * uVar3;
LAB_011cf418:
                  if (*(uint *)(lVar12 + 0x30) <= uVar10) {
                    uVar10 = 0;
                  }
                  puVar13 = (undefined8 *)(*(long *)(lVar12 + 0x38) + (long)(int)uVar10 * 0x68);
                }
                else if (*(char *)(lVar12 + 0x88) == '\0') {
                  puVar13 = &DAT_051a50f0;
                }
                else {
                  uVar6 = ((int)fVar17 - uVar6) - *(int *)(lVar12 + 0x98);
                  uVar7 = ((int)fVar16 - uVar7) - *(int *)(lVar12 + 0x9c);
                  puVar13 = &DAT_051a50f0;
                  if (uVar6 < *(uint *)(lVar12 + 0xa0) && uVar7 < *(uint *)(lVar12 + 0xa4)) {
                    uVar10 = uVar6 + *(uint *)(lVar12 + 0xa0) * uVar7 + *(int *)(lVar12 + 0x8c);
                    goto LAB_011cf418;
                  }
                }
                cVar9 = *(char *)(puVar13 + 2);
              }
            }
            if ((cVar5 == cVar9) &&
               (uVar8 = FUN_011ce200(puVar1,param_2,param_3,param_4 & 1), (uVar8 & 1) != 0)) {
              FUN_011ce780(puVar1,param_5 & 1);
              FUN_011cc92c(puVar1);
            }
          }
          break;
        }
        uVar8 = uVar8 + 1;
        puVar11 = puVar11 + 0x48;
      } while (param_3 != uVar8);
      lVar15 = lVar15 + 1;
    } while (lVar15 != 4);
  }
  return;
}


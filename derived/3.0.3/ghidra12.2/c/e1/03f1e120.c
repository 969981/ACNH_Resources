
void FUN_03f1e120(undefined8 param_1,uint *param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  float fVar16;
  float fVar17;
  
  if (param_2 == (uint *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  iVar10 = param_4;
  if (param_4 < 0x65) {
    iVar10 = 100;
  }
  if (99 < param_4) {
    return;
  }
  do {
    puVar6 = PTR_DAT_04bb39d8;
    param_4 = param_4 + 1;
    switch(*(undefined4 *)(param_3 + 0x38)) {
    case 3:
      uVar4 = *(uint *)(param_3 + 0x70);
      if (uVar4 == 0) goto LAB_03f1e384;
      lVar13 = *(long *)(param_3 + 0x78);
      fVar17 = 0.0;
      uVar12 = 0;
      piVar15 = (int *)0x0;
      do {
        piVar14 = (int *)(lVar13 + ((long)((ulong)uVar12 << 0x20) >> 0x1b));
        fVar17 = fVar17 + (float)piVar14[4];
        puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar6);
        uVar1 = *puVar7 ^ *puVar7 << 0xb;
        uVar2 = puVar7[3];
        *puVar7 = puVar7[1];
        puVar7[1] = puVar7[2];
        uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
        puVar7[2] = uVar2;
        puVar7[3] = uVar1;
        uVar12 = uVar12 + 1;
        if ((float)piVar14[4] <= fVar17 * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + 0.0) {
          piVar14 = piVar15;
        }
        piVar15 = piVar14;
      } while (uVar4 != uVar12);
      if (fVar17 <= 0.0) goto LAB_03f1e384;
      goto LAB_03f1e190;
    case 5:
      uVar4 = *(uint *)(param_3 + 0x70);
      if (uVar4 == 0) {
        return;
      }
      lVar13 = *(long *)(param_3 + 0x78);
      uVar12 = 0;
      do {
        FUN_03f1e120(param_1,param_2,
                     *(undefined8 *)(lVar13 + ((long)((ulong)uVar12 << 0x20) >> 0x1b) + 8),param_4);
        uVar12 = uVar12 + 1;
        param_4 = param_4 + 1;
      } while (uVar4 != uVar12);
      return;
    case 6:
      if (*(int **)(param_3 + 0xa0) != (int *)0x0) {
        uVar4 = *(uint *)(param_3 + 0x9c);
        uVar9 = (ulong)uVar4;
        if (((-1 < (int)uVar4) && (lVar13 = *(long *)(param_3 + 0xa8), lVar13 != 0)) &&
           ((int)uVar4 < *(int *)(lVar13 + 0x104))) {
          iVar3 = **(int **)(param_3 + 0xa0);
          if (*(int *)(*(long *)(lVar13 + 0x120) + uVar9 * 4) != iVar3) {
            *(int *)(*(long *)(lVar13 + 0x120) + uVar9 * 4) = iVar3;
            goto LAB_03f1e30c;
          }
        }
      }
      break;
    case 7:
      uVar4 = *(uint *)(param_3 + 0x9c);
      uVar9 = (ulong)uVar4;
      if ((-1 < (int)uVar4) && (lVar13 = *(long *)(param_3 + 0xa8), lVar13 != 0)) {
        cVar5 = *(char *)(*(long *)(lVar13 + 0x110) + uVar9);
        fVar17 = *(float *)(*(long *)(lVar13 + 0x120) + uVar9 * 4);
        if (cVar5 == '\x01') {
          fVar16 = fVar17 + 1.0;
        }
        else {
          if (cVar5 != '\0') break;
          fVar16 = (float)((int)fVar17 + 1);
        }
        if (((int)uVar4 < *(int *)(lVar13 + 0x104)) && (fVar17 != fVar16)) {
          *(float *)(*(long *)(lVar13 + 0x120) + uVar9 * 4) = fVar16;
LAB_03f1e30c:
          *(undefined1 *)(*(long *)(lVar13 + 0x118) + uVar9) = 1;
        }
      }
    }
    uVar4 = *(uint *)(param_3 + 0x70);
    if (uVar4 == 0) {
LAB_03f1e384:
      uVar4 = *param_2;
      uVar9 = (ulong)uVar4;
      if (0 < (int)uVar4) {
        plVar11 = *(long **)(param_2 + 2);
        do {
          if (*plVar11 == param_3) {
            return;
          }
          plVar11 = plVar11 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if ((int)uVar4 < (int)param_2[1]) {
        *(long *)(*(long *)(param_2 + 2) + (long)(int)uVar4 * 8) = param_3;
        *param_2 = *param_2 + 1;
      }
      return;
    }
    lVar13 = *(long *)(param_3 + 0x78);
    uVar12 = 0;
    while (((piVar14 = (int *)(lVar13 + ((long)((ulong)uVar12 << 0x20) >> 0x1b)),
            7 < *(uint *)(param_3 + 0x38) ||
            (1 << (ulong)(*(uint *)(param_3 + 0x38) & 0x1f) & 0xecU) == 0 && (*piVar14 != 1)) ||
           ((lVar8 = *(long *)(lVar13 + (long)(int)uVar12 * 0x20 + 0x10), lVar8 != 0 &&
            (uVar9 = FUN_03f17408(lVar8,param_1), (uVar9 & 1) == 0))))) {
      uVar12 = uVar12 + 1;
      if (uVar4 == uVar12) goto LAB_03f1e384;
    }
LAB_03f1e190:
    param_3 = *(long *)(piVar14 + 2);
    if (param_4 == iVar10) {
      return;
    }
  } while( true );
}


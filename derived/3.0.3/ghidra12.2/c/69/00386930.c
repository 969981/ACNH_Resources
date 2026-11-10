
void FUN_00386930(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  int *piVar12;
  float *pfVar13;
  byte bVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  
  cVar4 = *(char *)(param_2 + 0x1d);
  if (cVar4 == '\x04') {
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    uVar9 = (**(code **)(*plVar8 + 0x60))(plVar8,*(undefined8 *)(param_2 + 0x10),1);
    lVar10 = FUN_0037c748(uVar9,0x13);
    if ((lVar10 == 0) || (*(long *)(lVar10 + 8) == 0)) {
      lVar10 = FUN_0037c748(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),0x13);
    }
    else {
      lVar10 = FUN_0037c748(uVar9,0x13);
    }
    if ((((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 8), lVar10 != 0)) &&
        (**(int **)(param_2 + 0x28) == 0x4d535046)) &&
       (uVar3 = (*(int **)(param_2 + 0x28))[1], 0 < (int)uVar3)) {
      uVar15 = 0;
      do {
        if ((uint)uVar15 < 4) {
          pcVar11 = *(char **)(param_2 + 0x30);
          switch(uVar15 & 0xffffffff) {
          case 0:
            if (pcVar11 == (char *)0x0) goto LAB_00386c00;
            break;
          case 1:
            if (pcVar11[0x20] == '\0') goto LAB_00386c00;
            goto LAB_00386c60;
          case 2:
            pcVar11 = pcVar11 + 0x40;
            break;
          case 3:
            cVar4 = pcVar11[0x60];
            goto joined_r0x00386c5c;
          }
          cVar4 = *pcVar11;
joined_r0x00386c5c:
          if (cVar4 != '\0') {
LAB_00386c60:
            FUN_00368c50(*(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar15 * 4),
                         lVar10);
          }
        }
LAB_00386c00:
        uVar15 = uVar15 + 1;
      } while (uVar3 != uVar15);
    }
  }
  else if (cVar4 == '\x01') {
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    lVar10 = (**(code **)(*plVar8 + 0x70))(plVar8,*(undefined8 *)(param_2 + 0x10),1);
    piVar12 = *(int **)(param_2 + 0x28);
    if (*piVar12 == 0x53544c46) {
      uVar3 = piVar12[1];
      if ((uint)*(byte *)(param_2 + 0x1c) < (*(uint *)(lVar10 + 0x14) & 3) && 0 < (int)uVar3) {
        uVar15 = 0;
        do {
          lVar6 = uVar15 * 4;
          pbVar1 = (byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar15);
          uVar15 = uVar15 + 1;
          *(undefined4 *)
           (*(long *)(lVar10 + 0x18) + ((ulong)*(uint *)(lVar10 + 0x10) & 3) * 0x10 +
            (ulong)*(byte *)(param_2 + 0x1c) * 0x14 + (ulong)*pbVar1 * 4) =
               *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar6);
        } while (uVar3 != uVar15);
      }
    }
    else if ((*piVar12 == 0x434d4c46) && (uVar3 = piVar12[1], 0 < (int)uVar3)) {
      uVar15 = 0;
      do {
        bVar14 = *(byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar15);
        fVar17 = *(float *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar15 * 4);
        uVar5 = bVar14 - 0x1c;
        if (bVar14 < 0x1c || uVar5 == 0) {
          fVar17 = fVar17 + 0.5;
          fVar16 = 0.0;
          if (0.0 <= fVar17) {
            fVar16 = fVar17;
          }
          fVar17 = 255.0;
          if (fVar16 <= 255.0) {
            fVar17 = fVar16;
          }
          FUN_00360ec8(lVar10,bVar14,(int)fVar17);
        }
        else if (uVar5 < 8) {
          uVar7 = (ulong)(uVar5 >> 2);
          switch(bVar14 & 3) {
          case 0:
            pfVar13 = (float *)(*(long *)(lVar10 + 8) + uVar7 * 0x10);
            break;
          case 1:
            pfVar13 = (float *)(*(long *)(lVar10 + 8) + uVar7 * 0x10 + 4);
            break;
          case 2:
            pfVar13 = (float *)(*(long *)(lVar10 + 8) + uVar7 * 0x10 + 8);
            break;
          case 3:
            pfVar13 = (float *)(*(long *)(lVar10 + 8) + uVar7 * 0x10 + 0xc);
          }
          *pfVar13 = fVar17;
        }
        uVar15 = uVar15 + 1;
      } while (uVar3 != uVar15);
    }
  }
  else if (cVar4 == '\0') {
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x60))(plVar8,*(undefined8 *)(param_2 + 0x10),1);
    piVar12 = *(int **)(param_2 + 0x28);
    iVar2 = *piVar12;
    if (iVar2 < 0x49564c46) {
      if (iVar2 == 0x41504c46) {
        uVar3 = piVar12[1];
        if (0 < (int)uVar3) {
          uVar15 = 0;
          do {
            lVar10 = uVar15 * 4;
            pbVar1 = (byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar15);
            uVar15 = uVar15 + 1;
            *(undefined4 *)((long)plVar8 + (ulong)*pbVar1 * 4 + 0x30) =
                 *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar10);
            *(byte *)(plVar8 + 0xb) = *(byte *)(plVar8 + 0xb) | 0x10;
          } while (uVar3 != uVar15);
        }
      }
      else if (iVar2 == 0x43434c46) {
        uVar3 = piVar12[1];
        if (0 < (int)uVar3) {
          uVar15 = 0;
          do {
            FUN_0038ad2c(*(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar15 * 4),
                         plVar8,*(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar15));
            uVar15 = uVar15 + 1;
          } while (uVar3 != uVar15);
        }
      }
      else if ((iVar2 == 0x43564c46) && (uVar3 = piVar12[1], 0 < (int)uVar3)) {
        uVar15 = 0;
        do {
          fVar16 = *(float *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar15 * 4) + 0.5;
          fVar17 = 0.0;
          if (0.0 <= fVar16) {
            fVar17 = fVar16;
          }
          fVar16 = 255.0;
          if (fVar17 <= 255.0) {
            fVar16 = fVar17;
          }
          (**(code **)(*plVar8 + 0x38))
                    (plVar8,*(undefined1 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar15),
                     (int)fVar16);
          uVar15 = uVar15 + 1;
        } while (uVar3 != uVar15);
      }
    }
    else if (iVar2 == 0x49564c46) {
      uVar3 = piVar12[1];
      if (0 < (int)uVar3) {
        bVar14 = *(byte *)(plVar8 + 0xb);
        lVar10 = 0;
        do {
          pfVar13 = (float *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + lVar10);
          lVar10 = lVar10 + 4;
          bVar14 = bVar14 & 0xfe | *pfVar13 != 0.0;
          *(byte *)(plVar8 + 0xb) = bVar14;
        } while ((ulong)uVar3 * 4 != lVar10);
      }
    }
    else if (iVar2 == 0x53504c46) {
      uVar3 = piVar12[1];
      if (0 < (int)uVar3) {
        uVar15 = 0;
        do {
          uVar18 = *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar15 * 4);
          bVar14 = *(byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar15);
          lVar10 = FUN_0037c9ac(plVar8,6);
          if (lVar10 != 0) {
            *(undefined4 *)(lVar10 + (ulong)bVar14 * 4 + 0x1c) = uVar18;
          }
          uVar15 = uVar15 + 1;
        } while (uVar3 != uVar15);
      }
    }
    else if ((iVar2 == 0x544d4c46) && (uVar3 = piVar12[1], 0 < (int)uVar3)) {
      uVar15 = 0;
      do {
        uVar18 = *(undefined4 *)(*(long *)(*(long *)(param_3 + 0x18) + 8) + uVar15 * 4);
        bVar14 = *(byte *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + uVar15);
        lVar10 = FUN_0037c9ac(plVar8,3);
        if (lVar10 != 0) {
          *(undefined4 *)(lVar10 + (ulong)bVar14 * 4 + 0x18) = uVar18;
        }
        uVar15 = uVar15 + 1;
      } while (uVar3 != uVar15);
    }
  }
  return;
}


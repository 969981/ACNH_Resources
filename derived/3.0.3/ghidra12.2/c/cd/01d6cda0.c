
void FUN_01d6cda0(uint *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  uint *puVar14;
  char local_28 [4];
  char local_24 [4];
  
  uVar3 = *param_1;
  if (uVar3 - 4 < 2) {
LAB_01d6cdd0:
    plVar8 = *(long **)(param_1 + 4);
    if (plVar8 == (long *)0x0) {
      return;
    }
LAB_01d6cdd8:
    plVar1 = &DAT_04178a58;
    if ((char)plVar8[0xd7] != '\0') {
      plVar1 = plVar8;
    }
    if (*plVar1 != *(long *)(param_1 + 2)) {
      return;
    }
  }
  else {
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 == 1) goto LAB_01d6cdd0;
    if (((uVar3 & 0xfffffffe) == 8) && (plVar8 = *(long **)(param_1 + 4), plVar8 != (long *)0x0))
    goto LAB_01d6cdd8;
  }
  if (uVar3 == 4) {
    if ((*(long *)(param_1 + 6) == 0) && (((byte)param_1[10] & 1) == 0)) {
      iVar4 = *(int *)(*(long *)(DAT_053807b0 + 0xe8) + 0x20);
      if (iVar4 != 0) {
        plVar8 = *(long **)(*(long *)(DAT_053807b0 + 0xe8) + 0x28);
        lVar10 = (long)iVar4 * 8;
        puVar12 = &DAT_04178a58;
        if ((char)(*(ulong **)(param_1 + 4))[0xd7] != '\0') {
          puVar12 = *(ulong **)(param_1 + 4);
        }
        do {
          lVar10 = lVar10 + -8;
          puVar11 = (ulong *)*plVar8;
          if (*puVar11 == *puVar12) {
            if ((char)puVar11[0xd8] == '\0') {
              puVar12 = (ulong *)0x0;
            }
            else {
              puVar12 = (ulong *)0x0;
              if ((char)puVar11[0xd9] != '\0') {
                puVar12 = puVar11 + 0xda;
              }
            }
            *(ulong **)(param_1 + 6) = puVar12;
            goto LAB_01d6d1ac;
          }
          plVar8 = plVar8 + 1;
        } while (*puVar12 <= *puVar11 && lVar10 != 0);
      }
      param_1[6] = 0;
      param_1[7] = 0;
      *(byte *)(param_1 + 10) = (byte)param_1[10] | 1;
    }
LAB_01d6d1ac:
    if ((*(long *)(param_1 + 8) != 0) || (bVar6 = (byte)param_1[10], (bVar6 >> 1 & 1) != 0))
    goto LAB_01d6d230;
    iVar4 = *(int *)(*(long *)(DAT_053807b0 + 0xe8) + 0x20);
    if (iVar4 != 0) {
      plVar8 = *(long **)(*(long *)(DAT_053807b0 + 0xe8) + 0x28);
      lVar10 = (long)iVar4 * 8;
      puVar12 = &DAT_04178a58;
      if ((char)(*(ulong **)(param_1 + 4))[0xd7] != '\0') {
        puVar12 = *(ulong **)(param_1 + 4);
      }
      do {
        lVar10 = lVar10 + -8;
        puVar11 = (ulong *)*plVar8;
        if (*puVar11 == *puVar12) {
          if ((char)puVar11[0xd8] == '\0') goto LAB_01d6d2f4;
          puVar12 = (ulong *)0x0;
          if ((char)puVar11[0x16c] != '\0') {
            puVar12 = puVar11 + 0x16d;
          }
          *(ulong **)(param_1 + 8) = puVar12;
          goto LAB_01d6d230;
        }
        plVar8 = plVar8 + 1;
      } while (*puVar12 <= *puVar11 && lVar10 != 0);
    }
LAB_01d6d224:
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    if (uVar3 == 1) {
      if ((*(long *)(param_1 + 6) == 0) && (((byte)param_1[10] & 1) == 0)) {
        iVar4 = *(int *)(*(long *)(DAT_053807b0 + 0xd8) + 0x28);
        if (iVar4 != 0) {
          plVar8 = *(long **)(*(long *)(DAT_053807b0 + 0xd8) + 0x30);
          lVar10 = (long)iVar4 << 3;
          puVar12 = &DAT_04178a58;
          if ((char)(*(ulong **)(param_1 + 4))[0xd7] != '\0') {
            puVar12 = *(ulong **)(param_1 + 4);
          }
          do {
            puVar11 = (ulong *)*plVar8;
            uVar13 = *puVar11;
            if (uVar13 == 0 || uVar13 < *puVar12) break;
            if (uVar13 == *puVar12) {
              if ((char)puVar11[0xd9] != '\0') {
                *(ulong **)(param_1 + 6) = puVar11 + 0xda;
                goto LAB_01d6cea4;
              }
              if ((puVar11[0x30e] & 1) == 0) {
                param_1[6] = 0;
                param_1[7] = 0;
                goto LAB_01d6cea4;
              }
              break;
            }
            plVar8 = plVar8 + 1;
            lVar10 = lVar10 + -8;
          } while (lVar10 != 0);
        }
        param_1[6] = 0;
        param_1[7] = 0;
        *(byte *)(param_1 + 10) = (byte)param_1[10] | 1;
      }
LAB_01d6cea4:
      if ((*(long *)(param_1 + 8) != 0) || (bVar6 = (byte)param_1[10], (bVar6 >> 1 & 1) != 0))
      goto LAB_01d6d230;
      iVar4 = *(int *)(*(long *)(DAT_053807b0 + 0xd8) + 0x28);
      if (iVar4 != 0) {
        plVar8 = *(long **)(*(long *)(DAT_053807b0 + 0xd8) + 0x30);
        lVar10 = (long)iVar4 << 3;
        puVar12 = &DAT_04178a58;
        if ((char)(*(ulong **)(param_1 + 4))[0xd7] != '\0') {
          puVar12 = *(ulong **)(param_1 + 4);
        }
        do {
          puVar11 = (ulong *)*plVar8;
          uVar13 = *puVar11;
          if (uVar13 == 0 || uVar13 < *puVar12) break;
          if (uVar13 == *puVar12) {
            if ((char)puVar11[0x16c] != '\0') {
              *(ulong **)(param_1 + 8) = puVar11 + 0x16d;
              goto LAB_01d6d230;
            }
            if (((byte)puVar11[0x30e] >> 1 & 1) == 0) goto LAB_01d6d2f4;
            break;
          }
          plVar8 = plVar8 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
      goto LAB_01d6d224;
    }
    puVar14 = param_1 + 4;
    puVar9 = *(undefined8 **)puVar14;
    if (puVar9 == (undefined8 *)0x0) {
      switch(uVar3) {
      case 2:
        FUN_01d6cbf4(param_1,param_1[1]);
        break;
      case 3:
        FUN_01d6cc38(param_1,param_1[1]);
        break;
      default:
        puVar14[0] = 0;
        puVar14[1] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[0] = 0;
        param_1[1] = 0xffffffff;
        param_1[8] = 0;
        param_1[9] = 0;
        *(undefined1 *)(param_1 + 10) = 0;
        return;
      case 6:
        FUN_01d6cc7c(param_1,param_1 + 2,param_1[1]);
        break;
      case 7:
        FUN_01d6ccc4(param_1,param_1 + 2,param_1[1]);
        break;
      case 8:
        FUN_01d6cd0c(param_1,param_1[1]);
        break;
      case 9:
        FUN_01d6cd50(param_1,param_1[1]);
      }
      goto LAB_01d6d230;
    }
    if ((*(long *)(param_1 + 6) == 0) && ((param_1[10] & 1) == 0)) {
      if ((uVar3 & 0xfffffffe) == 8) {
        uVar5 = FUN_01dd2db0(*(undefined8 *)PTR_DAT_04bb4ca8,param_1[1],uVar3 == 8,local_24);
      }
      else {
        puVar7 = &DAT_04178a60;
        if (*(char *)(puVar9 + 0xd7) != '\0') {
          puVar7 = puVar9 + 1;
        }
        puVar2 = &DAT_04178a58;
        if (*(char *)(puVar9 + 0xd7) != '\0') {
          puVar2 = puVar9;
        }
        uVar5 = FUN_01dd1ab0(*(undefined8 *)PTR_DAT_04bb4ca8,puVar7,puVar2,local_24);
      }
      *(undefined8 *)(param_1 + 6) = uVar5;
      if (local_24[0] != '\0') {
        *(byte *)(param_1 + 10) = (byte)param_1[10] | 1;
      }
    }
    if ((*(long *)(param_1 + 8) != 0) || (((byte)param_1[10] >> 1 & 1) != 0)) goto LAB_01d6d230;
    if ((*param_1 & 0xfffffffe) == 8) {
      uVar5 = FUN_01dd2e3c(*(undefined8 *)PTR_DAT_04bb4ca8,param_1[1],*param_1 == 8,local_28);
    }
    else {
      puVar7 = *(undefined8 **)puVar14;
      puVar9 = &DAT_04178a60;
      if (*(char *)(puVar7 + 0xd7) != '\0') {
        puVar9 = puVar7 + 1;
      }
      puVar2 = &DAT_04178a58;
      if (*(char *)(puVar7 + 0xd7) != '\0') {
        puVar2 = puVar7;
      }
      uVar5 = FUN_01dd1b80(*(undefined8 *)PTR_DAT_04bb4ca8,puVar9,puVar2,local_28);
    }
    *(undefined8 *)(param_1 + 8) = uVar5;
    if (local_28[0] == '\0') goto LAB_01d6d230;
    bVar6 = (byte)param_1[10];
  }
  *(byte *)(param_1 + 10) = bVar6 | 2;
LAB_01d6d230:
  if ((((*(long *)(param_1 + 4) != 0) && (((byte)param_1[10] >> 2 & 1) == 0)) &&
      (lVar10 = *(long *)(DAT_053807b0 + 0x120), lVar10 != 0)) && (*(int *)(lVar10 + 8) != 0)) {
    puVar9 = *(undefined8 **)(lVar10 + 0x10);
    lVar10 = (long)*(int *)(lVar10 + 8) * 8;
    do {
      lVar10 = lVar10 + -8;
      puVar12 = (ulong *)*puVar9;
      if (*puVar12 == *(ulong *)(param_1 + 2)) {
        *(byte *)(param_1 + 10) = (byte)param_1[10] | 4;
        return;
      }
      puVar9 = puVar9 + 1;
    } while (*puVar12 <= *(ulong *)(param_1 + 2) && lVar10 != 0);
  }
  return;
LAB_01d6d2f4:
  param_1[8] = 0;
  param_1[9] = 0;
  goto LAB_01d6d230;
}


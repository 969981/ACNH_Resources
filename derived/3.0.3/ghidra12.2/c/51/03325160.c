
void FUN_03325160(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  undefined *local_70;
  char *local_68;
  undefined4 local_60;
  char local_5c [15];
  undefined1 local_4d;
  undefined1 auStack_48 [8];
  undefined *local_40;
  char *pcStack_38;
  
  lVar15 = *(long *)(param_1 + 0x310);
  if (lVar15 == 0) {
    return;
  }
  uVar3 = *(uint *)(lVar15 + 0x176c);
  uVar6 = uVar3 - 1;
  if ((int)uVar3 < 1) {
    return;
  }
  local_4d = 0;
  local_60 = 0x10;
  local_5c[0] = '\0';
  local_68 = local_5c;
  local_70 = PTR_DAT_04bb2ab0 + 0x10;
  FUN_038d1270(&local_70,"L_TransWord_%02d",uVar6);
  lVar15 = *(long *)(*(long *)(lVar15 + 0x2f0) + 0xf0);
  pcStack_38 = "";
  if (local_68 != (char *)0x0) {
    pcStack_38 = local_68;
  }
  if (*pcStack_38 != '\0') {
    local_40 = PTR_DAT_04bc8e68 + 0x10;
    lVar15 = FUN_032cb8e0(auStack_48,&local_40);
    lVar15 = *(long *)(lVar15 + 0xe8);
  }
  uVar7 = 0;
  fVar16 = *(float *)(*(long *)(lVar15 + 0x18) + 0x30);
  puVar1 = (undefined8 *)(param_1 + 0x5d0);
  do {
    if ((long)uVar7 < (long)*(int *)(*(long *)(param_1 + 0x310) + 0x176c)) {
      plVar11 = (long *)(*(long *)(param_1 + 0x310) + 0x300);
      plVar2 = plVar11 + uVar7;
      if (0x12 < uVar7) {
        plVar2 = plVar11;
      }
      lVar15 = *(long *)(*plVar2 + 0x428);
    }
    else {
      lVar15 = 0;
    }
    uVar4 = *(uint *)(param_1 + 0x15d0);
    if ((int)uVar4 < 1) {
LAB_033252ac:
      puVar9 = puVar1 + (ulong)uVar4 * 8;
      if (0x3f < uVar4) {
        puVar9 = puVar1;
      }
      puVar9[3] = lVar15;
      puVar9 = puVar1 + (ulong)*(uint *)(param_1 + 0x15d0) * 8;
      if (0x3f < *(uint *)(param_1 + 0x15d0)) {
        puVar9 = puVar1;
      }
      puVar9[7] = 0;
      puVar13 = *(undefined8 **)(param_1 + 0x5c8);
      puVar9 = puVar1 + (ulong)*(uint *)(param_1 + 0x15d0) * 8;
      if (0x3f < *(uint *)(param_1 + 0x15d0)) {
        puVar9 = puVar1;
      }
      puVar12 = (undefined8 *)*puVar13;
      if ((undefined8 *)*puVar13 == (undefined8 *)0x0) {
        *puVar13 = puVar9;
      }
      else {
        do {
          puVar13 = puVar12;
          puVar12 = (undefined8 *)puVar13[2];
        } while ((undefined8 *)puVar13[2] != (undefined8 *)0x0);
        puVar13[2] = puVar9;
        puVar9[1] = puVar13;
        puVar13 = (undefined8 *)*puVar13;
      }
      *puVar9 = puVar13;
      *(int *)(param_1 + 0x15d0) = *(int *)(param_1 + 0x15d0) + 1;
    }
    else {
      uVar14 = 0;
      puVar9 = puVar1;
      do {
        puVar13 = puVar9;
        if (0x3f < uVar14) {
          puVar13 = puVar1;
        }
        if (*(long *)((long)puVar13 + 0x18) == lVar15) {
          *(undefined8 *)((long)puVar13 + 0x38) = 0;
          goto LAB_03325224;
        }
        uVar14 = uVar14 + 1;
        puVar9 = (undefined8 *)((long)puVar9 + 0x40);
      } while (uVar4 != uVar14);
      if ((int)uVar4 < 0x40) goto LAB_033252ac;
    }
LAB_03325224:
    uVar7 = uVar7 + 1;
  } while (uVar7 != uVar3);
  lVar15 = *(long *)(param_1 + 0x310);
  if (*(int *)(lVar15 + 0x176c) < 1) {
    lVar8 = 0;
    if (*(int *)(lVar15 + 0x1768) == 1) goto LAB_03325348;
LAB_03325364:
    uVar4 = *(uint *)(param_1 + 0x15d0);
    if (0 < (int)uVar4) {
      uVar7 = 0;
      puVar9 = puVar1;
      do {
        puVar13 = puVar9;
        if (0x3f < uVar7) {
          puVar13 = puVar1;
        }
        if (*(long *)((long)puVar13 + 0x18) == lVar8) {
          *(undefined8 *)((long)puVar13 + 0x30) = 0;
          goto LAB_033255e8;
        }
        uVar7 = uVar7 + 1;
        puVar9 = (undefined8 *)((long)puVar9 + 0x40);
      } while (uVar4 != uVar7);
      if (0x3f < (int)uVar4) goto LAB_033255e8;
    }
    puVar9 = puVar1 + (ulong)uVar4 * 8;
    if (0x3f < uVar4) {
      puVar9 = puVar1;
    }
    puVar9[3] = lVar8;
    puVar9 = puVar1 + (ulong)*(uint *)(param_1 + 0x15d0) * 8;
    if (0x3f < *(uint *)(param_1 + 0x15d0)) {
      puVar9 = puVar1;
    }
    puVar9[6] = 0;
    plVar11 = *(long **)(param_1 + 0x5c8);
    puVar9 = puVar1 + (ulong)*(uint *)(param_1 + 0x15d0) * 8;
    if (0x3f < *(uint *)(param_1 + 0x15d0)) {
      puVar9 = puVar1;
    }
    puVar13 = (undefined8 *)*plVar11;
    if ((undefined8 *)*plVar11 != (undefined8 *)0x0) {
      do {
        puVar12 = puVar13;
        puVar13 = (undefined8 *)puVar12[2];
      } while ((undefined8 *)puVar12[2] != (undefined8 *)0x0);
      goto LAB_033255bc;
    }
LAB_033255cc:
    *plVar11 = (long)puVar9;
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar15 + 0x300) + 0x428);
    if (*(int *)(lVar15 + 0x1768) != 1) goto LAB_03325364;
LAB_03325348:
    if (*(int *)(lVar15 + 0x176c) < (int)uVar3) {
      uVar10 = 0;
    }
    else {
      plVar11 = (long *)(lVar15 + 0x300) + uVar6;
      if (0x13 < uVar3) {
        plVar11 = (long *)(lVar15 + 0x300);
      }
      uVar10 = *(undefined8 *)(*plVar11 + 0x428);
    }
    uVar4 = *(uint *)(param_1 + 0x15d0);
    if ((int)uVar4 < 1) {
LAB_0332545c:
      puVar9 = puVar1 + (ulong)uVar4 * 8;
      if (0x3f < uVar4) {
        puVar9 = puVar1;
      }
      puVar9[3] = lVar8;
      puVar9 = puVar1 + (ulong)*(uint *)(param_1 + 0x15d0) * 8;
      if (0x3f < *(uint *)(param_1 + 0x15d0)) {
        puVar9 = puVar1;
      }
      puVar9[6] = uVar10;
      puVar13 = *(undefined8 **)(param_1 + 0x5c8);
      puVar9 = puVar1 + (ulong)*(uint *)(param_1 + 0x15d0) * 8;
      if (0x3f < *(uint *)(param_1 + 0x15d0)) {
        puVar9 = puVar1;
      }
      puVar12 = (undefined8 *)*puVar13;
      if ((undefined8 *)*puVar13 == (undefined8 *)0x0) {
        *puVar13 = puVar9;
      }
      else {
        do {
          puVar13 = puVar12;
          puVar12 = (undefined8 *)puVar13[2];
        } while ((undefined8 *)puVar13[2] != (undefined8 *)0x0);
        puVar13[2] = puVar9;
        puVar9[1] = puVar13;
        puVar13 = (undefined8 *)*puVar13;
      }
      *puVar9 = puVar13;
      *(int *)(param_1 + 0x15d0) = *(int *)(param_1 + 0x15d0) + 1;
    }
    else {
      uVar7 = 0;
      puVar9 = puVar1;
      do {
        puVar13 = puVar9;
        if (0x3f < uVar7) {
          puVar13 = puVar1;
        }
        if (puVar13[3] == lVar8) {
          puVar13[6] = uVar10;
          goto LAB_033254e0;
        }
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 8;
      } while (uVar4 != uVar7);
      if ((int)uVar4 < 0x40) goto LAB_0332545c;
    }
LAB_033254e0:
    lVar15 = *(long *)(param_1 + 0x310);
    iVar5 = *(int *)(lVar15 + 0x176c);
    if (iVar5 < (int)uVar3) {
      lVar8 = 0;
      if (0 < iVar5) goto LAB_03325524;
LAB_033254fc:
      uVar10 = 0;
    }
    else {
      plVar11 = (long *)(lVar15 + 0x300) + uVar6;
      if (0x13 < uVar3) {
        plVar11 = (long *)(lVar15 + 0x300);
      }
      lVar8 = *(long *)(*plVar11 + 0x428);
      if (iVar5 < 1) goto LAB_033254fc;
LAB_03325524:
      uVar10 = *(undefined8 *)(*(long *)(lVar15 + 0x300) + 0x428);
    }
    uVar4 = *(uint *)(param_1 + 0x15d0);
    if (0 < (int)uVar4) {
      uVar7 = 0;
      puVar9 = puVar1;
      do {
        puVar13 = puVar9;
        if (0x3f < uVar7) {
          puVar13 = puVar1;
        }
        if (puVar13[3] == lVar8) {
          puVar13[7] = uVar10;
          goto LAB_033255e8;
        }
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 8;
      } while (uVar4 != uVar7);
      if (0x3f < (int)uVar4) goto LAB_033255e8;
    }
    puVar9 = puVar1 + (ulong)uVar4 * 8;
    if (0x3f < uVar4) {
      puVar9 = puVar1;
    }
    puVar9[3] = lVar8;
    puVar9 = puVar1 + (ulong)*(uint *)(param_1 + 0x15d0) * 8;
    if (0x3f < *(uint *)(param_1 + 0x15d0)) {
      puVar9 = puVar1;
    }
    puVar9[7] = uVar10;
    plVar11 = *(long **)(param_1 + 0x5c8);
    puVar9 = puVar1 + (ulong)*(uint *)(param_1 + 0x15d0) * 8;
    if (0x3f < *(uint *)(param_1 + 0x15d0)) {
      puVar9 = puVar1;
    }
    puVar13 = (undefined8 *)*plVar11;
    if ((undefined8 *)*plVar11 == (undefined8 *)0x0) goto LAB_033255cc;
    do {
      puVar12 = puVar13;
      puVar13 = (undefined8 *)puVar12[2];
    } while ((undefined8 *)puVar12[2] != (undefined8 *)0x0);
LAB_033255bc:
    puVar12[2] = puVar9;
    puVar9[1] = puVar12;
    plVar11 = (long *)*puVar12;
  }
  *puVar9 = plVar11;
  *(int *)(param_1 + 0x15d0) = *(int *)(param_1 + 0x15d0) + 1;
LAB_033255e8:
  if ((*(float *)(*(long *)(param_1 + 0x328) + 0x30) <= fVar16) ||
     (*(int *)(*(long *)(param_1 + 0x310) + 0x176c) < (int)uVar3)) {
    uVar10 = 0;
  }
  else {
    plVar11 = (long *)(*(long *)(param_1 + 0x310) + 0x300);
    plVar2 = plVar11 + uVar6;
    if (0x13 < uVar3) {
      plVar2 = plVar11;
    }
    uVar10 = *(undefined8 *)(*plVar2 + 0x428);
  }
  uVar3 = *(uint *)(param_1 + 0x15d0);
  lVar15 = *(long *)(*(long *)(param_1 + 0x340) + 0x428);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    puVar9 = puVar1;
    do {
      puVar13 = puVar9;
      if (0x3f < uVar7) {
        puVar13 = puVar1;
      }
      if (puVar13[3] == lVar15) {
        puVar13[4] = uVar10;
        return;
      }
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 8;
    } while (uVar3 != uVar7);
    if (0x3f < (int)uVar3) {
      return;
    }
  }
  puVar9 = puVar1 + (ulong)uVar3 * 8;
  if (0x3f < uVar3) {
    puVar9 = puVar1;
  }
  puVar9[3] = lVar15;
  puVar9 = puVar1 + (ulong)*(uint *)(param_1 + 0x15d0) * 8;
  if (0x3f < *(uint *)(param_1 + 0x15d0)) {
    puVar9 = puVar1;
  }
  puVar9[4] = uVar10;
  puVar13 = *(undefined8 **)(param_1 + 0x5c8);
  puVar9 = puVar1 + (ulong)*(uint *)(param_1 + 0x15d0) * 8;
  if (0x3f < *(uint *)(param_1 + 0x15d0)) {
    puVar9 = puVar1;
  }
  puVar1 = (undefined8 *)*puVar13;
  if ((undefined8 *)*puVar13 == (undefined8 *)0x0) {
    *puVar13 = puVar9;
  }
  else {
    do {
      puVar13 = puVar1;
      puVar1 = (undefined8 *)puVar13[2];
    } while ((undefined8 *)puVar13[2] != (undefined8 *)0x0);
    puVar13[2] = puVar9;
    puVar9[1] = puVar13;
    puVar13 = (undefined8 *)*puVar13;
  }
  *puVar9 = puVar13;
  *(int *)(param_1 + 0x15d0) = *(int *)(param_1 + 0x15d0) + 1;
  return;
}


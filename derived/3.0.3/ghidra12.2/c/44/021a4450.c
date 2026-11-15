
void FUN_021a4450(long param_1,ulong param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint *puVar11;
  undefined1 *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 local_50 [8];
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 auStack_42 [2];
  undefined8 local_28;
  
  if ((param_2 & 1) == 0) {
    if (DAT_05574040 == 0) {
      return;
    }
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar15 = (**(code **)(*(long *)*puVar9 + 0x38))();
      if (lVar15 == 0) {
        return;
      }
      lVar15 = lVar15 + 0x70;
    }
    else {
      if (puVar9 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar9[0x26] == (long *)0x0) {
        return;
      }
      lVar15 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      if (lVar15 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar15 + 0xd0) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar15 + 0xd0), puVar9 == (undefined8 *)0x0)) {
      iVar14 = (int)*(char *)(*(long *)(lVar15 + 0xb8) + *(long *)(lVar15 + 0xb0) + 0x1e335c);
    }
    else {
      uVar6 = (**(code **)*puVar9)();
      iVar14 = (int)*(char *)(*(long *)(lVar15 + 0xb8) + *(long *)(lVar15 + 0xb0) + 0x1e335c);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar15 + 0xd0) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar15 + 0xd0) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
    }
  }
  else {
    iVar14 = *(int *)(param_1 + 0x92ec);
  }
  if (iVar14 == -1) {
    return;
  }
  if ((int)*(uint *)(DAT_053e0208 + 0x16718) < 1) {
    lVar15 = *(long *)(DAT_053e0208 + 0x16608);
    if (lVar15 == 0) {
      return;
    }
    puVar11 = *(uint **)(lVar15 + 8);
    if ((((puVar11 == (uint *)0x0) ||
         ((0xe < *(uint *)(DAT_053e0208 + 0x16620) &&
          (*(char *)(*(long *)(DAT_053e0208 + 0x16628) + 0xe) == '\0')))) || (*puVar11 < 0xf)) ||
       ((puVar11[1] == 0 || ((ushort)puVar11[2] == 0)))) {
      lVar7 = 0;
    }
    else {
      iVar14 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        iVar14 = 0x1c;
      }
      lVar7 = (ulong)(puVar11[1] * 0xe + (uint)(ushort)puVar11[2] * 8 + iVar14) + (long)puVar11;
    }
    puVar11 = *(uint **)(lVar15 + 8);
    if (puVar11 == (uint *)0x0) {
      return;
    }
    if ((0xf < *(uint *)(DAT_053e0208 + 0x16620)) &&
       (*(char *)(*(long *)(DAT_053e0208 + 0x16628) + 0xf) == '\0')) {
      return;
    }
    if (*puVar11 < 0x10) {
      return;
    }
    if (puVar11[1] == 0) {
      return;
    }
    if ((ushort)puVar11[2] == 0) {
      return;
    }
    iVar14 = 0xc;
    if (*(char *)((long)puVar11 + 10) != '\0') {
      iVar14 = 0x1c;
    }
    lVar15 = (ulong)(puVar11[1] * 0xf + (uint)(ushort)puVar11[2] * 8 + iVar14) + (long)puVar11;
  }
  else {
    if (*(uint *)(DAT_053e0208 + 0x16718) < 0x10) {
      return;
    }
    lVar15 = 0x70;
    if (*(uint *)(DAT_053e0208 + 0x16708) < 0xf) {
      lVar15 = 0;
    }
    lVar13 = 0x78;
    if (*(uint *)(DAT_053e0208 + 0x16708) < 0x10) {
      lVar13 = 0;
    }
    lVar7 = *(long *)(*(long *)(DAT_053e0208 + 0x16710) + lVar15);
    lVar15 = *(long *)(*(long *)(DAT_053e0208 + 0x16710) + lVar13);
  }
  lVar13 = *(long *)PTR_DAT_04bb32f0;
  if ((lVar7 != 0 && lVar15 != 0) && lVar13 != 0) {
    FUN_0214ca00(local_50 + 4);
    FUN_0214ca00(local_58,lVar15);
    puVar11 = (uint *)(param_1 + 0x92d8);
    if ((param_2 & 1) == 0) {
      puVar11 = (uint *)(param_1 + 0x92cc);
    }
    local_28 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    uVar3 = *puVar11;
    if (uVar3 != 0xffffffff) {
      lVar15 = param_1 + (ulong)uVar3 * 0xba0;
      if (9 < uVar3) {
        lVar15 = param_1;
      }
      if (*(char *)(lVar15 + 0xaf9) != '\0') {
        uVar6 = FUN_0087d624(lVar13,&local_28,puVar11,1);
        if (*(int *)(lVar15 + 0x930) < *(int *)(lVar15 + 0x948)) {
          puVar9 = *(undefined8 **)(lVar15 + 0x938);
          if (puVar9 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar15 + 0x938) = *puVar9;
          }
          bVar5 = (uVar6 & 1) == 0;
          *puVar9 = 0;
          puVar12 = local_50 + 4;
          puVar2 = puVar12;
          if (bVar5) {
            puVar2 = local_58;
          }
          *(undefined1 *)puVar9 = *puVar2;
          puVar2 = puVar12;
          if (bVar5) {
            puVar2 = local_58;
          }
          *(undefined1 *)((long)puVar9 + 1) = *(undefined1 *)((ulong)puVar2 | 1);
          puVar2 = puVar12;
          if (bVar5) {
            puVar2 = local_58;
          }
          *(undefined1 *)((long)puVar9 + 2) = *(undefined1 *)((ulong)puVar2 | 2);
          if (bVar5) {
            puVar12 = local_58;
          }
          *(undefined1 *)((long)puVar9 + 3) = *(undefined1 *)((ulong)puVar12 | 3);
          puVar1 = &uStack_48;
          if (bVar5) {
            puVar1 = &local_54;
          }
          *(undefined4 *)((long)puVar9 + 4) = *puVar1;
          puVar2 = &uStack_44;
          if (bVar5) {
            puVar2 = local_50;
          }
          *(undefined1 *)(puVar9 + 1) = *puVar2;
          puVar2 = auStack_42;
          puVar12 = &uStack_43;
          if (bVar5) {
            puVar2 = local_50 + 2;
            puVar12 = local_50 + 1;
          }
          *(undefined1 *)((long)puVar9 + 9) = *puVar12;
          uVar4 = *puVar2;
          plVar10 = puVar9 + 2;
          *plVar10 = 0;
          puVar9[3] = 0;
          *(undefined1 *)((long)puVar9 + 10) = uVar4;
          puVar8 = *(undefined8 **)(lVar15 + 0x928);
          *(long **)(lVar15 + 0x928) = plVar10;
          *plVar10 = lVar15 + 0x920;
          puVar9[3] = puVar8;
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = plVar10;
          }
          *(int *)(lVar15 + 0x930) = *(int *)(lVar15 + 0x930) + 1;
        }
        FUN_0214d220(lVar15 + 0x8b0);
      }
    }
    uVar3 = puVar11[1];
    if (uVar3 != 0xffffffff) {
      lVar15 = param_1 + (ulong)uVar3 * 0xba0;
      if (9 < uVar3) {
        lVar15 = param_1;
      }
      if (*(char *)(lVar15 + 0xaf9) != '\0') {
        uVar6 = FUN_0087d624(lVar13,&local_28,puVar11 + 1,1);
        if (*(int *)(lVar15 + 0x930) < *(int *)(lVar15 + 0x948)) {
          puVar9 = *(undefined8 **)(lVar15 + 0x938);
          if (puVar9 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar15 + 0x938) = *puVar9;
          }
          bVar5 = (uVar6 & 1) == 0;
          *puVar9 = 0;
          puVar12 = local_50 + 4;
          puVar2 = puVar12;
          if (bVar5) {
            puVar2 = local_58;
          }
          *(undefined1 *)puVar9 = *puVar2;
          puVar2 = puVar12;
          if (bVar5) {
            puVar2 = local_58;
          }
          *(undefined1 *)((long)puVar9 + 1) = *(undefined1 *)((ulong)puVar2 | 1);
          puVar2 = puVar12;
          if (bVar5) {
            puVar2 = local_58;
          }
          *(undefined1 *)((long)puVar9 + 2) = *(undefined1 *)((ulong)puVar2 | 2);
          if (bVar5) {
            puVar12 = local_58;
          }
          *(undefined1 *)((long)puVar9 + 3) = *(undefined1 *)((ulong)puVar12 | 3);
          puVar1 = &uStack_48;
          if (bVar5) {
            puVar1 = &local_54;
          }
          *(undefined4 *)((long)puVar9 + 4) = *puVar1;
          puVar2 = &uStack_44;
          if (bVar5) {
            puVar2 = local_50;
          }
          *(undefined1 *)(puVar9 + 1) = *puVar2;
          puVar2 = auStack_42;
          puVar12 = &uStack_43;
          if (bVar5) {
            puVar2 = local_50 + 2;
            puVar12 = local_50 + 1;
          }
          *(undefined1 *)((long)puVar9 + 9) = *puVar12;
          uVar4 = *puVar2;
          plVar10 = puVar9 + 2;
          *plVar10 = 0;
          puVar9[3] = 0;
          *(undefined1 *)((long)puVar9 + 10) = uVar4;
          puVar8 = *(undefined8 **)(lVar15 + 0x928);
          *(long **)(lVar15 + 0x928) = plVar10;
          *plVar10 = lVar15 + 0x920;
          puVar9[3] = puVar8;
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = plVar10;
          }
          *(int *)(lVar15 + 0x930) = *(int *)(lVar15 + 0x930) + 1;
        }
        FUN_0214d220(lVar15 + 0x8b0);
      }
    }
    uVar3 = puVar11[2];
    if (uVar3 != 0xffffffff) {
      lVar15 = param_1 + (ulong)uVar3 * 0xba0;
      if (9 < uVar3) {
        lVar15 = param_1;
      }
      if (*(char *)(lVar15 + 0xaf9) != '\0') {
        uVar6 = FUN_0087d624(lVar13,&local_28,puVar11 + 2,1);
        if (*(int *)(lVar15 + 0x930) < *(int *)(lVar15 + 0x948)) {
          puVar9 = *(undefined8 **)(lVar15 + 0x938);
          if (puVar9 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar15 + 0x938) = *puVar9;
          }
          bVar5 = (uVar6 & 1) == 0;
          *puVar9 = 0;
          puVar12 = local_50 + 4;
          puVar2 = puVar12;
          if (bVar5) {
            puVar2 = local_58;
          }
          *(undefined1 *)puVar9 = *puVar2;
          puVar2 = puVar12;
          if (bVar5) {
            puVar2 = local_58;
          }
          *(undefined1 *)((long)puVar9 + 1) = *(undefined1 *)((ulong)puVar2 | 1);
          puVar2 = puVar12;
          if (bVar5) {
            puVar2 = local_58;
          }
          *(undefined1 *)((long)puVar9 + 2) = *(undefined1 *)((ulong)puVar2 | 2);
          if (bVar5) {
            puVar12 = local_58;
          }
          *(undefined1 *)((long)puVar9 + 3) = *(undefined1 *)((ulong)puVar12 | 3);
          puVar1 = &uStack_48;
          if (bVar5) {
            puVar1 = &local_54;
          }
          *(undefined4 *)((long)puVar9 + 4) = *puVar1;
          puVar2 = &uStack_44;
          if (bVar5) {
            puVar2 = local_50;
          }
          *(undefined1 *)(puVar9 + 1) = *puVar2;
          puVar2 = auStack_42;
          puVar12 = &uStack_43;
          if (bVar5) {
            puVar2 = local_50 + 2;
            puVar12 = local_50 + 1;
          }
          *(undefined1 *)((long)puVar9 + 9) = *puVar12;
          uVar4 = *puVar2;
          plVar10 = puVar9 + 2;
          *plVar10 = 0;
          puVar9[3] = 0;
          *(undefined1 *)((long)puVar9 + 10) = uVar4;
          puVar8 = *(undefined8 **)(lVar15 + 0x928);
          *(long **)(lVar15 + 0x928) = plVar10;
          *plVar10 = lVar15 + 0x920;
          puVar9[3] = puVar8;
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = plVar10;
          }
          *(int *)(lVar15 + 0x930) = *(int *)(lVar15 + 0x930) + 1;
        }
        FUN_0214d220(lVar15 + 0x8b0);
      }
    }
  }
  return;
}


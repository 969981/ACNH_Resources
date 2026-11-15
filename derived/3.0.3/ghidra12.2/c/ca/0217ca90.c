
void FUN_0217ca90(long param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *__src;
  long lVar5;
  char cVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int *piVar10;
  undefined8 *__dest;
  
  puVar4 = PTR_DAT_04bc2ac0;
  puVar3 = PTR_DAT_04bc2ab8;
  if (param_2 == (uint *)0x0) {
    return;
  }
  switch(param_3) {
  case 0:
    if (*param_2 != 0) {
      cVar6 = *PTR_DAT_04bc2ab8;
      do {
        if (cVar6 == '\0') {
          cVar6 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 4);
          if (-1 < (int)uVar2) {
            puVar8 = (undefined8 *)((ulong)uVar2 + (long)param_2);
            goto LAB_0217cba8;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*param_2;
        puVar8 = (undefined8 *)0x0;
        if ((*param_2 == 0) || (param_2 == puVar9)) goto LAB_0217cba8;
        lVar5 = 0xc;
        if (*(char *)((long)param_2 + (10 - (long)puVar9)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)param_2 + (lVar5 - (long)puVar9);
        if (lVar5 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
        puVar8 = (undefined8 *)0x0;
        if (uVar7 == 0) goto LAB_0217cba8;
        piVar10 = (int *)(lVar5 + 4);
        while (piVar10[-1] != -0x32e907bd) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            puVar8 = (undefined8 *)0x0;
            goto LAB_0217cba8;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 4) = iVar1;
      } while (*param_2 != 0);
    }
    puVar8 = (undefined8 *)0x0;
LAB_0217cba8:
    __dest = *(undefined8 **)(param_1 + 8);
    __src = &DAT_0407ebb1;
    if (puVar8 != (undefined8 *)0x0) {
      __src = puVar8;
    }
    if (__dest == __src) {
      return;
    }
    lVar5 = 0;
    do {
      if (*(char *)((long)__src + lVar5) == '\0') goto LAB_0217d45c;
      if (*(char *)((long)__src + lVar5 + 1) == '\0') goto LAB_0217d450;
      if (*(char *)((long)__src + lVar5 + 2) == '\0') goto LAB_0217d458;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  case 1:
    if (*param_2 != 0) {
      cVar6 = *PTR_DAT_04bc2ab8;
      do {
        if (cVar6 == '\0') {
          cVar6 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 8);
          if (-1 < (int)uVar2) {
            puVar8 = (undefined8 *)((ulong)uVar2 + (long)param_2);
            goto LAB_0217ccd8;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*param_2;
        puVar8 = (undefined8 *)0x0;
        if ((*param_2 == 0) || (param_2 == puVar9)) goto LAB_0217ccd8;
        lVar5 = 0xc;
        if (*(char *)((long)param_2 + (10 - (long)puVar9)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)param_2 + (lVar5 - (long)puVar9);
        if (lVar5 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
        puVar8 = (undefined8 *)0x0;
        if (uVar7 == 0) goto LAB_0217ccd8;
        piVar10 = (int *)(lVar5 + 4);
        while (piVar10[-1] != 0x26214340) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            puVar8 = (undefined8 *)0x0;
            goto LAB_0217ccd8;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 8) = iVar1;
      } while (*param_2 != 0);
    }
    puVar8 = (undefined8 *)0x0;
LAB_0217ccd8:
    __dest = *(undefined8 **)(param_1 + 8);
    __src = &DAT_0407ebb1;
    if (puVar8 != (undefined8 *)0x0) {
      __src = puVar8;
    }
    if (__dest == __src) {
      return;
    }
    lVar5 = 0;
    do {
      if (*(char *)((long)__src + lVar5) == '\0') goto LAB_0217d45c;
      if (*(char *)((long)__src + lVar5 + 1) == '\0') goto LAB_0217d450;
      if (*(char *)((long)__src + lVar5 + 2) == '\0') goto LAB_0217d458;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  case 2:
    if (*param_2 != 0) {
      cVar6 = *PTR_DAT_04bc2ab8;
      do {
        if (cVar6 == '\0') {
          cVar6 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0xc);
          if (-1 < (int)uVar2) {
            puVar8 = (undefined8 *)((ulong)uVar2 + (long)param_2);
            goto LAB_0217ce08;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*param_2;
        puVar8 = (undefined8 *)0x0;
        if ((*param_2 == 0) || (param_2 == puVar9)) goto LAB_0217ce08;
        lVar5 = 0xc;
        if (*(char *)((long)param_2 + (10 - (long)puVar9)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)param_2 + (lVar5 - (long)puVar9);
        if (lVar5 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
        puVar8 = (undefined8 *)0x0;
        if (uVar7 == 0) goto LAB_0217ce08;
        piVar10 = (int *)(lVar5 + 4);
        while (piVar10[-1] != -0x361cd782) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            puVar8 = (undefined8 *)0x0;
            goto LAB_0217ce08;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 0xc) = iVar1;
      } while (*param_2 != 0);
    }
    puVar8 = (undefined8 *)0x0;
LAB_0217ce08:
    __dest = *(undefined8 **)(param_1 + 8);
    __src = &DAT_0407ebb1;
    if (puVar8 != (undefined8 *)0x0) {
      __src = puVar8;
    }
    if (__dest == __src) {
      return;
    }
    lVar5 = 0;
    do {
      if (*(char *)((long)__src + lVar5) == '\0') goto LAB_0217d45c;
      if (*(char *)((long)__src + lVar5 + 1) == '\0') goto LAB_0217d450;
      if (*(char *)((long)__src + lVar5 + 2) == '\0') goto LAB_0217d458;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  case 3:
    if (*param_2 != 0) {
      cVar6 = *PTR_DAT_04bc2ab8;
      do {
        if (cVar6 == '\0') {
          cVar6 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x10);
          if (-1 < (int)uVar2) {
            puVar8 = (undefined8 *)((ulong)uVar2 + (long)param_2);
            goto LAB_0217cf38;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*param_2;
        puVar8 = (undefined8 *)0x0;
        if ((*param_2 == 0) || (param_2 == puVar9)) goto LAB_0217cf38;
        lVar5 = 0xc;
        if (*(char *)((long)param_2 + (10 - (long)puVar9)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)param_2 + (lVar5 - (long)puVar9);
        if (lVar5 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
        puVar8 = (undefined8 *)0x0;
        if (uVar7 == 0) goto LAB_0217cf38;
        piVar10 = (int *)(lVar5 + 4);
        while (piVar10[-1] != 0x2b3f3307) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            puVar8 = (undefined8 *)0x0;
            goto LAB_0217cf38;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 0x10) = iVar1;
      } while (*param_2 != 0);
    }
    puVar8 = (undefined8 *)0x0;
LAB_0217cf38:
    __dest = *(undefined8 **)(param_1 + 8);
    __src = &DAT_0407ebb1;
    if (puVar8 != (undefined8 *)0x0) {
      __src = puVar8;
    }
    if (__dest == __src) {
      return;
    }
    lVar5 = 0;
    do {
      if (*(char *)((long)__src + lVar5) == '\0') goto LAB_0217d45c;
      if (*(char *)((long)__src + lVar5 + 1) == '\0') goto LAB_0217d450;
      if (*(char *)((long)__src + lVar5 + 2) == '\0') goto LAB_0217d458;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  case 4:
    if (*param_2 != 0) {
      cVar6 = *PTR_DAT_04bc2ab8;
      do {
        if (cVar6 == '\0') {
          cVar6 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x14);
          if (-1 < (int)uVar2) {
            puVar8 = (undefined8 *)((ulong)uVar2 + (long)param_2);
            goto LAB_0217d068;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*param_2;
        puVar8 = (undefined8 *)0x0;
        if ((*param_2 == 0) || (param_2 == puVar9)) goto LAB_0217d068;
        lVar5 = 0xc;
        if (*(char *)((long)param_2 + (10 - (long)puVar9)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)param_2 + (lVar5 - (long)puVar9);
        if (lVar5 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
        puVar8 = (undefined8 *)0x0;
        if (uVar7 == 0) goto LAB_0217d068;
        piVar10 = (int *)(lVar5 + 4);
        while (piVar10[-1] != -0x3b02a7c7) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            puVar8 = (undefined8 *)0x0;
            goto LAB_0217d068;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 0x14) = iVar1;
      } while (*param_2 != 0);
    }
    puVar8 = (undefined8 *)0x0;
LAB_0217d068:
    __dest = *(undefined8 **)(param_1 + 8);
    __src = &DAT_0407ebb1;
    if (puVar8 != (undefined8 *)0x0) {
      __src = puVar8;
    }
    if (__dest == __src) {
      return;
    }
    lVar5 = 0;
    do {
      if (*(char *)((long)__src + lVar5) == '\0') goto LAB_0217d45c;
      if (*(char *)((long)__src + lVar5 + 1) == '\0') goto LAB_0217d450;
      if (*(char *)((long)__src + lVar5 + 2) == '\0') goto LAB_0217d458;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  case 5:
    if (*param_2 != 0) {
      cVar6 = *PTR_DAT_04bc2ab8;
      do {
        if (cVar6 == '\0') {
          cVar6 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x18);
          if (-1 < (int)uVar2) {
            puVar8 = (undefined8 *)((ulong)uVar2 + (long)param_2);
            goto LAB_0217d198;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*param_2;
        puVar8 = (undefined8 *)0x0;
        if ((*param_2 == 0) || (param_2 == puVar9)) goto LAB_0217d198;
        lVar5 = 0xc;
        if (*(char *)((long)param_2 + (10 - (long)puVar9)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)param_2 + (lVar5 - (long)puVar9);
        if (lVar5 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
        puVar8 = (undefined8 *)0x0;
        if (uVar7 == 0) goto LAB_0217d198;
        piVar10 = (int *)(lVar5 + 4);
        while (piVar10[-1] != 0x2fcae33a) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            puVar8 = (undefined8 *)0x0;
            goto LAB_0217d198;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 0x18) = iVar1;
      } while (*param_2 != 0);
    }
    puVar8 = (undefined8 *)0x0;
LAB_0217d198:
    __dest = *(undefined8 **)(param_1 + 8);
    __src = &DAT_0407ebb1;
    if (puVar8 != (undefined8 *)0x0) {
      __src = puVar8;
    }
    if (__dest == __src) {
      return;
    }
    lVar5 = 0;
    do {
      if (*(char *)((long)__src + lVar5) == '\0') goto LAB_0217d45c;
      if (*(char *)((long)__src + lVar5 + 1) == '\0') goto LAB_0217d450;
      if (*(char *)((long)__src + lVar5 + 2) == '\0') goto LAB_0217d458;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  case 6:
    if (*param_2 != 0) {
      cVar6 = *PTR_DAT_04bc2ab8;
      do {
        if (cVar6 == '\0') {
          cVar6 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x1c);
          if (-1 < (int)uVar2) {
            puVar8 = (undefined8 *)((ulong)uVar2 + (long)param_2);
            goto LAB_0217d2c8;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*param_2;
        puVar8 = (undefined8 *)0x0;
        if ((*param_2 == 0) || (param_2 == puVar9)) goto LAB_0217d2c8;
        lVar5 = 0xc;
        if (*(char *)((long)param_2 + (10 - (long)puVar9)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)param_2 + (lVar5 - (long)puVar9);
        if (lVar5 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x1c) = 0xfffffffe;
        puVar8 = (undefined8 *)0x0;
        if (uVar7 == 0) goto LAB_0217d2c8;
        piVar10 = (int *)(lVar5 + 4);
        while (piVar10[-1] != -0x3ff777fc) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            puVar8 = (undefined8 *)0x0;
            goto LAB_0217d2c8;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 0x1c) = iVar1;
      } while (*param_2 != 0);
    }
    puVar8 = (undefined8 *)0x0;
LAB_0217d2c8:
    __dest = *(undefined8 **)(param_1 + 8);
    __src = &DAT_0407ebb1;
    if (puVar8 != (undefined8 *)0x0) {
      __src = puVar8;
    }
    if (__dest == __src) {
      return;
    }
    lVar5 = 0;
    do {
      if (*(char *)((long)__src + lVar5) == '\0') goto LAB_0217d45c;
      if (*(char *)((long)__src + lVar5 + 1) == '\0') goto LAB_0217d450;
      if (*(char *)((long)__src + lVar5 + 2) == '\0') goto LAB_0217d458;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  case 7:
    if (*param_2 != 0) {
      cVar6 = *PTR_DAT_04bc2ab8;
      do {
        if (cVar6 == '\0') {
          cVar6 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x20);
          if (-1 < (int)uVar2) {
            puVar8 = (undefined8 *)((ulong)uVar2 + (long)param_2);
            goto LAB_0217d3f8;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*param_2;
        puVar8 = (undefined8 *)0x0;
        if ((*param_2 == 0) || (param_2 == puVar9)) goto LAB_0217d3f8;
        lVar5 = 0xc;
        if (*(char *)((long)param_2 + (10 - (long)puVar9)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)param_2 + (lVar5 - (long)puVar9);
        if (lVar5 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
        puVar8 = (undefined8 *)0x0;
        if (uVar7 == 0) goto LAB_0217d3f8;
        piVar10 = (int *)(lVar5 + 4);
        while (piVar10[-1] != 0x3103d389) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            puVar8 = (undefined8 *)0x0;
            goto LAB_0217d3f8;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar4 + 0x20) = iVar1;
      } while (*param_2 != 0);
    }
    puVar8 = (undefined8 *)0x0;
LAB_0217d3f8:
    __dest = *(undefined8 **)(param_1 + 8);
    __src = &DAT_0407ebb1;
    if (puVar8 != (undefined8 *)0x0) {
      __src = puVar8;
    }
    if (__dest == __src) {
      return;
    }
    lVar5 = 0;
    do {
      if (*(char *)((long)__src + lVar5) == '\0') goto LAB_0217d45c;
      if (*(char *)((long)__src + lVar5 + 1) == '\0') goto LAB_0217d450;
      if (*(char *)((long)__src + lVar5 + 2) == '\0') goto LAB_0217d458;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  default:
    goto switchD_0217cac0_default;
  }
  lVar5 = 0;
LAB_0217d45c:
  iVar1 = (int)lVar5;
  if (*(int *)(param_1 + 0x10) <= (int)lVar5) {
    iVar1 = *(int *)(param_1 + 0x10) + -1;
  }
  memcpy(__dest,__src,(long)iVar1);
  *(undefined1 *)((long)__dest + (long)iVar1) = 0;
switchD_0217cac0_default:
  return;
LAB_0217d450:
  lVar5 = lVar5 + 1;
  goto LAB_0217d45c;
LAB_0217d458:
  lVar5 = lVar5 + 2;
  goto LAB_0217d45c;
}


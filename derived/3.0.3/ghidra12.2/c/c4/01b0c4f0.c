
undefined2 FUN_01b0c4f0(uint *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  
  puVar6 = PTR_DAT_04bbffb0;
  puVar5 = PTR_DAT_04bbffa8;
  switch(param_2) {
  case 0:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x20);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) {
LAB_01b0d25c:
            if ((undefined2 *)(uVar7 + (long)param_1) == (undefined2 *)0x0) {
              return 0;
            }
            return *(undefined2 *)(uVar7 + (long)param_1);
          }
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != -0x7009cce5) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 0x20) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 1:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x2c);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != 0x68832f05) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 0x2c) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 2:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x30);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 0x30) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != -0xf0c83ca) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 0x30) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 3:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x34);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 0x34) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != 0x4b072728) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 0x34) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  default:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x2c);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != 0x68832f05) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 0x2c) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 5:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 8);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != 0x77e82b14) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 8) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 6:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0xc);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != -0x106787d9) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 0xc) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 7:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x10);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != 0x546c2339) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 0x10) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 8:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 4);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != -0x349b3660) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 4) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 9:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x14);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != 0x2a7a644c) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 0x14) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 0xb:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x18);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != 0x67ef88b7) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 0x18) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 0xc:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x1c);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != 0x7e0bbfa4) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 0x1c) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 0xd:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x24);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != -0x5f50b098) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 0x24) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 0xe:
    uVar3 = *param_1;
    if (uVar3 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          uVar3 = *param_1;
        }
        else {
          uVar4 = *(uint *)puVar6;
          uVar7 = (ulong)uVar4;
          if (-1 < (int)uVar4) goto LAB_01b0d25c;
          if (uVar4 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)uVar3;
        if (puVar9 == (uint *)0x0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)puVar6 = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != -0x566150b7) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)puVar6 = iVar1;
        uVar3 = *param_1;
      } while (uVar3 != 0);
    }
    break;
  case 0xf:
    if (*param_1 != 0) {
      cVar8 = *PTR_DAT_04bbffa8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar6 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x28);
          uVar7 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_01b0d25c;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar9) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
        *(undefined4 *)(puVar6 + 0x28) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != 0x2da64e66) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar6 + 0x28) = iVar1;
      } while (*param_1 != 0);
    }
  }
  return 0;
}


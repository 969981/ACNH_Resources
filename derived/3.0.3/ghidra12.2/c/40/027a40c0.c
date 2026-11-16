
undefined4 FUN_027a40c0(uint *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  char cVar7;
  uint *puVar8;
  int *piVar9;
  
  puVar5 = PTR_DAT_04bb6448;
  puVar4 = PTR_DAT_04bb6440;
  if (param_1 == (uint *)0x0) {
switchD_027a40e4_default:
    return 0;
  }
  switch(param_2) {
  case 1:
    if (*param_1 != 0) {
      cVar7 = *PTR_DAT_04bb6440;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0xc);
          uVar6 = (ulong)uVar3;
          if (-1 < (int)uVar3) {
LAB_027a4574:
            if ((undefined4 *)(uVar6 + (long)param_1) == (undefined4 *)0x0) {
              return 0;
            }
            return *(undefined4 *)(uVar6 + (long)param_1);
          }
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
        if (uVar6 == 0) {
          return 0;
        }
        piVar9 = (int *)(lVar2 + 4);
        while (piVar9[-1] != -0x31f6cc04) {
          piVar9 = piVar9 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar9 != -1) {
          iVar1 = *piVar9;
        }
        *(int *)(puVar5 + 0xc) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 2:
    if (*param_1 != 0) {
      cVar7 = *PTR_DAT_04bb6440;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x10);
          uVar6 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_027a4574;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
        if (uVar6 == 0) {
          return 0;
        }
        piVar9 = (int *)(lVar2 + 4);
        while (piVar9[-1] != -0x7656b6d4) {
          piVar9 = piVar9 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar9 != -1) {
          iVar1 = *piVar9;
        }
        *(int *)(puVar5 + 0x10) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 3:
    if (*param_1 != 0) {
      cVar7 = *PTR_DAT_04bb6440;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x14);
          uVar6 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_027a4574;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
        if (uVar6 == 0) {
          return 0;
        }
        piVar9 = (int *)(lVar2 + 4);
        while (piVar9[-1] != -0x4b369f64) {
          piVar9 = piVar9 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar9 != -1) {
          iVar1 = *piVar9;
        }
        *(int *)(puVar5 + 0x14) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 4:
    if (*param_1 != 0) {
      cVar7 = *PTR_DAT_04bb6440;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x18);
          uVar6 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_027a4574;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
        if (uVar6 == 0) {
          return 0;
        }
        piVar9 = (int *)(lVar2 + 4);
        while (piVar9[-1] != 0x6e9bc8c) {
          piVar9 = piVar9 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar9 != -1) {
          iVar1 = *piVar9;
        }
        *(int *)(puVar5 + 0x18) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  case 5:
    if (*param_1 != 0) {
      cVar7 = *PTR_DAT_04bb6440;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x1c);
          uVar6 = (ulong)uVar3;
          if (-1 < (int)uVar3) goto LAB_027a4574;
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar8 = (uint *)(ulong)*param_1;
        if (*param_1 == 0) {
          return 0;
        }
        if (param_1 == puVar8) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)param_1 + (10 - (long)puVar8)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)param_1 + (lVar2 - (long)puVar8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar8));
        *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
        if (uVar6 == 0) {
          return 0;
        }
        piVar9 = (int *)(lVar2 + 4);
        while (piVar9[-1] != 0x3b89953c) {
          piVar9 = piVar9 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar9 != -1) {
          iVar1 = *piVar9;
        }
        *(int *)(puVar5 + 0x1c) = iVar1;
      } while (*param_1 != 0);
    }
    break;
  default:
    goto switchD_027a40e4_default;
  }
  return 0;
}


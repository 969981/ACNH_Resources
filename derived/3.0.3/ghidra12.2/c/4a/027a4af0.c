
undefined4 FUN_027a4af0(long *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  undefined4 local_14;
  
  lVar9 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))();
  local_14 = FUN_006bd550(param_1[1],0);
  puVar6 = (uint *)FUN_01b1ee90(lVar9 + 0x1b80,&local_14);
  puVar5 = PTR_DAT_04bb6448;
  puVar4 = PTR_DAT_04bb6440;
  if (puVar6 == (uint *)0x0) {
switchD_027a4b68_default:
  }
  else {
    switch(param_2) {
    case 1:
      if (*puVar6 != 0) {
        cVar10 = *PTR_DAT_04bb6440;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
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
            uVar3 = *(uint *)(puVar5 + 0x20);
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) {
LAB_027a50dc:
              puVar8 = (undefined4 *)(uVar7 + (long)puVar6);
              if (puVar8 == (undefined4 *)0x0) {
                return 0;
              }
LAB_027a50e4:
              return *puVar8;
            }
            if (uVar3 != 0xffffffff) goto switchD_027a4b68_default;
          }
          puVar12 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0;
          }
          if (puVar6 == puVar12) {
            return 0;
          }
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + (lVar9 - (long)puVar12);
          if (lVar9 == 0) goto switchD_027a4b68_default;
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0;
          }
          piVar13 = (int *)(lVar9 + 4);
          while (piVar13[-1] != 0x4e7f3849) {
            piVar13 = piVar13 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0;
            }
          }
          iVar1 = 0;
          if (*piVar13 != -1) {
            iVar1 = *piVar13;
          }
          *(int *)(puVar5 + 0x20) = iVar1;
        } while (*puVar6 != 0);
      }
      break;
    case 2:
      if (*puVar6 != 0) {
        cVar10 = *PTR_DAT_04bb6440;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
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
            uVar3 = *(uint *)(puVar5 + 0x24);
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_027a50dc;
            if (uVar3 != 0xffffffff) goto switchD_027a4b68_default;
          }
          puVar12 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0;
          }
          if (puVar6 == puVar12) {
            return 0;
          }
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + (lVar9 - (long)puVar12);
          if (lVar9 == 0) goto switchD_027a4b68_default;
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 0x24) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0;
          }
          piVar13 = (int *)(lVar9 + 4);
          while (piVar13[-1] != 0x9df4299) {
            piVar13 = piVar13 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0;
            }
          }
          iVar1 = 0;
          if (*piVar13 != -1) {
            iVar1 = *piVar13;
          }
          *(int *)(puVar5 + 0x24) = iVar1;
        } while (*puVar6 != 0);
      }
      break;
    case 3:
      if (*puVar6 != 0) {
        cVar10 = *PTR_DAT_04bb6440;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
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
            uVar3 = *(uint *)(puVar5 + 0x28);
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_027a50dc;
            if (uVar3 != 0xffffffff) goto switchD_027a4b68_default;
          }
          puVar12 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0;
          }
          if (puVar6 == puVar12) {
            return 0;
          }
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + (lVar9 - (long)puVar12);
          if (lVar9 == 0) goto switchD_027a4b68_default;
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0;
          }
          piVar13 = (int *)(lVar9 + 4);
          while (piVar13[-1] != 0x34bf6b29) {
            piVar13 = piVar13 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0;
            }
          }
          iVar1 = 0;
          if (*piVar13 != -1) {
            iVar1 = *piVar13;
          }
          *(int *)(puVar5 + 0x28) = iVar1;
        } while (*puVar6 != 0);
      }
      break;
    case 4:
      if (*puVar6 != 0) {
        cVar10 = *PTR_DAT_04bb6440;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
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
            uVar3 = *(uint *)(puVar5 + 0x2c);
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_027a50dc;
            if (uVar3 != 0xffffffff) goto switchD_027a4b68_default;
          }
          puVar12 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0;
          }
          if (puVar6 == puVar12) {
            return 0;
          }
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + (lVar9 - (long)puVar12);
          if (lVar9 == 0) goto switchD_027a4b68_default;
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0;
          }
          piVar13 = (int *)(lVar9 + 4);
          while (piVar13[-1] != -0x796048c7) {
            piVar13 = piVar13 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0;
            }
          }
          iVar1 = 0;
          if (*piVar13 != -1) {
            iVar1 = *piVar13;
          }
          *(int *)(puVar5 + 0x2c) = iVar1;
        } while (*puVar6 != 0);
      }
      break;
    case 5:
      if (*puVar6 != 0) {
        cVar10 = *PTR_DAT_04bb6440;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
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
            uVar3 = *(uint *)(puVar5 + 0x30);
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_027a50dc;
            if (uVar3 != 0xffffffff) goto switchD_027a4b68_default;
          }
          puVar12 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0;
          }
          if (puVar6 == puVar12) {
            return 0;
          }
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + (lVar9 - (long)puVar12);
          if (lVar9 == 0) goto switchD_027a4b68_default;
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 0x30) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0;
          }
          piVar13 = (int *)(lVar9 + 4);
          while (piVar13[-1] != -0x44006177) {
            piVar13 = piVar13 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0;
            }
          }
          iVar1 = 0;
          if (*piVar13 != -1) {
            iVar1 = *piVar13;
          }
          *(int *)(puVar5 + 0x30) = iVar1;
        } while (*puVar6 != 0);
      }
      break;
    case 6:
      if (*puVar6 != 0) {
        cVar10 = *PTR_DAT_04bb6440;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
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
            uVar3 = *(uint *)(puVar5 + 0x44);
            if (-1 < (int)uVar3) {
              if ((char *)((ulong)uVar3 + (long)puVar6) == (char *)0x0) {
                return 0;
              }
              if (*(char *)((ulong)uVar3 + (long)puVar6) == '\0') {
                return 0;
              }
              uVar3 = *puVar6;
              if (uVar3 == 0) goto switchD_027a4b68_default;
              uVar11 = *(uint *)(puVar5 + 0x34);
              goto LAB_027a511c;
            }
            if (uVar3 != 0xffffffff) goto switchD_027a4b68_default;
          }
          puVar12 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0;
          }
          if (puVar6 == puVar12) {
            return 0;
          }
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + (lVar9 - (long)puVar12);
          if (lVar9 == 0) goto switchD_027a4b68_default;
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 0x44) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0;
          }
          piVar13 = (int *)(lVar9 + 4);
          while (piVar13[-1] != -0x76abbd24) {
            piVar13 = piVar13 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0;
            }
          }
          iVar1 = 0;
          if (*piVar13 != -1) {
            iVar1 = *piVar13;
          }
          *(int *)(puVar5 + 0x44) = iVar1;
          if (*puVar6 == 0) {
            return 0;
          }
        } while( true );
      }
      break;
    default:
      goto switchD_027a4b68_default;
    }
  }
  return 0;
LAB_027a511c:
  if (-1 < (int)uVar11) {
    puVar8 = (undefined4 *)((long)puVar6 + (ulong)uVar11);
    if (puVar8 == (undefined4 *)0x0) {
      return 0;
    }
    goto LAB_027a50e4;
  }
  if (uVar11 != 0xffffffff) goto switchD_027a4b68_default;
  lVar9 = (long)puVar6 - (ulong)uVar3;
  if (lVar9 == 0) {
    return 0;
  }
  lVar2 = 0xc;
  if (*(char *)(lVar9 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar9 == 0) goto switchD_027a4b68_default;
  uVar7 = (ulong)*(ushort *)(lVar9 + 8);
  *(undefined4 *)(puVar5 + 0x34) = 0xfffffffe;
  if (uVar7 == 0) goto switchD_027a4b68_default;
  puVar12 = (uint *)(lVar2 + lVar9 + 4);
  while (puVar12[-1] != 0xfc5fe459) {
    puVar12 = puVar12 + 2;
    uVar7 = uVar7 - 1;
    if (uVar7 == 0) {
      return 0;
    }
  }
  uVar11 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar11 = *puVar12;
  }
  *(uint *)(puVar5 + 0x34) = uVar11;
  uVar3 = *puVar6;
  if (uVar3 == 0) {
    return 0;
  }
  goto LAB_027a511c;
}


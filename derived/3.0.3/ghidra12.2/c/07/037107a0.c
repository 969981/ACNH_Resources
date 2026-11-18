
undefined2 FUN_037107a0(long *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  undefined4 local_24;
  
  lVar2 = DAT_05aba420;
  if (DAT_05aba420 != 0) {
    (**(code **)(*param_1 + 0x18))();
    local_24 = FUN_006bd550(param_1[1],0);
    puVar6 = (uint *)FUN_03718680(lVar2,&local_24);
    puVar5 = PTR_DAT_04bc0678;
    puVar4 = PTR_DAT_04bc0670;
    if (puVar6 != (uint *)0x0) {
      switch(param_2) {
      case 0:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        break;
      case 1:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            uVar3 = *(uint *)(puVar5 + 0x34);
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x34) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != -0x33286b2f) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0x34) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      case 2:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            uVar3 = *(uint *)(puVar5 + 0x38);
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x38) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != 0x54a7c7e2) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0x38) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      case 3:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            uVar3 = *(uint *)(puVar5 + 0x3c);
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != -0x10ac6304) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0x3c) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      default:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            uVar3 = *(uint *)(puVar5 + 0x34);
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x34) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != -0x33286b2f) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0x34) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      case 5:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != -0x2c436f40) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0x10) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      case 6:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != 0x4bccc3f3) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0x14) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      case 7:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != -0xfc76713) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0x18) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      case 8:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != 0x6f307274) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0xc) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      case 9:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != -0x71d12068) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0x1c) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      case 0xb:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != -0x3c44cc9d) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0x20) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      case 0xc:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x24) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != -0x25a0fb90) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0x24) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      case 0xd:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != 0x4fbf4bc) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0x2c) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      case 0xe:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            uVar3 = *(uint *)(puVar5 + 8);
            uVar7 = (ulong)uVar3;
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != 0xdca149d) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 8) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      case 0xf:
        if (*puVar6 == 0) {
          return 0xffff;
        }
        cVar8 = *PTR_DAT_04bc0670;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
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
            if (-1 < (int)uVar3) goto LAB_03711620;
            if (uVar3 != 0xffffffff) {
              return 0xffff;
            }
          }
          puVar9 = (uint *)(ulong)*puVar6;
          if (*puVar6 == 0) {
            return 0xffff;
          }
          if (puVar6 == puVar9) {
            return 0xffff;
          }
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
          if (lVar2 == 0) {
            return 0xffff;
          }
          uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x30) = 0xfffffffe;
          if (uVar7 == 0) {
            return 0xffff;
          }
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != -0x760d0a4e) {
            piVar10 = piVar10 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return 0xffff;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar5 + 0x30) = iVar1;
          if (*puVar6 == 0) {
            return 0xffff;
          }
        } while( true );
      }
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
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
          if (-1 < (int)uVar3) {
LAB_03711620:
            if ((undefined2 *)(uVar7 + (long)puVar6) == (undefined2 *)0x0) {
              return 0xffff;
            }
            return *(undefined2 *)(uVar7 + (long)puVar6);
          }
          if (uVar3 != 0xffffffff) {
            return 0xffff;
          }
        }
        puVar9 = (uint *)(ulong)*puVar6;
        if (*puVar6 == 0) {
          return 0xffff;
        }
        if (puVar6 == puVar9) {
          return 0xffff;
        }
        lVar2 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0xffff;
        }
        uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
        *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
        if (uVar7 == 0) {
          return 0xffff;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != 0x2ba288cf) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            return 0xffff;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar5 + 0x28) = iVar1;
        if (*puVar6 == 0) {
          return 0xffff;
        }
      } while( true );
    }
  }
  return 0;
}


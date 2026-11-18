
undefined8 FUN_036ffe70(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  
  puVar3 = PTR_DAT_04bc2550;
  puVar2 = PTR_DAT_04bc2548;
  uVar7 = (uint)(DAT_0545c458 != -1);
  if (DAT_0545c45c != -1) {
    uVar7 = uVar7 + 1;
  }
  if ((int)param_2 < (int)uVar7) {
    puVar6 = (uint *)(&DAT_0545c458 + param_2);
    if (1 < param_2) {
      puVar6 = (uint *)&DAT_0545c458;
    }
    uVar7 = *puVar6;
    if (uVar7 != 0xffffffff && (int)uVar7 < 0x10) {
      puVar8 = &DAT_0545b240 + (ulong)uVar7 * 0x118;
      if (0xf < uVar7) {
        puVar8 = &DAT_0545b240;
      }
      if (puVar8[0x8c] != '\0') {
        uVar7 = *(uint *)(puVar8 + 0xa4);
        if ((int)*(uint *)(param_1 + 0x598) < 1) {
          if (*(long *)(param_1 + 0x488) == 0) {
            return 0;
          }
          puVar6 = *(uint **)(*(long *)(param_1 + 0x488) + 8);
          if (puVar6 == (uint *)0x0) {
            return 0;
          }
          if ((uVar7 < *(uint *)(param_1 + 0x4a0)) &&
             (*(char *)(*(long *)(param_1 + 0x4a8) + (long)(int)uVar7) == '\0')) {
            return 0;
          }
          if (*puVar6 <= uVar7) {
            return 0;
          }
          if (puVar6[1] == 0) {
            return 0;
          }
          if ((ushort)puVar6[2] == 0) {
            return 0;
          }
          iVar9 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          puVar6 = (uint *)((ulong)(puVar6[1] * uVar7 + (uint)(ushort)puVar6[2] * 8 + iVar9) +
                           (long)puVar6);
        }
        else {
          if (*(uint *)(param_1 + 0x598) <= uVar7) {
            return 0;
          }
          if (*(uint *)(param_1 + 0x588) <= uVar7) {
            uVar7 = 0;
          }
          puVar6 = *(uint **)(*(long *)(param_1 + 0x590) + (ulong)uVar7 * 8);
        }
        if (puVar6 != (uint *)0x0) {
          if (*puVar6 == 0) {
LAB_0370005c:
            uVar5 = FUN_036d7990(0);
            return uVar5;
          }
          cVar10 = *PTR_DAT_04bc2548;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar7 = *(uint *)(puVar3 + 0xc);
              if (-1 < (int)uVar7) {
                if ((undefined2 *)((ulong)uVar7 + (long)puVar6) != (undefined2 *)0x0) {
                  uVar4 = *(undefined2 *)((ulong)uVar7 + (long)puVar6);
                  goto LAB_03700058;
                }
                goto LAB_0370005c;
              }
              if (uVar7 != 0xffffffff) goto LAB_0370005c;
            }
            puVar11 = (uint *)(ulong)*puVar6;
            uVar4 = 0;
            if ((*puVar6 == 0) || (puVar6 == puVar11)) {
LAB_03700058:
              uVar5 = FUN_036d7990(uVar4);
              return uVar5;
            }
            lVar1 = 0xc;
            if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar6 + (lVar1 - (long)puVar11);
            if (lVar1 == 0) goto LAB_0370005c;
            uVar12 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
            *(undefined4 *)(puVar3 + 0xc) = 0xfffffffe;
            if (uVar12 == 0) goto LAB_0370005c;
            piVar13 = (int *)(lVar1 + 4);
            while (piVar13[-1] != 0x36c903a7) {
              piVar13 = piVar13 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_0370005c;
            }
            iVar9 = 0;
            if (*piVar13 != -1) {
              iVar9 = *piVar13;
            }
            *(int *)(puVar3 + 0xc) = iVar9;
            if (*puVar6 == 0) goto LAB_0370005c;
          } while( true );
        }
      }
    }
  }
  return 0;
}


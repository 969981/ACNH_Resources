
undefined8 FUN_0170a950(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar5 = (uint *)FUN_0171ee68(param_2);
  puVar4 = PTR_DAT_04bbde90;
  puVar3 = PTR_DAT_04bbde88;
  uVar7 = 0;
  if (puVar5 != (uint *)0x0) {
    switch(*param_1) {
    case 0:
    case 5:
      if (*puVar5 != 0) {
        cVar9 = *PTR_DAT_04bbde88;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            uVar8 = *puVar5;
          }
          else {
            uVar8 = *(uint *)(puVar4 + 0x28);
            if (-1 < (int)uVar8) {
              if ((byte *)((ulong)uVar8 + (long)puVar5) != (byte *)0x0) {
                uVar6 = (uint)*(byte *)((ulong)uVar8 + (long)puVar5);
                uVar8 = 0;
LAB_0170acbc:
                if ((uVar6 >> (ulong)uVar8 & 1) != 0) {
                  return 0;
                }
              }
              break;
            }
            if (uVar8 != 0xffffffff) break;
            uVar8 = *puVar5;
          }
          if ((uVar8 == 0) || (puVar10 = (uint *)(ulong)uVar8, puVar5 == puVar10)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar5 + (lVar2 - (long)puVar10);
          if (lVar2 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x28) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar12 = (int *)(lVar2 + 4);
          while (piVar12[-1] != -0x45e66210) {
            piVar12 = piVar12 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_0170acd0;
          }
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar4 + 0x28) = iVar1;
          if (*puVar5 == 0) break;
        } while( true );
      }
      break;
    case 1:
      if (*puVar5 != 0) {
        cVar9 = *PTR_DAT_04bbde88;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            uVar8 = *puVar5;
          }
          else {
            uVar8 = *(uint *)(puVar4 + 0x28);
            if (-1 < (int)uVar8) {
              if ((byte *)((ulong)uVar8 + (long)puVar5) != (byte *)0x0) {
                uVar6 = (uint)*(byte *)((ulong)uVar8 + (long)puVar5);
                uVar8 = 1;
                goto LAB_0170acbc;
              }
              break;
            }
            if (uVar8 != 0xffffffff) break;
            uVar8 = *puVar5;
          }
          if ((uVar8 == 0) || (puVar10 = (uint *)(ulong)uVar8, puVar5 == puVar10)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar5 + (lVar2 - (long)puVar10);
          if (lVar2 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x28) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar12 = (int *)(lVar2 + 4);
          while (piVar12[-1] != -0x45e66210) {
            piVar12 = piVar12 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_0170acd0;
          }
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar4 + 0x28) = iVar1;
          if (*puVar5 == 0) break;
        } while( true );
      }
      break;
    default:
      goto switchD_0170a994_caseD_2;
    case 3:
      if (*puVar5 != 0) {
        cVar9 = *PTR_DAT_04bbde88;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            uVar8 = *puVar5;
          }
          else {
            uVar8 = *(uint *)(puVar4 + 0x28);
            if (-1 < (int)uVar8) {
              if ((byte *)((ulong)uVar8 + (long)puVar5) != (byte *)0x0) {
                uVar6 = (uint)*(byte *)((ulong)uVar8 + (long)puVar5);
                uVar8 = 2;
                goto LAB_0170acbc;
              }
              break;
            }
            if (uVar8 != 0xffffffff) break;
            uVar8 = *puVar5;
          }
          if ((uVar8 == 0) || (puVar10 = (uint *)(ulong)uVar8, puVar5 == puVar10)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar5 + (lVar2 - (long)puVar10);
          if (lVar2 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x28) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar12 = (int *)(lVar2 + 4);
          while (piVar12[-1] != -0x45e66210) {
            piVar12 = piVar12 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_0170acd0;
          }
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar4 + 0x28) = iVar1;
          if (*puVar5 == 0) break;
        } while( true );
      }
    }
LAB_0170acd0:
    uVar7 = 1;
  }
switchD_0170a994_caseD_2:
  return uVar7;
}


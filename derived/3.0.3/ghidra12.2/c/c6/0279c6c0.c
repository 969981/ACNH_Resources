
void FUN_0279c6c0(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  byte *pbVar7;
  char cVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  ulong uVar12;
  undefined4 local_24;
  
  if (0 < (int)param_3) {
    lVar6 = *(long *)PTR_DAT_04bb2208;
    (**(code **)(*param_2 + 0x18))(param_2);
    local_24 = FUN_006bd550(param_2[1],0);
    puVar5 = (uint *)FUN_01b1ee90(lVar6 + 0x1b80,&local_24);
    puVar4 = PTR_DAT_04bb6448;
    puVar3 = PTR_DAT_04bb6440;
    if (puVar5 != (uint *)0x0) {
      if (*puVar5 == 0) {
LAB_0279c81c:
        uVar9 = 0;
      }
      else {
        cVar8 = *PTR_DAT_04bb6440;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar9 = *(uint *)(puVar4 + 0x4c);
            if (-1 < (int)uVar9) {
              if ((byte *)((ulong)uVar9 + (long)puVar5) == (byte *)0x0) goto LAB_0279c81c;
              uVar9 = (uint)*(byte *)((ulong)uVar9 + (long)puVar5);
              goto LAB_0279c820;
            }
            if (uVar9 != 0xffffffff) goto LAB_0279c81c;
          }
          puVar11 = (uint *)(ulong)*puVar5;
          uVar9 = 0;
          if ((*puVar5 == 0) || (puVar5 == puVar11)) goto LAB_0279c820;
          lVar6 = 0xc;
          if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar5 + (lVar6 - (long)puVar11);
          if (lVar6 == 0) goto LAB_0279c81c;
          uVar12 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
          *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
          uVar9 = 0;
          if (uVar12 == 0) goto LAB_0279c820;
          piVar10 = (int *)(lVar6 + 4);
          while (piVar10[-1] != 0x1be772f0) {
            piVar10 = piVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              uVar9 = 0;
              goto LAB_0279c820;
            }
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          *(int *)(puVar4 + 0x4c) = iVar1;
        } while (*puVar5 != 0);
        uVar9 = 0;
      }
LAB_0279c820:
      puVar4 = PTR_DAT_04bb6448;
      puVar3 = PTR_DAT_04bb6440;
      if (param_3 <= uVar9) {
        pbVar7 = (byte *)(param_1 + 0x5298);
        if (*puVar5 != 0) {
          cVar8 = *PTR_DAT_04bb6440;
          do {
            if (cVar8 == '\0') {
              cVar8 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              uVar9 = *puVar5;
            }
            else {
              uVar9 = *(uint *)(puVar4 + 0x3c);
              if (-1 < (int)uVar9) {
                if (((ushort *)((ulong)uVar9 + (long)puVar5) != (ushort *)0x0) &&
                   (uVar2 = *(ushort *)((ulong)uVar9 + (long)puVar5), uVar2 < 0x200)) {
                  pbVar7 = pbVar7 + uVar2;
                }
                break;
              }
              if (uVar9 != 0xffffffff) break;
              uVar9 = *puVar5;
            }
            if ((uVar9 == 0) || (puVar11 = (uint *)(ulong)uVar9, puVar5 == puVar11)) break;
            lVar6 = 0xc;
            if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar5 + (lVar6 - (long)puVar11);
            if (lVar6 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
            *(undefined4 *)(puVar4 + 0x3c) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar10 = (int *)(lVar6 + 4);
            while (piVar10[-1] != 0x54706054) {
              piVar10 = piVar10 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_0279c934;
            }
            iVar1 = 0;
            if (*piVar10 != -1) {
              iVar1 = *piVar10;
            }
            *(int *)(puVar4 + 0x3c) = iVar1;
            if (*puVar5 == 0) break;
          } while( true );
        }
LAB_0279c934:
        *pbVar7 = *pbVar7 | (byte)(1 << (ulong)(param_3 - 1 & 0x1f));
      }
    }
  }
  return;
}


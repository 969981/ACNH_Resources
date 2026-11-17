
bool FUN_02b68860(undefined2 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  char cVar11;
  undefined2 uVar12;
  int *piVar13;
  uint local_40 [2];
  uint *local_38;
  
  bVar6 = false;
  if (param_1 != (undefined2 *)0x0) {
    uVar8 = FUN_02b8eb50(param_2);
    if ((uVar8 & 1) == 0) {
      uVar7 = FUN_02b5afe0(param_2);
      puVar5 = PTR_DAT_04bb5bd0;
      puVar4 = PTR_DAT_04bb5bc8;
      lVar9 = *(long *)PTR_DAT_04bb5008;
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x5f0);
      if ((uVar7 < *(uint *)(lVar9 + 0x5d0)) &&
         (puVar10 = *(uint **)(*(long *)(lVar9 + 0x5d8) + (long)(int)uVar7 * 8),
         puVar10 != (uint *)0x0)) {
        uVar7 = *puVar10;
        if (uVar7 != 0) {
          cVar11 = *PTR_DAT_04bb5bc8;
          do {
            if (cVar11 == '\0') {
              cVar11 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined4 *)(puVar5 + 0x48) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              uVar7 = *puVar10;
            }
            else {
              uVar2 = *(uint *)(puVar5 + 0x10);
              if (-1 < (int)uVar2) {
                if ((undefined2 *)((ulong)uVar2 + (long)puVar10) != (undefined2 *)0x0) {
                  uVar12 = *(undefined2 *)((ulong)uVar2 + (long)puVar10);
                  goto LAB_02b68b00;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
            }
            puVar3 = (uint *)(ulong)uVar7;
            uVar12 = 0;
            if ((puVar3 == (uint *)0x0) || (uVar12 = 0, puVar10 == puVar3)) goto LAB_02b68b00;
            lVar9 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar3)) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar10 + (lVar9 - (long)puVar3);
            uVar12 = 0;
            if (lVar9 == 0) goto LAB_02b68b00;
            uVar8 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar3));
            *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
            if (uVar8 == 0) break;
            piVar13 = (int *)(lVar9 + 4);
            while (piVar13[-1] != 0xd664b5c) {
              piVar13 = piVar13 + 2;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) goto LAB_02b68afc;
            }
            iVar1 = 0;
            if (*piVar13 != -1) {
              iVar1 = *piVar13;
            }
            *(int *)(puVar5 + 0x10) = iVar1;
            uVar7 = *puVar10;
            if (uVar7 == 0) break;
          } while( true );
        }
LAB_02b68afc:
        uVar12 = 0;
LAB_02b68b00:
        bVar6 = true;
LAB_02b68b04:
        *param_1 = uVar12;
      }
      else {
        bVar6 = false;
      }
    }
    else {
      uVar7 = param_2;
      if (0xf < param_2) {
        uVar7 = 0;
      }
      local_40[0] = param_2;
      FUN_02b72930(local_40,(&DAT_05636e58)[(int)uVar7]);
      puVar5 = PTR_DAT_04bc4658;
      puVar4 = PTR_DAT_04bc4650;
      bVar6 = local_38 != (uint *)0x0;
      if (local_38 != (uint *)0x0) {
        uVar7 = *local_38;
        if (uVar7 != 0) {
          cVar11 = *PTR_DAT_04bc4650;
          do {
            if (cVar11 == '\0') {
              cVar11 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined4 *)(puVar5 + 0x30) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              uVar7 = *local_38;
            }
            else {
              uVar2 = *(uint *)(puVar5 + 0x18);
              if (-1 < (int)uVar2) {
                if ((undefined2 *)((ulong)uVar2 + (long)local_38) != (undefined2 *)0x0) {
                  uVar12 = *(undefined2 *)((ulong)uVar2 + (long)local_38);
                  goto LAB_02b68b04;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)uVar7;
            uVar12 = 0;
            if ((puVar10 == (uint *)0x0) || (uVar12 = 0, local_38 == puVar10)) goto LAB_02b68b04;
            lVar9 = 0xc;
            if (*(char *)((long)local_38 + (10 - (long)puVar10)) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)local_38 + (lVar9 - (long)puVar10);
            uVar12 = 0;
            if (lVar9 == 0) goto LAB_02b68b04;
            uVar8 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar10));
            *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
            if (uVar8 == 0) break;
            piVar13 = (int *)(lVar9 + 4);
            while (piVar13[-1] != 0xd664b5c) {
              piVar13 = piVar13 + 2;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) goto LAB_02b68ae0;
            }
            iVar1 = 0;
            if (*piVar13 != -1) {
              iVar1 = *piVar13;
            }
            *(int *)(puVar5 + 0x18) = iVar1;
            uVar7 = *local_38;
            if (uVar7 == 0) break;
          } while( true );
        }
LAB_02b68ae0:
        *param_1 = 0;
      }
    }
  }
  return bVar6;
}


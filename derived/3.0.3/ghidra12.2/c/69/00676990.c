
void FUN_00676990(long param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ushort *puVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  ushort *local_68;
  
  puVar6 = PTR_PTR_04bde8b8;
  puVar5 = PTR_DAT_04bde8b0;
  puVar4 = PTR_DAT_04bde8a8;
  if (*(int *)(param_1 + 0xb0) != 0) {
    if (0 < *(int *)(param_1 + 0x44)) {
      lVar9 = 0;
      do {
        pbVar13 = (byte *)(*(long *)(param_1 + 0xa0) +
                          (ulong)*(uint *)(*(long *)(param_1 + 0x60) + lVar9 * 4));
        puVar8 = (ushort *)(pbVar13 + *(int *)(param_1 + 0x4c));
        local_68 = puVar8;
        if (*(int *)(param_1 + 0x20) < 1) {
          iVar11 = *(int *)(param_1 + 0x24);
        }
        else {
          iVar11 = 0;
          do {
            bVar1 = *pbVar13;
            bVar2 = pbVar13[1];
            if (bVar2 != 0) {
              uVar7 = 0xffffffff;
              if (0xf < bVar2) {
                uVar3 = *puVar8;
                *(byte *)puVar8 = *(byte *)((long)puVar8 + 1);
                *(byte *)((long)puVar8 + 1) = (byte)uVar3;
                uVar7 = (ulong)*local_68;
                local_68 = (ushort *)((long)local_68 + uVar7 + (byte)local_68[1] + 5);
              }
              FUN_00676cb0(bVar2,uVar7,bVar1 & 3,&local_68);
              puVar8 = (ushort *)((ulong)((long)local_68 + 3U) & 0xfffffffffffffffc);
              local_68 = puVar8;
            }
            bVar2 = pbVar13[2];
            if (bVar2 != 0) {
              uVar14 = (ulong)(bVar1 >> 2) & 0xf;
              uVar7 = 0xffffffff;
              if (0xf < bVar2) {
                uVar3 = *puVar8;
                *(byte *)puVar8 = *(byte *)((long)puVar8 + 1);
                *(byte *)((long)puVar8 + 1) = (byte)uVar3;
                uVar7 = (ulong)*local_68;
                puVar8 = (ushort *)((long)local_68 + uVar7 + (byte)local_68[1] + 5);
              }
              local_68 = (ushort *)
                         ((ulong)((long)puVar8 + (long)*(int *)(puVar5 + uVar14 * 4) + -1) &
                         (long)-*(int *)(puVar5 + uVar14 * 4));
              if (bVar2 < 0x10) {
                (**(code **)(puVar6 + uVar14 * 8))();
                local_68 = (ushort *)((long)local_68 + (long)*(int *)(puVar4 + uVar14 * 4));
              }
              else if (-1 < (int)uVar7) {
                iVar10 = (int)uVar7 + 1;
                do {
                  (**(code **)(puVar6 + uVar14 * 8))();
                  local_68 = (ushort *)((long)local_68 + (long)*(int *)(puVar4 + uVar14 * 4));
                  iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
              }
              puVar8 = (ushort *)((long)local_68 + 3U & 0xfffffffffffffffc);
              local_68 = puVar8;
            }
            bVar2 = pbVar13[3];
            pbVar13 = pbVar13 + 4;
            if (bVar2 != 0) {
              uVar7 = 0xffffffff;
              if (0xf < bVar2) {
                uVar3 = *puVar8;
                *(byte *)puVar8 = *(byte *)((long)puVar8 + 1);
                *(byte *)((long)puVar8 + 1) = (byte)uVar3;
                uVar7 = (ulong)*local_68;
                local_68 = (ushort *)((long)local_68 + uVar7 + (byte)local_68[1] + 5);
              }
              FUN_00676cb0(bVar2,uVar7,bVar1 >> 6,&local_68);
              puVar8 = (ushort *)((ulong)((long)local_68 + 3U) & 0xfffffffffffffffc);
              local_68 = puVar8;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(param_1 + 0x20));
          iVar11 = *(int *)(param_1 + 0x24);
        }
        if (0 < iVar11) {
          lVar12 = 0;
          do {
            bVar1 = pbVar13[lVar12];
            if ((bVar1 & 0xf9) != 0) {
              uVar7 = 0xffffffff;
              if (0xf < (bVar1 & 0xf9)) {
                uVar3 = *puVar8;
                *(byte *)puVar8 = *(byte *)((long)puVar8 + 1);
                *(byte *)((long)puVar8 + 1) = (byte)uVar3;
                uVar7 = (ulong)*local_68;
                local_68 = (ushort *)((long)local_68 + uVar7 + (byte)local_68[1] + 5);
              }
              FUN_00676cb0(bVar1 & 0xf9,uVar7,bVar1 >> 1 & 3,&local_68);
              puVar8 = (ushort *)((ulong)((long)local_68 + 3U) & 0xfffffffffffffffc);
              iVar11 = *(int *)(param_1 + 0x24);
              local_68 = puVar8;
            }
            lVar12 = lVar12 + 1;
          } while ((int)lVar12 < iVar11);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x44));
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  return;
}


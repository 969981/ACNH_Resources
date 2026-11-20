
void FUN_03ee1930(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  uVar7 = *(uint *)(param_1 + 0x130);
  if (0 < (int)uVar7) {
    uVar12 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb21f8 + 0x10;
    do {
      lVar8 = *(long *)(param_1 + 0x108);
      uVar3 = uVar12;
      if (uVar7 <= uVar12) {
        uVar3 = 0;
      }
      uVar7 = uVar12;
      if (*(uint *)(lVar8 + 0x18) <= uVar12) {
        uVar7 = 0;
      }
      puVar13 = *(undefined1 **)(*(long *)(lVar8 + 0x20) + (ulong)uVar7 * 0x10);
      if ((puVar13[0x68] & 1) != 0) {
        lVar15 = *(long *)(param_1 + 0x138);
        if ((int)uVar12 < (int)*(uint *)(lVar8 + 0x18)) {
          puVar9 = *(undefined8 **)(puVar13 + 0x70);
          if ((puVar9[0x12] != 0) && (uVar6 = *(ushort *)((long)puVar9 + 0x5a), -1 < (short)uVar6))
          {
            uVar11 = (ulong)uVar6;
            puVar4 = puVar9 + 5 + uVar11;
            if (3 < uVar6) {
              puVar4 = puVar9 + 5;
            }
            uVar14 = *puVar4;
            local_180 = *(undefined **)(puVar13 + 0x18);
            if (3 < uVar6) {
              uVar11 = 0;
            }
            lVar8 = puVar9[uVar11];
            puStack_178 = puVar13;
            if (lVar8 != 0) {
              if (lVar8 != puVar9[0x12]) {
                uVar11 = FUN_03ec89f8(*(undefined8 *)(puVar9[0xe] + 0x10),lVar8,&local_180,uVar14);
                if ((uVar11 & 1) != 0) goto LAB_03ee1990;
                puVar9 = *(undefined8 **)(puVar13 + 0x70);
                uVar6 = *(ushort *)((long)puVar9 + 0x5a);
              }
              puVar4 = puVar9 + uVar6;
              if (3 < uVar6) {
                puVar4 = puVar9;
              }
              uVar11 = (**(code **)(*(long *)*puVar4 + 0x68))((long *)*puVar4,uVar14);
              if ((uVar11 & 1) == 0) goto LAB_03ee1990;
            }
          }
        }
        else {
          local_6d = 0;
          local_170 = 0x100;
          local_16c[0] = 0;
          lVar8 = *(long *)(*(long *)(*(long *)(lVar8 + 0x50) + 0x10) + 8);
          local_180 = puVar2;
          puStack_178 = local_16c;
          FUN_038d1270(&local_180,"%s.as",lVar8 + *(int *)(lVar8 + 0x24) + (long)*(int *)(lVar8 + 8)
                      );
        }
        if ((*(byte *)(lVar15 + (ulong)uVar3 * 0x78 + 0x18) & 1) != 0) {
          lVar8 = *(long *)(param_1 + 0x108);
          uVar7 = uVar12;
          if (*(uint *)(param_1 + 0x130) <= uVar12) {
            uVar7 = 0;
          }
          iVar5 = *(int *)(*(long *)(param_1 + 0x138) + (ulong)uVar7 * 0x78);
          if (iVar5 < 100000) {
            uVar7 = uVar12;
            if (*(uint *)(lVar8 + 0x18) <= uVar12) {
              uVar7 = 0;
            }
            puStack_178 = (undefined1 *)
                          (**(code **)(**(long **)(*(long *)(*(long *)(lVar8 + 0x20) +
                                                            (ulong)uVar7 * 0x10) + 0x18) + 0x38))();
          }
          else {
            puStack_178 = (undefined1 *)
                          (**(code **)(**(long **)(lVar8 + 0x28) + 0x98))
                                    (*(long **)(lVar8 + 0x28),0,iVar5 + 0x7960);
          }
          local_180 = PTR_DAT_04bb2020 + 0x10;
          FUN_03ec30c8(lVar8,&local_180,uVar12,0,0);
        }
        puVar9 = (undefined8 *)(lVar15 + (ulong)uVar3 * 0x78 + 8);
        piVar10 = (int *)*puVar9;
        if (piVar10 != (int *)0x0) {
          lVar8 = *(long *)(*(long *)(lVar15 + (ulong)uVar3 * 0x78 + 0x10) + 8);
          puStack_178 = (undefined1 *)(lVar8 + *piVar10 + (long)*(int *)(lVar8 + 0x24));
          local_180 = puVar1;
          FUN_03ec30c8(*(undefined8 *)(param_1 + 0x108),&local_180,uVar12,0,0);
          *puVar9 = 0;
        }
      }
LAB_03ee1990:
      uVar7 = *(uint *)(param_1 + 0x130);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar7);
  }
  return;
}


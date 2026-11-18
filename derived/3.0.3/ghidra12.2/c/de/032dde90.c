
/* WARNING: Type propagation algorithm not settling */

void FUN_032dde90(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  ushort *puVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = (ushort *)param_2[1];
  uVar12 = *puVar5;
  if (uVar12 != 0) {
    bVar3 = false;
    uVar7 = 0;
    lVar6 = -(long)puVar5;
    puVar9 = puVar5;
    do {
      while( true ) {
        puVar8 = puVar9;
        puVar11 = puVar9;
        while ((uVar12 & 0xfffe) != 0xe) {
          uVar12 = puVar8[1];
          if ((bool)(uVar12 == 0 & bVar3)) {
            iVar14 = (int)param_1[2];
            iVar13 = (int)param_1[1];
            if (iVar13 <= iVar14) {
              return;
            }
            *(int *)(param_1 + 2) = iVar14 + 1;
            bVar3 = false;
            iVar14 = *(int *)((long)param_1 + 0xc) + iVar14;
            iVar16 = 0;
            if (iVar13 <= iVar14) {
              iVar16 = iVar13;
            }
            puVar1 = (undefined4 *)(*param_1 + (long)(iVar14 - iVar16) * 8);
            *puVar1 = (int)uVar7;
            puVar1[1] = (int)((ulong)((long)puVar11 + lVar6 + 2) >> 1) + -1;
            uVar12 = puVar8[1];
          }
          puVar11 = puVar11 + 1;
          puVar8 = puVar8 + 1;
          if (uVar12 == 0) {
            return;
          }
        }
        if (uVar12 == 0xe) break;
        if (uVar12 != 0xf) {
          puVar9 = puVar8;
          puVar8 = (ushort *)0x0;
          uVar4 = uRam0000000000000002;
          goto joined_r0x032ddfec;
        }
        puVar9 = puVar11 + 3;
        if (puVar8[1] == 0) goto LAB_032ddf90;
LAB_032de000:
        if (uVar12 == 0xf) {
          iVar14 = (int)param_1[2];
          iVar13 = (int)param_1[1];
          if (iVar13 <= iVar14) goto LAB_032de0dc;
          iVar16 = *(int *)((long)param_1 + 0xc);
          *(int *)(param_1 + 2) = iVar14 + 1;
          lVar15 = *param_1;
          iVar10 = (int)((ulong)(lVar6 + (long)puVar11) >> 1);
LAB_032de040:
          iVar2 = 0;
          if (iVar13 <= iVar16 + iVar14) {
            iVar2 = iVar13;
          }
          puVar1 = (undefined4 *)(lVar15 + (long)((iVar16 + iVar14) - iVar2) * 8);
          *puVar1 = (int)uVar7;
          puVar1[1] = iVar10;
          uVar12 = *puVar9;
        }
        else {
          if (uVar12 == 0xe) {
LAB_032de0d8:
            uVar7 = (ulong)(lVar6 + (long)puVar11) >> 1;
          }
LAB_032de0dc:
          uVar12 = *puVar9;
        }
joined_r0x032de0f0:
        if (uVar12 == 0) {
          return;
        }
      }
      puVar9 = (ushort *)((long)puVar11 + (ulong)puVar8[3] + 8);
      uVar4 = puVar8[1];
joined_r0x032ddfec:
      if (uVar4 != 0) goto LAB_032de000;
LAB_032ddf90:
      if (puVar8[2] != 0) {
        if (uVar12 != 0xe) goto LAB_032de0dc;
        if (!bVar3) {
          bVar3 = true;
          goto LAB_032de0d8;
        }
        iVar14 = (int)param_1[2];
        iVar13 = (int)param_1[1];
        if (iVar14 < iVar13) {
          iVar16 = *(int *)((long)param_1 + 0xc);
          *(int *)(param_1 + 2) = iVar14 + 1;
          lVar15 = *param_1;
          iVar10 = (int)((ulong)(lVar6 + (long)puVar11) >> 1) + -1;
          bVar3 = false;
          goto LAB_032de040;
        }
        bVar3 = false;
        uVar12 = *puVar9;
        goto joined_r0x032de0f0;
      }
      if (uVar12 != 0xe) goto LAB_032de0dc;
      iVar14 = (int)param_1[2];
      uVar7 = (ulong)(lVar6 + (long)puVar11) >> 1;
      iVar13 = (int)param_1[1];
      if (iVar13 <= iVar14) goto LAB_032de0dc;
      uVar12 = puVar8[4];
      iVar16 = *(int *)((long)param_1 + 0xc) + iVar14;
      *(int *)(param_1 + 2) = iVar14 + 1;
      iVar14 = 0;
      if (iVar13 <= iVar16) {
        iVar14 = iVar13;
      }
      puVar1 = (undefined4 *)(*param_1 + (long)(iVar16 - iVar14) * 8);
      *puVar1 = (int)uVar7;
      puVar1[1] = (int)((ulong)((long)puVar9 - (long)puVar5) >> 1) + (uint)(uVar12 >> 1) + -1;
      uVar12 = *puVar9;
    } while (uVar12 != 0);
  }
  return;
}


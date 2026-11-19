
void FUN_039d4cd0(long *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  
  iVar7 = (**(code **)(*param_1 + 0x1e0))();
  if (0 < iVar7) {
    lVar14 = 0;
    do {
      bVar3 = *(byte *)((long)param_1 + 0x2e2);
      uVar2 = (*(byte *)((long)param_1 + 0x2e5) & 3) + 1;
      uVar6 = 0;
      if (bVar3 != 0) {
        uVar6 = uVar2 / bVar3;
      }
      plVar16 = (long *)(param_1[0x23] + lVar14 * 0x70 + 0x20);
      lVar8 = 0;
      if (*plVar16 != 0) {
        lVar8 = *plVar16 + (ulong)(uVar2 - uVar6 * bVar3) * 0x48;
      }
      lVar8 = FUN_00347cc4(lVar8);
      bVar3 = *(byte *)((long)param_1 + 0x2e5);
      lVar13 = *(long *)(param_1[0x2d] + lVar14 * 8);
      bVar4 = *(byte *)((long)param_1 + 0x2e2);
      lVar15 = **(long **)(DAT_05ae9330 + 0x88);
      bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar15 + ((long)(int)param_2 + 9) * 0xc + 8) * 4];
      (**(code **)(*(long *)(DAT_05ae9330 + 0x80) + 0x18))();
      if (bVar5 != 0) {
        uVar10 = (ulong)*(ushort *)(lVar15 + ((long)(int)param_2 + 9) * 0xc + 4);
        puVar9 = param_3;
        if (bVar5 < 8) {
          lVar15 = 0;
        }
        else {
          lVar15 = 0;
          puVar11 = (undefined4 *)(lVar8 + uVar10 + 0x10);
          do {
            lVar15 = lVar15 + -8;
            puVar11[-4] = *puVar9;
            puVar11[-3] = puVar9[1];
            puVar11[-2] = puVar9[2];
            puVar11[-1] = puVar9[3];
            *puVar11 = puVar9[4];
            puVar11[1] = puVar9[5];
            puVar11[2] = puVar9[6];
            puVar1 = puVar9 + 7;
            puVar9 = puVar9 + 8;
            puVar11[3] = *puVar1;
            puVar11 = puVar11 + 8;
          } while (-lVar15 != ((ulong)bVar5 & 0xf8));
          lVar15 = -lVar15;
        }
        if ((bVar5 & 7) != 0) {
          uVar12 = (ulong)bVar5 & 7;
          puVar11 = (undefined4 *)(lVar8 + uVar10 + lVar15 * 4);
          do {
            uVar12 = uVar12 - 1;
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar12 != 0);
        }
      }
      uVar2 = (bVar3 & 3) + 1;
      uVar6 = 0;
      if (bVar4 != 0) {
        uVar6 = uVar2 / bVar4;
      }
      *(ushort *)(lVar13 + 0x270) =
           (*(ushort *)(lVar13 + 0x270) | (ushort)(0x842 << (ulong)(param_2 & 0x1f))) &
           ((ushort)((2 << (ulong)(param_2 & 0x1f)) << (ulong)((uVar2 - uVar6 * bVar4) * 5 & 0x1f))
           ^ 0xffff);
      bVar3 = *(byte *)((long)param_1 + 0x2e2);
      uVar2 = (*(byte *)((long)param_1 + 0x2e5) & 3) + 1;
      uVar6 = 0;
      if (bVar3 != 0) {
        uVar6 = uVar2 / bVar3;
      }
      uVar2 = uVar2 - uVar6 * bVar3;
      lVar8 = 0;
      if (*plVar16 != 0) {
        lVar8 = *plVar16 + (ulong)uVar2 * 0x48;
      }
      FUN_00347cdc(lVar8,0,0x100);
      lVar8 = 0;
      if (*plVar16 != 0) {
        lVar8 = *plVar16 + (ulong)uVar2 * 0x48;
      }
      FUN_00347cd8(lVar8);
      lVar14 = lVar14 + 1;
      *(byte *)((long)param_1 + 0x2e1) =
           (byte)(1 << (*(byte *)((long)param_1 + 0x2e5) & 3)) | *(byte *)((long)param_1 + 0x2e1);
      iVar7 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (lVar14 < iVar7);
  }
  return;
}


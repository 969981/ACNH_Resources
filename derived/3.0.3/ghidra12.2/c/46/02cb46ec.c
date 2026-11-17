
void FUN_02cb46ec(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  ulong uVar7;
  short sVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 local_48;
  byte local_44 [4];
  
  if ((*(byte *)(*param_1 + 0x30c) & 1) == 0) {
    return;
  }
  lVar11 = param_1[1];
  *(undefined1 *)(lVar11 + 0x1e50) = 1;
  if (*(byte *)(*param_1 + 0x2f4) < 8) {
    puVar5 = (undefined4 *)FUN_0251b3b0(*param_1 + 0x2f4,0);
    if (puVar5 == (undefined4 *)0x0) {
      if (*(char *)(lVar11 + 0x1e9c) != '\0') {
        bVar2 = *(byte *)(*param_1 + 0x2f4);
        if (bVar2 < 8) {
          pbVar1 = (byte *)(*param_1 + 0x2f4);
          if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
            iVar4 = FUN_02582d8c(pbVar1,2);
            if (iVar4 < 0) goto LAB_02cb4780;
          }
          else {
            local_44[0] = bVar2;
            uVar7 = FUN_01d3e2d0(*DAT_0537d558 + 8,local_44);
            if ((uVar7 & 1) == 0) goto LAB_02cb4780;
          }
          uVar7 = (ulong)*pbVar1;
          if (uVar7 < 8) {
            sVar8 = *(short *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 9);
            if ((sVar8 != -1) && (*(int *)(*param_1 + 0x314) != (int)sVar8)) {
              iVar4 = (int)sVar8;
              bVar3 = DAT_055c1b60 == &DAT_055c1b58;
              puVar10 = DAT_055c1b60 + -8;
              if ((sVar8 != 0) && (puVar9 = DAT_055c1b60, puVar10 != &DAT_055c1b18)) {
                do {
                  puVar9 = (undefined8 *)puVar9[1];
                  sVar8 = sVar8 + -1;
                  bVar3 = puVar9 == &DAT_055c1b58;
                } while (!bVar3 && sVar8 != 0);
                puVar10 = puVar9 + -8;
              }
              local_48 = 0;
              puVar9 = &DAT_055c04a0;
              if (!bVar3) {
                puVar9 = puVar10;
              }
              uVar7 = FUN_02b62a50(&local_48,*(undefined4 *)(puVar9 + 7));
              if ((uVar7 & 1) != 0) {
                *(undefined4 *)(*param_1 + 0x310) = local_48;
                *(int *)(*param_1 + 0x314) = iVar4;
              }
            }
          }
        }
      }
    }
    else {
      uVar14 = *puVar5;
      fVar15 = (float)puVar5[1];
      pfVar6 = (float *)(**(code **)(*(long *)(*(long *)(lVar11 + 0x210) + 0x6b8) + 0xf0))
                                  (*(long *)(lVar11 + 0x210) + 0x6b8);
      fVar12 = *pfVar6;
      uVar13 = puVar5[2];
      lVar11 = *param_1;
      *(undefined4 *)(lVar11 + 0x2e8) = uVar14;
      *(undefined4 *)(lVar11 + 0x2f0) = uVar13;
      *(float *)(lVar11 + 0x2ec) = fVar15 + fVar12;
    }
  }
LAB_02cb4780:
  *(uint *)(*param_1 + 0x30c) = *(uint *)(*param_1 + 0x30c) | 2;
  return;
}



undefined8 FUN_018ce4b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  short *psVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  uint local_64;
  
  fVar14 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar13 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar16 = fVar13 + 2.5;
  fVar15 = fVar14 + 2.5;
  fVar13 = fVar13 + 10.0 + -2.5;
  fVar14 = fVar14 + 10.0 + -2.5;
  iVar4 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar12 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  iVar5 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar3 = iVar4;
  if (iVar5 <= iVar4) {
    iVar3 = iVar5;
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  iVar11 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iVar5 = iVar12;
  if (iVar12 <= iVar11) {
    iVar5 = iVar11;
  }
  if (iVar11 <= iVar12) {
    iVar12 = iVar11;
  }
  if (iVar5 + 1 != iVar12) {
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    puVar2 = PTR_DAT_04bbfe68 + 0x10;
    iVar11 = iVar3;
    do {
      lVar10 = *(long *)PTR_DAT_04bb2720;
      local_88 = 0;
      local_90 = puVar2;
      local_78 = puVar1;
      local_70 = iVar11;
      iStack_6c = iVar12;
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x330) == 0)) {
        puVar8 = &DAT_055c04a0;
      }
      else {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar6 = FUN_006bd550(*puVar8,0);
        puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar8 = &DAT_055c04a0;
        }
      }
      local_84 = *(undefined4 *)(puVar8 + 7);
      local_80 = FUN_017baf44();
      local_80 = local_80 & 1;
      psVar9 = (short *)FUN_01a5190c(&local_90,0,&local_78,0);
      if (((((*psVar9 != -2) && (lVar10 = *(long *)PTR_DAT_04bbbc68, lVar10 != 0)) &&
           (*(long *)(lVar10 + 0xb0) != 0)) &&
          ((*(long *)(*(long *)(lVar10 + 0xb0) + 8) != 0 && (*(long *)(lVar10 + 0x488) != 0)))) &&
         ((*(long *)(*(long *)(lVar10 + 0x488) + 8) != 0 &&
          ((*(long *)(lVar10 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) != 0)))))) {
        uVar7 = FUN_0277d6c4();
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bbbc68;
          uVar7 = FUN_0277d6c4(psVar9);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8), lVar10 != 0)) {
            local_64 = 4;
            lVar10 = FUN_01246470(lVar10,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
            if (lVar10 != 0) {
              uVar7 = local_64 + 7;
              if (-1 < (int)local_64) {
                uVar7 = local_64;
              }
              if ((*(byte *)(lVar10 + (ulong)(uint)((int)uVar7 >> 3)) >> (ulong)(local_64 & 7) & 1)
                  != 0) {
                return 1;
              }
            }
          }
        }
      }
      if (iVar11 < iVar4) {
        iVar11 = iVar11 + 1;
      }
      else {
        iVar12 = iVar12 + 1;
        iVar11 = iVar3;
      }
    } while ((iVar3 != iVar11) || (iVar5 + 1 != iVar12));
  }
  return 0;
}


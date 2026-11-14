
undefined1 FUN_01861850(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  short *psVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  puVar6 = PTR_DAT_04bb2720;
  fVar13 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
  fVar14 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
  fVar13 = (float)(int)((int)((float)(int)fVar13 / 10.0) - (uint)(fVar13 < 0.0)) * 10.0;
  fVar16 = fVar13 + 2.5;
  fVar14 = (float)(int)((int)((float)(int)fVar14 / 10.0) - (uint)(fVar14 < 0.0)) * 10.0;
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
      lVar10 = *(long *)puVar6;
      local_80 = 0;
      local_88 = puVar2;
      local_70 = puVar1;
      local_68 = iVar11;
      iStack_64 = iVar12;
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x330) == 0)) {
        puVar8 = &DAT_055c04a0;
      }
      else {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar7 = FUN_006bd550(*puVar8,0);
        puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar8 = &DAT_055c04a0;
        }
      }
      local_7c = *(undefined4 *)(puVar8 + 7);
      local_78 = FUN_017baf44();
      local_78 = local_78 & 1;
      psVar9 = (short *)FUN_01a5190c(&local_88,0,&local_70,0);
      if (*psVar9 != -2) {
        return 1;
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


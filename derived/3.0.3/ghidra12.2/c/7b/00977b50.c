
undefined4 FUN_00977b50(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  char cVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined *local_70;
  int local_68;
  int iStack_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  
  puVar6 = PTR_DAT_04bb27c8;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  fVar15 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar14 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar17 = fVar14 + 2.5;
  fVar16 = fVar15 + 2.5;
  fVar14 = fVar14 + 10.0 + -2.5;
  fVar15 = fVar15 + 10.0 + -2.5;
  iVar4 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar12 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar5 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iVar2 = iVar4;
  if (iVar5 <= iVar4) {
    iVar2 = iVar5;
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  iVar11 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  iVar5 = iVar12;
  if (iVar12 <= iVar11) {
    iVar5 = iVar11;
  }
  if (iVar11 <= iVar12) {
    iVar12 = iVar11;
  }
  if (iVar5 + 1 == iVar12) {
    iVar11 = 0;
    uVar9 = 1;
  }
  else {
    iVar11 = 0;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    iVar13 = iVar2;
    do {
      lVar10 = *(long *)puVar6;
      if (((lVar10 == 0) || (*(long *)(lVar10 + 0xa8) == 0)) ||
         (local_70 = puVar1, local_68 = iVar13, iStack_64 = iVar12,
         uVar7 = FUN_009493f8(lVar10 + 0x28,&local_70,(long)&local_58 + 4,&local_58,&local_5c,
                              &local_60), (uVar7 & 1) == 0)) {
        uVar9 = 0;
        break;
      }
      uVar9 = 1;
      cVar8 = '\x01';
      if (local_58._4_4_ == 0x2e) {
        cVar8 = '\x02';
      }
      if ((int)local_58 != 0x2e) {
        cVar8 = local_58._4_4_ == 0x2e;
      }
      if (local_5c == 0x2e) {
        cVar8 = cVar8 + '\x01';
      }
      if (local_60 == 0x2e) {
        cVar8 = cVar8 + '\x01';
      }
      if (cVar8 == '\x02') {
        iVar11 = iVar11 + 1;
      }
      if (iVar13 < iVar4) {
        iVar13 = iVar13 + 1;
      }
      else {
        iVar12 = iVar12 + 1;
        iVar13 = iVar2;
      }
    } while ((iVar2 != iVar13) || (iVar5 + 1 != iVar12));
  }
  uVar3 = 0;
  if (iVar11 == 2) {
    uVar3 = uVar9;
  }
  return uVar3;
}


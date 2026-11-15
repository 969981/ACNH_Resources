
bool FUN_022ac8a0(long param_1,undefined8 param_2,float *param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  char *pcVar4;
  char *pcVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined *local_b0;
  float local_a8;
  int iStack_a4;
  undefined *local_a0;
  undefined *puStack_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  byte local_74 [4];
  
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 == -1) {
    uVar15 = 0;
  }
  else {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar15 = *puVar3 >> 1 & 1;
  }
  fVar16 = *param_3;
  fVar17 = param_3[2];
  uVar14 = 0;
  bVar10 = true;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  iVar7 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar8 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  uVar9 = *param_4 + 0x10000000U >> 0x1d;
  iVar7 = iVar7 - (uint)(fVar16 < (float)iVar7 * 5.0 + 2.5);
  iVar8 = iVar8 - (uint)(fVar17 < (float)iVar8 * 5.0 + 2.5);
  do {
    bVar11 = 0x57 < uVar9 * 0xb + (int)uVar14;
    pcVar4 = &DAT_0417a12c + uVar14 + (ulong)uVar9 * 0xb;
    if (bVar11) {
      pcVar4 = "";
    }
    pcVar5 = &DAT_0417a184 + uVar14 + (ulong)uVar9 * 0xb;
    if (bVar11) {
      pcVar5 = "\x02\x02\x02\x02\x02\x03\x03\x03\x02\x02\x02\x02\x02\x01\x02";
    }
    local_90 = iVar7 + *pcVar4;
    local_80 = iVar7 + 1 + (int)*pcVar4;
    iStack_8c = iVar8 + *pcVar5;
    iStack_7c = iVar8 + 1 + (int)*pcVar5;
    local_a0 = puVar1;
    puStack_98 = puVar2;
    local_88 = puVar2;
    if (uVar15 == 0) {
LAB_022acb50:
      if (uVar14 < 5) {
        uVar13 = FUN_022acc00(param_1,param_2,&local_a0,0);
      }
      else {
        local_b0 = PTR_DAT_04bb2010 + 0x10;
        bVar11 = 0x57 < uVar9 * 0xb + (int)uVar14 + 3;
        pcVar4 = &DAT_0417a12c + uVar14 + (ulong)uVar9 * 0xb + 3;
        if (bVar11) {
          pcVar4 = "";
        }
        pcVar5 = &DAT_0417a184 + uVar14 + (ulong)uVar9 * 0xb + 3;
        if (bVar11) {
          pcVar5 = "\x02\x02\x02\x02\x02\x03\x03\x03\x02\x02\x02\x02\x02\x01\x02";
        }
        local_a8 = (float)(iVar7 + *pcVar4);
        iStack_a4 = iVar8 + *pcVar5;
        uVar13 = FUN_022acc00(param_1,param_2,&local_a0,&local_b0);
      }
      if ((uVar13 & 1) != 0) {
        return bVar10;
      }
    }
    else {
      local_74[0] = *(byte *)(param_1 + 0x10);
      if (7 < local_74[0]) {
        local_74[0] = 0xff;
      }
      local_a8 = (float)iStack_8c * 5.0 + 5.0;
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,(float)local_90 * 5.0 + 5.0);
      lVar12 = FUN_0251b3b0(local_74,0);
      if ((lVar12 != 0) && (*(long *)PTR_DAT_04bb27c8 != 0)) {
        fVar16 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_b0,0);
        fVar16 = fVar16 - *(float *)(lVar12 + 4);
        if ((fVar16 <= 5.0) && (-5.0 <= fVar16)) goto LAB_022acb50;
      }
    }
    bVar10 = uVar14 < 7;
    uVar14 = uVar14 + 1;
    if (uVar14 == 8) {
      return bVar10;
    }
  } while( true );
}


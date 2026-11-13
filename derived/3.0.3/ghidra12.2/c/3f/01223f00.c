
void FUN_01223f00(byte *param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  int extraout_w11;
  int extraout_w11_00;
  int iVar10;
  int extraout_w12;
  int extraout_w12_00;
  int iVar11;
  uint extraout_w13;
  uint extraout_w13_00;
  uint uVar12;
  uint extraout_w14;
  uint extraout_w14_00;
  uint uVar13;
  uint extraout_w15;
  uint extraout_w15_00;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  int local_78;
  byte local_74;
  undefined4 local_70;
  int local_6c;
  byte local_68;
  undefined4 local_64;
  int local_60;
  byte local_5c;
  undefined4 local_58;
  int local_54;
  byte local_50;
  undefined4 local_4c;
  int local_48;
  byte local_44;
  undefined4 local_40;
  int local_3c;
  byte local_38;
  undefined2 local_34;
  ushort local_14 [2];
  
  local_74 = 0;
  local_68 = 0;
  local_5c = 0;
  local_50 = 0;
  local_7c = *(undefined2 *)PTR_DAT_04bb37e0;
  local_7a = PTR_DAT_04bb37e0[2];
  local_79 = PTR_DAT_04bb37e0[3];
  local_40 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_4c = *(undefined4 *)PTR_DAT_04bb37e0;
  local_58 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_64 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_70 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_78 = *(int *)(PTR_DAT_04bb37e0 + 4);
  local_44 = 0;
  local_38 = 0;
  local_34 = 0;
  local_14[0] = 0x4c7b;
  local_6c = local_78;
  local_60 = local_78;
  local_54 = local_78;
  local_48 = local_78;
  local_3c = local_78;
  FUN_02612304(local_14,param_3);
  uVar2 = 0;
  iVar10 = extraout_w11;
  iVar11 = extraout_w12;
  uVar12 = extraout_w13;
  uVar13 = extraout_w14;
  uVar14 = extraout_w15;
  if (local_14[0] < 0x800) {
    if ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + 0xe99e0 + (ulong)(local_14[0] >> 3)) >>
         (ulong)(local_14[0] & 7) & 1) == 0) {
      uVar2 = 0;
    }
    else {
      FUN_02632ae0(*(long *)PTR_DAT_04bb46f0,&local_7c);
      uVar2 = (uint)(byte)local_34;
      iVar10 = extraout_w11_00;
      iVar11 = extraout_w12_00;
      uVar12 = extraout_w13_00;
      uVar13 = extraout_w14_00;
      uVar14 = extraout_w15_00;
    }
  }
  bVar7 = *param_1;
  iVar8 = 0x1e4;
  bVar1 = 7 < bVar7;
  if (bVar1) {
    bVar7 = 0xff;
  }
  puVar6 = &DAT_0514cb68 + (ulong)(uint)(int)(char)bVar7 * 0x79;
  if (bVar1) {
    puVar6 = &DAT_0514cb68;
  }
  if (uVar2 == 0) {
    fVar15 = 0.0;
  }
  else {
    iVar8 = (uint)local_74 * param_4;
    *(undefined2 *)(puVar6 + 0x6b) = local_7c;
    *(undefined1 *)((long)puVar6 + 0x1ae) = local_7a;
    *(undefined1 *)((long)puVar6 + 0x1af) = local_79;
    puVar6[0x6c] = local_78;
    fVar16 = (float)iVar8;
    if (uVar2 == 1) {
      fVar15 = fVar16;
    }
    else {
      puVar6[0x6d] = local_70;
      puVar6[0x6e] = local_6c;
      iVar10 = (uint)local_68 * param_4;
      fVar15 = fVar16 + (float)iVar10;
      iVar11 = local_6c;
      if (2 < uVar2) {
        puVar6[0x70] = local_60;
        uVar12 = (uint)local_5c;
        puVar6[0x6f] = local_64;
        iVar11 = (uint)local_5c * param_4;
        *(byte *)((long)puVar6 + 0x1de) = local_5c;
        fVar15 = fVar15 + (float)iVar11;
        if (uVar2 != 3) {
          puVar6[0x72] = local_54;
          uVar13 = (uint)local_50;
          puVar6[0x71] = local_58;
          uVar12 = (uint)local_50 * param_4;
          *(byte *)((long)puVar6 + 0x1df) = local_50;
          fVar15 = fVar15 + (float)(int)uVar12;
          if (4 < uVar2) {
            puVar6[0x74] = local_48;
            uVar14 = (uint)local_44;
            puVar6[0x73] = local_4c;
            uVar13 = (uint)local_44 * param_4;
            *(byte *)(puVar6 + 0x78) = local_44;
            fVar15 = fVar15 + (float)(int)uVar13;
            if (uVar2 != 5) {
              puVar6[0x76] = local_3c;
              puVar6[0x75] = local_40;
              uVar14 = (uint)local_38 * param_4;
              *(byte *)((long)puVar6 + 0x1e1) = local_38;
              fVar15 = fVar15 + (float)(int)uVar14;
              if (6 < uVar2) {
                lVar4 = (ulong)uVar2 - 6;
                piVar3 = puVar6 + 0x78;
                pbVar5 = (byte *)((long)puVar6 + 0x1e2);
                do {
                  fVar15 = fVar15 + fVar16;
                  *(undefined2 *)(piVar3 + -1) = local_7c;
                  lVar4 = lVar4 + -1;
                  *(undefined1 *)((long)piVar3 + -2) = local_7a;
                  *(undefined1 *)((long)piVar3 + -1) = local_79;
                  *piVar3 = local_78;
                  *pbVar5 = local_74;
                  piVar3 = piVar3 + 2;
                  pbVar5 = pbVar5 + 1;
                } while (lVar4 != 0);
              }
            }
          }
        }
      }
    }
    if (100.0 < fVar15) {
      fVar16 = (fVar16 / fVar15) * 100.0;
      iVar8 = (int)fVar16;
      fVar17 = ((float)iVar10 / fVar15) * 100.0;
      iVar10 = (int)fVar17;
      fVar18 = ((float)iVar11 / fVar15) * 100.0;
      iVar11 = (int)fVar18;
      fVar19 = ((float)(int)uVar12 / fVar15) * 100.0;
      uVar12 = (uint)fVar19;
      fVar20 = ((float)(int)uVar13 / fVar15) * 100.0;
      fVar15 = ((float)(int)uVar14 / fVar15) * 100.0;
      uVar13 = (uint)fVar20;
      uVar14 = (uint)fVar15;
      fVar15 = fVar15 + (float)(int)(fVar20 + (float)(int)(fVar19 + (float)(int)(fVar18 + (float)(
                                                  int)(fVar17 + (float)(int)(fVar16 + 0.0)))));
    }
  }
  *(char *)(puVar6 + 0x77) = (char)iVar8;
  *(char *)((long)puVar6 + 0x1dd) = (char)iVar10;
  *(char *)((long)puVar6 + 0x1de) = (char)iVar11;
  *(char *)((long)puVar6 + 0x1df) = (char)uVar12;
  *(char *)(puVar6 + 0x78) = (char)uVar13;
  *(char *)((long)puVar6 + 0x1e1) = (char)uVar14;
  puVar6[100] = (int)fVar15;
  if (0 < (int)fVar15) {
    bVar7 = *param_1;
    bVar1 = 7 < bVar7;
    if (bVar1) {
      bVar7 = 0xff;
    }
    puVar6 = &DAT_0514cb68 + (ulong)(uint)(int)(char)bVar7 * 0x79;
    if (bVar1) {
      puVar6 = &DAT_0514cb68;
    }
    *(undefined8 *)(puVar6 + 0x65) = 0x6400000000;
    puVar6[0x67] = *param_2;
    puVar6[0x68] = param_2[1];
    puVar6[0x69] = param_2[2];
    bVar7 = *param_1;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(puVar6 + 0x6a) = bVar7;
    if (0 < (int)puVar6[100]) {
      uVar9 = 0;
      uVar12 = DAT_0514cb58;
      uVar13 = DAT_0514cb5c;
      uVar14 = DAT_0514cb60;
      do {
        DAT_0514cb60 = DAT_0514cb64;
        DAT_0514cb5c = uVar14;
        DAT_0514cb58 = uVar13;
        uVar12 = uVar12 ^ uVar12 << 0xb;
        DAT_0514cb64 = uVar12 >> 8 ^ DAT_0514cb60 >> 0x13 ^ uVar12 ^ DAT_0514cb60;
        puVar6[uVar9] = (int)((ulong)DAT_0514cb64 * 100 >> 0x20);
        if (0x62 < uVar9) break;
        uVar9 = uVar9 + 1;
        uVar12 = DAT_0514cb58;
        uVar13 = DAT_0514cb5c;
        uVar14 = DAT_0514cb60;
      } while ((long)uVar9 < (long)(int)puVar6[100]);
    }
  }
  return;
}



undefined8 FUN_01223a50(byte *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  byte local_9c [4];
  undefined8 local_98;
  
  bVar9 = *param_1;
  local_98 = 0xfffe;
  bVar5 = 7 < bVar9;
  if (bVar5) {
    bVar9 = 0xff;
  }
  puVar7 = &DAT_0514cb68 + (ulong)(uint)(int)(char)bVar9 * 0x79;
  if (bVar5) {
    puVar7 = &DAT_0514cb68;
  }
  puVar7[100] = 0;
  FUN_0277d4ac(&local_98);
  puVar2 = PTR_DAT_04bb46f0;
  local_9c[0] = 0;
  FUN_02622580(*(undefined8 *)PTR_DAT_04bb46f0,&local_98,local_9c,param_3,0);
  uVar3 = (undefined4)local_98;
  uVar4 = local_98._4_4_;
  local_98 = 0xfffe;
  puVar7[0x6b] = uVar3;
  iVar14 = (uint)local_9c[0] * param_4;
  *(byte *)(puVar7 + 0x77) = local_9c[0];
  puVar7[0x6c] = uVar4;
  puVar7[100] = puVar7[100] + (uint)local_9c[0];
  FUN_0277d4ac(&local_98);
  local_9c[0] = 0;
  FUN_02622580(*(undefined8 *)puVar2,&local_98,local_9c,param_3,1);
  iVar15 = (uint)local_9c[0] * param_4;
  puVar7[0x6d] = (undefined4)local_98;
  *(byte *)((long)puVar7 + 0x1dd) = local_9c[0];
  puVar7[0x6e] = local_98._4_4_;
  local_98 = 0xfffe;
  puVar7[100] = puVar7[100] + (uint)local_9c[0];
  FUN_0277d4ac(&local_98);
  local_9c[0] = 0;
  FUN_02622580(*(undefined8 *)puVar2,&local_98,local_9c,param_3,2);
  iVar16 = (uint)local_9c[0] * param_4;
  puVar7[0x6f] = (undefined4)local_98;
  *(byte *)((long)puVar7 + 0x1de) = local_9c[0];
  puVar7[0x70] = local_98._4_4_;
  local_98 = 0xfffe;
  puVar7[100] = puVar7[100] + (uint)local_9c[0];
  FUN_0277d4ac(&local_98);
  local_9c[0] = 0;
  FUN_02622580(*(undefined8 *)puVar2,&local_98,local_9c,param_3,3);
  iVar12 = (uint)local_9c[0] * param_4;
  puVar7[0x71] = (undefined4)local_98;
  *(byte *)((long)puVar7 + 0x1df) = local_9c[0];
  puVar7[0x72] = local_98._4_4_;
  local_98 = 0xfffe;
  puVar7[100] = puVar7[100] + (uint)local_9c[0];
  FUN_0277d4ac(&local_98);
  local_9c[0] = 0;
  FUN_02622580(*(undefined8 *)puVar2,&local_98,local_9c,param_3,4);
  iVar13 = (uint)local_9c[0] * param_4;
  puVar7[0x73] = (undefined4)local_98;
  *(byte *)(puVar7 + 0x78) = local_9c[0];
  puVar7[0x74] = local_98._4_4_;
  local_98 = 0xfffe;
  puVar7[100] = puVar7[100] + (uint)local_9c[0];
  FUN_0277d4ac(&local_98);
  local_9c[0] = 0;
  FUN_02622580(*(undefined8 *)puVar2,&local_98,local_9c,param_3,5);
  param_4 = (uint)local_9c[0] * param_4;
  puVar7[0x75] = (undefined4)local_98;
  puVar7[0x76] = local_98._4_4_;
  fVar17 = (float)iVar14 + (float)iVar15 + (float)iVar16 + (float)iVar12 + (float)iVar13 +
           (float)param_4;
  if (100.0 < fVar17) {
    fVar18 = ((float)iVar14 / fVar17) * 100.0;
    iVar14 = (int)fVar18;
    fVar19 = ((float)iVar15 / fVar17) * 100.0;
    iVar15 = (int)fVar19;
    fVar20 = ((float)iVar16 / fVar17) * 100.0;
    iVar16 = (int)fVar20;
    fVar21 = ((float)iVar12 / fVar17) * 100.0;
    iVar12 = (int)fVar21;
    fVar22 = ((float)iVar13 / fVar17) * 100.0;
    fVar17 = ((float)param_4 / fVar17) * 100.0;
    iVar13 = (int)fVar22;
    param_4 = (int)fVar17;
    fVar17 = fVar17 + (float)(int)(fVar22 + (float)(int)(fVar21 + (float)(int)(fVar20 + (float)(int)
                                                  (fVar19 + (float)(int)(fVar18 + 0.0)))));
  }
  *(char *)(puVar7 + 0x77) = (char)iVar14;
  *(char *)((long)puVar7 + 0x1dd) = (char)iVar15;
  *(char *)((long)puVar7 + 0x1de) = (char)iVar16;
  *(char *)((long)puVar7 + 0x1df) = (char)iVar12;
  *(char *)(puVar7 + 0x78) = (char)iVar13;
  *(char *)((long)puVar7 + 0x1e1) = (char)param_4;
  puVar7[100] = (int)fVar17;
  bVar9 = *param_1;
  bVar5 = 7 < bVar9;
  if (bVar5) {
    bVar9 = 0xff;
  }
  puVar7 = &DAT_0514cb68 + (ulong)(uint)(int)(char)bVar9 * 0x79;
  if (bVar5) {
    puVar7 = &DAT_0514cb68;
  }
  *(undefined8 *)(puVar7 + 0x65) = 0x6400000000;
  puVar7[0x67] = *param_2;
  puVar7[0x68] = param_2[1];
  puVar7[0x69] = param_2[2];
  bVar9 = *param_1;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)(puVar7 + 0x6a) = bVar9;
  if ((int)fVar17 < 1) {
    local_98 = 0x9d1;
    FUN_0277d4ac(&local_98);
    uVar11 = 0;
    *(undefined1 *)(puVar7 + 0x77) = 6;
    puVar7[100] = 6;
    puVar7[0x6b] = (undefined4)local_98;
    puVar7[0x6c] = local_98._4_4_;
    do {
      uVar10 = DAT_0514cb64;
      uVar6 = DAT_0514cb60;
      uVar8 = DAT_0514cb5c;
      uVar1 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb64 = uVar1 >> 8 ^ uVar10 >> 0x13 ^ uVar1 ^ uVar10;
      puVar7[uVar11] = (int)((ulong)DAT_0514cb64 * 100 >> 0x20);
      if (0x62 < uVar11) {
        DAT_0514cb58 = uVar8;
        DAT_0514cb5c = uVar6;
        DAT_0514cb60 = uVar10;
        return 1;
      }
      uVar11 = uVar11 + 1;
      DAT_0514cb58 = uVar8;
      DAT_0514cb5c = uVar6;
      DAT_0514cb60 = uVar10;
    } while ((long)uVar11 < (long)(int)puVar7[100]);
  }
  else {
    if ((int)puVar7[100] < 1) {
      return 1;
    }
    uVar11 = 0;
    do {
      uVar10 = DAT_0514cb64;
      uVar6 = DAT_0514cb60;
      uVar8 = DAT_0514cb5c;
      uVar1 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb64 = uVar1 >> 8 ^ uVar10 >> 0x13 ^ uVar1 ^ uVar10;
      puVar7[uVar11] = (int)((ulong)DAT_0514cb64 * 100 >> 0x20);
      if (0x62 < uVar11) {
        DAT_0514cb58 = uVar8;
        DAT_0514cb5c = uVar6;
        DAT_0514cb60 = uVar10;
        return 1;
      }
      uVar11 = uVar11 + 1;
      DAT_0514cb58 = uVar8;
      DAT_0514cb5c = uVar6;
      DAT_0514cb60 = uVar10;
    } while ((long)uVar11 < (long)(int)puVar7[100]);
  }
  DAT_0514cb60 = uVar10;
  DAT_0514cb5c = uVar6;
  DAT_0514cb58 = uVar8;
  return 1;
}


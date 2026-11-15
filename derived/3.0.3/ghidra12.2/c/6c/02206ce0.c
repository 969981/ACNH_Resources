
int FUN_02206ce0(void)

{
  undefined *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  float fVar25;
  int local_a4;
  undefined *local_a0;
  char *pcStack_98;
  undefined *local_90;
  char *pcStack_88;
  int local_7c;
  int local_78 [2];
  undefined *local_70;
  char *pcStack_68;
  
  cVar5 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  bVar10 = false;
  bVar11 = true;
  bVar12 = false;
  if (cVar5 == '\x17') {
    iVar22 = (int)*(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
    bVar12 = SBORROW4(iVar22,0x31);
    bVar10 = iVar22 + -0x31 < 0;
    bVar11 = iVar22 == 0x31;
  }
  if (('\x04' < cVar5) && (bVar11 || bVar10 != bVar12)) {
    iVar14 = FUN_02206b60(1);
    local_78[0] = iVar14;
    iVar15 = FUN_02206b60(2);
    puVar7 = PTR_DAT_04bb2020;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "HarvestProgress";
    local_78[1] = iVar15;
    iVar16 = FUN_0273ea30(&local_70);
    puVar9 = PTR_DAT_04bc2a20;
    puVar8 = PTR_DAT_04bc27f0;
    local_a4 = 0;
    iVar22 = 0;
    do {
      local_7c = iVar22;
      lVar18 = FUN_0265c2a0(iVar22);
      if (lVar18 != 0) {
        if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
           (puVar19 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar19 == (undefined8 *)0x0)) {
          uVar20 = 0;
        }
        else {
          uVar20 = (**(code **)*puVar19)();
          uVar20 = uVar20 & 0xffffffff;
        }
        local_90 = puVar7 + 0x10;
        pcStack_88 = "SeasonEventPlace";
        sVar13 = FUN_02196ed0(&local_7c,&local_90);
        if (sVar13 == 0) {
          pbVar2 = (byte *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8));
          uVar24 = (ulong)*pbVar2;
          if (((uVar24 < 0x23) && (pbVar2[1] <= (byte)puVar8[uVar24])) &&
             ((*(uint *)(puVar9 + uVar24 * 4) >> (ulong)(pbVar2[1] & 0x1f) & 1) != 0)) {
            puVar1 = puVar7 + 0x10;
            pcStack_98 = "AbandonedHouse";
            local_a0 = puVar1;
            iVar17 = FUN_02749340(pbVar2 + 0x1267c,&local_a0);
            if (iVar17 < 2) {
              pcStack_68 = "MoveInCompletion";
              local_70 = puVar1;
              iVar17 = FUN_02749340(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x1267c,
                                    &local_70);
              if (iVar17 != 0) {
                local_a4 = local_a4 + 1;
              }
            }
          }
        }
        if ((((uVar20 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
           (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar19 != (undefined8 *)0x0))
        {
          (**(code **)*puVar19)();
        }
      }
      puVar1 = PTR_DAT_04bb39d8;
      iVar22 = iVar22 + 1;
    } while (iVar22 != 10);
    local_70 = (undefined *)0x0;
    uVar23 = 0;
    iVar22 = 0;
    if (iVar16 != 0) {
      if (iVar16 == 4) {
        if (local_a4 < 5) {
          uVar23 = 1;
        }
        else {
          uVar23 = 2;
        }
        iVar22 = 0;
        local_70 = (undefined *)(ulong)uVar23;
      }
      else {
        uVar23 = 1;
        local_70 = (undefined *)0x1;
        if (local_a4 < 5) {
          iVar22 = 0;
        }
        else {
          iVar22 = 1;
          local_70 = (undefined *)0x100000001;
        }
      }
    }
    if ((uint)(iVar15 + iVar14) < uVar23 + iVar22) {
      puVar21 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar23 = *puVar21 ^ *puVar21 << 0xb;
      uVar3 = puVar21[3];
      *puVar21 = puVar21[1];
      puVar21[1] = puVar21[2];
      uVar23 = uVar23 >> 8 ^ uVar3 >> 0x13 ^ uVar23 ^ uVar3;
      puVar21[2] = uVar3;
      puVar21[3] = uVar23;
      uVar6 = -((int)uVar23 >> 0x1f);
      puVar21 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar1);
      uVar4 = puVar21[3];
      uVar3 = *puVar21 ^ *puVar21 << 0xb;
      *puVar21 = puVar21[1];
      puVar21[1] = puVar21[2];
      uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
      puVar21[2] = uVar4;
      puVar21[3] = uVar3;
      fVar25 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
      if (local_78[uVar6] < local_78[(ulong)uVar6 + 2] && (fVar25 <= 0.1 || -1 < (int)uVar23)) {
        return uVar6 + 1;
      }
      if (local_78[~uVar23 >> 0x1f] < local_78[(ulong)(~uVar23 >> 0x1f) + 2]) {
        iVar22 = 1;
        if (-1 < (int)uVar23) {
          iVar22 = 2;
        }
        if (fVar25 <= 0.1) {
          return iVar22;
        }
        if ((int)uVar23 < 0) {
          return iVar22;
        }
      }
    }
  }
  return 0;
}


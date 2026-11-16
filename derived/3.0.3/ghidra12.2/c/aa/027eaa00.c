
void FUN_027eaa00(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ushort uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  int iVar17;
  undefined *local_70;
  char *pcStack_68;
  
  puVar6 = PTR_DAT_04bc2a20;
  puVar5 = PTR_DAT_04bc27f0;
  puVar2 = PTR_DAT_04bb4760;
  plVar11 = *(long **)PTR_DAT_04bb27d0;
  if (plVar11 != (long *)0x0) {
    lVar13 = *plVar11;
    uVar9 = *(ushort *)PTR_DAT_04bb6298;
    if (1 < *(byte *)(lVar13 + 0x476)) {
      if (uVar9 != 0xffff) {
        puVar3 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar9 & 0xffffffffU) * 8);
        if (0xff < uVar9) {
          puVar3 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar3 >> 5 & 1) != 0) {
          return;
        }
      }
      bVar4 = *(byte *)(lVar13 + 0x473);
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        uVar14 = (long)(char)bVar4 & 0xffffffff;
        pbVar16 = (byte *)(lVar13 + 0x48) + uVar14 * 0x80;
        if (7 < bVar4) {
          pbVar16 = (byte *)(lVar13 + 0x48);
        }
        if ((*pbVar16 >> 3 & 1) != 0) {
          lVar13 = plVar11[2] + 0x108 + uVar14 * 0xc;
          if (0xb < bVar4) {
            lVar13 = plVar11[2] + 0x108;
          }
          if (*(char *)(lVar13 + 10) == '\0') {
            return;
          }
        }
      }
    }
    if (uVar9 != 0xffff) {
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar9 & 0xffffffffU) * 8);
      if (0xff < uVar9) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 0xe & 1) != 0) {
        uVar14 = 0;
        iVar17 = 0;
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          pbVar16 = (byte *)(param_1 + (long)iVar17 * 0x13230);
          uVar10 = (ulong)*pbVar16;
          if (((uVar10 < 0x23) && (pbVar16[1] <= (byte)puVar5[uVar10])) &&
             ((*(uint *)(puVar6 + uVar10 * 4) >> (ulong)(pbVar16[1] & 0x1f) & 1) != 0)) {
            pcStack_68 = "MoveInCompletion";
            local_70 = puVar1;
            iVar8 = FUN_02749340(param_1 + (long)iVar17 * 0x13230 + 0x1267c,&local_70);
            if (iVar8 != 0) {
              local_70 = (undefined *)CONCAT44(local_70._4_4_,(uint)uVar14);
              lVar13 = *(long *)puVar2 + (uVar14 & 0xffffffff) * 0x15;
              if (0x6c < (uint)uVar14) {
                lVar13 = *(long *)puVar2;
              }
              uVar9 = (ushort)*(byte *)(lVar13 + 4) | (*(byte *)(lVar13 + 5) & 3) << 8;
              if (0x1ff < uVar9) {
                uVar9 = uVar9 | 0xfc00;
              }
              if (*(ushort *)PTR_DAT_04bb6298 != uVar9) {
                bVar7 = DAT_055c1b60 == &DAT_055c1b58;
                puVar15 = DAT_055c1b60 + -8;
                if ((uVar9 != 0) && (puVar12 = DAT_055c1b60, puVar15 != &DAT_055c1b18)) {
                  do {
                    puVar12 = (undefined8 *)puVar12[1];
                    uVar9 = uVar9 - 1;
                    bVar7 = puVar12 == &DAT_055c1b58;
                  } while (!bVar7 && uVar9 != 0);
                  puVar15 = puVar12 + -8;
                }
                puVar12 = &DAT_055c04a0;
                if (!bVar7) {
                  puVar12 = puVar15;
                }
                if (*(int *)(puVar12 + 7) != 0x6622bd46) goto LAB_027eac80;
              }
              FUN_026b90a0(pbVar16,param_2 & 1);
            }
          }
LAB_027eac80:
          uVar14 = uVar14 + 1;
          iVar17 = iVar17 + 1;
          if (uVar14 == 10) {
            return;
          }
        } while( true );
      }
    }
    uVar14 = 0;
    iVar17 = 0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      pbVar16 = (byte *)(param_1 + (long)iVar17 * 0x13230);
      uVar10 = (ulong)*pbVar16;
      if (((uVar10 < 0x23) && (pbVar16[1] <= (byte)puVar5[uVar10])) &&
         ((*(uint *)(puVar6 + uVar10 * 4) >> (ulong)(pbVar16[1] & 0x1f) & 1) != 0)) {
        pcStack_68 = "MoveInCompletion";
        local_70 = puVar2;
        iVar8 = FUN_02749340(param_1 + (long)iVar17 * 0x13230 + 0x1267c,&local_70);
        if (iVar8 != 0) {
          local_70 = (undefined *)CONCAT44(local_70._4_4_,(uint)uVar14);
          lVar13 = *(long *)PTR_DAT_04bb4760 + (uVar14 & 0xffffffff) * 0x15;
          if (0x6c < (uint)uVar14) {
            lVar13 = *(long *)PTR_DAT_04bb4760;
          }
          uVar9 = (ushort)*(byte *)(lVar13 + 4) | (*(byte *)(lVar13 + 5) & 3) << 8;
          if (0x1ff < uVar9) {
            uVar9 = uVar9 | 0xfc00;
          }
          if (*(ushort *)PTR_DAT_04bb6298 == uVar9) {
            FUN_026b90a0(pbVar16,param_2 & 1);
          }
        }
      }
      uVar14 = uVar14 + 1;
      iVar17 = iVar17 + 1;
    } while (uVar14 != 10);
  }
  return;
}


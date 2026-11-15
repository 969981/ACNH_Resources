
/* WARNING: Removing unreachable block (ram,0x020371a4) */

undefined8 FUN_02037010(long param_1,float *param_2,int *param_3,int param_4)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  ushort uVar16;
  undefined8 *puVar17;
  uint uVar18;
  float fVar19;
  undefined8 local_50;
  char *pcStack_48;
  
  param_2[0] = 10.0;
  param_2[1] = 0.0;
  param_2[2] = 10.0;
  *param_3 = 0;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "HotelOpend";
  uVar11 = FUN_0273f0a0(&local_50);
  uVar14 = 0;
  if ((uVar11 & 1) == 0) goto LAB_02037220;
  pbVar12 = (byte *)FUN_021c9770(param_4,1);
  if (pbVar12 == (byte *)0x0) {
    uVar14 = 0;
    goto LAB_02037220;
  }
  uVar14 = (uint)*pbVar12;
  if (*pbVar12 == 0) goto LAB_02037220;
  uVar14 = param_4 + 0x51;
  local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar14);
  uVar7 = *(ushort *)(param_1 + 0x2b4);
  lVar15 = *(long *)PTR_DAT_04bb4760 + (ulong)uVar14 * 0x15;
  if (0x6c < uVar14) {
    lVar15 = *(long *)PTR_DAT_04bb4760;
  }
  if (uVar7 == 0xffff) {
LAB_02037194:
    uVar16 = 0xffff;
  }
  else {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,3);
    puVar13 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar7 * 8);
    if (0xff < uVar7) {
      puVar13 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar16 = uVar7;
    if ((*puVar13 >> 3 & 1) != 0) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar16 = 0;
        puVar17 = DAT_055c1b60;
        do {
          if (*(int *)(puVar17 + -1) == 0x6622bd46) goto LAB_020371a8;
          puVar17 = (undefined8 *)puVar17[1];
          uVar16 = uVar16 + 1;
        } while (puVar17 != &DAT_055c1b58);
      }
      goto LAB_02037194;
    }
  }
LAB_020371a8:
  uVar3 = (ushort)*(byte *)(lVar15 + 4) | (*(byte *)(lVar15 + 5) & 3) << 8;
  if (0x1ff < uVar3) {
    uVar3 = uVar3 | 0xfc00;
  }
  if (uVar3 == uVar16) {
    local_50 = (undefined *)
               (CONCAT44(local_50._4_4_,(uint)(*(byte *)(lVar15 + 7) >> 2)) & 0xffffffff00000003);
    uVar14 = 3;
    if ((int)local_50 != 1) {
      uVar14 = 1;
    }
  }
  else {
    lVar15 = *(long *)PTR_DAT_04bbaed0 + (long)param_4 * 6;
    uVar16 = *(ushort *)(lVar15 + 0x74) & 0x3ff;
    if (0x1ff < uVar16) {
      uVar16 = uVar16 | 0xfc00;
    }
    uVar14 = 0;
    if (uVar16 == uVar7 && (*(byte *)(lVar15 + 0x75) & 0xc) != 4) {
      uVar14 = 2;
    }
  }
LAB_02037220:
  local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar14);
  if (uVar14 == 3) {
    lVar15 = **(long **)PTR_DAT_04bb27d0;
    if (1 < *(byte *)(lVar15 + 0x476)) {
      bVar6 = *(byte *)(lVar15 + 0x473);
      if ((long)(char)bVar6 != 0xffffffffffffffff) {
        uVar11 = (long)(char)bVar6 & 0xffffffff;
        pbVar12 = (byte *)(lVar15 + 0x48) + uVar11 * 0x80;
        if (7 < bVar6) {
          pbVar12 = (byte *)(lVar15 + 0x48);
        }
        if ((*pbVar12 >> 3 & 1) != 0) {
          lVar15 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
          lVar4 = lVar15 + uVar11 * 0xc;
          if (0xb < bVar6) {
            lVar4 = lVar15;
          }
          if (*(char *)(lVar4 + 10) == '\0') {
            return 0;
          }
        }
      }
    }
    puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar14 = *puVar13 ^ *puVar13 << 0xb;
    uVar18 = puVar13[3];
    *puVar13 = puVar13[1];
    puVar13[1] = puVar13[2];
    uVar14 = uVar14 >> 8 ^ uVar18 >> 0x13 ^ uVar14 ^ uVar18;
    puVar13[2] = uVar18;
    puVar13[3] = uVar14;
    lVar15 = *(long *)(param_1 + 0x5898);
    if (0 < (int)*(uint *)(lVar15 + 8)) {
      puVar2 = (ushort *)(param_1 + 0x5858);
      uVar18 = 0;
      uVar14 = (uint)(((ulong)uVar14 << 0x20) - (ulong)uVar14 >> 0x20);
      uVar8 = (uVar14 >> 0x1e ^ uVar14) * 0x6c078965 + 1;
      uVar14 = uVar8 ^ uVar8 * 0x800;
      uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
      uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
      uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
      uVar11 = (ulong)*(uint *)(lVar15 + 0x18) *
               (ulong)(uVar14 >> 8 ^ uVar8 >> 0x13 ^ uVar14 ^ uVar8) >> 0x20;
      do {
        if ((*(uint *)(*(long *)(lVar15 + 0x10) + (ulong)(uVar18 >> 5) * 4) >>
             (ulong)(uVar18 & 0x1f) & 1) != 0) {
          if ((int)uVar11 == 0) {
            iVar5 = *(int *)(lVar15 + 0x1c);
            uVar7 = *puVar2;
            iVar9 = 0;
            if (iVar5 != 0) {
              iVar9 = (int)uVar18 / iVar5;
            }
            iVar5 = iVar9 * iVar5;
            iVar9 = iVar9 + (uint)*(ushort *)(param_1 + 0x585a);
            iVar10 = iVar9 + -1;
            iVar1 = ((uint)uVar7 - iVar5) + uVar18;
            param_2[2] = (float)iVar9 * 5.0;
            *param_2 = (float)iVar1 * 5.0;
            iVar1 = iVar1 + -1;
            FUN_035a4360(puVar2,iVar1,iVar10,0);
            FUN_035a4360(puVar2,iVar1,iVar10 + (uint)DAT_057763a8,0);
            FUN_035a4360(puVar2,(((uint)uVar7 + (uint)DAT_057763b0) - iVar5) + uVar18 + -1,iVar10,0)
            ;
            FUN_035a4360(puVar2,(((uint)uVar7 + (uint)DAT_057763b8) - iVar5) + uVar18 + -1,
                         iVar10 + (uint)DAT_057763c0,0);
            return 1;
          }
          uVar11 = (ulong)((int)uVar11 - 1);
        }
        uVar18 = uVar18 + 1;
      } while (*(uint *)(lVar15 + 8) != uVar18);
    }
    fVar19 = *(float *)(PTR_DAT_04bb76e8 + 8);
    *param_2 = (float)(int)((int)((float)(int)*(float *)PTR_DAT_04bb76e8 / 5.0) -
                           (uint)(*(float *)PTR_DAT_04bb76e8 < 0.0)) * 5.0;
    param_2[2] = (float)(int)((int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0)) * 5.0;
  }
  else {
    if (uVar14 == 2) {
      lVar15 = *(long *)PTR_DAT_04bbaed0 + (long)param_4 * 6;
      uVar14 = (uint)*(byte *)(lVar15 + 0x70) | (*(byte *)(lVar15 + 0x71) & 0xf) << 8;
      if ((*(byte *)(lVar15 + 0x71) & 8) != 0) {
        uVar14 = uVar14 | 0xfffff000;
      }
      *param_2 = (float)(int)uVar14;
      uVar18 = (uint)(*(byte *)(lVar15 + 0x71) >> 4) | (uint)*(byte *)(lVar15 + 0x72) << 4;
      uVar14 = uVar18 | 0xfffff000;
      if (-1 < (char)*(byte *)(lVar15 + 0x72)) {
        uVar14 = uVar18;
      }
      param_2[2] = (float)(int)uVar14;
      bVar6 = *(byte *)(lVar15 + 0x73);
    }
    else {
      if (uVar14 != 1) {
        return 0;
      }
      pbVar12 = *(byte **)PTR_DAT_04bb4760 + (ulong)(param_4 + 0x51U) * 0x15;
      if (0x6c < param_4 + 0x51U) {
        pbVar12 = *(byte **)PTR_DAT_04bb4760;
      }
      uVar14 = (uint)*pbVar12 | (pbVar12[1] & 0xf) << 8;
      if ((pbVar12[1] & 8) != 0) {
        uVar14 = uVar14 | 0xfffff000;
      }
      *param_2 = (float)(int)uVar14;
      uVar18 = (uint)(pbVar12[1] >> 4) | (uint)pbVar12[2] << 4;
      uVar14 = uVar18 | 0xfffff000;
      if (-1 < (char)pbVar12[2]) {
        uVar14 = uVar18;
      }
      param_2[2] = (float)(int)uVar14;
      bVar6 = pbVar12[3];
    }
    *param_3 = (uint)bVar6 << 0x18;
  }
  return 1;
}


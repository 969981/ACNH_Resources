
uint FUN_0293fa10(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  byte local_64 [4];
  
  puVar1 = PTR_DAT_04bb48b0;
  lVar19 = *(long *)PTR_DAT_04bb48b0;
  if (*(char *)(lVar19 + 0x18) == '\0') {
    bVar6 = FUN_00991e00(lVar19);
    *(byte *)(lVar19 + 0x18) = bVar6 & 1;
    if ((bVar6 & 1) == 0) goto LAB_0293fb28;
    lVar19 = *(long *)puVar1;
  }
  uVar13 = 0;
  pbVar17 = (byte *)(param_1 + 0x679);
  do {
    uVar18 = uVar13 >> 3 & 0x1fffffff;
    uVar11 = 1 << (ulong)((uint)uVar13 & 7);
    if ((uVar11 & *(byte *)(lVar19 + 0x24 + uVar18)) != 0) {
      *pbVar17 = *pbVar17 | 1;
    }
    if ((uVar11 & *(byte *)(lVar19 + 0x48 + uVar18)) != 0) {
      *pbVar17 = *pbVar17 | 2;
    }
    if ((uVar11 & *(byte *)(lVar19 + 0x6c + uVar18)) != 0) {
      *pbVar17 = *pbVar17 | 4;
    }
    if ((uVar11 & *(byte *)(lVar19 + 0x90 + uVar18)) != 0) {
      *pbVar17 = *pbVar17 | 8;
    }
    if ((uVar11 & *(byte *)(lVar19 + 0xb4 + uVar18)) != 0) {
      *pbVar17 = *pbVar17 | 0x10;
    }
    uVar13 = uVar13 + 1;
    pbVar17 = pbVar17 + 3;
  } while (uVar13 != 0x120);
LAB_0293fb28:
  puVar5 = PTR_DAT_04bb27c0;
  local_64[0] = 0;
  lVar19 = 0;
  uVar11 = 0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    if (*(char *)(param_1 + ((long)((ulong)uVar11 << 0x20) >> 0x1b) + 0x291) != '\0') {
      uVar15 = *(uint *)(param_1 + 0x4f8 + lVar19);
      if ((uVar15 != 0) && (lVar14 = *(long *)puVar5, lVar14 != 0)) {
        plVar20 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8));
        if ((plVar20 == (long *)0x0) ||
           (((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar20 + 0x46) != uVar15)))) {
          plVar20 = (long *)0x0;
        }
        if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar14 = *(long *)puVar5;
          iVar7 = (**(code **)(*plVar9 + 0x60))();
          if (iVar7 < 0x11) {
            uVar15 = 1;
          }
          else {
            uVar15 = *(uint *)(lVar14 + 0x5e8);
            if (4 < uVar15) goto LAB_0293fc20;
            uVar15 = 0x1aU >> (ulong)(uVar15 & 0x1f) & 1;
          }
        }
        else {
LAB_0293fc20:
          uVar15 = 0;
        }
        if (plVar20 != (long *)0x0) {
          lVar14 = plVar20[0x2a];
          if (((*PTR_DAT_04bc3ab0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc3ab0), iVar7 != 0)) {
            *(undefined **)PTR_DAT_04bc3aa8 = puVar1;
            __cxa_guard_release(PTR_DAT_04bc3ab0);
          }
          uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bc3aa8);
          uVar8 = 0;
          uVar16 = 0;
          if ((int)lVar14 == 1) {
            uVar16 = uVar15;
          }
          if (((uVar13 & 1) != 0) && (uVar16 != 0)) {
            if (*(char *)(param_1 + 0x9e2) == '\0') {
              fVar21 = *(float *)(plVar20[0xd] + 0x278);
              fVar22 = *(float *)(plVar20[0xd] + 0x280);
              FUN_009921b0(param_1 + 0x670,
                           ((int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0) >> 4) * 0x12 +
                           ((int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0) >> 4),0);
            }
            goto LAB_0293fb64;
          }
          goto LAB_0293fea0;
        }
      }
      uVar8 = 0;
      goto LAB_0293fea0;
    }
LAB_0293fb64:
    lVar19 = lVar19 + 8;
    uVar11 = uVar11 + 1;
  } while (lVar19 != 0xa0);
  local_88 = 0;
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_90 = PTR_DAT_04bb2010 + 0x10;
  local_78 = 0;
  local_64[0] = local_64[0] | 4;
  local_80 = puStack_90;
  uVar8 = FUN_00992370(param_1 + 0x670,&local_98,1,local_64);
  puVar1 = PTR_DAT_04bb39d8;
  if ((uVar8 & 1) != 0) {
    fVar22 = (float)local_88._4_4_ * 0.5;
    fVar21 = (float)(int)local_88 * 0.5;
    fVar24 = (float)(int)local_78 * 0.5;
    fVar23 = (float)local_78._4_4_ * 0.5;
    uVar11 = 0;
    if (fVar21 != (float)(int)fVar21) {
      uVar11 = (uint)(fVar21 < 0.0);
    }
    uVar15 = 0;
    if (fVar22 != (float)(int)fVar22) {
      uVar15 = (uint)(fVar22 < 0.0);
    }
    uVar16 = 0;
    if (fVar24 != (float)(int)fVar24) {
      uVar16 = (uint)(fVar24 < 0.0);
    }
    uVar12 = 0;
    if (fVar23 != (float)(int)fVar23) {
      uVar12 = (uint)(fVar23 < 0.0);
    }
    puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar3 = puVar10[3];
    uVar2 = *puVar10 ^ *puVar10 << 0xb;
    *puVar10 = puVar10[1];
    puVar10[1] = puVar10[2];
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    puVar10[2] = uVar3;
    puVar10[3] = uVar2;
    uVar4 = *(undefined4 *)puVar1;
    *(uint *)(param_2 + 8) =
         ((int)fVar21 - uVar11) +
         (int)((ulong)uVar2 * (ulong)(((int)fVar24 - ((int)fVar21 - uVar11)) - uVar16) >> 0x20);
    puVar10 = (uint *)nn::os::GetTlsValue(uVar4);
    uVar16 = puVar10[3];
    uVar11 = *puVar10 ^ *puVar10 << 0xb;
    *puVar10 = puVar10[1];
    puVar10[1] = puVar10[2];
    uVar11 = uVar11 >> 8 ^ uVar16 >> 0x13 ^ uVar11 ^ uVar16;
    puVar10[2] = uVar16;
    puVar10[3] = uVar11;
    *(uint *)(param_2 + 0xc) =
         ((int)fVar22 - uVar15) +
         (int)((ulong)uVar11 * (ulong)(((int)fVar23 - ((int)fVar22 - uVar15)) - uVar12) >> 0x20);
  }
LAB_0293fea0:
  return uVar8 & 1;
}


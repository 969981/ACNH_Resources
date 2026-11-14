
/* WARNING: Removing unreachable block (ram,0x0185831c) */
/* WARNING: Removing unreachable block (ram,0x0185832c) */

undefined8 FUN_01858240(long param_1,float *param_2)

{
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long *local_d8;
  undefined **ppuStack_d0;
  long local_c8;
  long lStack_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  undefined *local_a0;
  int local_98;
  int local_94;
  undefined8 local_90;
  float local_88;
  long local_78;
  
  local_b0 = 0;
  local_b8 = PTR_DAT_04bbfe68 + 0x10;
  lVar13 = *(long *)PTR_DAT_04bb2720;
  if (lVar13 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar9 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_ac = *(undefined4 *)(puVar15 + 7);
  local_a8 = FUN_017baf44();
  puVar7 = PTR_DAT_04bbbb80;
  local_a8 = local_a8 & 1;
  lStack_c0 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x10;
  local_c8 = *(long *)PTR_DAT_04bb32e8 + 0x4060;
  local_78 = 0;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar11 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar11 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar11 >> 0x1a & 1) != 0) && ((*puVar11 >> 1 & 1) != 0)) &&
       (*(char *)(param_1 + 0x494) == '\0')) {
      if (((*puVar11 >> 0x1a & 1) == 0) || ((*puVar11 >> 1 & 1) == 0)) {
        local_78 = 0;
      }
      else {
        local_78 = 0;
        if (*(long *)PTR_DAT_04bb59d8 != 0) {
          local_78 = *(long *)PTR_DAT_04bb59d8 + 0x18;
        }
      }
    }
  }
  local_d8 = &local_78;
  ppuStack_d0 = &local_b8;
  fVar20 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
  fVar22 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
  uVar16 = 0;
  uVar17 = 1;
  bVar8 = true;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  iVar9 = DAT_05233980;
  iVar12 = DAT_05233970;
  do {
    uVar14 = uVar17;
    if (uVar17 < 3) {
      uVar14 = 2;
    }
    local_98 = ((int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0)) - uVar16;
    local_94 = ((int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0)) - uVar16;
    fVar23 = (float)local_98 * 5.0 + 2.5;
    fVar21 = (float)local_94 * 5.0 + 2.5;
    uVar4 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    local_a0 = puVar1;
    if (iVar12 <= (int)(uVar4 & 0xfffffffe) && (int)(uVar4 & 0xfffffffe) <= iVar9) {
      uVar5 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
      uVar2 = uVar5 & 0xfffffffe;
      uVar5 = (uVar5 * 0x80 & 0xffffff00) + ((int)uVar4 >> 1);
      if ((DAT_05233974 <= (int)uVar2 && (int)uVar2 <= DAT_05233984) && uVar5 >> 0xf == 0) {
        if ((*(uint *)(puVar7 + (ulong)(uVar5 >> 5) * 4 + 8) >> (ulong)(uVar4 >> 1 & 0x1f) & 1) != 0
           ) {
          uVar10 = FUN_01859768(&local_d8,&local_a0);
          if ((uVar10 & 1) != 0) {
LAB_0185894c:
            puVar6 = (undefined4 *)PTR_DAT_04bb39d8;
            if (param_2 != (float *)0x0) {
              local_88 = 0.0;
              local_90 = 0;
              uVar10 = FUN_01a1c950(&local_a0,&local_90);
              puVar6 = (undefined4 *)PTR_DAT_04bb39d8;
              if ((uVar10 & 1) != 0) {
                *(undefined8 *)param_2 = local_90;
                param_2[2] = local_88;
                fVar20 = (float)FUN_015cb8d4(&local_90,1);
                param_2[1] = fVar20;
                puVar6 = (undefined4 *)PTR_DAT_04bb39d8;
              }
            }
joined_r0x0185898c:
            if (!bVar8) {
              PTR_DAT_04bb39d8 = (undefined *)puVar6;
              return 0;
            }
            PTR_DAT_04bb39d8 = (undefined *)puVar6;
            puVar11 = (uint *)nn::os::GetTlsValue(*puVar6);
            uVar17 = puVar11[3];
            uVar16 = *puVar11 ^ *puVar11 << 0xb;
            *puVar11 = puVar11[1];
            puVar11[1] = puVar11[2];
            uVar16 = uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar16 ^ uVar17;
            puVar11[2] = uVar17;
            puVar11[3] = uVar16;
            *param_2 = *param_2 + ((float)(uVar16 >> 9 | 0x3f800000) + -1.0) * 10.0 + -5.0;
            puVar11 = (uint *)nn::os::GetTlsValue(*puVar6);
            uVar16 = *puVar11 ^ *puVar11 << 0xb;
            uVar17 = puVar11[3];
            *puVar11 = puVar11[1];
            puVar11[1] = puVar11[2];
            uVar16 = uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar16 ^ uVar17;
            puVar11[2] = uVar17;
            puVar11[3] = uVar16;
            param_2[2] = param_2[2] + ((float)(uVar16 >> 9 | 0x3f800000) + -1.0) * 10.0 + -5.0;
            return 1;
          }
          iVar9 = DAT_05233980;
          iVar12 = DAT_05233970;
        }
      }
    }
    if (uVar16 != 0) {
      iVar19 = uVar14 - 1;
      iVar18 = iVar19;
      do {
        local_98 = local_98 + 1;
        fVar23 = (float)local_98 * 5.0 + 2.5;
        fVar21 = (float)local_94 * 5.0 + 2.5;
        uVar14 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
        if (iVar12 <= (int)(uVar14 & 0xfffffffe) && (int)(uVar14 & 0xfffffffe) <= iVar9) {
          uVar4 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
          uVar5 = uVar4 & 0xfffffffe;
          uVar4 = (uVar4 * 0x80 & 0xffffff00) + ((int)uVar14 >> 1);
          if ((DAT_05233974 <= (int)uVar5 && (int)uVar5 <= DAT_05233984) && uVar4 >> 0xf == 0) {
            if ((*(uint *)(puVar7 + (ulong)(uVar4 >> 5) * 4 + 8) >> (ulong)(uVar14 >> 1 & 0x1f) & 1)
                != 0) {
              uVar10 = FUN_01859768(&local_d8,&local_a0);
              if ((uVar10 & 1) != 0) goto LAB_0185894c;
              iVar9 = DAT_05233980;
              iVar12 = DAT_05233970;
            }
          }
        }
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      iVar18 = iVar19;
      do {
        local_94 = local_94 + 1;
        fVar23 = (float)local_98 * 5.0 + 2.5;
        fVar21 = (float)local_94 * 5.0 + 2.5;
        uVar14 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
        if (iVar12 <= (int)(uVar14 & 0xfffffffe) && (int)(uVar14 & 0xfffffffe) <= iVar9) {
          uVar4 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
          uVar5 = uVar4 & 0xfffffffe;
          uVar4 = (uVar4 * 0x80 & 0xffffff00) + ((int)uVar14 >> 1);
          if ((DAT_05233974 <= (int)uVar5 && (int)uVar5 <= DAT_05233984) && uVar4 >> 0xf == 0) {
            if ((*(uint *)(puVar7 + (ulong)(uVar4 >> 5) * 4 + 8) >> (ulong)(uVar14 >> 1 & 0x1f) & 1)
                != 0) {
              uVar10 = FUN_01859768(&local_d8,&local_a0);
              if ((uVar10 & 1) != 0) goto LAB_0185894c;
              iVar9 = DAT_05233980;
              iVar12 = DAT_05233970;
            }
          }
        }
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      iVar18 = iVar19;
      do {
        local_98 = local_98 + -1;
        fVar23 = (float)local_98 * 5.0 + 2.5;
        fVar21 = (float)local_94 * 5.0 + 2.5;
        uVar14 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
        if (iVar12 <= (int)(uVar14 & 0xfffffffe) && (int)(uVar14 & 0xfffffffe) <= iVar9) {
          uVar4 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
          uVar5 = uVar4 & 0xfffffffe;
          uVar4 = (uVar4 * 0x80 & 0xffffff00) + ((int)uVar14 >> 1);
          if ((DAT_05233974 <= (int)uVar5 && (int)uVar5 <= DAT_05233984) && uVar4 >> 0xf == 0) {
            if ((*(uint *)(puVar7 + (ulong)(uVar4 >> 5) * 4 + 8) >> (ulong)(uVar14 >> 1 & 0x1f) & 1)
                != 0) {
              uVar10 = FUN_01859768(&local_d8,&local_a0);
              if ((uVar10 & 1) != 0) goto LAB_0185894c;
              iVar9 = DAT_05233980;
              iVar12 = DAT_05233970;
            }
          }
        }
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
      do {
        local_94 = local_94 + -1;
        fVar23 = (float)local_98 * 5.0 + 2.5;
        fVar21 = (float)local_94 * 5.0 + 2.5;
        uVar14 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
        if (iVar12 <= (int)(uVar14 & 0xfffffffe) && (int)(uVar14 & 0xfffffffe) <= iVar9) {
          uVar4 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
          uVar5 = uVar4 & 0xfffffffe;
          uVar4 = (uVar4 * 0x80 & 0xffffff00) + ((int)uVar14 >> 1);
          if ((DAT_05233974 <= (int)uVar5 && (int)uVar5 <= DAT_05233984) && uVar4 >> 0xf == 0) {
            if ((*(uint *)(puVar7 + (ulong)(uVar4 >> 5) * 4 + 8) >> (ulong)(uVar14 >> 1 & 0x1f) & 1)
                != 0) {
              uVar10 = FUN_01859768(&local_d8,&local_a0);
              if ((uVar10 & 1) != 0) {
                puVar6 = (undefined4 *)PTR_DAT_04bb39d8;
                if (param_2 != (float *)0x0) {
                  local_88 = 0.0;
                  local_90 = 0;
                  uVar10 = FUN_01a1c950(&local_a0,&local_90);
                  puVar6 = (undefined4 *)PTR_DAT_04bb39d8;
                  if ((uVar10 & 1) != 0) {
                    *(undefined8 *)param_2 = local_90;
                    param_2[2] = local_88;
                    fVar20 = (float)FUN_015cb8d4(&local_90,1);
                    param_2[1] = fVar20;
                    puVar6 = (undefined4 *)PTR_DAT_04bb39d8;
                  }
                }
                goto joined_r0x0185898c;
              }
              iVar9 = DAT_05233980;
              iVar12 = DAT_05233970;
            }
          }
        }
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    bVar8 = uVar16 < 5;
    uVar16 = uVar16 + 1;
    uVar17 = uVar17 + 2;
    if (uVar16 == 6) {
      return 0;
    }
  } while( true );
}


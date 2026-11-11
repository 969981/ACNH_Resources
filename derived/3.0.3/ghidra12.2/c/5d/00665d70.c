
undefined8 FUN_00665d70(undefined8 param_1,undefined8 param_2,long param_3)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  float fVar19;
  double dVar20;
  double __y;
  uint local_124;
  undefined1 auStack_f0 [12];
  uint local_e4;
  uint uStack_e0;
  char *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  uint local_8c [3];
  
  local_a8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_d0 = (char *)0x0;
  local_c8 = 0;
  FUN_0049e570(&local_d0);
  FUN_0049e630(&local_d0);
  FUN_0065a590(auStack_f0);
  uVar6 = FUN_00665b90(&local_d0,auStack_f0);
  if ((uVar6 & 1) == 0) {
    uVar12 = 0x80040200;
  }
  else {
    FUN_0065a5f0(param_3,auStack_f0);
    lVar16 = *(long *)(param_3 + 0x130);
    uVar2 = local_e4;
    if (local_e4 < 2) {
      uVar2 = 1;
    }
    uVar15 = uStack_e0;
    if (uStack_e0 < 2) {
      uVar15 = 1;
    }
    FUN_0049e630(&local_d0);
    puVar5 = PTR_DAT_048607c0;
    local_8c[0] = uVar2;
    if ((int)uVar2 < 1) {
      puVar7 = (undefined1 *)0x0;
      local_124 = 0x80000000;
      fVar4 = DAT_04102f28;
    }
    else {
      puVar7 = (undefined1 *)FUN_00421ed0(PTR_DAT_048607c0,4,local_8c);
      local_124 = local_8c[0];
      fVar4 = DAT_04102f28;
    }
    DAT_04102f28 = fVar4;
    if (0 < (int)uVar15) {
      do {
        if ((uVar2 - 8 >> 3 < 0xfff) && (*local_d0 == '\x02')) {
          if ((long)local_d0 < local_c8) {
            memcpy(local_8c,local_d0,1);
            local_d0 = local_d0 + 1;
            if (local_c8 <= (long)local_d0) goto LAB_0066616c;
LAB_00665ec8:
            memcpy(local_8c,local_d0,1);
            local_d0 = local_d0 + 1;
          }
          else {
            FUN_0049e700(&local_d0,local_8c,1);
            if ((long)local_d0 < local_c8) goto LAB_00665ec8;
LAB_0066616c:
            FUN_0049e700(&local_d0,local_8c,1);
          }
          puVar7[1] = (byte)local_8c[0];
          if ((long)local_d0 < local_c8) {
            memcpy(local_8c,local_d0,1);
            local_d0 = local_d0 + 1;
          }
          else {
            FUN_0049e700(&local_d0,local_8c,1);
          }
          puVar7[2] = (byte)local_8c[0];
          if (local_c8 <= (long)local_d0) {
            FUN_0049e700(&local_d0,local_8c,1);
            uVar9 = (byte)local_8c[0];
            if (puVar7[1] == '\x02') goto LAB_00665f5c;
LAB_00666104:
            *puVar7 = 2;
            puVar7[3] = uVar9;
            puVar8 = puVar7 + 4;
            uVar17 = uVar2 - 1;
            goto LAB_0066618c;
          }
          memcpy(local_8c,local_d0,1);
          local_d0 = local_d0 + 1;
          uVar9 = (byte)local_8c[0];
          if (puVar7[1] != '\x02') goto LAB_00666104;
LAB_00665f5c:
          uVar9 = (byte)local_8c[0];
          if ((char)puVar7[2] < '\0') goto LAB_00666104;
          lVar18 = 0;
          puVar8 = puVar7;
          puVar14 = puVar7 + 8;
          do {
            uVar6 = 0;
            do {
              if ((long)local_d0 < local_c8) {
                memcpy(local_8c,local_d0,1);
                local_d0 = local_d0 + 1;
                uVar17 = local_8c[0] & 0xff;
                if ((byte)local_8c[0] < 0x81) goto LAB_00665fa4;
LAB_0066601c:
                uVar11 = uVar17 & 0x7f;
                if ((long)local_d0 < local_c8) {
                  memcpy(local_8c,local_d0,1);
                  local_d0 = local_d0 + 1;
                }
                else {
                  FUN_0049e700(&local_d0,local_8c,1);
                }
                if (uVar11 != 0) {
                  uVar6 = (ulong)(int)uVar6;
                  uVar3 = uVar11 - 1;
                  uVar17 = uVar17 & 3;
                  if (uVar17 != 0) {
                    puVar10 = puVar8 + uVar6 * 4;
                    do {
                      uVar17 = uVar17 - 1;
                      uVar11 = uVar11 - 1;
                      uVar6 = uVar6 + 1;
                      *puVar10 = (byte)local_8c[0];
                      puVar10 = puVar10 + 4;
                    } while ((uVar17 & 0xff) != 0);
                  }
                  if (2 < (uVar3 & 0xff)) {
                    puVar10 = puVar14 + uVar6 * 4;
                    do {
                      uVar11 = uVar11 - 4;
                      puVar10[-8] = (byte)local_8c[0];
                      puVar10[-4] = (byte)local_8c[0];
                      *puVar10 = (byte)local_8c[0];
                      uVar6 = uVar6 + 4;
                      puVar10[4] = (byte)local_8c[0];
                      puVar10 = puVar10 + 0x10;
                    } while ((uVar11 & 0xff) != 0);
                  }
                }
              }
              else {
                FUN_0049e700(&local_d0,local_8c,1);
                uVar17 = local_8c[0] & 0xff;
                if (0x80 < uVar17) goto LAB_0066601c;
LAB_00665fa4:
                if (uVar17 != 0) {
                  puVar10 = puVar8 + (long)(int)uVar6 * 4;
                  do {
                    uVar17 = uVar17 - 1;
                    if ((long)local_d0 < local_c8) {
                      memcpy(local_8c,local_d0,1);
                      local_d0 = local_d0 + 1;
                    }
                    else {
                      FUN_0049e700(&local_d0,local_8c,1);
                    }
                    uVar6 = (ulong)((int)uVar6 + 1);
                    *puVar10 = (byte)local_8c[0];
                    puVar10 = puVar10 + 4;
                  } while ((uVar17 & 0xff) != 0);
                }
              }
            } while ((int)uVar6 < (int)uVar2);
            lVar18 = lVar18 + 1;
            puVar8 = puVar8 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar18 != 4);
        }
        else {
          puVar8 = puVar7;
          uVar17 = uVar2;
LAB_0066618c:
          FUN_006662d0(puVar8,uVar17,&local_d0);
        }
        uVar15 = uVar15 - 1;
        if (0 < (int)uVar2) {
          lVar18 = 0;
          pbVar13 = puVar7 + 3;
          uVar17 = uVar2;
          do {
            fVar19 = (float)NEON_ucvtf((uint)pbVar13[-3]);
            __y = (double)(int)(*pbVar13 - 0x80);
            pfVar1 = (float *)(lVar16 + lVar18);
            uVar17 = uVar17 - 1;
            dVar20 = pow(2.0,__y);
            *pfVar1 = fVar19 * fVar4 * (float)dVar20;
            fVar19 = (float)NEON_ucvtf((uint)pbVar13[-2]);
            dVar20 = pow(2.0,__y);
            pfVar1[1] = fVar19 * fVar4 * (float)dVar20;
            fVar19 = (float)NEON_ucvtf((uint)pbVar13[-1]);
            dVar20 = pow(2.0,__y);
            pbVar13 = pbVar13 + 4;
            lVar18 = lVar18 + 0xc;
            pfVar1[2] = fVar19 * fVar4 * (float)dVar20;
          } while (0 < (int)uVar17);
        }
        lVar16 = lVar16 + (-(ulong)(uVar2 * 3 >> 0x1f) & 0xfffffffc00000000 |
                          (ulong)(uVar2 * 3) << 2);
      } while (0 < (int)uVar15);
    }
    uVar12 = 0;
    if ((puVar7 != (undefined1 *)0x0) && (-1 < (int)local_124)) {
      FUN_00421f90(puVar5,puVar7,4,local_124 & 0x3fffffff);
      uVar12 = 0;
    }
  }
  FUN_0049e4f0(&local_d0);
  return uVar12;
}



void FUN_029dba10(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_1164;
  undefined1 local_1160 [12];
  uint local_1154;
  uint local_1150 [355];
  undefined8 auStack_bc4 [2];
  uint local_bb0 [357];
  undefined8 uStack_61c;
  uint local_610;
  uint local_60c;
  uint local_608 [362];
  
  uVar17 = *(uint *)(param_2 + 1);
  if ((int)uVar17 < 0) {
    return;
  }
  if ((uVar17 == 0x1f5) && (*(int *)((long)param_2 + 0xc) == 0)) {
    return;
  }
  if (param_1[0x28] == uVar17) {
    return;
  }
  if (uVar17 / 100 < 7 && (1 << (ulong)(uVar17 / 100 & 0x1f) & 0x6cU) != 0) {
    local_608[0] = uVar17;
    lVar7 = FUN_029d5f90(*param_2,local_608);
    if (lVar7 != 0) {
      uVar14 = param_1[8];
      uVar15 = param_1[6];
      uVar9 = *(undefined4 *)(lVar7 + 8);
      uVar18 = *(uint *)(lVar7 + 0xc);
      uVar2 = *(uint *)(lVar7 + 4);
      if ((int)uVar14 < (int)uVar15) {
LAB_029dbae0:
        param_1[8] = uVar14 + 1;
        uVar10 = 0;
        if ((int)uVar15 <= (int)(param_1[7] + uVar14)) {
          uVar10 = uVar15;
        }
        *(uint *)(*(long *)(param_1 + 4) + (long)(int)((param_1[7] + uVar14) - uVar10) * 4) = uVar17
        ;
      }
      else {
        if (0 < (int)uVar14) {
          uVar10 = 0;
          if ((int)(param_1[7] + 1) < (int)uVar15) {
            uVar10 = param_1[7] + 1;
          }
          param_1[7] = uVar10;
          param_1[8] = uVar14 - 1;
          uVar14 = uVar14 - 1;
        }
        if ((int)uVar14 < (int)uVar15) goto LAB_029dbae0;
      }
      uVar17 = param_1[0x2a];
      param_1[0x29] = uVar18;
      param_1[0x2a] = uVar2;
      *(char *)((long)param_1 + 0xad) = (char)uVar9;
      cVar13 = '\x01';
      if (uVar17 == uVar2) {
        cVar13 = (char)param_1[0x2b] + '\x01';
      }
      *(char *)(param_1 + 0x2b) = cVar13;
      uVar17 = *(uint *)(param_2 + 1);
    }
  }
  param_1[0x28] = uVar17;
  if (param_1[8] == 0) {
    local_1154 = 0xffffffff;
    uVar17 = *param_1;
    uVar18 = param_1[1];
    uVar14 = param_1[2];
    uVar15 = param_1[3];
    while ((local_1154 == 0x5b || (local_1154 == 0xffffffff))) {
      uVar17 = uVar17 ^ uVar17 << 0xb;
      *param_1 = uVar18;
      param_1[1] = uVar14;
      uVar2 = uVar15 >> 0x13 ^ uVar17 >> 8 ^ uVar15 ^ uVar17;
      param_1[2] = uVar15;
      param_1[3] = uVar2;
      uVar17 = uVar18;
      uVar18 = uVar14;
      uVar14 = uVar15;
      uVar15 = uVar2;
      local_1154 = (int)((ulong)uVar2 * 0x6b >> 0x20) + 1;
    }
    uVar18 = param_1[6];
    uVar17 = 0;
    if ((int)uVar18 < 1) goto LAB_029dc30c;
  }
  else {
    local_1160._0_8_ = *param_2;
    cVar13 = *(char *)(param_2 + 2);
    iVar11 = *(int *)((long)param_2 + 0xc);
    cVar3 = *(char *)((long)param_1 + 0xad);
    lVar7 = 0x14;
    do {
      lVar8 = lVar7 + 0x18;
      *(undefined8 *)((long)local_bb0 + lVar7 + 0x594) = 0xffffffffffffffff;
      *(undefined8 *)((long)local_bb0 + lVar7 + 0x59c) = 0xffffffff00000000;
      *(undefined8 *)((long)local_608 + lVar7 + -4) = 0xffffffff;
      lVar7 = lVar8;
    } while (lVar8 != 0x5b4);
    local_1150[0] = 0xffffffff;
    uVar9 = 1;
    if (cVar3 == '\x03') {
      uVar9 = 2;
    }
    if ((char)param_1[0x2b] < '\x03') {
      local_60c = param_1[0x2a];
      FUN_029dc3b0(param_1,local_608,local_1150,&local_60c,uVar9,local_1160._0_8_);
      uVar17 = local_1150[0];
      if (local_1150[0] == 0xffffffff) goto LAB_029dbbc8;
    }
    else {
LAB_029dbbc8:
      uVar5 = local_1160._0_8_;
      uVar17 = param_1[0x2a];
      if ((int)uVar17 < 0x18) {
        local_610 = uVar17 + 1;
        if ((int)uVar17 < 0xc) {
          uVar18 = uVar17 + 0xc;
          local_610 = (int)local_610 % 0xc;
          uVar15 = (int)(uVar17 + 0xb) % 0xc;
          uVar14 = (int)(uVar17 + 0x15) % 0xc + 0xc;
        }
        else {
          uVar18 = uVar17 - 0xc;
          uVar14 = uVar17 - 9;
          if (0xb < uVar17 - 9) {
            uVar14 = uVar17 - 0x15;
          }
          local_610 = local_610 + ((local_610 & 0xff) / 0xc) * -0xc + 0xc & 0xff;
          uVar15 = uVar17 + 0xb + ((uVar17 + 0xb & 0xff) / 0xc) * -0xc + 0xc & 0xff;
        }
      }
      else {
        uVar15 = 0xffffffff;
        uVar18 = 0xffffffff;
        uVar14 = 0xffffffff;
        local_610 = 0xffffffff;
      }
      FUN_029dc3b0(param_1,local_608,local_1150,&local_610,uVar9,local_1160._0_8_);
      local_610 = uVar15;
      FUN_029dc3b0(param_1,local_608,local_1150,&local_610,uVar9,uVar5);
      local_610 = uVar18;
      FUN_029dc3b0(param_1,local_608,local_1150,&local_610,uVar9,uVar5);
      local_610 = uVar14;
      FUN_029dc3b0(param_1,local_608,local_1150,&local_610,uVar9,uVar5);
      uVar17 = local_1150[0];
      if (local_1150[0] == 0xffffffff) {
        lVar7 = *(long *)(param_1 + 4);
        uVar15 = param_1[6];
        uVar18 = 1;
        local_1164 = param_1[7];
        uVar14 = param_1[8];
        uVar17 = 0xffffffff;
        do {
          uVar2 = uVar14;
          uVar10 = local_1164;
          if (uVar18 != 0x5b) {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              uVar1 = 0;
              if ((int)uVar15 <= (int)uVar10) {
                uVar1 = uVar15;
              }
              if (uVar18 == *(uint *)(lVar7 + (long)(int)(uVar10 - uVar1) * 4)) goto LAB_029dbde8;
              uVar10 = uVar10 + 1;
            }
            uVar17 = uVar17 + 1;
            puVar12 = local_608 + (ulong)uVar17 * 3;
            if (0x77 < uVar17) {
              puVar12 = local_608;
            }
            local_bb0[0] = uVar18;
            lVar8 = FUN_029d5f90(local_1160._0_8_,local_bb0);
            *puVar12 = uVar18;
            if (lVar8 != 0) {
              uVar2 = *(uint *)(lVar8 + 0xc);
              puVar12 = local_608 + (ulong)uVar17 * 3 + 1;
              if (0x77 < uVar17) {
                puVar12 = local_608 + 1;
              }
              *puVar12 = *(uint *)(lVar8 + 4);
              puVar12 = local_608 + (ulong)uVar17 * 3 + 2;
              if (0x77 < uVar17) {
                puVar12 = local_608 + 2;
              }
              *puVar12 = uVar2;
            }
          }
LAB_029dbde8:
          uVar18 = uVar18 + 1;
        } while (uVar18 != 0x6c);
      }
    }
    if (cVar13 == '\0') {
LAB_029dc1c4:
      fVar19 = 0.0;
      uVar18 = uVar17 + 1 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
      puVar12 = local_608;
      if ((int)uVar17 < 0) {
        puVar12 = (uint *)0x0;
      }
      if (uVar18 != 0) {
        uVar17 = 0;
        do {
          fVar20 = 0.0;
          if (puVar12[(long)(int)uVar17 * 3 + 1] < 0x18) {
            fVar20 = *(float *)(&DAT_0417e208 + (ulong)puVar12[(long)(int)uVar17 * 3 + 1] * 4);
          }
          fVar19 = fVar19 + fVar20;
          uVar17 = uVar17 + 1;
        } while (uVar18 != uVar17);
      }
      uVar17 = *param_1 ^ *param_1 << 0xb;
      uVar14 = param_1[3];
      *param_1 = param_1[1];
      param_1[1] = param_1[2];
      uVar17 = uVar17 >> 8 ^ uVar14 >> 0x13 ^ uVar17 ^ uVar14;
      param_1[2] = uVar14;
      param_1[3] = uVar17;
      if (uVar18 != 0) {
        uVar14 = 0;
        fVar20 = 0.0;
        do {
          fVar21 = 0.0;
          if (puVar12[(long)(int)uVar14 * 3 + 1] < 0x18) {
            fVar21 = *(float *)(&DAT_0417e208 + (ulong)puVar12[(long)(int)uVar14 * 3 + 1] * 4);
          }
          fVar20 = fVar20 + fVar21;
          if (fVar19 * ((float)(uVar17 >> 9 | 0x3f800000) + -1.0) + 0.0 < fVar20) {
            local_1154 = puVar12[(long)(int)uVar14 * 3];
            goto LAB_029dc2dc;
          }
          uVar14 = uVar14 + 1;
        } while (uVar18 != uVar14);
      }
    }
    else {
      lVar7 = 0x14;
      do {
        lVar8 = lVar7 + 0x18;
        *(undefined8 *)((long)auStack_bc4 + lVar7) = 0xffffffffffffffff;
        *(undefined8 *)((long)auStack_bc4 + lVar7 + 8) = 0xffffffff00000000;
        *(undefined8 *)((long)auStack_bc4 + lVar7 + 0x10) = 0xffffffff;
        lVar7 = lVar8;
      } while (lVar8 != 0x5b4);
      lVar7 = 0x14;
      do {
        lVar8 = lVar7 + 0x18;
        *(undefined8 *)(local_1160 + lVar7 + -4) = 0xffffffffffffffff;
        *(undefined8 *)(local_1160 + lVar7 + 4) = 0xffffffff00000000;
        *(undefined8 *)(local_1160 + lVar7 + 0xc) = 0xffffffff;
        lVar7 = lVar8;
      } while (lVar8 != 0x5b4);
      if ((int)uVar17 < 0) goto LAB_029dc1c4;
      iVar16 = 0;
      uVar14 = 0x7fffffff;
      uVar18 = 0xffffffff;
      uVar15 = 0xffffffff;
      do {
        uVar2 = local_608[(long)iVar16 * 3 + 2];
        if ((int)uVar2 <= iVar11) {
          uVar18 = uVar18 + 1;
          uVar4 = (ulong)uVar18;
          bVar6 = 0x77 < uVar18;
          uVar10 = local_608[(long)iVar16 * 3 + 1];
          puVar12 = local_bb0 + uVar4 * 3;
          if (bVar6) {
            puVar12 = local_bb0;
          }
          *puVar12 = local_608[(long)iVar16 * 3];
          puVar12 = local_bb0 + uVar4 * 3 + 1;
          if (bVar6) {
            puVar12 = local_bb0 + 1;
          }
          *puVar12 = uVar10;
          puVar12 = local_bb0 + uVar4 * 3 + 2;
          if (bVar6) {
            puVar12 = local_bb0 + 2;
          }
          *puVar12 = uVar2;
        }
        uVar10 = uVar15;
        if ((int)uVar2 <= (int)uVar14) {
          uVar10 = 0;
          if ((int)uVar14 <= (int)uVar2) {
            uVar10 = uVar15 + 1;
          }
          uVar4 = (ulong)uVar10;
          bVar6 = 0x77 < uVar10;
          uVar14 = local_608[(long)iVar16 * 3 + 1];
          puVar12 = local_1150 + uVar4 * 3;
          if (bVar6) {
            puVar12 = local_1150;
          }
          *puVar12 = local_608[(long)iVar16 * 3];
          puVar12 = local_1150 + uVar4 * 3 + 1;
          if (bVar6) {
            puVar12 = local_1150 + 1;
          }
          *puVar12 = uVar14;
          puVar12 = local_1150 + uVar4 * 3 + 2;
          if (bVar6) {
            puVar12 = local_1150 + 2;
          }
          *puVar12 = uVar2;
          uVar14 = uVar2;
        }
        iVar16 = iVar16 + 1;
      } while ((iVar16 != 0x78) && (uVar15 = uVar10, iVar16 <= (int)uVar17));
      if (-1 < (int)uVar18) {
        fVar19 = 0.0;
        iVar11 = 0;
        do {
          fVar20 = 0.0;
          if (local_bb0[(long)iVar11 * 3 + 1] < 0x18) {
            fVar20 = *(float *)(&DAT_0417e208 + (ulong)local_bb0[(long)iVar11 * 3 + 1] * 4);
          }
          fVar19 = fVar19 + fVar20;
          iVar11 = iVar11 + 1;
        } while (uVar18 + 1 != iVar11);
        uVar15 = param_1[3];
        iVar11 = 0;
        uVar14 = *param_1 ^ *param_1 << 0xb;
        *param_1 = param_1[1];
        param_1[1] = param_1[2];
        uVar14 = uVar14 >> 8 ^ uVar15 >> 0x13 ^ uVar14 ^ uVar15;
        param_1[2] = uVar15;
        param_1[3] = uVar14;
        fVar20 = 0.0;
LAB_029dc080:
        fVar21 = 0.0;
        if (local_bb0[(long)iVar11 * 3 + 1] < 0x18) {
          fVar21 = *(float *)(&DAT_0417e208 + (ulong)local_bb0[(long)iVar11 * 3 + 1] * 4);
        }
        fVar20 = fVar20 + fVar21;
        if (fVar20 <= fVar19 * ((float)(uVar14 >> 9 | 0x3f800000) + -1.0) + 0.0)
        goto code_r0x029dc0a4;
        puVar12 = local_bb0;
LAB_029dc1b4:
        local_1154 = puVar12[(long)iVar11 * 3];
        if (local_1154 == 0xffffffff) goto LAB_029dc1c4;
        goto LAB_029dc2dc;
      }
      if ((int)uVar10 < 0) goto LAB_029dc1c4;
      fVar19 = 0.0;
      iVar11 = 0;
      do {
        fVar20 = 0.0;
        if (local_1150[(long)iVar11 * 3 + 1] < 0x18) {
          fVar20 = *(float *)(&DAT_0417e208 + (ulong)local_1150[(long)iVar11 * 3 + 1] * 4);
        }
        fVar19 = fVar19 + fVar20;
        iVar11 = iVar11 + 1;
      } while (uVar10 + 1 != iVar11);
      uVar14 = param_1[3];
      iVar11 = 0;
      uVar18 = *param_1 ^ *param_1 << 0xb;
      *param_1 = param_1[1];
      param_1[1] = param_1[2];
      uVar18 = uVar18 >> 8 ^ uVar14 >> 0x13 ^ uVar18 ^ uVar14;
      param_1[2] = uVar14;
      param_1[3] = uVar18;
      fVar20 = 0.0;
      do {
        fVar21 = 0.0;
        if (local_1150[(long)iVar11 * 3 + 1] < 0x18) {
          fVar21 = *(float *)(&DAT_0417e208 + (ulong)local_1150[(long)iVar11 * 3 + 1] * 4);
        }
        fVar20 = fVar20 + fVar21;
        if (fVar19 * ((float)(uVar18 >> 9 | 0x3f800000) + -1.0) + 0.0 < fVar20) {
          puVar12 = local_1150;
          goto LAB_029dc1b4;
        }
        iVar11 = iVar11 + 1;
      } while (uVar10 + 1 != iVar11);
    }
LAB_029dc2c4:
    local_1154 = 0;
LAB_029dc2dc:
    uVar17 = param_1[8];
    uVar18 = param_1[6];
    if ((int)uVar18 <= (int)uVar17) {
      if (0 < (int)uVar17) {
        uVar14 = 0;
        if ((int)(param_1[7] + 1) < (int)uVar18) {
          uVar14 = param_1[7] + 1;
        }
        param_1[7] = uVar14;
        param_1[8] = uVar17 - 1;
        uVar17 = uVar17 - 1;
      }
LAB_029dc30c:
      if ((int)uVar18 <= (int)uVar17) goto LAB_029dc338;
    }
  }
  param_1[8] = uVar17 + 1;
  uVar14 = 0;
  if ((int)uVar18 <= (int)(param_1[7] + uVar17)) {
    uVar14 = uVar18;
  }
  *(uint *)(*(long *)(param_1 + 4) + (long)(int)((param_1[7] + uVar17) - uVar14) * 4) = local_1154;
LAB_029dc338:
  lVar7 = FUN_029d5f90(*param_2,&local_1154);
  if (lVar7 != 0) {
    cVar13 = '\x01';
    if (param_1[0x2a] == *(uint *)(lVar7 + 4)) {
      cVar13 = (char)param_1[0x2b] + '\x01';
    }
    *(char *)(param_1 + 0x2b) = cVar13;
    param_1[0x29] = *(uint *)(lVar7 + 0xc);
    param_1[0x2a] = *(uint *)(lVar7 + 4);
    *(char *)((long)param_1 + 0xad) = (char)*(undefined4 *)(lVar7 + 8);
  }
  return;
code_r0x029dc0a4:
  iVar11 = iVar11 + 1;
  if (uVar18 + 1 == iVar11) goto LAB_029dc2c4;
  goto LAB_029dc080;
}


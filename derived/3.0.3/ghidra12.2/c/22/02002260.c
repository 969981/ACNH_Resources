
void FUN_02002260(long param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined2 *puVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  uint local_68 [2];
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  
  puVar13 = (undefined4 *)*param_2;
  if (puVar13 == (undefined4 *)0x0) {
    bVar2 = *(byte *)((long)param_2 + 0x4d);
    if ((bVar2 & 1) != 0) {
      lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x38b0) + 8) + 0x68);
      fVar14 = *(float *)(lVar10 + 0x278) -
               ((float)*(int *)(param_2 + 3) * 5.0 + (float)*(int *)(param_2 + 5) * 5.0 + 5.0) * 0.5
      ;
      fVar15 = *(float *)(lVar10 + 0x280) -
               ((float)*(int *)((long)param_2 + 0x1c) * 5.0 +
               (float)*(int *)((long)param_2 + 0x2c) * 5.0 + 5.0) * 0.5;
      fVar14 = fVar15 * fVar15 + fVar14 * fVar14;
      if ((0.0 <= *(float *)(param_1 + 0x38ec)) && (*(float *)(param_1 + 0x38ec) <= fVar14)) {
        return;
      }
      *(int *)(param_1 + 0x38c8) = *(int *)(param_2 + 3);
      *(undefined4 *)(param_1 + 0x38cc) = *(undefined4 *)((long)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x38d8) = *(undefined4 *)(param_2 + 5);
      *(undefined4 *)(param_1 + 0x38dc) = *(undefined4 *)((long)param_2 + 0x2c);
      *(undefined4 *)(param_1 + 0x38e0) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)(param_1 + 0x38e4) = *(undefined4 *)((long)param_2 + 0x34);
      uVar16 = *(undefined4 *)(param_2 + 7);
      *(float *)(param_1 + 0x38ec) = fVar14;
      *(undefined4 *)(param_1 + 0x38e8) = uVar16;
      puVar9 = (undefined2 *)*param_2;
      if (puVar9 != (undefined2 *)0x0) {
        *(undefined2 *)(param_1 + 0x38f0) = *puVar9;
        *(undefined1 *)(param_1 + 0x38f2) = *(undefined1 *)(puVar9 + 1);
        *(undefined1 *)(param_1 + 0x38f3) = *(undefined1 *)((long)puVar9 + 3);
        *(undefined4 *)(param_1 + 0x38f4) = *(undefined4 *)(puVar9 + 2);
      }
      *(undefined4 *)(param_1 + 0x38f8) = *(undefined4 *)((long)param_2 + 0x3c);
      *(undefined1 *)(param_1 + 0x38fc) = *(undefined1 *)((long)param_2 + 0x4c);
      return;
    }
    if ((bVar2 >> 1 & 1) != 0) {
      lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x38b0) + 8) + 0x68);
      fVar14 = *(float *)(lVar10 + 0x278) - *(float *)(param_2 + 6);
      fVar15 = *(float *)(lVar10 + 0x280) - *(float *)(param_2 + 7);
      fVar14 = fVar15 * fVar15 + fVar14 * fVar14;
      if ((0.0 <= *(float *)(param_1 + 0x3a9c)) && (*(float *)(param_1 + 0x3a9c) <= fVar14)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3a78) = *(undefined4 *)(param_2 + 3);
      *(undefined4 *)(param_1 + 0x3a7c) = *(undefined4 *)((long)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x3a88) = *(undefined4 *)(param_2 + 5);
      *(undefined4 *)(param_1 + 0x3a8c) = *(undefined4 *)((long)param_2 + 0x2c);
      *(undefined4 *)(param_1 + 0x3a90) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)(param_1 + 0x3a94) = *(undefined4 *)((long)param_2 + 0x34);
      uVar16 = *(undefined4 *)(param_2 + 7);
      *(float *)(param_1 + 0x3a9c) = fVar14;
      *(undefined4 *)(param_1 + 15000) = uVar16;
      puVar9 = (undefined2 *)*param_2;
      if (puVar9 != (undefined2 *)0x0) {
        *(undefined2 *)(param_1 + 0x3aa0) = *puVar9;
        *(undefined1 *)(param_1 + 0x3aa2) = *(undefined1 *)(puVar9 + 1);
        *(undefined1 *)(param_1 + 0x3aa3) = *(undefined1 *)((long)puVar9 + 3);
        *(undefined4 *)(param_1 + 0x3aa4) = *(undefined4 *)(puVar9 + 2);
      }
      *(undefined4 *)(param_1 + 0x3aa8) = *(undefined4 *)((long)param_2 + 0x3c);
      *(undefined1 *)(param_1 + 0x3aac) = *(undefined1 *)((long)param_2 + 0x4c);
      return;
    }
    if ((bVar2 >> 2 & 1) != 0) {
      lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x38b0) + 8) + 0x68);
      fVar14 = *(float *)(lVar10 + 0x278) - *(float *)(param_2 + 6);
      fVar15 = *(float *)(lVar10 + 0x280) - *(float *)(param_2 + 7);
      fVar14 = fVar15 * fVar15 + fVar14 * fVar14;
      if ((0.0 <= *(float *)(param_1 + 0x3ae4)) && (*(float *)(param_1 + 0x3ae4) <= fVar14)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3ac0) = *(undefined4 *)(param_2 + 3);
      *(undefined4 *)(param_1 + 0x3ac4) = *(undefined4 *)((long)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x3ad0) = *(undefined4 *)(param_2 + 5);
      *(undefined4 *)(param_1 + 0x3ad4) = *(undefined4 *)((long)param_2 + 0x2c);
      *(undefined4 *)(param_1 + 0x3ad8) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)(param_1 + 0x3adc) = *(undefined4 *)((long)param_2 + 0x34);
      uVar16 = *(undefined4 *)(param_2 + 7);
      *(float *)(param_1 + 0x3ae4) = fVar14;
      *(undefined4 *)(param_1 + 0x3ae0) = uVar16;
      puVar9 = (undefined2 *)*param_2;
      if (puVar9 != (undefined2 *)0x0) {
        *(undefined2 *)(param_1 + 0x3ae8) = *puVar9;
        *(undefined1 *)(param_1 + 0x3aea) = *(undefined1 *)(puVar9 + 1);
        *(undefined1 *)(param_1 + 0x3aeb) = *(undefined1 *)((long)puVar9 + 3);
        *(undefined4 *)(param_1 + 0x3aec) = *(undefined4 *)(puVar9 + 2);
      }
      *(undefined4 *)(param_1 + 0x3af0) = *(undefined4 *)((long)param_2 + 0x3c);
      *(undefined1 *)(param_1 + 0x3af4) = *(undefined1 *)((long)param_2 + 0x4c);
      return;
    }
    if ((bVar2 >> 3 & 1) == 0) {
      if ((bVar2 >> 4 & 1) == 0) {
        return;
      }
      FUN_02002d74(param_1,param_1 + 0x3b40,param_2);
      return;
    }
    lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x38b0) + 8) + 0x68);
    fVar14 = *(float *)(lVar10 + 0x278) - *(float *)(param_2 + 6);
    fVar15 = *(float *)(lVar10 + 0x280) - *(float *)(param_2 + 7);
    fVar14 = fVar15 * fVar15 + fVar14 * fVar14;
    if ((0.0 <= *(float *)(param_1 + 0x3b2c)) && (*(float *)(param_1 + 0x3b2c) <= fVar14)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3b08) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)(param_1 + 0x3b0c) = *(undefined4 *)((long)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x3b18) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)(param_1 + 0x3b1c) = *(undefined4 *)((long)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x3b20) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(param_1 + 0x3b24) = *(undefined4 *)((long)param_2 + 0x34);
    uVar16 = *(undefined4 *)(param_2 + 7);
    *(float *)(param_1 + 0x3b2c) = fVar14;
    *(undefined4 *)(param_1 + 0x3b28) = uVar16;
    puVar9 = (undefined2 *)*param_2;
    if (puVar9 != (undefined2 *)0x0) {
      *(undefined2 *)(param_1 + 0x3b30) = *puVar9;
      *(undefined1 *)(param_1 + 0x3b32) = *(undefined1 *)(puVar9 + 1);
      *(undefined1 *)(param_1 + 0x3b33) = *(undefined1 *)((long)puVar9 + 3);
      *(undefined4 *)(param_1 + 0x3b34) = *(undefined4 *)(puVar9 + 2);
    }
    *(undefined4 *)(param_1 + 0x3b38) = *(undefined4 *)((long)param_2 + 0x3c);
    *(undefined1 *)(param_1 + 0x3b3c) = *(undefined1 *)((long)param_2 + 0x4c);
    return;
  }
  uVar8 = FUN_0277e158(puVar13);
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar8 & 1) == 0) {
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(puVar13);
    if (*(long *)puVar3 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x38b0) + 8) + 0x68);
        fVar14 = *(float *)(lVar10 + 0x278) -
                 ((float)*(int *)(param_2 + 3) * 5.0 + (float)*(int *)(param_2 + 5) * 5.0 + 5.0) *
                 0.5;
        fVar15 = *(float *)(lVar10 + 0x280) -
                 ((float)*(int *)((long)param_2 + 0x1c) * 5.0 +
                 (float)*(int *)((long)param_2 + 0x2c) * 5.0 + 5.0) * 0.5;
        fVar14 = fVar15 * fVar15 + fVar14 * fVar14;
        if ((0.0 <= *(float *)(param_1 + 0x3934)) && (*(float *)(param_1 + 0x3934) <= fVar14)) {
          return;
        }
        *(int *)(param_1 + 0x3910) = *(int *)(param_2 + 3);
        *(undefined4 *)(param_1 + 0x3914) = *(undefined4 *)((long)param_2 + 0x1c);
        *(undefined4 *)(param_1 + 0x3920) = *(undefined4 *)(param_2 + 5);
        *(undefined4 *)(param_1 + 0x3924) = *(undefined4 *)((long)param_2 + 0x2c);
        *(undefined4 *)(param_1 + 0x3928) = *(undefined4 *)(param_2 + 6);
        *(undefined4 *)(param_1 + 0x392c) = *(undefined4 *)((long)param_2 + 0x34);
        uVar16 = *(undefined4 *)(param_2 + 7);
        *(float *)(param_1 + 0x3934) = fVar14;
        *(undefined4 *)(param_1 + 0x3930) = uVar16;
        puVar9 = (undefined2 *)*param_2;
        if (puVar9 != (undefined2 *)0x0) {
          *(undefined2 *)(param_1 + 0x3938) = *puVar9;
          *(undefined1 *)(param_1 + 0x393a) = *(undefined1 *)(puVar9 + 1);
          *(undefined1 *)(param_1 + 0x393b) = *(undefined1 *)((long)puVar9 + 3);
          *(undefined4 *)(param_1 + 0x393c) = *(undefined4 *)(puVar9 + 2);
        }
        *(undefined4 *)(param_1 + 0x3940) = *(undefined4 *)((long)param_2 + 0x3c);
        *(undefined1 *)(param_1 + 0x3944) = *(undefined1 *)((long)param_2 + 0x4c);
        return;
      }
    }
    lVar10 = *(long *)PTR_DAT_04bbbc68;
    if (lVar10 == 0) {
      return;
    }
    if (*(long *)(lVar10 + 0xb0) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar10 + 0xb0) + 8) == 0) {
      return;
    }
    if (*(long *)(lVar10 + 0x488) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar10 + 0x488) + 8) == 0) {
      return;
    }
    if (*(long *)(lVar10 + 0x2b0) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) == 0) {
      return;
    }
    uVar6 = FUN_0277d6c4(puVar13);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (*(uint *)(lVar10 + 0x1d8) <= uVar6) {
      return;
    }
    if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
      return;
    }
    FUN_0124c030(&local_60,puVar13);
    iVar7 = FUN_0123db50(&local_58,local_50);
    if ((((iVar7 - 0x23U < 9) || (iVar7 = FUN_0123db50(&local_58,local_50), iVar7 - 0xbU < 7)) ||
        (iVar7 = FUN_0123db50(&local_58,local_50), iVar7 - 0x12U < 6)) ||
       (iVar7 = FUN_0123db50(&local_58,local_50), iVar7 - 0x18U < 7)) {
      lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x38b0) + 8) + 0x68);
      fVar14 = *(float *)(lVar10 + 0x278) -
               ((float)*(int *)(param_2 + 3) * 5.0 + (float)*(int *)(param_2 + 5) * 5.0 + 5.0) * 0.5
      ;
      fVar15 = *(float *)(lVar10 + 0x280) -
               ((float)*(int *)((long)param_2 + 0x1c) * 5.0 +
               (float)*(int *)((long)param_2 + 0x2c) * 5.0 + 5.0) * 0.5;
      fVar14 = fVar15 * fVar15 + fVar14 * fVar14;
      if ((0.0 <= *(float *)(param_1 + 0x397c)) && (*(float *)(param_1 + 0x397c) <= fVar14)) {
        return;
      }
      *(int *)(param_1 + 0x3958) = *(int *)(param_2 + 3);
      *(undefined4 *)(param_1 + 0x395c) = *(undefined4 *)((long)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x3968) = *(undefined4 *)(param_2 + 5);
      *(undefined4 *)(param_1 + 0x396c) = *(undefined4 *)((long)param_2 + 0x2c);
      *(undefined4 *)(param_1 + 0x3970) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)(param_1 + 0x3974) = *(undefined4 *)((long)param_2 + 0x34);
      uVar16 = *(undefined4 *)(param_2 + 7);
      *(float *)(param_1 + 0x397c) = fVar14;
      *(undefined4 *)(param_1 + 0x3978) = uVar16;
      puVar9 = (undefined2 *)*param_2;
      if (puVar9 != (undefined2 *)0x0) {
        *(undefined2 *)(param_1 + 0x3980) = *puVar9;
        *(undefined1 *)(param_1 + 0x3982) = *(undefined1 *)(puVar9 + 1);
        *(undefined1 *)(param_1 + 0x3983) = *(undefined1 *)((long)puVar9 + 3);
        *(undefined4 *)(param_1 + 0x3984) = *(undefined4 *)(puVar9 + 2);
      }
      *(undefined4 *)(param_1 + 0x3988) = *(undefined4 *)((long)param_2 + 0x3c);
      *(undefined1 *)(param_1 + 0x398c) = *(undefined1 *)((long)param_2 + 0x4c);
      return;
    }
    uVar8 = FUN_012509c0(&local_60,0);
    if ((uVar8 & 1) == 0) {
      iVar7 = FUN_0123db50(&local_58,local_50);
      if (iVar7 != 9) {
        uVar5 = FUN_01250420(&local_60);
        local_68[0] = (uint)uVar5;
        local_68[1] = 0;
        FUN_0277d4ac(local_68);
        if ((short)local_68[0] == -2) goto LAB_02002c30;
      }
      cVar4 = FUN_0124dff0(&local_60);
      if (cVar4 != '\x04') goto LAB_02002c30;
    }
    FUN_02002c7c(param_1,param_1 + 0x3990,param_2);
LAB_02002c30:
    uVar8 = FUN_0123d890(local_50,4);
    if ((((uVar8 & 1) == 0) && (uVar8 = FUN_0124dcb0(&local_60), (uVar8 & 1) == 0)) &&
       (iVar7 = FUN_0123db50(&local_58,local_50), (iVar7 - 2U & 0xfffffff9) != 0)) {
      return;
    }
    FUN_02002c7c(param_1,param_1 + 0x39d8,param_2);
    return;
  }
  if (*(int *)(param_1 + 0x3b88) == 2) goto LAB_020022a8;
  if (*(int *)(param_1 + 0x3b88) == 0) {
    iVar7 = FUN_0277d6c4(puVar13);
    if (iVar7 != 0x9c4) {
      return;
    }
    goto LAB_020022a8;
  }
  if (*(int *)(param_1 + 0x3b88) != 1) {
    return;
  }
  local_60 = PTR_DAT_04bc0510 + 0x10;
  local_58 = *puVar13;
  local_54 = puVar13[1];
  local_50 = 0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar3 == 0) {
LAB_02002a14:
    uVar5 = 0xbc;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02002a14;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(puVar13);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
       (puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8),
       puVar11 == (uint *)0x0)) goto LAB_02002a14;
    uVar5 = 0;
    uVar6 = *puVar11;
    if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
      puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
      uVar5 = 0;
      if (*puVar12 != 0) {
        uVar6 = puVar12[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar12 + lVar10 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar6 != 0) {
              uVar1 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar6);
            }
            if (*puVar12 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar5 < 0xbd)) goto LAB_02002a20;
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_02002a20:
  if (uVar5 != 0x57) {
    return;
  }
LAB_020022a8:
  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x38b0) + 8) + 0x68);
  fVar14 = *(float *)(lVar10 + 0x278) -
           ((float)*(int *)(param_2 + 3) * 5.0 + (float)*(int *)(param_2 + 5) * 5.0 + 5.0) * 0.5;
  fVar15 = *(float *)(lVar10 + 0x280) -
           ((float)*(int *)((long)param_2 + 0x1c) * 5.0 +
           (float)*(int *)((long)param_2 + 0x2c) * 5.0 + 5.0) * 0.5;
  fVar14 = fVar15 * fVar15 + fVar14 * fVar14;
  if ((*(float *)(param_1 + 0x3a54) < 0.0) || (fVar14 < *(float *)(param_1 + 0x3a54))) {
    *(int *)(param_1 + 0x3a30) = *(int *)(param_2 + 3);
    *(undefined4 *)(param_1 + 0x3a34) = *(undefined4 *)((long)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x3a40) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)(param_1 + 0x3a44) = *(undefined4 *)((long)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x3a48) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(param_1 + 0x3a4c) = *(undefined4 *)((long)param_2 + 0x34);
    uVar16 = *(undefined4 *)(param_2 + 7);
    *(float *)(param_1 + 0x3a54) = fVar14;
    *(undefined4 *)(param_1 + 0x3a50) = uVar16;
    puVar9 = (undefined2 *)*param_2;
    if (puVar9 != (undefined2 *)0x0) {
      *(undefined2 *)(param_1 + 0x3a58) = *puVar9;
      *(undefined1 *)(param_1 + 0x3a5a) = *(undefined1 *)(puVar9 + 1);
      *(undefined1 *)(param_1 + 0x3a5b) = *(undefined1 *)((long)puVar9 + 3);
      *(undefined4 *)(param_1 + 0x3a5c) = *(undefined4 *)(puVar9 + 2);
    }
    *(undefined4 *)(param_1 + 0x3a60) = *(undefined4 *)((long)param_2 + 0x3c);
    *(undefined1 *)(param_1 + 0x3a64) = *(undefined1 *)((long)param_2 + 0x4c);
  }
  return;
}


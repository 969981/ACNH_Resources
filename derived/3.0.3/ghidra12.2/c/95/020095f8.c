
void FUN_020095f8(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined2 *puVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  uint local_60 [2];
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  puVar13 = (undefined4 *)*param_2;
  if (puVar13 == (undefined4 *)0x0) {
    bVar2 = *(byte *)((long)param_2 + 0x4d);
    if ((bVar2 & 1) == 0) {
      if ((bVar2 >> 1 & 1) != 0) {
        lVar9 = (**(code **)(*param_1 + 0x28))(param_1);
        lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x68);
        fVar14 = *(float *)(lVar9 + 0x278) - *(float *)(param_2 + 6);
        fVar15 = *(float *)(lVar9 + 0x280) - *(float *)(param_2 + 7);
        fVar14 = fVar15 * fVar15 + fVar14 * fVar14;
        if ((0.0 <= *(float *)((long)param_1 + 0x3a8c)) &&
           (*(float *)((long)param_1 + 0x3a8c) <= fVar14)) {
          return;
        }
        *(undefined4 *)(param_1 + 0x74d) = *(undefined4 *)(param_2 + 3);
        *(undefined4 *)((long)param_1 + 0x3a6c) = *(undefined4 *)((long)param_2 + 0x1c);
        *(undefined4 *)(param_1 + 0x74f) = *(undefined4 *)(param_2 + 5);
        *(undefined4 *)((long)param_1 + 0x3a7c) = *(undefined4 *)((long)param_2 + 0x2c);
        *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_2 + 6);
        *(undefined4 *)((long)param_1 + 0x3a84) = *(undefined4 *)((long)param_2 + 0x34);
        uVar16 = *(undefined4 *)(param_2 + 7);
        *(float *)((long)param_1 + 0x3a8c) = fVar14;
        *(undefined4 *)(param_1 + 0x751) = uVar16;
        puVar10 = (undefined2 *)*param_2;
        if (puVar10 != (undefined2 *)0x0) {
          *(undefined2 *)(param_1 + 0x752) = *puVar10;
          *(undefined1 *)((long)param_1 + 0x3a92) = *(undefined1 *)(puVar10 + 1);
          *(undefined1 *)((long)param_1 + 0x3a93) = *(undefined1 *)((long)puVar10 + 3);
          *(undefined4 *)((long)param_1 + 0x3a94) = *(undefined4 *)(puVar10 + 2);
        }
        *(undefined4 *)(param_1 + 0x753) = *(undefined4 *)((long)param_2 + 0x3c);
        *(undefined1 *)((long)param_1 + 0x3a9c) = *(undefined1 *)((long)param_2 + 0x4c);
        return;
      }
      if ((bVar2 >> 2 & 1) != 0) {
        lVar9 = (**(code **)(*param_1 + 0x28))(param_1);
        lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x68);
        fVar14 = *(float *)(lVar9 + 0x278) - *(float *)(param_2 + 6);
        fVar15 = *(float *)(lVar9 + 0x280) - *(float *)(param_2 + 7);
        fVar14 = fVar15 * fVar15 + fVar14 * fVar14;
        if ((0.0 <= *(float *)((long)param_1 + 0x3ad4)) &&
           (*(float *)((long)param_1 + 0x3ad4) <= fVar14)) {
          return;
        }
        *(undefined4 *)(param_1 + 0x756) = *(undefined4 *)(param_2 + 3);
        *(undefined4 *)((long)param_1 + 0x3ab4) = *(undefined4 *)((long)param_2 + 0x1c);
        *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_2 + 5);
        *(undefined4 *)((long)param_1 + 0x3ac4) = *(undefined4 *)((long)param_2 + 0x2c);
        *(undefined4 *)(param_1 + 0x759) = *(undefined4 *)(param_2 + 6);
        *(undefined4 *)((long)param_1 + 0x3acc) = *(undefined4 *)((long)param_2 + 0x34);
        uVar16 = *(undefined4 *)(param_2 + 7);
        *(float *)((long)param_1 + 0x3ad4) = fVar14;
        *(undefined4 *)(param_1 + 0x75a) = uVar16;
        puVar10 = (undefined2 *)*param_2;
        if (puVar10 != (undefined2 *)0x0) {
          *(undefined2 *)(param_1 + 0x75b) = *puVar10;
          *(undefined1 *)((long)param_1 + 0x3ada) = *(undefined1 *)(puVar10 + 1);
          *(undefined1 *)((long)param_1 + 0x3adb) = *(undefined1 *)((long)puVar10 + 3);
          *(undefined4 *)((long)param_1 + 0x3adc) = *(undefined4 *)(puVar10 + 2);
        }
        *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)((long)param_2 + 0x3c);
        *(undefined1 *)((long)param_1 + 0x3ae4) = *(undefined1 *)((long)param_2 + 0x4c);
        return;
      }
      if ((bVar2 >> 3 & 1) == 0) {
        if ((bVar2 >> 4 & 1) == 0) {
          return;
        }
        FUN_02009dac(param_1,param_1 + 0x766,param_2);
        return;
      }
      lVar9 = (**(code **)(*param_1 + 0x28))(param_1);
      lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x68);
      fVar14 = *(float *)(lVar9 + 0x278) - *(float *)(param_2 + 6);
      fVar15 = *(float *)(lVar9 + 0x280) - *(float *)(param_2 + 7);
      fVar14 = fVar15 * fVar15 + fVar14 * fVar14;
      if ((0.0 <= *(float *)((long)param_1 + 0x3b1c)) &&
         (*(float *)((long)param_1 + 0x3b1c) <= fVar14)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x75f) = *(undefined4 *)(param_2 + 3);
      *(undefined4 *)((long)param_1 + 0x3afc) = *(undefined4 *)((long)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x761) = *(undefined4 *)(param_2 + 5);
      *(undefined4 *)((long)param_1 + 0x3b0c) = *(undefined4 *)((long)param_2 + 0x2c);
      *(undefined4 *)(param_1 + 0x762) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)((long)param_1 + 0x3b14) = *(undefined4 *)((long)param_2 + 0x34);
      uVar16 = *(undefined4 *)(param_2 + 7);
      *(float *)((long)param_1 + 0x3b1c) = fVar14;
      *(undefined4 *)(param_1 + 0x763) = uVar16;
      puVar10 = (undefined2 *)*param_2;
      if (puVar10 != (undefined2 *)0x0) {
        *(undefined2 *)(param_1 + 0x764) = *puVar10;
        *(undefined1 *)((long)param_1 + 0x3b22) = *(undefined1 *)(puVar10 + 1);
        *(undefined1 *)((long)param_1 + 0x3b23) = *(undefined1 *)((long)puVar10 + 3);
        *(undefined4 *)((long)param_1 + 0x3b24) = *(undefined4 *)(puVar10 + 2);
      }
      *(undefined4 *)(param_1 + 0x765) = *(undefined4 *)((long)param_2 + 0x3c);
      *(undefined1 *)((long)param_1 + 0x3b2c) = *(undefined1 *)((long)param_2 + 0x4c);
      return;
    }
    lVar9 = 0x38a8;
    goto LAB_020097d8;
  }
  uVar8 = FUN_0277e158(puVar13);
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar8 & 1) == 0) {
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(puVar13);
    if (*(long *)puVar3 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar9 = 0x38f0;
        goto LAB_020097d8;
      }
    }
    lVar9 = *(long *)PTR_DAT_04bbbc68;
    if (lVar9 == 0) {
      return;
    }
    if (*(long *)(lVar9 + 0xb0) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar9 + 0xb0) + 8) == 0) {
      return;
    }
    if (*(long *)(lVar9 + 0x488) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar9 + 0x488) + 8) == 0) {
      return;
    }
    if (*(long *)(lVar9 + 0x2b0) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar9 + 0x2b0) + 8) == 0) {
      return;
    }
    uVar6 = FUN_0277d6c4(puVar13);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (*(uint *)(lVar9 + 0x1d8) <= uVar6) {
      return;
    }
    if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
      return;
    }
    FUN_0124c030(&local_58,puVar13);
    iVar7 = FUN_0123db50(&local_50,local_48);
    if ((((iVar7 - 0x23U < 9) || (iVar7 = FUN_0123db50(&local_50,local_48), iVar7 - 0xbU < 7)) ||
        (iVar7 = FUN_0123db50(&local_50,local_48), iVar7 - 0x12U < 6)) ||
       (iVar7 = FUN_0123db50(&local_50,local_48), iVar7 - 0x18U < 7)) {
      lVar9 = 0x3938;
      goto LAB_020097c0;
    }
    uVar8 = FUN_012509c0(&local_58,0);
    if ((uVar8 & 1) == 0) {
      iVar7 = FUN_0123db50(&local_50,local_48);
      if (iVar7 == 9) {
LAB_02009c34:
        cVar4 = FUN_0124dff0(&local_58);
        if (cVar4 == '\x04') goto LAB_02009c48;
      }
      else {
        uVar5 = FUN_01250420(&local_58);
        local_60[0] = (uint)uVar5;
        local_60[1] = 0;
        FUN_0277d4ac(local_60);
        if ((short)local_60[0] != -2) goto LAB_02009c34;
      }
      uVar8 = FUN_0123d890(local_48,4);
      if ((((uVar8 & 1) == 0) && (uVar8 = FUN_0124dcb0(&local_58), (uVar8 & 1) == 0)) &&
         (iVar7 = FUN_0123db50(&local_50,local_48), (iVar7 - 2U & 0xfffffff9) != 0)) {
        return;
      }
      lVar9 = 0x39c8;
    }
    else {
LAB_02009c48:
      lVar9 = 0x3980;
    }
LAB_020097c0:
    FUN_02009c8c(param_1,(long)param_1 + lVar9,param_2);
    return;
  }
  if ((int)param_1[0x76f] != 2) {
    if ((int)param_1[0x76f] == 0) {
      iVar7 = FUN_0277d6c4(puVar13);
      if (iVar7 != 0x9c4) {
        return;
      }
    }
    else {
      if ((int)param_1[0x76f] != 1) {
        return;
      }
      local_58 = PTR_DAT_04bc0510 + 0x10;
      local_50 = *puVar13;
      local_4c = puVar13[1];
      local_48 = 0;
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar3 == 0) {
LAB_02009a28:
        uVar5 = 0xbc;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02009a28;
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(puVar13);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar6) ||
           (puVar11 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8),
           puVar11 == (uint *)0x0)) goto LAB_02009a28;
        uVar5 = 0;
        uVar6 = *puVar11;
        if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
          puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
          uVar5 = 0;
          if (*puVar12 != 0) {
            uVar6 = puVar12[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar12 + lVar9 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar11 - lVar9) / (ulong)uVar6);
                }
                if (*puVar12 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   uVar5 < 0xbd)) goto LAB_02009a34;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_02009a34:
      local_60[0] = 0x57;
      if (uVar5 != 0x57) {
        return;
      }
    }
  }
  lVar9 = 0x3a10;
LAB_020097d8:
  FUN_02009c8c(param_1,(long)param_1 + lVar9,param_2);
  return;
}


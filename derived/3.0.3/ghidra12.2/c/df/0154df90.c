
byte FUN_0154df90(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ushort uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  bool bVar11;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  uVar6 = FUN_0277e294();
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar6 & 1) != 0) {
    local_38 = (uint *)0x0;
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_40 = *param_1;
    uStack_3c = param_1[1];
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar2 == 0) {
LAB_0154e130:
      puVar10 = (uint *)0x0;
      uVar7 = 0;
      bVar11 = true;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0154e130;
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
         (puVar10 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar10 == (uint *)0x0)) goto LAB_0154e130;
      uVar4 = *puVar10;
      if (uVar4 == 0 || puVar10 == (uint *)(ulong)uVar4) {
LAB_0154e070:
        uVar7 = 0;
      }
      else {
        puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
        uVar7 = 0;
        if (*puVar8 != 0) {
          uVar4 = puVar8[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
              }
              if (*puVar8 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326d48) &&
                 (uVar7 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar7 < 0x52))
              goto LAB_0154e074;
            }
          }
          goto LAB_0154e070;
        }
      }
LAB_0154e074:
      if (uVar7 == 0x15) goto LAB_0154e164;
      uVar4 = *puVar10;
      uVar7 = 0;
      local_38 = puVar10;
      if ((uVar4 == 0) || (puVar10 == (uint *)(ulong)uVar4)) {
LAB_0154e2f8:
        bVar11 = false;
      }
      else {
        puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
        uVar7 = 0;
        if (*puVar8 == 0) goto LAB_0154e2f8;
        uVar4 = puVar8[1];
        if ((uVar4 == 0) || ((ulong)(ushort)puVar8[2] == 0)) {
LAB_0154e2f4:
          uVar7 = 0;
          goto LAB_0154e2f8;
        }
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar9 == 0) goto LAB_0154e2f4;
        uVar1 = 0;
        if ((ulong)uVar4 != 0) {
          uVar1 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
        }
        if (*puVar8 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if (DAT_05326d48 <= uVar1) goto LAB_0154e2f4;
        uVar7 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2);
        if (uVar7 < 0x52) goto LAB_0154e2f8;
        bVar11 = false;
        uVar7 = 0;
      }
    }
    if ((uVar7 & 0xfffe) != 0x12) {
      uVar6 = FUN_01ae6f00(&local_48);
      if ((uVar6 & 1) != 0) {
        bVar3 = 1;
        goto LAB_0154e168;
      }
      uVar6 = FUN_01ae6c68(&local_48);
      uVar4 = 0;
      bVar3 = 0;
      if ((uVar6 & 1) != 0) goto LAB_0154e168;
      if (((!bVar11) && (uVar1 = *puVar10, uVar1 != 0)) && (puVar10 != (uint *)(ulong)uVar1)) {
        puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar1);
        uVar4 = 0;
        if (*puVar8 != 0) {
          uVar4 = puVar8[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
              }
              if (*puVar8 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326d48) &&
                 (uVar7 = *(ushort *)(DAT_05326d50 + (long)(int)uVar1 * 2), uVar4 = (uint)uVar7,
                 uVar7 < 0x52)) goto LAB_0154e230;
            }
          }
          uVar4 = 0;
        }
      }
LAB_0154e230:
      if ((uVar4 - 1 < 9) || (uVar6 = FUN_01ae9e0c(&local_48), (uVar6 & 1) != 0)) {
        iVar5 = FUN_0277d6c4(param_1);
        bVar3 = iVar5 == 0x3558;
      }
      else {
        bVar3 = FUN_01ae69e4(&local_48,0x4d);
        bVar3 = bVar3 ^ 1;
      }
      goto LAB_0154e168;
    }
  }
LAB_0154e164:
  bVar3 = 0;
LAB_0154e168:
  return bVar3 & 1;
}


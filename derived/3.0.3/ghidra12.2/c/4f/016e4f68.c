
undefined8 FUN_016e4f68(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  puVar1 = PTR_DAT_04bb6298;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_016e4fd0:
    uVar5 = FUN_0180c600();
    if ((uVar5 & 1) == 0) {
      sVar3 = *(short *)puVar1;
      if (sVar3 != -1) {
        puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
        if (0xff < (uint)(int)sVar3) {
          puVar1 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_016e4fd8;
      }
      uVar5 = FUN_016cf9f0();
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      if (DAT_0523adf0 == 0) {
        return 0;
      }
      if (*(int *)(DAT_0523adf0 + 0x98) == 0) {
        return 0;
      }
    }
  }
  else {
    puVar7 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar7 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar7 >> 0x1a & 1) == 0) goto LAB_016e4fd0;
  }
LAB_016e4fd8:
  puVar1 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_1);
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    return 0;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return 0;
  }
  local_40 = 0;
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uVar4 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar1 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar7 != (uint *)0x0)) {
        uVar6 = 0;
        uVar4 = *puVar7;
        if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          uVar6 = 0;
          if (*puVar8 != 0) {
            uVar4 = puVar8[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
                goto LAB_016e51cc;
              }
            }
            uVar6 = 0;
          }
        }
        goto LAB_016e51cc;
      }
    }
  }
  uVar6 = 0xbc;
LAB_016e51cc:
  if (uVar6 == 0xb7) {
    return 1;
  }
  return 0;
}


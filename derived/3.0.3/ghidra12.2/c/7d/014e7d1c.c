
undefined8 FUN_014e7d1c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  ushort uVar8;
  uint *puVar9;
  long lVar10;
  undefined1 local_60 [16];
  long local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x18) == 1) {
    local_38 = 0;
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_40 = *(undefined4 *)(param_1 + 0x60);
    uStack_3c = *(undefined4 *)(param_1 + 100);
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar2 == 0) {
LAB_014e7f7c:
      uVar8 = 0;
LAB_014e7f80:
      if ((uVar8 & 0xfffe) != 10) goto LAB_014e7f9c;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_014e7f7c;
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4((undefined4 *)(param_1 + 0x60));
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((*(uint *)(lVar10 + 0x1d8) <= uVar3) ||
         (puVar7 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar7 == (uint *)0x0)) goto LAB_014e7f7c;
      uVar3 = *puVar7;
      if (uVar3 == 0 || puVar7 == (uint *)(ulong)uVar3) {
LAB_014e7df4:
        uVar3 = 0;
      }
      else {
        puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
        uVar3 = 0;
        if (*puVar9 != 0) {
          uVar3 = puVar9[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar10 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar3);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc0048) &&
                 (uVar3 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar1 * 2),
                 uVar3 < 0x52)) goto LAB_014e7df8;
            }
          }
          goto LAB_014e7df4;
        }
      }
LAB_014e7df8:
      if (8 < uVar3 - 1) {
        uVar3 = *puVar7;
        uVar8 = 0;
        if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
          puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
          uVar8 = 0;
          if (*puVar9 != 0) {
            uVar3 = puVar9[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar10 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar3);
                }
                if (*puVar9 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc0048) &&
                   (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar1 * 2),
                   uVar8 < 0x52)) goto LAB_014e7f80;
              }
            }
            goto LAB_014e7f7c;
          }
        }
        goto LAB_014e7f80;
      }
    }
LAB_014e7f94:
    uVar6 = 1;
  }
  else {
    if ((*(int *)(param_1 + 0x18) == 6) && (*(int *)(param_1 + 0x98) != 0)) {
      local_18 = *(undefined4 *)(param_1 + 0x60);
      uStack_14 = *(undefined4 *)(param_1 + 100);
      lVar10 = *(long *)PTR_DAT_04bbbc68;
      if (((lVar10 != 0) &&
          ((((*(long *)(lVar10 + 0xb0) != 0 && (*(long *)(*(long *)(lVar10 + 0xb0) + 8) != 0)) &&
            (*(long *)(lVar10 + 0x488) != 0)) &&
           ((*(long *)(*(long *)(lVar10 + 0x488) + 8) != 0 && (*(long *)(lVar10 + 0x2b0) != 0))))))
         && (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) != 0)) {
        uVar3 = FUN_0277d6c4(&local_18);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          FUN_0124c030(&local_48,&local_18);
          iVar4 = FUN_0123db50(&local_40,local_38);
          if (((iVar4 - 2U & 0xfffffff9) == 0) &&
             ((FUN_0124c030(local_60,&local_18), local_50 != 0 &&
              (uVar5 = FUN_0123d890(local_50,5), (uVar5 & 1) != 0)))) goto LAB_014e7f94;
        }
      }
    }
LAB_014e7f9c:
    uVar6 = 0;
  }
  return uVar6;
}


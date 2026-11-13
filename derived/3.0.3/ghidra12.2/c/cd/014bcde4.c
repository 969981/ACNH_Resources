
void FUN_014bcde4(int *param_1,undefined4 param_2,undefined4 *param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_3);
  lVar11 = *(long *)puVar4;
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_58 = 0;
      local_60 = *param_3;
      uStack_5c = param_3[1];
      uVar5 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar4 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_3);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
             (puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
             puVar8 != (uint *)0x0)) {
            uVar1 = *puVar8;
            uVar5 = 0;
            if (uVar1 == 0) {
              uVar6 = 0;
              goto LAB_014bcf94;
            }
            uVar6 = 0;
            if (puVar8 == (uint *)(ulong)uVar1) goto LAB_014bcf94;
            puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar1);
            uVar5 = 0;
            if (*puVar7 != 0) {
              uVar5 = puVar7[1];
              if ((uVar5 == 0) || ((ulong)(ushort)puVar7[2] == 0)) {
LAB_014bd028:
                uVar5 = 0;
              }
              else {
                lVar11 = 0xc;
                if (*(char *)((long)puVar7 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar7 + lVar11 + (ulong)(ushort)puVar7[2] * 8;
                if (lVar11 == 0) goto LAB_014bd028;
                uVar6 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar6 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar5);
                }
                if (*puVar7 <= uVar6) {
                  uVar6 = 0xffffffff;
                }
                if (DAT_05326ec0 <= uVar6) goto LAB_014bd028;
                uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar6 * 2);
                uVar5 = (uint)uVar3;
                if (0xbc < uVar3) {
                  uVar5 = 0;
                }
              }
              if (((*puVar7 != 0) && (uVar1 = puVar7[1], uVar1 != 0)) &&
                 ((ulong)(ushort)puVar7[2] != 0)) {
                lVar11 = 0xc;
                if (*(char *)((long)puVar7 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar7 + lVar11 + (ulong)(ushort)puVar7[2] * 8;
                uVar6 = 0;
                if (lVar11 == 0) goto LAB_014bcf94;
                uVar6 = 0;
                if ((ulong)uVar1 != 0) {
                  uVar6 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar1);
                }
                if (*puVar7 <= uVar6) {
                  uVar6 = 0xffffffff;
                }
                if ((uVar6 < *(uint *)PTR_DAT_04bc0048) &&
                   (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar6 * 2),
                   uVar6 = (uint)uVar3, uVar3 < 0x52)) goto LAB_014bcf94;
              }
            }
            uVar6 = 0;
            goto LAB_014bcf94;
          }
        }
      }
    }
  }
  uVar6 = 0;
  uVar5 = 0xbc;
LAB_014bcf94:
  if (*param_1 < param_1[1]) {
    puVar9 = *(undefined8 **)(param_1 + 4);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 4) = *puVar9;
    }
    *(undefined4 *)puVar9 = param_2;
    *(undefined2 *)((long)puVar9 + 4) = *(undefined2 *)param_3;
    *(undefined1 *)((long)puVar9 + 6) = *(undefined1 *)((long)param_3 + 2);
    *(undefined1 *)((long)puVar9 + 7) = *(undefined1 *)((long)param_3 + 3);
    *(undefined4 *)(puVar9 + 1) = param_3[1];
    uVar10 = *param_4;
    uVar2 = *(undefined4 *)(param_4 + 1);
    *(uint *)((long)puVar9 + 0x1c) = uVar5;
    *(uint *)(puVar9 + 4) = uVar6;
    *(undefined8 *)((long)puVar9 + 0xc) = uVar10;
    *(undefined4 *)((long)puVar9 + 0x14) = uVar2;
    *(undefined4 *)(puVar9 + 3) = param_5;
    if (*param_1 < param_1[1]) {
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar9;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}


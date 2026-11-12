
void FUN_0086a920(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_3);
  lVar9 = *(long *)puVar3;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_3;
      uStack_4c = param_3[1];
      uVar4 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_3);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
             (((puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
               puVar7 != (uint *)0x0 && (uVar4 = *puVar7, uVar4 != 0)) &&
              (puVar7 != (uint *)(ulong)uVar4)))) {
            puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
            if (((*puVar8 != 0) && (uVar4 = puVar8[1], uVar4 != 0)) &&
               ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if (((uVar1 < DAT_05326ec0) &&
                    (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar2 < 0xbd)) &&
                   (uVar2 == 0x96)) {
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  if (((*(char *)(DAT_04ceac30 + 0x1d) == '\0') || (*(char *)(DAT_04ceac30 + 0x28) == -1)) ||
     ((int)*(char *)(DAT_04ceac30 + 0x28) != *(int *)((long)param_1 + 0x42c))) {
    return;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2);
  FUN_02753910(param_2,param_1 + 0x17,1);
  uVar5 = FUN_02753180(param_2,param_1 + 0x17);
  uVar6 = FUN_0086ab5c(param_1 + 0x85);
  FUN_02f08804(uVar6,uVar5);
  return;
}


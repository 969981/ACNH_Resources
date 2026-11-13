
void FUN_01375f5c(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar3) {
    return;
  }
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return;
  }
  local_48 = (uint *)0x0;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  local_58 = &PTR_FUN_04a36b50;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar5 != (uint *)0x0)) {
        local_48 = puVar5;
      }
    }
  }
  uVar4 = FUN_01af0020(&local_58);
  if ((uVar4 & 1) != 0) {
    FUN_01372240(*(undefined8 *)(param_1 + 2),param_2);
    return;
  }
  if (local_48 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *local_48;
    uVar6 = 0;
    if ((uVar3 != 0) && (local_48 != (uint *)(ulong)uVar3)) {
      puVar5 = (uint *)((long)local_48 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar5 != 0) {
        uVar3 = puVar5[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar5 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar5 + lVar7 + (ulong)(ushort)puVar5[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)local_48 - lVar7) / (ulong)uVar3);
            }
            if (*puVar5 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_01376124;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_01376124:
  if (uVar6 == 0x55) {
    param_1[1] = param_1[1] + 1;
  }
  else {
    *param_1 = *param_1 + 1;
  }
  return;
}


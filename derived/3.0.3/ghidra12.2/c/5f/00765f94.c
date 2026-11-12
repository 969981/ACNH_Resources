
void FUN_00765f94(undefined4 *param_1,undefined2 *param_2,undefined1 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  undefined1 auStack_170a [2];
  undefined4 local_1708 [1449];
  short local_64 [2];
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  uint local_44;
  
  *(undefined2 *)param_1 = *param_2;
  *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)param_2 + 3);
  uVar4 = *(undefined4 *)(param_2 + 2);
  param_1[3] = param_4;
  *(undefined1 *)(param_1 + 4) = param_3;
  param_1[1] = uVar4;
  param_1[2] = 0;
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar7 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar3) {
    return;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return;
  }
  local_58 = *param_1;
  uStack_54 = param_1[1];
  local_50 = (uint *)0x0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  uVar3 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar2 == 0) {
LAB_0076616c:
    FUN_007ef010(local_64,PTR_DAT_04bb3170);
    local_44 = 0xbc;
  }
  else {
    lVar7 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0076616c;
    lVar7 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_1);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
       (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), puVar8 == (uint *)0x0)
       ) goto LAB_0076616c;
    local_50 = puVar8;
    FUN_007ef010(local_64,PTR_DAT_04bb3170);
    local_44 = 0;
    uVar3 = *puVar8;
    if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
      local_44 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (local_44 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_44 < 0xbd))
            goto LAB_00766188;
          }
        }
        local_44 = 0;
      }
    }
  }
LAB_00766188:
  local_1708[0] = 0xac;
  if (local_44 == 0xac) {
    FUN_01b086f4(local_1708,&local_60);
  }
  else {
    uVar5 = FUN_01ae89e0(&local_60);
    if ((uVar5 & 1) == 0) goto LAB_007661dc;
    FUN_01b08c14(local_1708,&local_60);
  }
  local_64[0] = (short)local_1708[0];
LAB_007661dc:
  if (local_64[0] != DAT_04cb6038) {
    FUN_007ef010(auStack_170a,local_64);
    FUN_007e4920(local_1708,auStack_170a);
    uVar4 = FUN_007e7930(local_1708);
    param_1[2] = uVar4;
  }
  return;
}


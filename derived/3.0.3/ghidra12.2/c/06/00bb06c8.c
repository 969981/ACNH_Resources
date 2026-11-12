
bool FUN_00bb06c8(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ushort uVar7;
  uint *puVar8;
  long lVar9;
  undefined *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint *local_28;
  
  local_30 = *param_2;
  uStack_2c = param_2[1];
  local_28 = (uint *)0x0;
  local_38 = PTR_DAT_04bc0510 + 0x10;
  FUN_0277d6c4(&local_30);
  lVar9 = *(long *)PTR_DAT_04bc0428;
  uVar4 = FUN_0277d6c4(param_2);
  local_28 = *(uint **)(*(long *)(lVar9 + 0x1e0) +
                       (long)(int)((uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8)) * 8);
  uVar4 = *local_28;
  if (uVar4 != 0 && local_28 != (uint *)(ulong)uVar4) {
    puVar8 = (uint *)((long)local_28 - (long)(ulong)uVar4);
    if (((*puVar8 != 0) && (uVar4 = puVar8[1], uVar4 != 0)) && ((ulong)(ushort)puVar8[2] != 0)) {
      lVar9 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar9 != 0) {
        uVar1 = 0;
        if ((ulong)uVar4 != 0) {
          uVar1 = (uint)((ulong)((long)local_28 - lVar9) / (ulong)uVar4);
        }
        if (*puVar8 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < DAT_05326e40) &&
           (uVar7 = *(ushort *)(DAT_05326e48 + (long)(int)uVar1 * 2), uVar7 < 3)) goto LAB_00bb07b8;
      }
    }
  }
  uVar7 = 0;
LAB_00bb07b8:
  if (((uVar7 == 1) &&
      (uVar6 = FUN_01ae6420(&local_38), puVar2 = PTR_DAT_04bb46f0, (uVar6 & 1) != 0)) &&
     (iVar5 = FUN_02622054(*(undefined8 *)PTR_DAT_04bb46f0,param_2), iVar5 != 10)) {
    iVar5 = FUN_02622160(*(undefined8 *)puVar2,param_2);
    bVar3 = iVar5 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


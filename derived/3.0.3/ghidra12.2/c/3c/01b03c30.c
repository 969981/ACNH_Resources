
/* WARNING: Removing unreachable block (ram,0x01b03dec) */
/* WARNING: Removing unreachable block (ram,0x01b03d9c) */
/* WARNING: Removing unreachable block (ram,0x01b03dc4) */
/* WARNING: Removing unreachable block (ram,0x01b03e14) */

undefined4 FUN_01b03c30(undefined4 *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_40 = *param_1;
  uStack_3c = param_1[1];
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_40);
  lVar1 = DAT_0532a768;
  if (*(long *)puVar4 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      uVar5 = FUN_0277d6c4(param_1);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar1 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar9 != (uint *)0x0)) {
        uVar5 = *puVar9;
        if (uVar5 != 0 && puVar9 != (uint *)(ulong)uVar5) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar5);
          if (((*puVar10 != 0) && (uVar5 = puVar10[1], uVar5 != 0)) &&
             ((ulong)(ushort)puVar10[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)puVar9 - lVar1) / (ulong)uVar5);
              }
              if (*puVar10 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar8 < 0xbd))
              goto LAB_01b03d74;
            }
          }
        }
        uVar8 = 0;
        goto LAB_01b03d74;
      }
    }
  }
  uVar8 = 0xbc;
LAB_01b03d74:
  iVar7 = DAT_04101cf0;
  if (uVar8 == 0x81) {
    iVar6 = FUN_0277d6c4(param_1);
    iVar3 = DAT_04101cf4;
    if (iVar7 == iVar6) {
      return 0;
    }
    iVar6 = FUN_0277d6c4(param_1);
    iVar7 = DAT_04101cf8;
    if (iVar3 == iVar6) {
      return 1;
    }
    iVar6 = FUN_0277d6c4(param_1);
    iVar3 = DAT_04101cfc;
    if (iVar7 == iVar6) {
      return 2;
    }
    iVar7 = FUN_0277d6c4(param_1);
    if (iVar3 == iVar7) {
      return 3;
    }
  }
  return 0;
}


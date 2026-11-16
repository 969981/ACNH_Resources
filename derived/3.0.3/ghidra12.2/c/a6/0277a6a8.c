
bool FUN_0277a6a8(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) {
    return false;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar5) {
    return false;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return false;
  }
  local_48 = 0;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uVar5 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar4 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar7 != (uint *)0x0)) {
        uVar1 = *puVar7;
        uVar5 = 0;
        if ((uVar1 != 0) && (puVar7 != (uint *)(ulong)uVar1)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar1);
          uVar5 = 0;
          if (*puVar8 != 0) {
            uVar5 = puVar8[1];
            if ((uVar5 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar5);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 = (uint)uVar3,
                   uVar3 < 0xbd)) goto LAB_0277a840;
              }
            }
            uVar5 = 0;
          }
        }
        goto LAB_0277a840;
      }
    }
  }
  uVar5 = 0xbc;
LAB_0277a840:
  lVar9 = DAT_0532a840 + (ulong)uVar5 * 0x20;
  if (0xbc < uVar5) {
    lVar9 = DAT_0532a840;
  }
  iVar2 = *(int *)(lVar9 + 4);
  if (iVar2 == 0) {
    return false;
  }
  iVar6 = FUN_0277a480(param_1,uVar5);
  return iVar2 == iVar6;
}


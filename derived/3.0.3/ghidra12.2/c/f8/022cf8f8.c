
void FUN_022cf8f8(undefined8 param_1,undefined2 *param_2,byte *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  long lVar11;
  byte local_7c [4];
  undefined *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  uint *local_68;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar4 = PTR_DAT_04bb43c0;
  uVar8 = *param_2;
  local_68 = (uint *)0x0;
  uVar9 = *(undefined1 *)(param_2 + 1);
  uVar10 = *(undefined1 *)((long)param_2 + 3);
  uVar2 = *(undefined4 *)(param_2 + 2);
  local_78 = PTR_DAT_04bc0510 + 0x10;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  local_70 = uVar8;
  local_6e = uVar9;
  local_6d = uVar10;
  local_6c = uVar2;
  uVar5 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar4 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar6 != (uint *)0x0)) {
        uVar5 = *puVar6;
        local_68 = puVar6;
        if (uVar5 != 0 && puVar6 != (uint *)(ulong)uVar5) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
          if (((*puVar7 != 0) && (uVar5 = puVar7[1], uVar5 != 0)) && ((ulong)(ushort)puVar7[2] != 0)
             ) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar7 + lVar11 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar11 != 0) {
              uVar1 = 0;
              if ((ulong)uVar5 != 0) {
                uVar1 = (uint)((ulong)((long)puVar6 - lVar11) / (ulong)uVar5);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_48 = (uint)uVar3, uVar3 < 0xbd)) goto LAB_022cfa74;
            }
          }
        }
        local_48 = 0;
        goto LAB_022cfa74;
      }
    }
  }
  local_48 = 0xbc;
LAB_022cfa74:
  local_44 = uVar2;
  if ((local_48 & 0xfffffffd) == 0xa4) {
    FUN_01afca60(&local_78,0);
    uVar8 = local_70;
    uVar9 = local_6e;
    uVar10 = local_6d;
    local_44 = local_6c;
  }
  local_7c[0] = *param_3;
  local_48 = CONCAT13(uVar10,CONCAT12(uVar9,uVar8));
  if (7 < local_7c[0]) {
    local_7c[0] = 0xff;
  }
  FUN_0150dd8c(param_1,&local_48,local_7c);
  return;
}


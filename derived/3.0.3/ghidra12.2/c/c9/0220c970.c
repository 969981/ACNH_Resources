
undefined8 FUN_0220c970(long param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar3 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar8 != (uint *)0x0)) {
        puVar6 = *(undefined8 **)(param_1 + 8);
        uVar4 = *puVar8;
        puVar7 = (uint *)*puVar6;
        if (uVar4 != 0 && puVar8 != (uint *)(ulong)uVar4) {
          puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
          if (((*puVar9 != 0) && (uVar4 = puVar9[1], uVar4 != 0)) && ((ulong)(ushort)puVar9[2] != 0)
             ) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar10 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar4);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326c20) &&
                 (uVar2 = *(ushort *)(DAT_05326c28 + (long)(int)uVar1 * 2), uVar4 = (uint)uVar2,
                 uVar2 < 0x15)) goto LAB_0220cad0;
            }
          }
        }
        uVar4 = 0;
        goto LAB_0220cad0;
      }
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 8);
  uVar4 = 0;
  puVar7 = (uint *)*puVar6;
LAB_0220cad0:
  if ((uVar4 < 0x15) && ((*puVar7 >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
    uVar5 = FUN_021e0360(param_2,puVar6[1],*(undefined1 *)(puVar6 + 2),
                         *(undefined1 *)((long)puVar6 + 0x11));
    return uVar5;
  }
  return 0;
}


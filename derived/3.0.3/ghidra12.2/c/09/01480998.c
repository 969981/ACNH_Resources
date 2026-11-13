
bool FUN_01480998(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  if ((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 0x280) == 1)) {
    return false;
  }
  uStack_3c = *(undefined4 *)(param_1 + 0x28c);
  local_38 = 0;
  local_40 = *(undefined4 *)(param_1 + 0x288);
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_1 + 0x288);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar5 != (uint *)0x0)) {
        uVar3 = *puVar5;
        if (uVar3 != 0 && puVar5 != (uint *)(ulong)uVar3) {
          puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
          if (((*puVar6 != 0) && (uVar3 = puVar6[1], uVar3 != 0)) && ((ulong)(ushort)puVar6[2] != 0)
             ) {
            lVar7 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar7 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar3);
              }
              if (*puVar6 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar4 < 0xbd))
              goto LAB_01480b14;
            }
          }
        }
        uVar4 = 0;
        goto LAB_01480b14;
      }
    }
  }
  uVar4 = 0xbc;
LAB_01480b14:
  return uVar4 != 0xb0;
}


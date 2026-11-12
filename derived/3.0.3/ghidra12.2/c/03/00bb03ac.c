
bool FUN_00bb03ac(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_30 = *param_2;
  uStack_2c = param_2[1];
  local_28 = 0;
  FUN_0277d6c4(&local_30);
  lVar6 = *(long *)PTR_DAT_04bc0428;
  uVar2 = FUN_0277d6c4(param_2);
  puVar4 = *(uint **)(*(long *)(lVar6 + 0x1e0) +
                     (long)(int)((uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8)) * 8);
  uVar2 = *puVar4;
  if (uVar2 != 0 && puVar4 != (uint *)(ulong)uVar2) {
    puVar5 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
    if (((*puVar5 != 0) && (uVar2 = puVar5[1], uVar2 != 0)) && ((ulong)(ushort)puVar5[2] != 0)) {
      lVar6 = 0xc;
      if (*(char *)((long)puVar5 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
      if (lVar6 != 0) {
        uVar1 = 0;
        if ((ulong)uVar2 != 0) {
          uVar1 = (uint)((ulong)((long)puVar4 - lVar6) / (ulong)uVar2);
        }
        if (*puVar5 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < DAT_05326e40) &&
           (uVar3 = *(ushort *)(DAT_05326e48 + (long)(int)uVar1 * 2), uVar3 < 3)) goto LAB_00bb0498;
      }
    }
  }
  uVar3 = 0;
LAB_00bb0498:
  return uVar3 == 1;
}


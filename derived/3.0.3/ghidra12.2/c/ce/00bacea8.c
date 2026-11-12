
uint FUN_00bacea8(undefined8 param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  uVar4 = 0;
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         ((puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8),
          puVar5 != (uint *)0x0 && (uVar4 = *puVar5, uVar4 != 0 && puVar5 != (uint *)(ulong)uVar4)))
         ) {
        puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
        if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0))))
        {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar3 = 0;
            if ((ulong)uVar4 != 0) {
              uVar3 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar4);
            }
            if (*puVar6 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326d48) &&
               (uVar1 = *(ushort *)(DAT_05326d50 + (long)(int)uVar3 * 2), uVar4 = (uint)uVar1,
               uVar1 < 0x52)) goto LAB_00bacfec;
          }
        }
      }
    }
    uVar4 = 0;
  }
LAB_00bacfec:
  return (uint)(uVar4 < 0x11) & 0x17000U >> (ulong)(uVar4 & 0x1f);
}


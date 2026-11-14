
bool FUN_017c206c(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_2;
      uStack_4c = param_2[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
            local_48 = lVar6;
          }
        }
      }
      uVar3 = FUN_01b01f10(&local_58);
      uVar2 = (uVar3 & 0xffff) - (uint)*(ushort *)(DAT_05293a70 + 0x400);
      if ((((uVar2 < *(uint *)(DAT_05293a70 + 0x3e0)) &&
           (*(long *)(*(long *)(DAT_05293a70 + 1000) + (long)(int)uVar2 * 8) != 0)) &&
          (uVar2 = (uVar3 & 0xffff) - (uint)*(ushort *)(param_1 + 0x400),
          uVar2 < *(uint *)(param_1 + 0x3e0))) &&
         (puVar4 = *(uint **)(*(long *)(param_1 + 1000) + (long)(int)uVar2 * 8),
         puVar4 != (uint *)0x0)) {
        uVar2 = *puVar4;
        if (uVar2 == 0) {
          return false;
        }
        if (puVar4 == (uint *)(ulong)uVar2) {
          return false;
        }
        puVar5 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
        if (((*puVar5 != 0) && (uVar2 = puVar5[1], uVar2 != 0)) && ((ulong)(ushort)puVar5[2] != 0))
        {
          lVar6 = 0xc;
          if (*(char *)((long)puVar5 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
          if (lVar6 != 0) {
            uVar3 = 0;
            if ((ulong)uVar2 != 0) {
              uVar3 = (uint)((ulong)((long)puVar4 - lVar6) / (ulong)uVar2);
            }
            if (*puVar5 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if (uVar3 < DAT_05293038) {
              return *(short *)(DAT_05293040 + (long)(int)uVar3 * 2) == 1;
            }
          }
        }
      }
    }
  }
  return false;
}



ushort FUN_02622054(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar5 = FUN_0261eff4(param_2);
  uVar1 = (uint)uVar5 & 0xffff;
  if ((((uVar1 < 0x800) &&
       ((*(byte *)(param_1 + ((uVar5 & 0xfff8) >> 3) + 0xe98e0) >> (ulong)((uint)uVar5 & 7) & 1) !=
        0)) && (uVar1 = uVar1 - *(ushort *)(param_1 + 0xea6e0), uVar1 < *(uint *)(param_1 + 0xea6c0)
               )) &&
     (puVar6 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar1 * 8),
     puVar6 != (uint *)0x0)) {
    uVar1 = *puVar6;
    if (uVar1 != 0 && puVar6 != (uint *)(ulong)uVar1) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar1);
      if (((*puVar7 != 0) && (uVar1 = puVar7[1], uVar1 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar2 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar2 != 0) {
          uVar3 = 0;
          if ((ulong)uVar1 != 0) {
            uVar3 = (uint)((ulong)((long)puVar6 - lVar2) / (ulong)uVar1);
          }
          if (*puVar7 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < DAT_05557780) &&
             (uVar4 = *(ushort *)(DAT_05557788 + (long)(int)uVar3 * 2), uVar4 < 0xb)) {
            return uVar4;
          }
        }
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 9;
  }
  return uVar4;
}


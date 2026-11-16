
ushort FUN_029538b8(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  uVar4 = FUN_0277d6c4(param_2);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(param_1 + 0xb50);
  if (((uVar4 < *(uint *)(param_1 + 0xb30)) &&
      (puVar5 = *(uint **)(*(long *)(param_1 + 0xb38) + (long)(int)uVar4 * 8), puVar5 != (uint *)0x0
      )) && (uVar4 = *puVar5, uVar4 != 0 && puVar5 != (uint *)(ulong)uVar4)) {
    puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
    if (((*puVar6 != 0) && (uVar4 = puVar6[1], uVar4 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_055d6948) &&
           (uVar3 = *(ushort *)(DAT_055d6950 + (long)(int)uVar2 * 2), uVar3 < 2)) {
          return uVar3;
        }
      }
    }
  }
  return 0;
}


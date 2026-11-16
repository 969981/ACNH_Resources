
ushort FUN_0279cca8(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  undefined4 local_24;
  
  lVar5 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))();
  local_24 = FUN_006bd550(param_1[1],0);
  puVar4 = (uint *)FUN_01b1ee90(lVar5 + 0x1b80,&local_24);
  if ((puVar4 != (uint *)0x0) && (uVar2 = *puVar4, uVar2 != 0 && puVar4 != (uint *)(ulong)uVar2)) {
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
    if ((*puVar6 != 0) && ((uVar2 = puVar6[1], uVar2 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar5 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar5 = 0x1c;
      }
      lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar5 != 0) {
        uVar1 = 0;
        if ((ulong)uVar2 != 0) {
          uVar1 = (uint)((ulong)((long)puVar4 - lVar5) / (ulong)uVar2);
        }
        if (*puVar6 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < DAT_04da8688) &&
           (uVar3 = *(ushort *)(DAT_04da8690 + (long)(int)uVar1 * 2), uVar3 < 0x10)) {
          return uVar3;
        }
      }
    }
  }
  return 0;
}


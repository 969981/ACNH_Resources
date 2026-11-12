
ushort FUN_00874898(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  uint *puVar6;
  undefined4 local_24;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  local_24 = FUN_006bd550(param_2[1],0);
  puVar4 = (uint *)FUN_0088c0d0(param_1 + 8,&local_24);
  if (puVar4 == (uint *)0x0) {
    uVar5 = 2;
  }
  else {
    uVar3 = *puVar4;
    uVar5 = 0;
    if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_04ce9818) &&
               (uVar5 = *(ushort *)(DAT_04ce9820 + (long)(int)uVar2 * 2), uVar5 < 4)) {
              return uVar5;
            }
          }
        }
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}


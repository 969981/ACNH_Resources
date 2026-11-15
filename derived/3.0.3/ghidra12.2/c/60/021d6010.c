
ushort FUN_021d6010(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined4 local_24;
  
  uVar7 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(*param_1 + 0x18))();
  local_24 = FUN_006bd550(param_1[1],0);
  puVar5 = (uint *)FUN_0079e770(uVar7,&local_24);
  if ((puVar5 != (uint *)0x0) && (uVar3 = *puVar5, uVar3 != 0 && puVar5 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
    if (*puVar6 == 0) {
      return 0;
    }
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
          uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_04dda7e8) &&
           (uVar4 = *(ushort *)(DAT_04dda7f0 + (long)(int)uVar2 * 2), uVar4 < 8)) {
          return uVar4;
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_021d6c90(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined4 local_4;
  
  uVar7 = *(undefined8 *)PTR_DAT_04bb4138;
  local_4 = FUN_006bd550(param_1,0);
  puVar4 = (uint *)FUN_0079e770(uVar7,&local_4);
  if (puVar4 == (uint *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
    if (!(uVar5 == 0 || puVar4 == (uint *)(ulong)uVar5)) {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar5);
      uVar5 = 0;
      if (*puVar6 == 0) goto LAB_021d6cec;
      uVar5 = puVar6[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar5 != 0) {
            uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar5);
          }
          if (*puVar6 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_04dda7e8) &&
             (uVar5 = (uint)*(ushort *)(DAT_04dda7f0 + (long)(int)uVar2 * 2), uVar5 < 8))
          goto LAB_021d6cec;
        }
      }
    }
    uVar5 = 0;
  }
LAB_021d6cec:
  if (uVar5 < 8) {
    uVar3 = *(undefined4 *)(&DAT_04057f00 + (long)(int)uVar5 * 4);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


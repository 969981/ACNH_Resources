
undefined8 FUN_0205c714(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined *local_60;
  undefined1 *puStack_58;
  undefined4 local_50;
  undefined1 local_4c [7];
  undefined1 local_45;
  int local_24;
  
  uVar4 = (ulong)*(byte *)(param_2 + 8);
  if (uVar4 < 10) {
    param_1 = param_1 + 0x90;
    piVar3 = (int *)(param_1 + uVar4 * 0x38);
    if (*piVar3 != 0) {
      local_45 = 0;
      local_50 = 8;
      local_4c[0] = 0;
      puStack_58 = local_4c;
      local_60 = PTR_DAT_04bb3768 + 0x10;
      FUN_038d1270(&local_60,"-----");
      pbVar5 = (byte *)(param_1 + uVar4 * 0x38 + 4);
      uVar2 = (ulong)*pbVar5;
      if (uVar2 < 0x23) {
        FUN_038d1270(&local_60,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar2 * 8 + 0xb0),
                     *(undefined1 *)(param_1 + uVar4 * 0x38 + 5));
        uVar2 = (ulong)*pbVar5;
      }
      if (((uint)*(byte *)(param_1 + uVar4 * 0x38 + 5) | (int)uVar2 << 8) ==
          (uint)*(ushort *)(param_2 + 2)) {
        uVar1 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_60,PTR_DAT_04bb3238,1);
        local_24 = (int)uVar1;
        if ((local_24 == 0) ||
           ((uVar4 = FUN_02058b5c(uVar1,&local_24), (uVar4 & 1) != 0 &&
            (uVar4 = FUN_0205c85c(uVar4,&local_24), (uVar4 & 1) != 0)))) {
          *piVar3 = 4;
          return 0;
        }
        return 5;
      }
    }
  }
  return 2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00a7c8e4(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_38;
  undefined7 uStack_30;
  undefined1 local_29;
  undefined2 uStack_28;
  undefined1 uStack_26;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  if (DAT_04da56d0 == 0 || DAT_0537d558 == (long *)0x0) {
    return 0;
  }
  local_38 = *param_1;
  uStack_26 = 6;
  uStack_30 = (undefined7)local_38;
  local_29 = (undefined1)((ulong)local_38 >> 0x38);
  uStack_28 = *(undefined2 *)PTR_DAT_04bb6298;
  lVar5 = *DAT_0537d558;
  bVar2 = *(byte *)(lVar5 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar5 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar2)) {
      local_8 = 0;
      local_2 = 0;
      unique0x1000004f = CONCAT13(6,CONCAT21(uStack_28,local_29));
      local_4 = 0xff01;
      DAT_04da5788 = local_38;
      DAT_04da5790._0_7_ = uStack_30;
      if (-1 < DAT_04da5760) {
        FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_04da5760,&local_8,&DAT_04da5788,0x18,0);
      }
      uVar3 = 1;
      goto LAB_00a7c988;
    }
  }
  uVar4 = FUN_00a7ad70(&local_38);
  uVar3 = FUN_00a7b0b4(uVar4,param_1);
LAB_00a7c988:
  return uVar3 & 1;
}


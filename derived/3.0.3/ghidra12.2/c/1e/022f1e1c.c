
undefined8 FUN_022f1e1c(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ushort uVar5;
  char *pcVar6;
  ushort *puVar7;
  undefined8 local_88;
  undefined *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  uVar1 = FUN_022f1914(param_2);
  if (uVar1 != 0xffffffff) {
    uVar4 = (ulong)uVar1;
    puVar7 = &DAT_05486940 + uVar4 * 0x20;
    uVar5 = *puVar7;
    if ((uVar5 >> 2 & 1) != 0) {
      *(undefined8 *)(&DAT_05486928 + uVar4 * 0x10) = 0;
      *(undefined8 *)(&DAT_05486938 + uVar4 * 0x10) = 0;
      (&DAT_05486910)[uVar4 * 8] = 0xffffffffffffffff;
      *puVar7 = 0;
      *(undefined1 *)((long)&DAT_05486945 + uVar4 * 0x40 + 1) = 0;
      *(undefined4 *)(&DAT_05486942 + uVar4 * 0x20) = 0xffff;
      if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
        DAT_05486880 = (ushort)(uVar1 << 8) | 3;
        local_88._6_2_ = (ushort)((ulong)local_88 >> 0x30) & 0xff00;
        local_88 = (undefined *)CONCAT26(local_88._6_2_,0xff0000000000);
        if (-1 < DAT_05486858) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_05486858,&local_88,&DAT_05486880,2,0)
          ;
        }
      }
      return 1;
    }
    if ((uVar5 >> 1 & 1) != 0) {
      *puVar7 = uVar5 & 0xfffd;
      pcVar6 = &DAT_05486944 + uVar4 * 0x40;
      if (*pcVar6 == '\x02') {
        uStack_64 = (&DAT_0548693c)[uVar4 * 0x10];
        uStack_74 = (&DAT_0548692c)[uVar4 * 0x10];
        local_88 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_80 = PTR_DAT_04bb2010 + 0x10;
        local_78 = (&DAT_05486928)[uVar4 * 0x10];
        local_68 = (&DAT_05486938)[uVar4 * 0x10];
        local_70 = puStack_80;
        uVar3 = FUN_022f0cf0(param_2,&local_88);
        if ((uVar3 & 1) == 0) {
          iVar2 = FUN_022f1914(param_2);
          if (iVar2 != -1) {
            *(int *)(param_1 + 0xc) = iVar2;
            *(undefined1 *)(param_1 + 0x11) = 1;
            FUN_01393458(param_1);
          }
          if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
            DAT_05486880 = (ushort)(uVar1 << 8) | 8;
            FUN_01de7124(&DAT_05486850,&DAT_05486880,2);
          }
          (&DAT_05486928)[uVar4 * 0x10] = 0;
          (&DAT_05486910)[uVar4 * 8] = 0xffffffffffffffff;
          (&DAT_05486938)[uVar4 * 0x10] = 0;
          (&DAT_0548692c)[uVar4 * 0x10] = 0;
          (&DAT_0548693c)[uVar4 * 0x10] = 0;
          *puVar7 = 0;
          (&DAT_05486945)[uVar4 * 0x20] = 0;
          (&DAT_05486942)[uVar4 * 0x20] = 0xffff;
          *pcVar6 = '\0';
          return 1;
        }
      }
      else if (*pcVar6 == '\x01') {
        *puVar7 = uVar5 & 0xfffd | 8;
      }
      if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
        local_88._6_2_ = (ushort)((ulong)local_88 >> 0x30) & 0xff00;
        uVar5 = 4;
        if (*pcVar6 != '\x01') {
          uVar5 = 7;
        }
        DAT_05486880 = uVar5 | (ushort)(uVar1 << 8);
        local_88 = (undefined *)CONCAT26(local_88._6_2_,0xff0000000000);
        if (-1 < DAT_05486858) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_05486858,&local_88,&DAT_05486880,2,0)
          ;
        }
      }
      return 0;
    }
  }
  return 2;
}


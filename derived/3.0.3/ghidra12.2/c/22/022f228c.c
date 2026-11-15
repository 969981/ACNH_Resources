
undefined8 FUN_022f228c(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  *(uint *)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 0x11) = 1;
  uVar2 = FUN_01392d64();
  uVar3 = 0;
  switch(uVar2) {
  case 0:
  case 2:
    puVar1 = &DAT_05486908 + (ulong)param_2 * 8;
    if (0x13 < param_2) {
      puVar1 = &DAT_05486908;
    }
    *(ushort *)(puVar1 + 7) = *(ushort *)(puVar1 + 7) | 0x84;
    if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
      uVar4 = 2;
LAB_022f2370:
      DAT_05486880 = uVar4 | (ushort)(param_2 << 8);
      local_8 = 0;
      local_2 = 0;
      local_4 = 0xff00;
      if (-1 < DAT_05486858) {
        FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_05486858,&local_8,&DAT_05486880,2,0);
      }
    }
    break;
  case 1:
    puVar1 = &DAT_05486908 + (ulong)param_2 * 8;
    if (0x13 < param_2) {
      puVar1 = &DAT_05486908;
    }
    *(ushort *)(puVar1 + 7) = *(ushort *)(puVar1 + 7) | 0x82;
    if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
      uVar4 = 1;
      goto LAB_022f2370;
    }
    break;
  case 3:
    goto switchD_022f22d8_caseD_3;
  }
  uVar3 = 1;
switchD_022f22d8_caseD_3:
  return uVar3;
}


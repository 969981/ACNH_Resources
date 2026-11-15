
void FUN_020d3880(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uStack_51;
  undefined8 local_50;
  char *pcStack_48;
  byte local_3c [12];
  
  FUN_02507c6c(local_3c,7,1,0,0);
  if (local_3c[0] < 8) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "MoveNpcTradeSkipCount";
    local_50 = puVar1;
    FUN_0274ca70(local_3c,&local_50,1);
    puVar2 = PTR_DAT_04bb5038;
    while (local_3c[0] < 8) {
      uVar4 = (ulong)local_3c[0];
      do {
        if (uVar4 == 7) goto LAB_020d3950;
        uVar4 = uVar4 + 1;
        uVar3 = FUN_02507924(local_3c,puVar2 + uVar4);
      } while ((uVar3 & 1) == 0);
      local_3c[0] = puVar2[uVar4];
      if (7 < local_3c[0]) {
LAB_020d3950:
        local_3c[0] = 0xff;
        break;
      }
      pcStack_48 = "MoveNpcTradeSkipCount";
      local_50 = puVar1;
      FUN_0274ca70(local_3c,&local_50,1);
    }
  }
  uVar4 = (ulong)local_50 >> 0x30;
  local_50 = (undefined *)CONCAT26((ushort)uVar4 & 0xff00,0xff0000000000);
  if (-1 < DAT_053d0980) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0980,&local_50,&uStack_51,1,0);
  }
  return;
}


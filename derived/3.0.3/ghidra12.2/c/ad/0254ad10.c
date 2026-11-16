
void FUN_0254ad10(void)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 local_3c [4];
  byte local_38 [4];
  undefined4 local_34;
  undefined2 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined2 local_24;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f08d8);
      puVar4 = &DAT_054f08d0;
      if (iVar2 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
    }
    else {
      puVar4 = &DAT_054f08d0;
    }
  }
  else {
    puVar4 = (uint *)(DAT_054f5738 + 0x200);
  }
  local_2c = 3;
  *puVar4 = *puVar4 & 0xfffffff7;
  FUN_02507c6c(&local_2c,7,1,0,0);
  uVar5 = local_2c & 0xff;
  local_34 = local_28;
  local_38[0] = 0xff;
  if ((local_2c & 0xff) < 8) {
    local_38[0] = (byte)local_2c;
  }
  local_30 = local_24;
  if ((local_2c & 0xff) < 8) {
    do {
      local_3c[0] = (undefined1)uVar5;
      FUN_025197d0(local_3c,1);
      uVar1 = (ulong)uVar5;
      do {
        uVar6 = uVar1;
        if (uVar6 == 7) {
          return;
        }
        uVar3 = FUN_02507924(local_38,&DAT_0548e169 + uVar6);
        uVar1 = uVar6 + 1;
      } while ((uVar3 & 1) == 0);
      local_38[0] = (&DAT_0548e169)[uVar6];
      uVar5 = (uint)local_38[0];
    } while (uVar5 < 8);
  }
  return;
}


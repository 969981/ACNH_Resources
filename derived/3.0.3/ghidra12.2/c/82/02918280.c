
void FUN_02918280(void)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  byte bStack_54;
  byte local_4c [4];
  byte local_48 [4];
  undefined4 local_44;
  undefined2 local_40;
  byte local_3c [4];
  undefined4 local_38;
  undefined2 local_34;
  
  FUN_02932334(&DAT_055c10d0);
  FUN_02507c6c(local_3c,1,1,1,0);
  puVar2 = PTR_DAT_04bb5038;
  uVar5 = (uint)local_3c[0];
  local_44 = local_38;
  local_48[0] = 0xff;
  if (local_3c[0] < 8) {
    local_48[0] = local_3c[0];
  }
  local_40 = local_34;
  if (local_3c[0] < 8) {
    do {
      local_4c[0] = (byte)uVar5;
      uStack_58 = 0;
      bStack_54 = 0;
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      local_5c = 0;
      FUN_0255a2b0(local_4c,&local_68);
      uVar4 = (ulong)local_4c[0];
      if (uVar4 < 8) {
        lVar1 = uVar4 * 0x18;
        (&DAT_054f6d48)[uVar4 * 3] = CONCAT44(uStack_60,uStack_64);
        *(undefined4 *)((long)&DAT_054f6d50 + lVar1 + 4) = uStack_58;
        *(undefined4 *)(&DAT_054f6d58 + lVar1) = local_68;
        *(undefined4 *)(&DAT_054f6d50 + uVar4 * 3) = local_5c;
        *(ushort *)(&DAT_054f6d5c + lVar1) = (ushort)bStack_54;
      }
      uVar4 = (ulong)uVar5;
      do {
        if (uVar4 == 7) {
          return;
        }
        uVar4 = uVar4 + 1;
        uVar3 = FUN_02507924(local_48,puVar2 + uVar4);
      } while ((uVar3 & 1) == 0);
      local_48[0] = puVar2[uVar4];
      uVar5 = (uint)local_48[0];
    } while (uVar5 < 8);
  }
  return;
}


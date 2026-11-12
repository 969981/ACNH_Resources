
void FUN_0080d5a0(ushort *param_1,byte *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auStack_4a [2];
  byte local_48 [4];
  undefined4 local_44;
  undefined2 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined2 local_34;
  
  puVar2 = PTR_DAT_04bb3128;
  uVar1 = *param_1;
  if (uVar1 != *(ushort *)PTR_DAT_04bb3170 && *param_2 < 8) {
    if (((*PTR_DAT_04bb3128 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar3 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar5 = 0;
      do {
        if (*(uint *)(DAT_04c8c0f8 + uVar5 * 4) == (uint)(uVar1 >> 0xb)) goto LAB_0080d62c;
        uVar5 = uVar5 + 1;
      } while (DAT_04c8c0f0 != uVar5);
    }
    uVar5 = 0;
LAB_0080d62c:
    local_3c = (uint)uVar5;
    if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar3 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar6 = local_3c;
    if (DAT_04c8c0f0 <= local_3c) {
      uVar6 = 0;
    }
    if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar6 * 4) == 0x1a) {
      FUN_02507c6c(&local_3c,7,1,0,0);
      uVar6 = local_3c & 0xff;
      local_44 = local_38;
      local_48[0] = 0xff;
      if ((local_3c & 0xff) < 8) {
        local_48[0] = (byte)local_3c;
      }
      local_40 = local_34;
      if ((local_3c & 0xff) < 8) {
        do {
          if (7 < *param_2 || *param_2 != uVar6) {
            FUN_007ef010(auStack_4a,param_1);
            FUN_0080d780(auStack_4a,local_48);
          }
          uVar5 = (ulong)uVar6;
          do {
            uVar7 = uVar5;
            if (uVar7 == 7) {
              return;
            }
            uVar4 = FUN_02507924(local_48,&DAT_0548e169 + uVar7);
            uVar5 = uVar7 + 1;
          } while ((uVar4 & 1) == 0);
          local_48[0] = (&DAT_0548e169)[uVar7];
          uVar6 = (uint)local_48[0];
        } while (uVar6 < 8);
      }
    }
  }
  return;
}


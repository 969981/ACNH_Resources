
bool FUN_0254d6a0(byte *param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  long *local_60;
  char local_58;
  char local_57;
  char local_56;
  undefined4 local_4c;
  byte local_48 [4];
  undefined4 local_44;
  undefined2 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined4 local_18;
  undefined1 local_14 [4];
  
  puVar8 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar8 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_4c = *puVar8;
  FUN_0071c8d0(&local_60,&local_4c,PTR_DAT_04bb3238,0);
  plVar4 = local_60;
  if (local_60 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3770);
    if ((uVar6 & 1) == 0) {
      local_57 = '\0';
    }
  }
  bVar1 = ((local_60 != (long *)0x0 && local_58 != '\0') && local_57 != '\0') && local_56 != '\0';
  if (((local_60 != (long *)0x0 && local_58 != '\0') && local_57 != '\0') && local_56 != '\0') {
    local_60[0x330] = 0;
    local_60[0x331] = 0;
    local_60[0x332] = 0;
    local_60[0x333] = 0;
    local_60[0x334] = 0;
    local_60[0x335] = 0;
    local_60[0x336] = 0;
    local_60[0x337] = 0;
    local_60[0x338] = 0;
    local_60[0x339] = 0;
    local_60[0x33a] = 0;
    local_60[0x32c] = local_60[0x31c];
    *(undefined2 *)(local_60 + 0x33b) = 0;
    local_60[0x32d] = local_60[0x31d];
    local_60[0x32e] = local_60[0x31e];
    local_60[0x32f] = local_60[799];
    local_3c = 0x61;
    local_60[0x318] = local_60[0x338];
    local_60[0x319] = local_60[0x339];
    local_60[0x31a] = local_60[0x33a];
    *(short *)(local_60 + 0x31b) = (short)local_60[0x33b];
    local_60[0x314] = local_60[0x334];
    local_60[0x315] = local_60[0x335];
    local_60[0x316] = local_60[0x336];
    local_60[0x317] = local_60[0x337];
    local_60[0x310] = local_60[0x330];
    local_60[0x311] = local_60[0x331];
    local_60[0x312] = local_60[0x332];
    local_60[0x313] = local_60[0x333];
    local_60[0x30c] = local_60[0x32c];
    local_60[0x30d] = local_60[0x32d];
    local_60[0x30e] = local_60[0x32e];
    local_60[0x30f] = local_60[0x32f];
    lVar2 = 0;
    if (local_60[0xe] != 0) {
      lVar2 = local_60[0xe] + 0x278;
    }
    FUN_03ebb160(lVar2,0x61);
    local_18 = 2;
    FUN_02507c6c(&local_3c,1,1,1,0);
    puVar3 = PTR_DAT_04bb5038;
    uVar9 = local_3c & 0xff;
    local_44 = local_38;
    local_48[0] = 0xff;
    if ((local_3c & 0xff) < 8) {
      local_48[0] = (byte)local_3c;
    }
    local_40 = local_34;
    if ((local_3c & 0xff) < 8) {
      do {
        local_14[0] = (undefined1)uVar9;
        FUN_0254becc(local_14,&local_18);
        uVar6 = (ulong)uVar9;
        do {
          if (uVar6 == 7) {
            return bVar1;
          }
          uVar6 = uVar6 + 1;
          uVar7 = FUN_02507924(local_48,puVar3 + uVar6);
        } while ((uVar7 & 1) == 0);
        local_48[0] = puVar3[uVar6];
        uVar9 = (uint)local_48[0];
      } while (uVar9 < 8);
    }
  }
  return bVar1;
}


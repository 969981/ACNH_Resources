
void FUN_0254cdf0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 local_5c [4];
  byte local_58 [4];
  undefined4 local_54;
  undefined2 local_50;
  byte local_4c [4];
  undefined4 local_48;
  undefined2 local_44;
  
  FUN_02507c6c(local_4c,1,1,0,0);
  puVar2 = PTR_DAT_04bb5038;
  puVar1 = PTR_DAT_04bb4fb8;
  uVar6 = (uint)local_4c[0];
  local_54 = local_48;
  local_58[0] = 0xff;
  if (local_4c[0] < 8) {
    local_58[0] = local_4c[0];
  }
  local_50 = local_44;
  if (local_4c[0] < 8) {
    do {
      local_5c[0] = (undefined1)uVar6;
      uVar3 = FUN_02582d8c(local_5c,1);
      if ((((uVar3 < 8) &&
           (lVar5 = *(long *)puVar1, *(char *)(lVar5 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
          (*(char *)(lVar5 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0')) &&
         ((uVar3 = FUN_02582d8c(local_5c,1), uVar3 < 8 &&
          (lVar5 = *(long *)puVar1, *(char *)(lVar5 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')))) {
        *(undefined4 *)(lVar5 + (ulong)uVar3 * 0x13f0 + 0x4e0) = 0;
      }
      uVar7 = (ulong)uVar6;
      do {
        if (uVar7 == 7) {
          return;
        }
        uVar7 = uVar7 + 1;
        uVar4 = FUN_02507924(local_58,puVar2 + uVar7);
      } while ((uVar4 & 1) == 0);
      local_58[0] = puVar2[uVar7];
      uVar6 = (uint)local_58[0];
    } while (uVar6 < 8);
  }
  return;
}


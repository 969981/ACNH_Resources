
void FUN_02a8bc90(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte local_58 [4];
  undefined4 local_54;
  undefined2 local_50;
  byte local_4c [4];
  undefined4 local_48;
  undefined2 local_44;
  
  if ((DAT_05351250 != 0) && (*(int *)(DAT_05351250 + 0xb0) == 1)) {
    uVar1 = *(uint *)(param_1 + 0x318);
    *(undefined4 *)(param_1 + 0x318) = 0;
    FUN_02507c6c(local_4c,7,1,0,0);
    uVar4 = (uint)local_4c[0];
    local_54 = local_48;
    local_58[0] = 0xff;
    if (local_4c[0] < 8) {
      local_58[0] = local_4c[0];
    }
    local_50 = local_44;
    if (local_4c[0] < 8) {
      do {
        uVar5 = 1 << (ulong)(uVar4 & 0x1f);
        if ((uVar5 & uVar1) == 0) {
          uVar5 = *(uint *)(param_1 + 0x318) & (uVar5 ^ 0xffffffff);
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x318) | uVar5;
        }
        *(uint *)(param_1 + 0x318) = uVar5;
        uVar2 = (ulong)uVar4;
        do {
          uVar6 = uVar2;
          if (uVar6 == 7) {
            return;
          }
          uVar3 = FUN_02507924(local_58,&DAT_0548e169 + uVar6);
          uVar2 = uVar6 + 1;
        } while ((uVar3 & 1) == 0);
        local_58[0] = (&DAT_0548e169)[uVar6];
        uVar4 = (uint)local_58[0];
      } while (uVar4 < 8);
    }
  }
  return;
}


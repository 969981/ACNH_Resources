
void FUN_01251910(long param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte local_4c [4];
  byte local_48 [4];
  uint local_44;
  undefined *local_40;
  char *pcStack_38;
  
  bVar3 = *param_2;
  if (((bVar3 < 8) &&
      (iVar4 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10)), iVar4 == 0x2e)) &&
     (local_48[0] = bVar3, uVar5 = FUN_02582fe0(local_48), local_44 = uVar5, uVar5 != 0xffffffff)) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "TodayFortune";
    iVar4 = FUN_0274ce10(&local_44,&local_40);
    if ((iVar4 != 2) && ((1 << (ulong)(uVar5 & 0x1f) & (uint)*(byte *)(param_1 + 0xc)) != 0)) {
      local_4c[0] = *param_2;
      if (7 < local_4c[0]) {
        local_4c[0] = 0xff;
      }
      uVar5 = FUN_02582fe0(local_4c);
      if (uVar5 != 0xffffffff) {
        uVar2 = *(uint *)(param_1 + 0xc);
        uVar1 = 0x400 << (ulong)(uVar5 & 0x1f) & 0x3fc00;
        uVar5 = uVar2 | uVar1;
        if ((param_3 & 1) != 0) {
          uVar5 = uVar2 & 0xfc000000 |
                  uVar2 & 0x3ffff | uVar1 | ((uVar2 | uVar5 << 8) >> 0x12 & 0xff) << 0x12;
        }
        goto LAB_01251a20;
      }
    }
  }
  iVar4 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  if (iVar4 != 0x2e) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0xc) | 0x100;
  if ((param_3 & 1) == 0) {
    uVar5 = *(uint *)(param_1 + 0xc);
  }
  uVar5 = uVar5 | 0x200;
LAB_01251a20:
  *(uint *)(param_1 + 0xc) = uVar5;
  return;
}


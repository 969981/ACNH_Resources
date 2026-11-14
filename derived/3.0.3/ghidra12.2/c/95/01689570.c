
void FUN_01689570(uint *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined *local_48;
  uint local_40;
  uint uStack_3c;
  long local_38;
  uint local_18;
  uint local_14;
  
  uVar3 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  DAT_05582b70 = DAT_05582b74;
  DAT_05582b74 = DAT_05582b78;
  uVar3 = uVar3 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar3 ^ DAT_05582b7c;
  DAT_05582b78 = DAT_05582b7c;
  uVar4 = (uint)((ulong)uVar3 * 100 >> 0x20);
  if (uVar4 < 10) {
    lVar5 = 0;
  }
  else if (uVar4 < 0x10) {
    lVar5 = 1;
  }
  else if (uVar4 < 0x1a) {
    lVar5 = 2;
  }
  else if (uVar4 < 0x24) {
    lVar5 = 3;
  }
  else if (uVar4 < 0x2e) {
    lVar5 = 4;
  }
  else if (uVar4 < 0x38) {
    lVar5 = 5;
  }
  else {
    lVar5 = 6;
    if (0x48 < uVar4) {
      lVar5 = 7;
    }
  }
  local_14 = 0;
  local_18 = (&DAT_04058520)[lVar5] & 0xffff;
  DAT_05582b7c = uVar3;
  FUN_0277d4ac(&local_18);
  iVar2 = FUN_0277d6c4(&local_18);
  puVar1 = PTR_DAT_04bb43c0;
  if (iVar2 == 0x175e) {
    local_38 = 0;
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_40 = local_18;
    uStack_3c = local_14;
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar5 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(&local_18);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if (uVar3 < *(uint *)(lVar5 + 0x1d8)) {
          lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8);
          if (lVar5 != 0) {
            local_38 = lVar5;
          }
        }
      }
    }
    FUN_01b152b8(&local_48);
  }
  else {
    local_40 = local_18;
    uStack_3c = local_14;
  }
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  return;
}


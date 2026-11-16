
uint FUN_0277a1f4(void *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined **local_7b0;
  undefined1 auStack_7a8 [1876];
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar3 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 != 0) {
    lVar3 = *(long *)(lVar3 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_7b0 = &PTR_LAB_049ff3a8;
      uVar2 = nn::os::GetSystemTick();
      local_54 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
      local_50 = (local_54 ^ local_54 >> 0x1e) * 0x6c078965 + 2;
      local_4c = (local_50 ^ local_50 >> 0x1e) * 0x6c078965 + 3;
      local_48 = (local_4c ^ local_4c >> 0x1e) * 0x6c078965 + 4;
      memcpy(auStack_7a8,param_1,0x754);
      lVar3 = FUN_01a45204(&local_7b0);
      uVar2 = FUN_0277d6c4(param_2);
      if ((uVar2 >> 3 & 0x1fff) < 0x753) {
        return *(uint *)(lVar3 + (ulong)((uVar2 & 0xffff) >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1;
      }
    }
  }
  return 0;
}


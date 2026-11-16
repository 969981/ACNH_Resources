
undefined8 FUN_0277a328(void *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined **local_7b0;
  undefined1 auStack_7a8 [1876];
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_7b0 = &PTR_LAB_049ff3a8;
      uVar3 = nn::os::GetSystemTick();
      local_54 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
      local_50 = (local_54 ^ local_54 >> 0x1e) * 0x6c078965 + 2;
      local_4c = (local_50 ^ local_50 >> 0x1e) * 0x6c078965 + 3;
      local_48 = (local_4c ^ local_4c >> 0x1e) * 0x6c078965 + 4;
      memcpy(auStack_7a8,param_1,0x754);
      lVar4 = FUN_01a451fc(&local_7b0);
      uVar3 = FUN_0277d6c4(param_2);
      if ((uVar3 >> 3 & 0x1fff) < 0x753) {
        lVar1 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
        *(uint *)(lVar4 + lVar1) =
             *(uint *)(lVar4 + lVar1) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
      }
      memcpy(param_1,auStack_7a8,0x754);
      return 1;
    }
  }
  return 0;
}



undefined8 FUN_02612304(undefined2 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  *param_1 = 0x4c7b;
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_60 = 0;
      local_68 = *param_2;
      uStack_64 = param_2[1];
      local_70 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
            local_60 = lVar5;
          }
        }
      }
      uVar4 = FUN_01ae67f0(&local_70);
      if ((uVar4 & 1) != 0) {
        FUN_01b059f0(&local_78,&local_70);
        *param_1 = 0x4c7b;
        lVar5 = *(long *)puVar1;
        uVar2 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if (((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
             (iVar3 = FUN_0277d6c4(&local_78), iVar3 == 0x16a2)) {
            lVar5 = *(long *)puVar1;
            local_58 = &PTR_FUN_04a36b50;
            local_48 = 0;
            local_50 = local_78;
            uStack_4c = uStack_74;
            uVar2 = FUN_0277d6c4(&local_50);
            if (*(long *)puVar1 != 0) {
              lVar5 = *(long *)(lVar5 + 0x57e58);
              uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
              if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
                lVar5 = *(long *)PTR_DAT_04bc0428;
                uVar2 = FUN_0277d6c4(&local_78);
                uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
                if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
                   (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0))
                {
                  local_48 = lVar5;
                }
              }
            }
            uVar4 = FUN_01b0d26c(&local_58);
            if ((((uint)uVar4 & 0xffff) < 0x800) &&
               ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + ((uVar4 & 0xfff8) >> 3) + 0xe99e0) >>
                 (ulong)((uint)uVar4 & 7) & 1) != 0)) {
              *param_1 = (short)uVar4;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


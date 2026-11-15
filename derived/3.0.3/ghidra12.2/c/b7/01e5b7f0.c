
void FUN_01e5b7f0(long param_1,short *param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  byte bVar7;
  long lVar8;
  undefined1 local_6c [4];
  undefined *local_68;
  short local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  long local_58;
  uint local_50;
  byte local_4c [4];
  uint local_48;
  uint local_44;
  uint local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  uVar5 = FUN_01e3e21c(*(undefined8 *)(param_1 + 0x358));
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar5 & 1) != 0) {
    bVar7 = *PTR_DAT_04bb32e0;
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x358) + 0x508);
    local_50 = *param_3;
    local_60 = *param_2;
    if (local_60 != -2) {
      local_5e = param_2[1];
      local_58 = 0;
      local_5c = *(undefined4 *)(param_2 + 2);
      local_68 = PTR_DAT_04bc0510 + 0x10;
      lVar8 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_2);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (uVar4 < *(uint *)(lVar8 + 0x1d8)) {
            lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
            if (lVar8 != 0) {
              local_58 = lVar8;
            }
          }
        }
      }
      local_4c[0] = 0;
      local_4c[1] = 0;
      FUN_01adab50(&local_68,local_4c);
      uVar4 = 0;
      do {
        local_48 = uVar4;
        if ((local_48 != 0) && (local_44 = local_48, local_48 < 0xe)) {
          uVar4 = local_48 + 7;
          if (-1 < (int)local_48) {
            uVar4 = local_48;
          }
          local_28 = local_48;
          if (((uint)((int)uVar4 >> 3) < 2) &&
             (local_50 = local_48,
             (local_4c[(uint)((int)uVar4 >> 3)] >> (ulong)(local_48 & 7) & 1) != 0))
          goto LAB_01e5b98c;
        }
        uVar4 = local_48 + 1;
      } while (local_48 + 1 != 0xe);
      local_50 = 0;
    }
LAB_01e5b98c:
    puVar3 = PTR_DAT_04bb27d0;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    local_60 = (short)uVar2;
    local_5e = CONCAT11((char)local_50,bVar7);
    local_68 = *(undefined **)param_2;
    lVar8 = **(long **)PTR_DAT_04bb27d0;
    bVar7 = *(byte *)(lVar8 + 0x473);
    puVar6 = PTR_DAT_04bc1220;
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        puVar6 = (undefined1 *)(lVar8 + 0x473);
      }
    }
    local_6c[0] = *puVar6;
    FUN_02107b10(&local_68,local_6c);
    local_28 = 0;
    local_22 = 0;
    local_24 = 0xff00;
    if (-1 < DAT_053d08f0) {
      FUN_01db1df0(**(long **)puVar3 + 0x480,DAT_053d08f0,&local_28,&local_68,0xc,0);
    }
  }
  return;
}


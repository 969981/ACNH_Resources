
void FUN_02b24320(long param_1)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  byte local_48;
  undefined8 local_28;
  
  lVar8 = 0;
  piVar2 = (int *)((long)(PTR_DAT_04bc4700 + 8) + (ulong)*(uint *)(param_1 + 0xc) * 4);
  if (7 < *(uint *)(param_1 + 0xc)) {
    piVar2 = (int *)(PTR_DAT_04bc4700 + 8);
  }
  do {
    if (*(int *)(PTR_DAT_04bbbf90 + lVar8 * 4 + 8) == *piVar2) {
LAB_02b243a0:
      puVar9 = PTR_DAT_04bbbf90 + lVar8 * 4;
LAB_02b243a8:
      local_58 = PTR_DAT_04bbfe68 + 0x10;
      uStack_4c = *(undefined4 *)(puVar9 + 8);
      local_50 = (undefined4)lVar8;
      local_48 = FUN_017baf44();
      local_48 = local_48 & 1;
      local_28 = 0xd55;
      FUN_0277d4ac(&local_28);
      puVar5 = PTR_DAT_04bb43c0;
      local_60 = 0;
      puVar9 = PTR_DAT_04bc0510 + 0x10;
      local_68 = (undefined4)local_28;
      uStack_64 = local_28._4_4_;
      lVar8 = *(long *)PTR_DAT_04bb43c0;
      local_70 = puVar9;
      uVar6 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar5 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_28);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), lVar8 != 0)) {
            local_60 = lVar8;
          }
        }
      }
      local_78 = 0x598;
      FUN_0277d4ac(&local_78);
      puVar4 = PTR_DAT_04bb39d8;
      puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar3 = puVar7[3];
      uVar6 = *puVar7 ^ *puVar7 << 0xb;
      *puVar7 = puVar7[1];
      puVar7[1] = puVar7[2];
      puVar7[2] = uVar3;
      puVar7[3] = uVar6 >> 8 ^ uVar3 >> 0x13 ^ uVar6 ^ uVar3;
      FUN_01a4c66c(&local_88,&local_78);
      FUN_01b0a294(&local_70,&local_78);
      FUN_01afade0(&local_70,0);
      local_78 = CONCAT44(uStack_64,local_68);
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      uStack_80 = 0x1c0000001c;
      local_88 = puVar1;
      FUN_01a50970(&local_58,0,&local_78,&local_88);
      local_28 = 0xd55;
      FUN_0277d4ac(&local_28);
      lVar8 = *(long *)puVar5;
      local_60 = 0;
      local_68 = (undefined4)local_28;
      uStack_64 = local_28._4_4_;
      local_70 = puVar9;
      uVar6 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar5 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_28);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), lVar8 != 0)) {
            local_60 = lVar8;
          }
        }
      }
      local_78 = 0xe71;
      FUN_0277d4ac(&local_78);
      puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar4);
      uVar3 = puVar7[3];
      uVar6 = *puVar7 ^ *puVar7 << 0xb;
      *puVar7 = puVar7[1];
      puVar7[1] = puVar7[2];
      puVar7[2] = uVar3;
      puVar7[3] = uVar6 >> 8 ^ uVar3 >> 0x13 ^ uVar6 ^ uVar3;
      FUN_01a4c66c(&local_88,&local_78);
      FUN_01b0a294(&local_70,&local_78);
      FUN_01afade0(&local_70,0);
      local_78 = CONCAT44(uStack_64,local_68);
      uStack_80 = 0x1e00000020;
      local_88 = puVar1;
      FUN_01a50970(&local_58,0,&local_78,&local_88);
      return;
    }
    if (0x37 < (uint)lVar8) {
      lVar8 = 0;
      puVar9 = PTR_DAT_04bbbf90;
      goto LAB_02b243a8;
    }
    if (*(int *)(PTR_DAT_04bbbf90 + lVar8 * 4 + 0xc) == *piVar2) {
      lVar8 = lVar8 + 1;
      goto LAB_02b243a0;
    }
    lVar8 = lVar8 + 2;
  } while( true );
}



void FUN_02b24660(long param_1)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  byte local_58;
  undefined8 local_38;
  
  lVar10 = 0;
  piVar2 = (int *)((long)(PTR_DAT_04bc4700 + 8) + (ulong)*(uint *)(param_1 + 0xc) * 4);
  if (7 < *(uint *)(param_1 + 0xc)) {
    piVar2 = (int *)(PTR_DAT_04bc4700 + 8);
  }
  do {
    if (*(int *)(PTR_DAT_04bbbf90 + lVar10 * 4 + 8) == *piVar2) {
LAB_02b246ec:
      puVar11 = PTR_DAT_04bbbf90 + lVar10 * 4;
LAB_02b246f4:
      local_68 = PTR_DAT_04bbfe68 + 0x10;
      uStack_5c = *(undefined4 *)(puVar11 + 8);
      local_60 = (undefined4)lVar10;
      local_58 = FUN_017baf44();
      local_58 = local_58 & 1;
      local_38 = 0xd55;
      FUN_0277d4ac(&local_38);
      puVar7 = PTR_DAT_04bc0510;
      puVar6 = PTR_DAT_04bb43c0;
      local_70 = 0;
      puVar11 = PTR_DAT_04bc0510 + 0x10;
      local_78 = (undefined4)local_38;
      uStack_74 = local_38._4_4_;
      lVar10 = *(long *)PTR_DAT_04bb43c0;
      local_80 = puVar11;
      uVar8 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar6 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(&local_38);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8), lVar10 != 0)) {
            local_70 = lVar10;
          }
        }
      }
      local_88 = 0x598;
      FUN_0277d4ac(&local_88);
      puVar5 = PTR_DAT_04bb39d8;
      puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar3 = puVar9[3];
      uVar8 = *puVar9 ^ *puVar9 << 0xb;
      *puVar9 = puVar9[1];
      puVar9[1] = puVar9[2];
      puVar9[2] = uVar3;
      puVar9[3] = uVar8 >> 8 ^ uVar3 >> 0x13 ^ uVar8 ^ uVar3;
      FUN_01a4c66c(&local_98,&local_88);
      FUN_01b0a294(&local_80,&local_88);
      FUN_01afade0(&local_80,0);
      puVar4 = PTR_DAT_04bb2010;
      local_88 = CONCAT44(uStack_74,local_78);
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      uStack_90 = 0x1c0000001c;
      local_98 = puVar1;
      FUN_01a50970(&local_68,0,&local_88,&local_98);
      local_38 = 0xd55;
      FUN_0277d4ac(&local_38);
      lVar10 = *(long *)puVar6;
      local_70 = 0;
      local_78 = (undefined4)local_38;
      uStack_74 = local_38._4_4_;
      local_80 = puVar11;
      uVar8 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar6 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(&local_38);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8), lVar10 != 0)) {
            local_70 = lVar10;
          }
        }
      }
      local_88 = 0xe71;
      FUN_0277d4ac(&local_88);
      puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar5);
      uVar3 = puVar9[3];
      uVar8 = *puVar9 ^ *puVar9 << 0xb;
      *puVar9 = puVar9[1];
      puVar9[1] = puVar9[2];
      puVar9[2] = uVar3;
      puVar9[3] = uVar8 >> 8 ^ uVar3 >> 0x13 ^ uVar8 ^ uVar3;
      FUN_01a4c66c(&local_98,&local_88);
      FUN_01b0a294(&local_80,&local_88);
      FUN_01afade0(&local_80,0);
      local_88 = CONCAT44(uStack_74,local_78);
      uStack_90 = 0x1c0000001e;
      local_98 = puVar1;
      FUN_01a50970(&local_68,0,&local_88,&local_98);
      local_38 = 0xff1;
      FUN_0277d4ac(&local_38);
      puVar9 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar5);
      uVar3 = puVar9[3];
      uVar8 = *puVar9 ^ *puVar9 << 0xb;
      *puVar9 = puVar9[1];
      puVar9[1] = puVar9[2];
      puVar9[2] = uVar3;
      puVar9[3] = uVar8 >> 8 ^ uVar3 >> 0x13 ^ uVar8 ^ uVar3;
      FUN_01a4c66c(&local_80,&local_38);
      local_80 = puVar7 + 0x10;
      lVar10 = *(long *)puVar6;
      local_70 = 0;
      local_78 = (undefined4)local_38;
      uStack_74 = local_38._4_4_;
      uVar8 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar6 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(&local_38);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8), lVar10 != 0)) {
            local_70 = lVar10;
          }
        }
      }
      FUN_01afade0(&local_80,3);
      local_88 = CONCAT44(uStack_74,local_78);
      local_98 = puVar4 + 0x10;
      uStack_90 = 0x1c00000022;
      FUN_01a50970(&local_68,0,&local_88,&local_98);
      return;
    }
    if (0x37 < (uint)lVar10) {
      lVar10 = 0;
      puVar11 = PTR_DAT_04bbbf90;
      goto LAB_02b246f4;
    }
    if (*(int *)(PTR_DAT_04bbbf90 + lVar10 * 4 + 0xc) == *piVar2) {
      lVar10 = lVar10 + 1;
      goto LAB_02b246ec;
    }
    lVar10 = lVar10 + 2;
  } while( true );
}


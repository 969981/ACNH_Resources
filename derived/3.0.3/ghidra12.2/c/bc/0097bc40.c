
uint FUN_0097bc40(uint param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *local_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  long local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined *local_68;
  uint local_60;
  undefined4 uStack_5c;
  byte local_58;
  
  if ((ulong)param_1 == 0) {
    return 0;
  }
  puVar1 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + (ulong)param_1 * 4);
  if (0x38 < param_1) {
    puVar1 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
  }
  uStack_5c = *puVar1;
  local_60 = param_1;
  local_58 = FUN_017baf44(uStack_5c);
  local_58 = local_58 & 1;
  local_68 = PTR_DAT_04bb5438 + 0x10;
  local_78 = &DAT_048f9750;
  uStack_70 = 0;
  puVar8 = (undefined2 *)FUN_01a5190c(&local_68,0,param_2,&local_78);
  puVar6 = PTR_DAT_04bb43c0;
  uVar5 = *puVar8;
  uVar3 = *(undefined1 *)(puVar8 + 1);
  uVar4 = *(undefined1 *)((long)puVar8 + 3);
  uVar2 = *(undefined4 *)(puVar8 + 2);
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  local_80 = uVar5;
  local_7e = uVar3;
  local_7d = uVar4;
  local_7c = uVar2;
  uVar7 = FUN_0277d6c4(&local_80);
  lVar10 = *(long *)puVar6;
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_98 = PTR_DAT_04bc0510 + 0x10;
      local_88 = 0;
      local_90 = uVar5;
      local_8e = uVar3;
      local_8d = uVar4;
      local_8c = uVar2;
      uVar7 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar6 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_80);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8), lVar10 != 0)) {
            local_88 = lVar10;
          }
        }
      }
      uVar9 = FUN_01ae59b0(&local_98);
      if ((uVar9 & 1) != 0) {
        uVar7 = FUN_0097b580(&local_80,&local_78,param_2,0);
        goto LAB_0097be04;
      }
    }
  }
  uVar7 = 0;
LAB_0097be04:
  return uVar7 & 1;
}


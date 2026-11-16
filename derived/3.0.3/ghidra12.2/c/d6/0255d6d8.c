
undefined8 FUN_0255d6d8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined2 *puVar9;
  long lVar10;
  undefined *local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  long local_58;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  lVar7 = FUN_0255d054(4,param_1);
  puVar5 = PTR_DAT_04bb43c0;
  if (lVar7 == 0) {
    puVar9 = &DAT_05586008;
  }
  else {
    puVar9 = (undefined2 *)(lVar7 + ((ulong)*(uint *)(lVar7 + 0x10) & 1) * 0x20 + 0x14);
  }
  uVar4 = *puVar9;
  uVar2 = *(undefined1 *)(puVar9 + 1);
  uVar3 = *(undefined1 *)((long)puVar9 + 3);
  uVar1 = *(undefined4 *)(puVar9 + 2);
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  local_38 = uVar4;
  local_36 = uVar2;
  local_35 = uVar3;
  local_34 = uVar1;
  uVar6 = FUN_0277d6c4(&local_38);
  lVar7 = *(long *)puVar5;
  if (lVar7 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_68 = PTR_DAT_04bc0510 + 0x10;
      local_58 = 0;
      local_60 = uVar4;
      local_5e = uVar2;
      local_5d = uVar3;
      local_5c = uVar1;
      uVar6 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar5 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_38);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8), lVar7 != 0)) {
            local_58 = lVar7;
          }
        }
      }
      uVar8 = FUN_01adc790(&local_68);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


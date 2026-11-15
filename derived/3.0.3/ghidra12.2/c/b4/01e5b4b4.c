
undefined8 FUN_01e5b4b4(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  uint local_24;
  
  local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
  local_24 = 0;
  FUN_01e5a930(0x40000000,param_1,0x10,PTR_DAT_04bb2150,&local_58,&local_24,&DAT_04178e00,6);
  uVar4 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar2 = PTR_DAT_04bb37e0[2];
  uVar3 = PTR_DAT_04bb37e0[3];
  uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined2 *)(param_1 + 0x5d8) = uVar4;
  *(undefined1 *)(param_1 + 0x5da) = uVar2;
  *(undefined1 *)(param_1 + 0x5db) = uVar3;
  *(undefined4 *)(param_1 + 0x5dc) = uVar1;
  *(undefined2 *)(param_1 + 0x5e0) = uVar4;
  *(undefined1 *)(param_1 + 0x5e2) = uVar2;
  *(undefined1 *)(param_1 + 0x5e3) = uVar3;
  *(undefined4 *)(param_1 + 0x5e4) = uVar1;
  *(undefined2 *)(param_1 + 0x5e8) = uVar4;
  *(undefined1 *)(param_1 + 0x5ea) = uVar2;
  *(undefined1 *)(param_1 + 0x5eb) = uVar3;
  puVar5 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  *(undefined4 *)(param_1 + 0x5ec) = uVar1;
  *(undefined1 *)(param_1 + 0x5f0) = 0;
  uVar6 = FUN_0277d6c4(param_2);
  lVar8 = *(long *)puVar5;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_2;
      uStack_4c = param_2[1];
      local_58 = PTR_DAT_04bc0510 + 0x10;
      uVar6 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar5 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(param_2);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if (uVar6 < *(uint *)(lVar8 + 0x1d8)) {
            lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8);
            if (lVar8 != 0) {
              local_48 = lVar8;
            }
          }
        }
      }
      iVar7 = FUN_01ae1100(&local_58);
      if (iVar7 == 1) {
        *(undefined2 *)(param_1 + 0x5e0) = *(undefined2 *)param_2;
        *(undefined1 *)(param_1 + 0x5e2) = *(undefined1 *)((long)param_2 + 2);
        *(undefined1 *)(param_1 + 0x5e3) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(param_1 + 0x5e4) = param_2[1];
        local_24 = 1;
      }
      else if (iVar7 == 2) {
        *(undefined2 *)(param_1 + 0x5e8) = *(undefined2 *)param_2;
        *(undefined1 *)(param_1 + 0x5ea) = *(undefined1 *)((long)param_2 + 2);
        *(undefined1 *)(param_1 + 0x5eb) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(param_1 + 0x5ec) = param_2[1];
        local_24 = 2;
      }
      else {
        if (iVar7 != 5) {
          return 1;
        }
        local_24 = 0;
        *(undefined2 *)(param_1 + 0x5d8) = *(undefined2 *)param_2;
        *(undefined1 *)(param_1 + 0x5da) = *(undefined1 *)((long)param_2 + 2);
        *(undefined1 *)(param_1 + 0x5db) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(param_1 + 0x5dc) = param_2[1];
      }
      *(byte *)(param_1 + 0x5f0) = *(byte *)(param_1 + 0x5f0) | (byte)(1 << (ulong)local_24);
    }
  }
  return 1;
}



undefined8 FUN_01e5ba60(long param_1,short *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_58;
  short local_50;
  short local_4e;
  undefined4 local_4c;
  long local_48;
  int local_24;
  
  puVar5 = PTR_DAT_04bb43c0;
  local_24 = *param_3;
  lVar7 = *(long *)(param_1 + 0x358);
  lVar9 = *(long *)(lVar7 + 0x690);
  if (*param_2 != -2) {
    local_4e = param_2[1];
    local_48 = 0;
    local_4c = *(undefined4 *)(param_2 + 2);
    local_58 = PTR_DAT_04bc0510 + 0x10;
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    local_50 = *param_2;
    uVar6 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar5 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar7 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_2);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if (uVar6 < *(uint *)(lVar7 + 0x1d8)) {
          lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar7 != 0) {
            local_48 = lVar7;
          }
        }
      }
    }
    local_24 = FUN_01ae1100(&local_58);
    lVar7 = *(long *)(param_1 + 0x358);
  }
  uVar8 = FUN_01e3e21c(lVar7);
  puVar5 = PTR_DAT_04bb37e0;
  if ((uVar8 & 1) == 0) {
    if (*(uint *)(param_1 + 0x5f4) != (uint)*(byte *)(param_1 + 0x59c)) {
      *(undefined1 *)(param_1 + 0x5f0) = 0;
      *(uint *)(param_1 + 0x5f4) = (uint)*(byte *)(param_1 + 0x59c);
      uVar4 = *(undefined2 *)puVar5;
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      uVar1 = *(undefined4 *)(puVar5 + 4);
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
      *(undefined4 *)(param_1 + 0x5ec) = uVar1;
    }
    FUN_01e3f41c(*(undefined8 *)(param_1 + 0x358));
    if ((lVar9 != 0) &&
       ((byte)(*(byte *)(lVar9 + 8) >> 6 | (*(byte *)(lVar9 + 9) & 0xf) << 2) == 0x10)) {
      if (local_24 == 1) {
        *(short *)(param_1 + 0x5e0) = *param_2;
        *(char *)(param_1 + 0x5e2) = (char)param_2[1];
        *(undefined1 *)(param_1 + 0x5e3) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(param_1 + 0x5e4) = *(undefined4 *)(param_2 + 2);
        local_58._0_4_ = 1;
      }
      else if (local_24 == 2) {
        *(short *)(param_1 + 0x5e8) = *param_2;
        *(char *)(param_1 + 0x5ea) = (char)param_2[1];
        *(undefined1 *)(param_1 + 0x5eb) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(param_1 + 0x5ec) = *(undefined4 *)(param_2 + 2);
        local_58._0_4_ = 2;
      }
      else {
        if (local_24 != 5) {
          return 1;
        }
        local_58._0_4_ = 0;
        *(short *)(param_1 + 0x5d8) = *param_2;
        *(char *)(param_1 + 0x5da) = (char)param_2[1];
        *(undefined1 *)(param_1 + 0x5db) = *(undefined1 *)((long)param_2 + 3);
        *(undefined4 *)(param_1 + 0x5dc) = *(undefined4 *)(param_2 + 2);
      }
      *(byte *)(param_1 + 0x5f0) = *(byte *)(param_1 + 0x5f0) | (byte)(1 << (ulong)(uint)local_58);
    }
  }
  return 1;
}


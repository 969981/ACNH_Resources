
undefined8 FUN_02327ff8(long param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  undefined *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  long local_68;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 local_54;
  
  puVar6 = PTR_DAT_04bb43c0;
  if ((*(long *)(param_1 + 0x298) == 0) ||
     (lVar10 = *(long *)(*(long *)(param_1 + 0x298) + 0xbde8), lVar10 == 0)) {
    return 0;
  }
  uVar5 = *(undefined2 *)(lVar10 + 0xd4);
  uVar3 = *(undefined1 *)(lVar10 + 0xd6);
  uVar4 = *(undefined1 *)(lVar10 + 0xd7);
  uVar2 = *(undefined4 *)(lVar10 + 0xd8);
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  local_5c = uVar5;
  local_5a = uVar3;
  local_59 = uVar4;
  local_58 = uVar2;
  uVar7 = FUN_0277d6c4(&local_5c);
  lVar10 = *(long *)puVar6;
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_68 = 0;
      local_70 = uVar5;
      local_6e = uVar3;
      local_6d = uVar4;
      local_6c = uVar2;
      uVar7 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar6 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_5c);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8), lVar10 != 0)) {
            local_68 = lVar10;
          }
        }
      }
      iVar8 = FUN_01ad78cc(&local_78);
      if (iVar8 != 7) {
        if (DAT_04c487d4 != -1) {
          local_54 = 0x1e;
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar1 >> 0x1e & 1) != 0) {
            return 0;
          }
        }
        lVar11 = *(long *)(param_1 + 0x68);
        lVar10 = lVar11 + 0x284;
        uVar9 = FUN_016ec07c(0,lVar10,7);
        if (((uVar9 & 1) != 0) &&
           (fVar12 = (float)FUN_016e37dc(lVar10), *(float *)(lVar11 + 0x288) <= fVar12)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


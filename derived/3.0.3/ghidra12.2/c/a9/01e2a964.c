
void FUN_01e2a964(long param_1,ulong param_2,uint *param_3)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  undefined *puVar5;
  ushort uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  undefined4 local_54 [3];
  undefined8 local_48;
  undefined6 uStack_40;
  undefined2 local_3a;
  undefined6 uStack_38;
  
  puVar5 = PTR_DAT_04bb27d0;
  uVar7 = *param_3;
  if (uVar7 == 0xffffffff) {
    return;
  }
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    uVar6 = (ushort)(1 << (ulong)(uVar7 & 0x1f));
    if ((param_2 & 1) == 0) {
      uVar6 = *(ushort *)(param_1 + 0x74) & (uVar6 ^ 0xffff);
    }
    else {
      uVar6 = *(ushort *)(param_1 + 0x74) | uVar6;
    }
    *(ushort *)(param_1 + 0x74) = uVar6;
    return;
  }
  param_1 = param_1 + 0x78;
  lVar9 = param_1 + (ulong)uVar7 * 0x28;
  if (9 < uVar7) {
    lVar9 = param_1;
  }
  local_48 = *(ulong *)(lVar9 + 8);
  uStack_40 = (undefined6)*(undefined8 *)(lVar9 + 0x10);
  local_3a = (undefined2)*(undefined8 *)(lVar9 + 0x16);
  uStack_38 = (undefined6)((ulong)*(undefined8 *)(lVar9 + 0x16) >> 0x10);
  if (DAT_04c487d4 != -1) {
    local_54[0] = 0;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 & 1) != 0) {
      FUN_02507c6c(local_54,7,1,1,0);
      bVar2 = local_48._1_1_ & 0xfc;
      local_48._0_2_ = CONCAT11(bVar2 | (byte)local_54[0] < 8,(undefined1)local_48);
      uVar4 = local_48;
      goto joined_r0x01e2aa7c;
    }
  }
  local_48 = local_48 & 0xfffffffffffffcff;
  uVar4 = local_48;
joined_r0x01e2aa7c:
  if ((param_2 & 1) == 0) {
    uVar7 = 0xff;
  }
  else {
    lVar9 = **(long **)puVar5;
    bVar2 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bc1220;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x473);
      }
    }
    uVar7 = (uint)*pbVar8;
  }
  local_48._3_1_ = (byte)(uVar4 >> 0x18);
  bVar2 = local_48._3_1_ & 0x3f;
  local_48._4_1_ = (byte)(uVar4 >> 0x20);
  bVar3 = local_48._4_1_ & 0xc0;
  local_48._5_3_ = (undefined3)(uVar4 >> 0x28);
  local_48._0_5_ =
       CONCAT14(bVar3 | (byte)(uVar7 >> 2),CONCAT13(bVar2 | (byte)(uVar7 << 6),(int3)uVar4));
  lVar9 = param_1 + (ulong)*param_3 * 0x28;
  if (9 < *param_3) {
    lVar9 = param_1;
  }
  if ((*(long *)(lVar9 + 8) != local_48 || *(long *)(lVar9 + 0x10) != CONCAT26(local_3a,uStack_40))
      || *(long *)(lVar9 + 0x16) != CONCAT62(uStack_38,local_3a)) {
    *(long *)(lVar9 + 8) = local_48;
    *(ulong *)(lVar9 + 0x10) = CONCAT26(local_3a,uStack_40);
    *(ulong *)(lVar9 + 0x16) = CONCAT62(uStack_38,local_3a);
    *(undefined1 *)(lVar9 + 0x1e) = 1;
  }
  return;
}


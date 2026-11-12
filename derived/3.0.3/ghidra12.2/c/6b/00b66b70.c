
uint FUN_00b66b70(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [31];
  undefined1 local_155;
  undefined8 local_150;
  byte *local_148;
  undefined4 local_140;
  byte local_13c [31];
  undefined1 local_11d;
  undefined1 local_3d;
  uint local_38;
  char local_34;
  
  puVar2 = (ulong *)(**(code **)(*param_1 + 0xf0))();
  local_155 = 0;
  local_174[0] = 0;
  local_178 = 0x20;
  local_180 = local_174;
  local_140 = 0x100;
  local_148 = local_13c;
  local_3d = 0;
  local_188 = PTR_DAT_04bb3000 + 0x10;
  local_13c[0] = 0;
  local_150 = &PTR_LAB_048fda60;
  (**(code **)(*param_1 + 0x58))(param_1,&local_150);
  (*(code *)local_150[3])(&local_150);
  bVar1 = *local_148;
  if (bVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffff;
    pbVar7 = local_148;
    do {
      pbVar7 = pbVar7 + 1;
      uVar6 = crc32b(uVar6,(uint)bVar1,0x4c11db7);
      bVar1 = *pbVar7;
    } while (bVar1 != 0);
    uVar6 = ~uVar6;
  }
  FUN_038d1270(&local_188,&DAT_04074ae0,uVar6);
  (**(code **)(local_188 + 0x18))(&local_188);
  local_150 = (undefined **)((ulong)local_150 & 0xffffff0000000000);
  uVar3 = FUN_03ea9450(param_2,&local_150,local_180);
  if (((uVar3 & 1) != 0) && (local_150._4_1_ != -1)) {
    uVar3 = (ulong)local_150 & 0xffffffff;
    if (local_150._4_1_ == -0x2f) {
      *puVar2 = (ulong)((uint)local_150 & ((int)(uint)local_150 >> 0x1f ^ 0xffffffffU));
      if (-1 < (int)(uint)local_150) {
        return 1;
      }
    }
    else {
      if (local_150._4_1_ == -0x2d) {
LAB_00b66db8:
        *puVar2 = uVar3;
        return 1;
      }
      uVar4 = *(ulong *)((long)*param_2 + uVar3);
      uVar3 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      if (*(short *)*param_2 != 0x5942) {
        uVar3 = uVar4;
      }
      if (local_150._4_1_ == -0x2b) goto LAB_00b66db8;
      if ((local_150._4_1_ == -0x2c) &&
         (*puVar2 = uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU), -1 < (long)uVar3)) {
        return 1;
      }
    }
  }
  puVar2 = (ulong *)(**(code **)(*param_1 + 0xf0))(param_1);
  local_11d = 0;
  local_140 = 0x20;
  local_148 = local_13c;
  local_13c[0] = 0;
  local_150 = (undefined **)(PTR_DAT_04bb3008 + 0x10);
  pbVar7 = (byte *)param_1[1];
  bVar1 = *pbVar7;
  if (bVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0xffffffff;
    do {
      pbVar7 = pbVar7 + 1;
      uVar6 = crc32b(uVar6,(uint)bVar1,0x4c11db7);
      bVar1 = *pbVar7;
    } while (bVar1 != 0);
    uVar6 = ~uVar6;
  }
  FUN_038d1270(&local_150,&DAT_04074ae0,uVar6);
  (**(code **)((long)local_150 + 0x18))(&local_150);
  local_38 = 0;
  local_34 = '\0';
  uVar3 = FUN_03ea9450(param_2,&local_38,local_148);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (local_34 == -1) {
    return 0;
  }
  uVar3 = (ulong)local_38;
  if (local_34 != -0x2d) {
    if (local_34 == -0x2f) {
      uVar3 = (ulong)(local_38 & ((int)local_38 >> 0x1f ^ 0xffffffffU));
      uVar6 = ~local_38 >> 0x1f;
      goto LAB_00b66e18;
    }
    uVar5 = *(ulong *)((long)*param_2 + (ulong)local_38);
    uVar3 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
    if (*(short *)*param_2 != 0x5942) {
      uVar4 = uVar5;
    }
    uVar3 = uVar4;
    if (local_34 != -0x2b) {
      if (local_34 != -0x2c) {
        return 0;
      }
      uVar3 = uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU);
      uVar6 = (uint)(uVar4 >> 0x3f) ^ 1;
      goto LAB_00b66e18;
    }
  }
  uVar6 = 1;
LAB_00b66e18:
  *puVar2 = uVar3;
  return uVar6;
}



void FUN_01f72264(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined *local_1e8;
  undefined1 *puStack_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4 [127];
  undefined1 local_155;
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [127];
  undefined1 local_7d;
  undefined4 local_78;
  ushort local_74;
  undefined8 local_70;
  
  if ((param_3 & 1) == 0) {
    lVar5 = param_1[1];
  }
  else {
    (**(code **)(*param_1 + 0x400))(param_1);
    lVar5 = param_1[1];
    uVar6 = *(ushort *)((long)param_1 + 0xaf64);
    if (*(int *)(lVar5 + 0x750) != 3) {
      uVar6 = uVar6 | 0x100;
      *(undefined4 *)((long)param_1 + 0xaf84) = 0xf;
    }
    *(ushort *)((long)param_1 + 0xaf64) = uVar6 | 0x80;
  }
  puVar1 = PTR_DAT_04bb2d88;
  local_208 = 0;
  local_218 = 0xffffffff00000000;
  uStack_210 = 0;
  local_204 = 0x3f800000;
  puStack_1e0 = local_1d4;
  local_1d8 = 0x80;
  local_155 = 0;
  local_1d4[0] = 0;
  local_1e8 = PTR_DAT_04bb2d88 + 0x10;
  local_148 = 0;
  local_14b = 0;
  local_1fc = 0;
  local_1f4 = 0;
  local_150 = 7;
  local_14c = *(undefined1 *)(lVar5 + 0x224);
  iVar2 = *(int *)(lVar5 + 0x500);
  if (iVar2 == 2) {
    lVar5 = *(long *)(lVar5 + 0x60);
    if (lVar5 != 0) {
      local_140 = (ulong)local_140._4_4_ << 0x20;
      FUN_0234cc20(lVar5,param_2 + 8,&local_140);
      local_140 = local_140 & 0xffffffff00000000;
      FUN_0234cf54(lVar5,param_2 + 0x10,&local_140);
      puVar1 = puVar1 + 0x10;
      local_140 = 0xffffffff00000000;
      uStack_138 = 0;
      local_12c = 0x3f800000;
      puStack_108 = local_fc;
      local_21c = 0;
      local_130 = 0;
      local_100 = 0x80;
      local_7d = 0;
      local_fc[0] = 0;
      local_78 = 7;
      local_70 = 0;
      local_74 = 0;
      local_124 = 0;
      local_11c = 0;
      local_110 = puVar1;
      FUN_017327f0(*(undefined8 *)(lVar5 + 0xbe08),param_2 + 0x38,&local_21c,&local_140,0xffffffff);
      local_140 = local_140 & 0xffffffff00000000;
      FUN_0234c8a4(lVar5,param_2,&local_140);
      local_21c = 0;
      local_12c = 0x3f800000;
      local_130 = 0;
      local_140 = 0xffffffff00000000;
      uStack_138 = 0;
      local_100 = 0x80;
      local_7d = 0;
      local_fc[0] = 0;
      local_78 = 7;
      local_70 = 0;
      local_74 = 0;
      local_124 = 0;
      local_11c = 0;
      local_110 = puVar1;
      puStack_108 = local_fc;
      FUN_017327f0(*(undefined8 *)(lVar5 + 0xbe00),param_2 + 0x30,&local_21c,&local_140,0xffffffff);
      local_21c = 0;
      local_140 = 0xffffffff00000000;
      uStack_138 = 0;
      local_12c = 0x3f800000;
      local_130 = 0;
      local_100 = 0x80;
      local_7d = 0;
      local_fc[0] = 0;
      local_78 = 7;
      local_70 = 0;
      local_74 = 0;
      local_124 = 0;
      local_11c = 0;
      local_110 = puVar1;
      puStack_108 = local_fc;
      FUN_017327f0(*(undefined8 *)(lVar5 + 0xbdf8),param_2 + 0x28,&local_21c,&local_140,0xffffffff);
      puVar3 = PTR_DAT_04bb43c0;
      lVar7 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(param_2 + 0x40);
      if (*(long *)puVar3 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_140 = local_140 & 0xffffffff00000000;
          FUN_0234d258(lVar5,param_2 + 0x40,&local_140);
          *(undefined2 *)(lVar5 + 0xc20c) = *(undefined2 *)(param_2 + 0x18);
          *(undefined1 *)(lVar5 + 0xc20e) = *(undefined1 *)(param_2 + 0x1a);
          *(undefined1 *)(lVar5 + 0xc20f) = *(undefined1 *)(param_2 + 0x1b);
          *(undefined4 *)(lVar5 + 0xc210) = *(undefined4 *)(param_2 + 0x1c);
          *(undefined2 *)(lVar5 + 0xc214) = *(undefined2 *)(param_2 + 0x20);
          *(undefined1 *)(lVar5 + 0xc216) = *(undefined1 *)(param_2 + 0x22);
          *(undefined1 *)(lVar5 + 0xc217) = *(undefined1 *)(param_2 + 0x23);
          *(undefined4 *)(lVar5 + 0xc218) = *(undefined4 *)(param_2 + 0x24);
          return;
        }
      }
      local_140 = 0xffffffff00000000;
      uStack_138 = 0;
      local_12c = 0x3f800000;
      local_100 = 0x80;
      local_21c = 0;
      local_130 = 0;
      local_7d = 0;
      local_fc[0] = 0;
      local_78 = 7;
      local_70 = 0;
      local_74 = 0;
      local_124 = 0;
      local_11c = 0;
      local_110 = puVar1;
      puStack_108 = local_fc;
      FUN_017327f0(*(undefined8 *)(lVar5 + 0xbdf0),param_2 + 0x20,&local_21c,&local_140,0xffffffff);
      local_140 = local_140 & 0xffffffff00000000;
      FUN_0234d258(lVar5,param_2 + 0x18,&local_140);
    }
  }
  else if (iVar2 == 1) {
    lVar5 = *(long *)(lVar5 + 0x60);
    if (lVar5 != 0) {
      local_140 = (ulong)local_140._4_4_ << 0x20;
      FUN_02017350(lVar5,param_2 + 8,&local_140);
      local_140 = local_140 & 0xffffffff00000000;
      FUN_02016ab0(lVar5,param_2,&local_140);
      local_140 = local_140 & 0xffffffff00000000;
      FUN_02015670(lVar5,param_2 + 0x18,&local_140);
      local_7d = 0;
      local_140 = 0xffffffff00000000;
      uStack_138 = 0;
      local_12c = 0x3f800000;
      puStack_108 = local_fc;
      local_100 = 0x80;
      local_110 = puVar1 + 0x10;
      local_70 = 0;
      local_21c = 0;
      local_130 = 0;
      local_fc[0] = 0;
      local_124 = 0;
      local_11c = 0;
      local_78 = 7;
      local_74 = (ushort)*(byte *)(*(long *)(lVar5 + 0x48) + 0x224);
      *(undefined2 *)(lVar5 + 0x60e4) = *(undefined2 *)(param_2 + 0x30);
      *(undefined1 *)(lVar5 + 0x60e6) = *(undefined1 *)(param_2 + 0x32);
      *(undefined1 *)(lVar5 + 0x60e7) = *(undefined1 *)(param_2 + 0x33);
      *(undefined4 *)(lVar5 + 0x60e8) = *(undefined4 *)(param_2 + 0x34);
      FUN_017327f0(*(undefined8 *)(lVar5 + 0x60b8),(undefined2 *)(param_2 + 0x30),&local_21c,
                   &local_140,0xffffffff);
      local_140 = local_140 & 0xffffffff00000000;
      FUN_02015a90(lVar5,param_2 + 0x20,&local_140);
    }
  }
  else if ((iVar2 == 0) && (lVar5 = *(long *)(lVar5 + 0x60), lVar5 != 0)) {
    local_140 = (ulong)local_140._4_4_ << 0x20;
    FUN_02017350(lVar5,param_2 + 8,&local_140);
    local_140 = local_140 & 0xffffffff00000000;
    FUN_02016ab0(lVar5,param_2,&local_140);
    local_140 = local_140 & 0xffffffff00000000;
    FUN_02015670(lVar5,param_2 + 0x18,&local_140);
  }
  return;
}


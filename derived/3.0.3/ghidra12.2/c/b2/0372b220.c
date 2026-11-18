
void FUN_0372b220(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_144;
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
  undefined2 local_74;
  undefined8 local_70;
  
  puVar1 = PTR_DAT_04bb27c0;
  if ((int)param_1 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (param_1 >> 0x14 & 0xfff) * 8);
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     ((int)plVar8[0x46] != (int)param_1)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar3 = (**(code **)(*plVar6 + 0x60))();
    if (iVar3 < 0x11) {
      uVar5 = 1;
      goto joined_r0x0372b2e4;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0372b2e4;
    }
  }
  uVar5 = 0;
joined_r0x0372b2e4:
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    if (((uVar5 & uVar4) == 1) && (lVar7 = plVar8[0x53], lVar7 != 0)) {
      local_140 = (ulong)local_140._4_4_ << 0x20;
      FUN_0234cc20(lVar7,param_2 + 8,&local_140);
      local_140 = local_140 & 0xffffffff00000000;
      FUN_0234cf54(lVar7,param_2 + 0x10,&local_140);
      local_144 = 0;
      local_130 = 0;
      local_140 = 0xffffffff00000000;
      uStack_138 = 0;
      puStack_108 = local_fc;
      local_12c = 0x3f800000;
      local_100 = 0x80;
      local_7d = 0;
      local_fc[0] = 0;
      puVar1 = PTR_DAT_04bb2d88 + 0x10;
      local_78 = 7;
      local_70 = 0;
      local_74 = 0;
      local_124 = 0;
      local_11c = 0;
      local_110 = puVar1;
      FUN_017327f0(*(undefined8 *)(lVar7 + 0xbe08),param_2 + 0x38,&local_144,&local_140,0xffffffff);
      local_140 = local_140 & 0xffffffff00000000;
      FUN_0234c8a4(lVar7,param_2,&local_140);
      local_144 = 0;
      local_130 = 0;
      local_140 = 0xffffffff00000000;
      uStack_138 = 0;
      local_12c = 0x3f800000;
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
      FUN_017327f0(*(undefined8 *)(lVar7 + 0xbe00),param_2 + 0x30,&local_144,&local_140,0xffffffff);
      local_100 = 0x80;
      local_144 = 0;
      local_130 = 0;
      local_140 = 0xffffffff00000000;
      uStack_138 = 0;
      local_12c = 0x3f800000;
      local_7d = 0;
      local_fc[0] = 0;
      local_78 = 7;
      local_70 = 0;
      local_74 = 0;
      local_124 = 0;
      local_11c = 0;
      local_110 = puVar1;
      puStack_108 = local_fc;
      FUN_017327f0(*(undefined8 *)(lVar7 + 0xbdf8),param_2 + 0x28,&local_144,&local_140,0xffffffff);
      puVar2 = PTR_DAT_04bb43c0;
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(param_2 + 0x40);
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          local_140 = local_140 & 0xffffffff00000000;
          FUN_0234d258(lVar7,param_2 + 0x40,&local_140);
          *(undefined2 *)(lVar7 + 0xc20c) = *(undefined2 *)(param_2 + 0x18);
          *(undefined1 *)(lVar7 + 0xc20e) = *(undefined1 *)(param_2 + 0x1a);
          *(undefined1 *)(lVar7 + 0xc20f) = *(undefined1 *)(param_2 + 0x1b);
          *(undefined4 *)(lVar7 + 0xc210) = *(undefined4 *)(param_2 + 0x1c);
          *(undefined2 *)(lVar7 + 0xc214) = *(undefined2 *)(param_2 + 0x20);
          *(undefined1 *)(lVar7 + 0xc216) = *(undefined1 *)(param_2 + 0x22);
          *(undefined1 *)(lVar7 + 0xc217) = *(undefined1 *)(param_2 + 0x23);
          *(undefined4 *)(lVar7 + 0xc218) = *(undefined4 *)(param_2 + 0x24);
          return;
        }
      }
      local_140 = 0xffffffff00000000;
      uStack_138 = 0;
      local_12c = 0x3f800000;
      local_100 = 0x80;
      local_144 = 0;
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
      FUN_017327f0(*(undefined8 *)(lVar7 + 0xbdf0),param_2 + 0x20,&local_144,&local_140,0xffffffff);
      local_140 = local_140 & 0xffffffff00000000;
      FUN_0234d258(lVar7,param_2 + 0x18,&local_140);
    }
  }
  return;
}


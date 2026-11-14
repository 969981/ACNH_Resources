
void FUN_016add94(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 local_144;
  ulong local_140;
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
  
  local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(param_1 + 0x174));
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 != 0) {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) {
        return;
      }
      lVar6 = lVar6 + 0x70;
    }
    else {
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar7[0x26] == (long *)0x0) {
        return;
      }
      lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      if (lVar6 == 0) {
        return;
      }
    }
    lVar6 = lVar6 + (long)(int)local_140 * 0x18b8;
    if ((*(long **)(lVar6 + 0x271d00) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x271d00), puVar7 == (undefined8 *)0x0)) {
      uVar2 = 1;
      plVar8 = *(long **)(param_1 + 0x60);
    }
    else {
      uVar2 = (**(code **)*puVar7)();
      uVar2 = uVar2 ^ 1;
      plVar8 = *(long **)(param_1 + 0x60);
    }
    if (plVar8 != (long *)0x0) {
      if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37a0);
      }
      uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb3798);
      if ((uVar4 & 1) != 0) {
        uVar5 = FUN_026e85f0(*(long *)(lVar6 + 0x271ce8) + *(long *)(lVar6 + 0x271ce0));
        local_140 = local_140 & 0xffffffff00000000;
        FUN_0234c8a4(plVar8,uVar5,&local_140);
        uVar5 = FUN_026e88f0(*(long *)(lVar6 + 0x271ce8) + *(long *)(lVar6 + 0x271ce0));
        local_140 = local_140 & 0xffffffff00000000;
        FUN_0234cc20(plVar8,uVar5,&local_140);
        uVar5 = FUN_026e8b00(*(long *)(lVar6 + 0x271ce8) + *(long *)(lVar6 + 0x271ce0));
        local_140 = local_140 & 0xffffffff00000000;
        FUN_0234cf54(plVar8,uVar5,&local_140);
        uVar5 = FUN_026e8d10(*(long *)(lVar6 + 0x271ce8) + *(long *)(lVar6 + 0x271ce0));
        local_140 = local_140 & 0xffffffff00000000;
        FUN_0234d258(plVar8,uVar5,&local_140);
        uVar5 = FUN_026e9010(*(long *)(lVar6 + 0x271ce8) + *(long *)(lVar6 + 0x271ce0));
        local_144 = 0;
        local_130 = 0;
        local_140 = 0xffffffff00000000;
        uStack_138 = 0;
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
        puStack_108 = local_fc;
        FUN_017327f0(plVar8[0x17be],uVar5,&local_144,&local_140,0xffffffff);
        uVar5 = FUN_026e9240(*(long *)(lVar6 + 0x271ce8) + *(long *)(lVar6 + 0x271ce0));
        local_144 = 0;
        local_140 = 0xffffffff00000000;
        uStack_138 = 0;
        local_130 = 0;
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
        FUN_017327f0(plVar8[0x17bf],uVar5,&local_144,&local_140,0xffffffff);
        uVar5 = FUN_026e9470(*(long *)(lVar6 + 0x271ce8) + *(long *)(lVar6 + 0x271ce0));
        local_140 = 0xffffffff00000000;
        uStack_138 = 0;
        local_144 = 0;
        local_130 = 0;
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
        FUN_017327f0(plVar8[0x17c0],uVar5,&local_144,&local_140,0xffffffff);
        uVar5 = FUN_026e96a0(*(long *)(lVar6 + 0x271ce8) + *(long *)(lVar6 + 0x271ce0));
        local_144 = 0;
        local_140 = 0xffffffff00000000;
        uStack_138 = 0;
        local_130 = 0;
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
        FUN_017327f0(plVar8[0x17c1],uVar5,&local_144,&local_140,0xffffffff);
      }
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x271d00) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x271d00) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return;
}


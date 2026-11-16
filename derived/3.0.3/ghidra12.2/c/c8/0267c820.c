
uint FUN_0267c820(byte *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined **local_70;
  long lStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar4 = FUN_02583354(DAT_055021a0,local_34,1);
  puVar2 = PTR_DAT_04bb43c0;
  if (lVar4 == 0) {
    uVar3 = 0;
    goto LAB_0267ca04;
  }
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_3);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      FUN_02648c90(param_1,param_3,0);
    }
  }
  lVar9 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar9 = *(long *)(DAT_05574040 + 0x20);
    lVar4 = *(long *)(lVar9 + 0x178);
    if (lVar4 == 0) goto LAB_0267c940;
LAB_0267c8f4:
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar4 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar9 + 0x178) == 0) goto LAB_0267c978;
      plVar6 = *(long **)(*(long *)(lVar9 + 0x178) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_70 = *(undefined ***)(lVar9 + 0x158);
      lStack_68 = *(long *)(lVar9 + 0x160);
      local_60 = (undefined1 *)0x11944;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_70);
    }
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x19628);
    if (lVar4 != 0) goto LAB_0267c8f4;
LAB_0267c940:
    uVar5 = 0;
  }
LAB_0267c978:
  lVar4 = *(long *)(lVar9 + 0x158);
  lVar1 = *(long *)(lVar9 + 0x160);
  uVar7 = FUN_0277e9e0(param_3);
  if ((uVar7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    lStack_68 = lVar1 + lVar4;
    local_70 = &PTR_LAB_04a88408;
    uVar3 = *(uint *)(lStack_68 + 72000);
    local_60 = &LAB_02682440;
    uStack_58 = 0;
    if (8999 < uVar3) {
      uVar3 = 9000;
    }
    uVar3 = FUN_0277b494(param_2,param_3,uVar3,&local_70,1,param_4);
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + 0x178) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar9 + 0x178) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
LAB_0267ca04:
  return uVar3 & 1;
}


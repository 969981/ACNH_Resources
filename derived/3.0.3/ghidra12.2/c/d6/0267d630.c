
uint FUN_0267d630(byte *param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_24,1);
  puVar1 = PTR_DAT_04bb43c0;
  if (lVar3 == 0) {
    uVar2 = 0;
    goto LAB_0267d7b0;
  }
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      FUN_02648c90(param_1,param_2,0);
    }
  }
  lVar7 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar7 = *(long *)(DAT_05574040 + 0x20);
    lVar3 = *(long *)(lVar7 + 0x178);
    if (lVar3 == 0) goto LAB_0267d744;
LAB_0267d6f8:
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar3 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar7 + 0x178) == 0) goto LAB_0267d77c;
      plVar5 = *(long **)(*(long *)(lVar7 + 0x178) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar7 + 0x158);
      uStack_50 = *(undefined8 *)(lVar7 + 0x160);
      local_48 = 0x11944;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
    }
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x19628);
    if (lVar3 != 0) goto LAB_0267d6f8;
LAB_0267d744:
    uVar4 = 0;
  }
LAB_0267d77c:
  uVar2 = FUN_02801fa0(*(long *)(lVar7 + 0x160) + *(long *)(lVar7 + 0x158),param_2);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x178) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x178) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
LAB_0267d7b0:
  return uVar2 & 1;
}


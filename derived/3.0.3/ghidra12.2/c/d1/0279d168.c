
uint FUN_0279d168(byte *param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  byte local_4c [4];
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_4c[0] = *param_1;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_4c,1);
  if (lVar3 == 0) {
    uVar2 = 0;
    goto LAB_0279d2ac;
  }
  lVar8 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar1 = FUN_006bd550(param_2[1],0);
  local_48 = CONCAT44(local_48._4_4_,uVar1);
  uVar4 = FUN_01b1ee90(lVar8 + 0x1b80,&local_48);
  lVar8 = *(long *)(lVar3 + 0x18358);
  if (lVar8 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar3 + 0x18358) == 0) goto LAB_0279d274;
      plVar6 = *(long **)(*(long *)(lVar3 + 0x18358) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_48 = *(long *)(lVar3 + 0x18338);
      local_40 = *(undefined8 *)(lVar3 + 0x18340);
      uStack_38 = 0x62ac;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
  }
LAB_0279d274:
  uVar2 = FUN_0279d2d0(*(long *)(lVar3 + 0x18340) + *(long *)(lVar3 + 0x18338),uVar4,param_1);
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x18358) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x18358) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_0279d2ac:
  return uVar2 & 1;
}


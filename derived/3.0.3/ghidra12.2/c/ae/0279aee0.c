
void FUN_0279aee0(byte *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  byte local_6c [4];
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_6c[0] = *param_1;
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_6c,1);
  if (lVar3 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar3 + 0x18358);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar3 + 0x18358) == 0) goto LAB_0279afac;
      plVar5 = *(long **)(*(long *)(lVar3 + 0x18358) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_68 = *(long *)(lVar3 + 0x18338);
      local_60 = *(undefined8 *)(lVar3 + 0x18340);
      uStack_58 = 0x62ac;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
    }
  }
LAB_0279afac:
  lVar7 = *(long *)(lVar3 + 0x18338);
  lVar1 = *(long *)(lVar3 + 0x18340);
  lVar8 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar2 = FUN_006bd550(param_2[1],0);
  local_68 = CONCAT44(local_68._4_4_,uVar2);
  lVar8 = FUN_00ad5fc0(lVar8 + 0x1960,&local_68);
  if (lVar8 != 0) {
    FUN_027a3630(lVar1 + lVar7,param_1,param_2,param_3);
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x18358) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x18358) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}


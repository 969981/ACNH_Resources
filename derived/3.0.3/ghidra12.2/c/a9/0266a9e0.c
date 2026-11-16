
void FUN_0266a9e0(byte *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte bVar7;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  bVar7 = *param_1;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  local_48 = CONCAT71(local_48._1_7_,bVar7);
  lVar2 = FUN_02583354(DAT_055021a0,&local_48,1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar2 + 0x16250);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar2 + 0x16250) == 0) goto LAB_0266aa9c;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x16250) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(lVar2 + 0x16230);
      local_40 = *(undefined8 *)(lVar2 + 0x16238);
      uStack_38 = 2;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_0266aa9c:
  local_48 = CONCAT44(local_48._4_4_,param_2);
  puVar1 = (undefined1 *)(*(long *)(lVar2 + 0x16238) + *(long *)(lVar2 + 0x16230));
  puVar1[1] = (char)param_2;
  *puVar1 = 1;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x16250) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x16250) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


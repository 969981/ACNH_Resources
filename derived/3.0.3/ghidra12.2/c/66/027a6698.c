
void FUN_027a6698(byte *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined **local_58;
  char *local_50;
  undefined8 uStack_48;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar1 = FUN_02583354(DAT_055021a0,local_24,1);
  if (lVar1 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar1 + 0x18358);
  if (lVar6 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0x18358) == 0) goto LAB_027a675c;
      plVar3 = *(long **)(*(long *)(lVar1 + 0x18358) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_58 = *(undefined ***)(lVar1 + 0x18338);
      local_50 = *(char **)(lVar1 + 0x18340);
      uStack_48 = 0x62ac;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
    }
  }
LAB_027a675c:
  lVar6 = *(long *)(lVar1 + 0x18340) + *(long *)(lVar1 + 0x18338);
  local_58 = &PTR_LAB_048f9770;
  local_50 = "TalkVillager";
  uVar4 = FUN_027a67f0(lVar6,param_1,&local_58);
  if (((param_2 & 0xffff) < 0xf) && ((uVar4 & 1) != 0)) {
    *(ushort *)(lVar6 + 0xe94) = *(ushort *)(lVar6 + 0xe94) | (ushort)(1 << (ulong)(param_2 & 0x1f))
    ;
  }
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x18358) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x18358) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


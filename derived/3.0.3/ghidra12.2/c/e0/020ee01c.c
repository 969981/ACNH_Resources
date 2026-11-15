
void FUN_020ee01c(char *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = FUN_0265c3e0((long)*param_1);
  if (lVar1 == 0) {
    return;
  }
  local_74 = 0xfffe;
  FUN_0277d4ac(&local_74);
  local_4c = 0;
  local_54 = 0;
  local_5c = 0;
  local_64 = 0;
  local_6c = 0;
  FUN_027d2090(&local_74,param_1 + 4,param_1 + 0xc,*(undefined4 *)(param_1 + 0x44),0,0);
  lVar5 = *(long *)(lVar1 + 0x28);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0x28) == 0) goto LAB_020ee0f0;
      plVar3 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar1 + 8);
      uStack_40 = *(undefined8 *)(lVar1 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_020ee0f0:
  FUN_026b7690(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8),&local_74,param_1 + 0x28,
               *(undefined4 *)(param_1 + 0x48),0);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}


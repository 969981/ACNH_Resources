
void FUN_02845944(undefined8 param_1,undefined4 param_2,byte *param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 local_48;
  byte local_44 [4];
  
  lVar5 = FUN_0265c2a0(param_2);
  local_44[0] = *param_3;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_44,1);
  if (lVar5 == 0) {
    return;
  }
  if (lVar6 == 0) {
    return;
  }
  plVar1 = (long *)(lVar6 + 0x17f48);
  if ((*(long **)(lVar6 + 0x17f68) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x17f68), puVar7 == (undefined8 *)0x0)) {
    uVar3 = 1;
    plVar8 = *(long **)(lVar5 + 0x28);
  }
  else {
    uVar3 = (**(code **)*puVar7)();
    uVar3 = uVar3 ^ 1;
    plVar8 = *(long **)(lVar5 + 0x28);
  }
  if ((plVar8 == (long *)0x0) || ((undefined8 *)*plVar8 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (*(code *)**(undefined8 **)*plVar8)();
    uVar4 = uVar4 ^ 1;
  }
  FUN_00b92620(param_1,*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8),param_2);
  bVar2 = FUN_020fd7d8(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8));
  FUN_00b92ba0(param_1,bVar2 < 4,*(int *)(*(long *)(lVar6 + 0x17f50) + *plVar1 + 0x18) != 1);
  local_48 = FUN_00a8c014(DAT_04da7238);
  FUN_00b92a60(param_1,&local_48);
  FUN_026b5560(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8),param_1,0);
  FUN_026b6010(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8),param_1,
               *(long *)(lVar6 + 0x17f50) + *plVar1,0);
  FUN_026b64b0(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8),param_1,
               *(long *)(lVar6 + 0x17f50) + *plVar1,0);
  FUN_026b69b0(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8),param_1,
               *(long *)(lVar6 + 0x17f50) + *plVar1);
  FUN_026b6b40(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8),param_1,
               *(long *)(lVar6 + 0x17f50) + *plVar1);
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x17f68) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x17f68) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}


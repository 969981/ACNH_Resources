
void FUN_026889d0(byte *param_1)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  byte local_4c [4];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_4c[0] = *param_1;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar4 = FUN_02583354(DAT_055021a0,local_4c,1);
  if (lVar4 == 0) {
    return;
  }
  lVar8 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
    lVar4 = *(long *)(lVar8 + 0x28);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x194d8);
  }
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar4 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar8 + 0x28) == 0) goto LAB_02688aac;
      plVar6 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar8 + 8);
      uStack_40 = *(undefined8 *)(lVar8 + 0x10);
      local_38 = 0x3ce60;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
  }
LAB_02688aac:
  pbVar1 = (byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x305a4);
  bVar3 = *pbVar1;
  if ((bVar3 & 1) == 0) {
    *pbVar1 = bVar3 | 1;
    if ((*(long *)(lVar8 + 0x28) != 0) &&
       (plVar6 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
      local_48 = *(undefined8 *)(lVar8 + 8);
      uStack_40 = *(undefined8 *)(lVar8 + 0x10);
      local_38 = 0x3ce60;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
    lVar4 = *(long *)(lVar8 + 8);
    lVar2 = *(long *)(lVar8 + 0x10);
    local_48 = 0x29f5;
    FUN_0277d4ac(&local_48);
    FUN_02790980(lVar2 + lVar4 + 0x38240,&local_48,param_1);
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}


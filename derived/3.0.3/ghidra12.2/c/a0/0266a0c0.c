
bool FUN_0266a0c0(byte *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_34,1);
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    if ((*(long **)(lVar4 + 0x1aa0) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x1aa0), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    uVar6 = FUN_02816430(*(long *)(lVar4 + 0x1a88) + *(long *)(lVar4 + 0x1a80));
    uVar7 = FUN_0277d7b4(uVar6,param_2);
    if ((uVar7 & 1) == 0) {
      bVar1 = false;
    }
    else {
      iVar3 = FUN_028169a0(*(long *)(lVar4 + 0x1a88) + *(long *)(lVar4 + 0x1a80));
      bVar1 = iVar3 == param_3;
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x1aa0) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1aa0) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return bVar1;
}


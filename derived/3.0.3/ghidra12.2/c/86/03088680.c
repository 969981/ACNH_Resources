
undefined8 FUN_03088680(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_16d2 [2];
  byte local_16d0 [5792];
  
  local_16d0[0] = *param_1;
  if (7 < local_16d0[0]) {
    local_16d0[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_16d0,1);
  if (lVar6 != 0) {
    if ((*(long **)(lVar6 + 0x161a8) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x161a8), puVar7 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar7)();
      uVar4 = uVar4 ^ 1;
    }
    pbVar1 = (byte *)(*(long *)(lVar6 + 0x16190) + *(long *)(lVar6 + 0x16188));
    bVar2 = pbVar1[1];
    bVar3 = *pbVar1;
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x161a8) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x161a8) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (bVar2 == 0 || 7 < bVar3) {
      return 0;
    }
  }
  FUN_007ef010(auStack_16d2,param_2);
  FUN_007e4920(local_16d0,auStack_16d2);
  iVar5 = FUN_007e68d0(local_16d0);
  if (iVar5 - 0x1bU < 3) {
    return 0;
  }
  FUN_007ef010(auStack_16d2,param_2);
  FUN_007e4920(local_16d0,auStack_16d2);
  FUN_007e68d0(local_16d0);
  return 1;
}


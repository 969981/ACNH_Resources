
byte FUN_0266a8f0(byte *param_1)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte unaff_w22;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_34,1);
  if (lVar3 != 0) {
    if ((*(long **)(lVar3 + 0x16250) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x16250), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    pcVar1 = (char *)(*(long *)(lVar3 + 0x16238) + *(long *)(lVar3 + 0x16230));
    if ((*pcVar1 == '\0') || (uVar5 = FUN_016e5e90(), (uVar5 & 1) == 0)) {
      unaff_w22 = false;
    }
    else {
      unaff_w22 = (byte)pcVar1[1] < 2;
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x16250) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x16250) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return lVar3 != 0 & unaff_w22;
}


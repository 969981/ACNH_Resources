
ushort FUN_027a65c8(byte *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ushort uVar4;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar2 = FUN_025830c0(DAT_055021a0,local_24,1);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    if ((*(long **)(lVar2 + 0x18358) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x18358), puVar3 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      uVar1 = uVar1 ^ 1;
    }
    uVar4 = (ushort)((param_2 & 0xffff) < 0xf) &
            *(ushort *)(*(long *)(lVar2 + 0x18340) + *(long *)(lVar2 + 0x18338) + 0xe94) >>
            (ulong)(param_2 & 0x1f);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x18358) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x18358) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return uVar4;
}


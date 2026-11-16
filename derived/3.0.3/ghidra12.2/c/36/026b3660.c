
ulong FUN_026b3660(long param_1,byte *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  byte local_24 [4];
  
  local_24[0] = *param_2;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_24,1);
  if (lVar3 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    if ((*(long **)(lVar3 + 0x17bb0) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x17bb0), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    uVar5 = 0;
    plVar6 = (long *)(param_1 + 0x2fa4);
    uVar7 = 0xffffffff;
    lVar1 = *(long *)(lVar3 + 0x17b98) + *(long *)(lVar3 + 0x17b90);
    do {
      if ((*(int *)((long)plVar6 + -4) == *(int *)(lVar1 + 0x1c)) &&
         ((*(long *)(lVar1 + 0x20) == *plVar6 && *(long *)(lVar1 + 0x28) == plVar6[1]) &&
          *(int *)(lVar1 + 0x30) == (int)plVar6[2])) {
        uVar7 = uVar5 & 0xffffffff;
        break;
      }
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 0x2b;
    } while (uVar5 != 0xa0);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x17bb0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x17bb0) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar7;
}


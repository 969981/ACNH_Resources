
undefined8 FUN_03423670(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **local_38;
  long local_30;
  undefined1 local_28;
  byte local_27;
  byte local_8 [4];
  undefined4 local_4;
  
  local_8[0] = *param_1;
  if (7 < local_8[0]) {
    local_8[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_8,1);
  uVar5 = 0;
  if (lVar3 != 0) {
    lVar6 = lVar3 + 0x194b0;
    if (*(long *)(lVar3 + 0x194b8) == 0) {
      lVar6 = *(long *)(DAT_05574040 + 0x20);
    }
    local_28 = 1;
    local_30 = lVar6;
    if (*(long **)(lVar6 + 0x28) == (long *)0x0) {
      bVar2 = 0;
    }
    else {
      puVar4 = (undefined8 *)**(long **)(lVar6 + 0x28);
      bVar2 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        bVar2 = (**(code **)*puVar4)();
      }
    }
    local_27 = bVar2 & 1;
    local_4 = 0;
    local_38 = &PTR_FUN_04917aa8;
    lVar3 = *(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8);
    pbVar1 = (byte *)(lVar3 + 0x305a8);
    if (((((((*pbVar1 & 1) == 0) && (local_4 = 1, (*pbVar1 >> 1 & 1) == 0)) &&
          (local_4 = 2, (*pbVar1 >> 2 & 1) == 0)) &&
         (((local_4 = 3, (*pbVar1 >> 3 & 1) == 0 && (local_4 = 4, (*pbVar1 >> 4 & 1) == 0)) &&
          ((local_4 = 5, (*pbVar1 >> 5 & 1) == 0 &&
           ((local_4 = 6, (*pbVar1 >> 6 & 1) == 0 && (local_4 = 7, -1 < (char)*pbVar1)))))))) &&
        (local_4 = 8, (*(byte *)(lVar3 + 0x305a9) & 1) == 0)) &&
       (((local_4 = 9, (*(byte *)(lVar3 + 0x305a9) >> 1 & 1) == 0 &&
         (local_4 = 10, (*(byte *)(lVar3 + 0x305a9) >> 2 & 1) == 0)) &&
        (local_4 = 0xb, (*(byte *)(lVar3 + 0x305a9) >> 3 & 1) == 0)))) {
      FUN_02640184(&local_38);
      uVar5 = 0;
    }
    else {
      if ((((bVar2 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}


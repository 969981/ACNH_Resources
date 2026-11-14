
void FUN_01bd45c0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  uint local_2c;
  uint uStack_28;
  undefined4 local_24;
  
  FUN_01bd3dc0();
  *(undefined8 *)(param_1 + 0x220) = *param_2;
  *(undefined1 *)(param_1 + 0x228) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x229) = *(undefined1 *)((long)param_2 + 9);
  *(undefined1 *)(param_1 + 0x22a) = *(undefined1 *)((long)param_2 + 10);
  *(undefined2 *)(param_1 + 0x22c) = *(undefined2 *)((long)param_2 + 0xc);
  *(undefined2 *)(param_1 + 0x22e) = *(undefined2 *)((long)param_2 + 0xe);
  *(undefined2 *)(param_1 + 0x230) = *(undefined2 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x238) = param_2[3];
  *(undefined8 *)(param_1 + 0x240) = param_2[4];
  uVar3 = *(ushort *)((long)param_2 + 0xe);
  uVar4 = *(ushort *)((long)param_2 + 0xc);
  local_2c = (uint)uVar4;
  uStack_28 = (uint)uVar3;
  for (lVar6 = **(long **)(DAT_0533ec08 + 0x29d0); lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
    while( true ) {
      uVar1 = *(uint *)(lVar6 + 0x20);
      uVar5 = (uint)uVar4;
      if ((local_2c <= uVar1 && uVar1 != uVar5) ||
         (((uVar1 == uVar5 &&
           (uVar2 = *(uint *)(lVar6 + 0x24), uStack_28 <= uVar2 && uVar2 != uVar3)) &&
          (uVar2 != 0xffffffff)))) break;
      if ((uVar5 <= uVar1) && ((uint)uVar3 <= *(uint *)(lVar6 + 0x24))) {
        if (*(code **)(lVar6 + 0x58) == (code *)0x0) goto LAB_01bd46a0;
        local_24 = (**(code **)(lVar6 + 0x58))(param_2);
        goto LAB_01bd46a4;
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) goto LAB_01bd46a0;
    }
  }
LAB_01bd46a0:
  local_24 = 0;
LAB_01bd46a4:
  FUN_01bd44d0(param_1,&local_2c);
  return;
}


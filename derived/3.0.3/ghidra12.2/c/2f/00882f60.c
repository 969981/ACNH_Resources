
bool FUN_00882f60(undefined8 param_1,byte *param_2,ushort *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte local_34 [4];
  
  local_34[0] = *param_2;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_34,1);
  bVar2 = false;
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0x3690a);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    uVar6 = nn::time::IsValidDate(uVar1 & 0xffff,uVar1 >> 0x10 & 0xff,uVar1 >> 0x18);
    if ((uVar6 & 1) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = false;
      if (((uint)*param_3 == (uVar1 & 0xffff)) && ((uint)(byte)param_3[1] == (uVar1 >> 0x10 & 0xff))
         ) {
        bVar2 = (uint)*(byte *)((long)param_3 + 3) == uVar1 >> 0x18;
      }
    }
  }
  return bVar2;
}


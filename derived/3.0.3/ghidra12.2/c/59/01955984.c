
uint FUN_01955984(long param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  
  if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
     (*(int *)(DAT_0537d558 + 0x80) != 1)) {
    return 1;
  }
  local_26 = 0;
  local_24 = 0;
  local_28 = param_2;
  FUN_0277d4ac(&local_28);
  lVar3 = (**(code **)(*(long *)(param_1 + 0x680) + 0x20))(param_1 + 0x680);
  uVar1 = FUN_0277d6c4(&local_28);
  uVar2 = 0;
  if ((uVar1 >> 3 & 0x1fff) < 0x753) {
    uVar2 = *(uint *)(lVar3 + (ulong)((uVar1 & 0xffff) >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1;
  }
  return uVar2;
}


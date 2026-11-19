
void FUN_039f2aa8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined4 *param_6)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  lVar3 = *(long *)(param_5 + 0x18);
  local_58 = CONCAT44(param_4,param_3);
  lVar4 = *(long *)(lVar3 + 0x3a0);
  lVar1 = lVar3 + 0x390;
  local_60 = param_1;
  uStack_5c = param_2;
  (**(code **)(*(long *)(lVar3 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar3 + 0x390) + 0x20))(lVar1);
  lVar5 = **(long **)(lVar3 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar5 + 0xe0) * 4];
  (**(code **)(*(long *)(lVar3 + 0x390) + 0x18))(lVar1);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar4 + (ulong)*(ushort *)(lVar5 + 0xdc)),&local_60,(ulong)bVar2 << 2);
  }
  local_58 = 0;
  local_60 = *param_6;
  uStack_5c = param_6[1];
  lVar4 = *(long *)(lVar3 + 0x3a0);
  (**(code **)(*(long *)(lVar3 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar3 + 0x390) + 0x20))(lVar1);
  lVar5 = **(long **)(lVar3 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar5 + 0xec) * 4];
  (**(code **)(*(long *)(lVar3 + 0x390) + 0x18))(lVar1);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar4 + (ulong)*(ushort *)(lVar5 + 0xe8)),&local_60,(ulong)bVar2 << 2);
  }
  return;
}


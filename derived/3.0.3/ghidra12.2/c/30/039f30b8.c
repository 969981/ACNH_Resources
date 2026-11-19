
void FUN_039f30b8(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 *local_48;
  
  lVar3 = *(long *)(param_1 + 0x18);
  local_48 = &DAT_3f8000003f800000;
  local_60 = *(undefined8 *)(param_1 + 0x3a0);
  lVar1 = lVar3 + 0x390;
  local_50 = *(undefined4 *)(param_1 + 0x398);
  uStack_4c = *(undefined4 *)(param_1 + 0x39c);
  lVar4 = *(long *)(lVar3 + 0x3a0);
  local_58 = *(undefined4 *)(param_1 + 0x3a8);
  uStack_54 = *(undefined4 *)(param_1 + 0x3ac);
  (**(code **)(*(long *)(lVar3 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar3 + 0x390) + 0x20))(lVar1);
  lVar5 = **(long **)(lVar3 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar5 + 0x104) * 4];
  (**(code **)(*(long *)(lVar3 + 0x390) + 0x18))(lVar1);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar4 + (ulong)*(ushort *)(lVar5 + 0x100)),&local_50,(ulong)bVar2 << 2);
  }
  lVar4 = *(long *)(lVar3 + 0x3a0);
  (**(code **)(*(long *)(lVar3 + 0x390) + 0x20))(lVar1);
  (**(code **)(*(long *)(lVar3 + 0x390) + 0x20))(lVar1);
  lVar5 = **(long **)(lVar3 + 0x398);
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar5 + 0x110) * 4];
  (**(code **)(*(long *)(lVar3 + 0x390) + 0x18))(lVar1);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar4 + (ulong)*(ushort *)(lVar5 + 0x10c)),&local_60,(ulong)bVar2 << 2);
  }
  return;
}


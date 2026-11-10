
uint FUN_001e2ba4(long param_1,long param_2)

{
  undefined2 uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ushort local_24 [2];
  
  local_24[0] = nn::socket::InetNtohs(*(ushort *)(param_2 + 10));
  plVar3 = *(long **)(*(long *)(param_1 + 0xb0) + 0x10);
  uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,local_24);
  if ((uVar2 & 1) != 0) {
    uVar1 = nn::socket::InetHtons(local_24[0]);
    lVar4 = *(long *)(param_1 + 0xb0);
    *(undefined2 *)(param_2 + 10) = uVar1;
    plVar3 = *(long **)(lVar4 + 0x10);
    (**(code **)(*plVar3 + 0x80))(plVar3,0x40);
    memcpy((void *)(param_1 + 0x10),(void *)(param_2 + 8),0x80);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x88);
  }
  return uVar2 & 1;
}


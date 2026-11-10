
void FUN_001e17d0(long param_1,ushort param_2)

{
  undefined2 uVar1;
  
  uVar1 = nn::socket::InetHtons(param_2);
  *(undefined2 *)(param_1 + 10) = uVar1;
  return;
}


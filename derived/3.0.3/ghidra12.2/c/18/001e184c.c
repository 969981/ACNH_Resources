
void FUN_001e184c(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = nn::socket::InetHtonl(param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}


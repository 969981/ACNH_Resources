
undefined8 FUN_006927a0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  int local_30 [4];
  
  local_30[3] = 0x19;
  local_30[2] = 1;
  lVar2 = FUN_00691674();
  iVar1 = (int)(SUB168(SEXT816(lVar2) * SEXT816(0x112e0be826d694b3),8) >> 0x1a) -
          (SUB164(SEXT816(lVar2) * SEXT816(0x112e0be826d694b3),0xc) >> 0x1f);
  if (0x19 < iVar1) {
    nn::socket::SetSockOpt(param_2,0xffff,8,local_30 + 2,4);
    local_30[0] = (iVar1 - 0x19U) / 10 + 1;
    local_30[1] = 10;
    nn::socket::SetSockOpt(param_2,6,0x100,local_30 + 3,4);
    nn::socket::SetSockOpt(param_2,6,0x200,local_30 + 1,4);
    nn::socket::SetSockOpt(param_2,6,0x400,local_30,4);
  }
  return 0;
}


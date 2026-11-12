
ulong FUN_006af5fc(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long local_58 [5];
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  puVar3 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar3 = 0x800000006;
  puVar6 = (undefined8 *)((long)puVar3 + 0x17U & 0xfffffffffffffff0);
  *puVar6 = 0x149434653;
  puVar6[1] = (ulong)param_2;
  uVar2 = nn::sf::cmif::GetInlineContext();
  *(undefined4 *)((long)puVar6 + 0xc) = uVar2;
  uVar4 = nn::sf::hipc::SendSyncRequest(uVar1,puVar3,0x100);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  local_58[0] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  FUN_006af700(local_58,puVar3);
  piVar5 = (int *)(local_58[0] + ((ulong)local_58[4] >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
  if (*piVar5 != 0x4f434653) {
    return 0x1a80a;
  }
  uVar4 = *(ulong *)(piVar5 + 2);
  if ((int)uVar4 != 0) {
    nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar4 & 0xffffffff);
  }
  return uVar4 & 0xffffffff;
}


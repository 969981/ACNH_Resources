
ulong FUN_006b5fe4(long param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long local_68 [5];
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  puVar4 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar4 = 0x900000006;
  puVar7 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff0);
  *(undefined4 *)(puVar7 + 2) = param_2;
  *puVar7 = 0x149434653;
  puVar7[1] = (ulong)param_3;
  uVar2 = nn::sf::cmif::GetInlineContext();
  *(undefined4 *)((long)puVar7 + 0xc) = uVar2;
  uVar3 = nn::sf::hipc::SendSyncRequest(uVar1,puVar4,0x100);
  if (uVar3 == 0) {
    local_68[0] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    FUN_006af700(local_68,puVar4);
    piVar5 = (int *)(local_68[0] + ((ulong)local_68[4] >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
    if (*piVar5 == 0x4f434653) {
      uVar6 = *(ulong *)(piVar5 + 2);
      if ((int)uVar6 != 0) {
        nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar6 & 0xffffffff);
      }
    }
    else {
      uVar6 = 0x1a80a;
    }
  }
  else {
    uVar6 = (ulong)uVar3;
  }
  return uVar6 & 0xffffffff;
}



ulong FUN_006b5ee8(long param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long local_68 [5];
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  puVar4 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar4 = 0xc00000006;
  puVar6 = (undefined8 *)((long)puVar4 + 0x17U & 0xfffffffffffffff0);
  *puVar6 = 0x149434653;
  puVar6[1] = (ulong)param_4;
  puVar6[2] = 0;
  puVar6[3] = param_3;
  *(undefined4 *)(puVar6 + 2) = param_2;
  uVar2 = nn::sf::cmif::GetInlineContext();
  *(undefined4 *)((long)puVar6 + 0xc) = uVar2;
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
      uVar7 = *(ulong *)(piVar5 + 2);
      if ((int)uVar7 != 0) {
        nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar7 & 0xffffffff);
      }
    }
    else {
      uVar7 = 0x1a80a;
    }
  }
  else {
    uVar7 = (ulong)uVar3;
  }
  return uVar7 & 0xffffffff;
}


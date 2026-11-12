
ulong FUN_006b2e10(long param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long local_68 [5];
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  puVar6 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar6 = 0xe00000006;
  puVar9 = (undefined8 *)((long)puVar6 + 0x17U & 0xfffffffffffffff0);
  puVar9[3] = 0;
  puVar9[4] = 0;
  *puVar9 = 0x149434653;
  puVar9[1] = (ulong)param_4;
  puVar9[2] = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puVar9[4] = param_3;
  puVar9[2] = uVar1;
  puVar9[3] = uVar2;
  uVar4 = nn::sf::cmif::GetInlineContext();
  *(undefined4 *)((long)puVar9 + 0xc) = uVar4;
  uVar5 = nn::sf::hipc::SendSyncRequest(uVar3,puVar6,0x100);
  if (uVar5 == 0) {
    local_68[0] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    FUN_006af700(local_68,puVar6);
    piVar7 = (int *)(local_68[0] + ((ulong)local_68[4] >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
    if (*piVar7 == 0x4f434653) {
      uVar8 = *(ulong *)(piVar7 + 2);
      if ((int)uVar8 != 0) {
        nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar8 & 0xffffffff);
      }
    }
    else {
      uVar8 = 0x1a80a;
    }
  }
  else {
    uVar8 = (ulong)uVar5;
  }
  return uVar8 & 0xffffffff;
}


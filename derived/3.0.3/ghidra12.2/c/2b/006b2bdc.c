
ulong FUN_006b2bdc(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long local_68 [5];
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  puVar5 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar5 = 0x800000006;
  puVar8 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff0);
  *puVar8 = 0x149434653;
  puVar8[1] = (ulong)param_3;
  uVar3 = nn::sf::cmif::GetInlineContext();
  *(undefined4 *)((long)puVar8 + 0xc) = uVar3;
  uVar4 = nn::sf::hipc::SendSyncRequest(uVar2,puVar5,0x100);
  if (uVar4 == 0) {
    local_68[0] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    FUN_006af700(local_68,puVar5);
    piVar6 = (int *)(local_68[0] + ((ulong)local_68[4] >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
    if (*piVar6 == 0x4f434653) {
      uVar7 = *(ulong *)(piVar6 + 2);
      if ((int)uVar7 == 0) {
        uVar1 = *(undefined8 *)(piVar6 + 6);
        *param_2 = *(undefined8 *)(piVar6 + 4);
        param_2[1] = uVar1;
      }
      else {
        nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar7 & 0xffffffff);
      }
    }
    else {
      uVar7 = 0x1a80a;
    }
  }
  else {
    uVar7 = (ulong)uVar4;
  }
  return uVar7 & 0xffffffff;
}



ulong FUN_006b9cbc(long param_1,undefined1 *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long local_68 [5];
  
  plVar6 = *(long **)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = (**(code **)*plVar6)(plVar6);
  puVar4 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar4 = 0xc00000006;
  puVar7 = (undefined4 *)((long)puVar4 + 0x17U & 0xfffffffffffffff0);
  *(undefined8 *)(puVar7 + 2) = 0;
  *puVar7 = 0x100001;
  puVar7[1] = uVar2;
  *(undefined8 *)(puVar7 + 4) = 0x149434653;
  *(ulong *)(puVar7 + 6) = param_3 & 0xffffffff;
  uVar2 = nn::sf::cmif::GetInlineContext();
  puVar7[3] = uVar2;
  uVar3 = nn::sf::hipc::SendSyncRequest(uVar1,puVar4,0x100);
  if (uVar3 == 0) {
    local_68[0] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    FUN_006af700(local_68,puVar4);
    uVar5 = local_68[0] + ((ulong)local_68[4] >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0;
    if (*(int *)(uVar5 + 0x10) == 0x4f434653) {
      uVar8 = *(ulong *)(uVar5 + 0x18);
      if ((int)uVar8 == 0) {
        *param_2 = *(undefined1 *)(uVar5 + 0x20);
      }
      else {
        nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar8 & 0xffffffff);
      }
    }
    else {
      uVar8 = 0x1a80a;
    }
  }
  else {
    uVar8 = (ulong)uVar3;
  }
  (**(code **)(*plVar6 + 8))(plVar6,uVar1);
  return uVar8 & 0xffffffff;
}


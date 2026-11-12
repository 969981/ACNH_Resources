
ulong FUN_006b9f54(long param_1,undefined1 *param_2,undefined8 *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long local_78 [5];
  
  plVar8 = *(long **)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = (**(code **)*plVar8)(plVar8);
  puVar6 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar6 = 0x1000000006;
  puVar9 = (undefined4 *)((long)puVar6 + 0x17U & 0xfffffffffffffff0);
  *(undefined8 *)(puVar9 + 4) = 0x149434653;
  *(ulong *)(puVar9 + 6) = (ulong)param_4;
  *(undefined8 *)(puVar9 + 8) = 0;
  *(undefined8 *)(puVar9 + 10) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *puVar9 = 0x200001;
  puVar9[1] = uVar4;
  *(undefined8 *)(puVar9 + 2) = 0;
  *(undefined8 *)(puVar9 + 8) = uVar1;
  *(undefined8 *)(puVar9 + 10) = uVar2;
  uVar4 = nn::sf::cmif::GetInlineContext();
  puVar9[3] = uVar4;
  uVar5 = nn::sf::hipc::SendSyncRequest(uVar3,puVar6,0x100);
  if (uVar5 == 0) {
    local_78[0] = 0;
    local_78[3] = 0;
    local_78[4] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    FUN_006af700(local_78,puVar6);
    uVar7 = local_78[0] + ((ulong)local_78[4] >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0;
    if (*(int *)(uVar7 + 0x10) == 0x4f434653) {
      uVar10 = *(ulong *)(uVar7 + 0x18);
      if ((int)uVar10 == 0) {
        *param_2 = *(undefined1 *)(uVar7 + 0x20);
      }
      else {
        nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar10 & 0xffffffff);
      }
    }
    else {
      uVar10 = 0x1a80a;
    }
  }
  else {
    uVar10 = (ulong)uVar5;
  }
  (**(code **)(*plVar8 + 8))(plVar8,uVar3);
  return uVar10 & 0xffffffff;
}


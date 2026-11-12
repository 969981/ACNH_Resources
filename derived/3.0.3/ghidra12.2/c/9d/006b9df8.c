
ulong FUN_006b9df8(long param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 *puVar8;
  long local_68 [5];
  
  plVar7 = *(long **)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = (**(code **)*plVar7)(plVar7);
  puVar5 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar5 = 0xc00000006;
  puVar8 = (undefined4 *)((long)puVar5 + 0x17U & 0xfffffffffffffff0);
  *(undefined8 *)(puVar8 + 2) = 0;
  *puVar8 = 0x100001;
  puVar8[1] = uVar3;
  *(undefined8 *)(puVar8 + 4) = 0x149434653;
  *(ulong *)(puVar8 + 6) = param_3 & 0xffffffff;
  uVar3 = nn::sf::cmif::GetInlineContext();
  puVar8[3] = uVar3;
  uVar4 = nn::sf::hipc::SendSyncRequest(uVar2,puVar5,0x100);
  if (uVar4 == 0) {
    local_68[0] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    FUN_006af700(local_68,puVar5);
    uVar6 = local_68[0] + ((ulong)local_68[4] >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0;
    if (*(int *)(uVar6 + 0x10) == 0x4f434653) {
      uVar6 = *(ulong *)(uVar6 + 0x18);
      if ((int)uVar6 == 0) {
        uVar4 = *param_2;
        *param_2 = *(uint *)(local_68[0] + ((ulong)local_68[3] >> 0x18 & 0xff) * 4);
        uVar1 = param_2[1];
        *(undefined1 *)(param_2 + 1) = 1;
        if ((char)uVar1 != '\0') {
          nn::os::CloseNativeHandle(uVar4);
        }
        uVar6 = 0;
      }
      else {
        nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar6 & 0xffffffff);
      }
    }
    else {
      uVar6 = 0x1a80a;
    }
  }
  else {
    uVar6 = (ulong)uVar4;
  }
  (**(code **)(*plVar7 + 8))(plVar7,uVar2);
  return uVar6 & 0xffffffff;
}


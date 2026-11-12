
ulong FUN_006b029c(long param_1,uint *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long local_68 [5];
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  puVar5 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar5 = 0x800000006;
  puVar8 = (undefined8 *)((long)puVar5 + 0x17U & 0xfffffffffffffff0);
  *puVar8 = 0x149434653;
  puVar8[1] = (ulong)param_3;
  uVar3 = nn::sf::cmif::GetInlineContext();
  *(undefined4 *)((long)puVar8 + 0xc) = uVar3;
  uVar4 = nn::sf::hipc::SendSyncRequest(uVar1,puVar5,0x100);
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
        uVar4 = *param_2;
        *param_2 = *(uint *)(local_68[0] + ((ulong)local_68[3] >> 0x18 & 0xff) * 4);
        uVar2 = param_2[1];
        *(undefined1 *)(param_2 + 1) = 1;
        if ((char)uVar2 != '\0') {
          nn::os::CloseNativeHandle(uVar4);
        }
        uVar7 = 0;
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


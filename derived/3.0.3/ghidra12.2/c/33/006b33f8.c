
ulong FUN_006b33f8(long param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long local_68 [5];
  
  uVar4 = *(undefined4 *)(param_1 + 4);
  puVar7 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
  *puVar7 = 0xc00000006;
  puVar10 = (undefined8 *)((long)puVar7 + 0x17U & 0xfffffffffffffff0);
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0x149434653;
  puVar10[1] = (ulong)param_4;
  uVar1 = param_3[1];
  puVar10[2] = *param_3;
  puVar10[3] = uVar1;
  uVar5 = nn::sf::cmif::GetInlineContext();
  *(undefined4 *)((long)puVar10 + 0xc) = uVar5;
  uVar6 = nn::sf::hipc::SendSyncRequest(uVar4,puVar7,0x100);
  if (uVar6 == 0) {
    local_68[0] = 0;
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    FUN_006af700(local_68,puVar7);
    piVar8 = (int *)(local_68[0] + ((ulong)local_68[4] >> 8 & 0xff) * 4 + 0xf & 0xfffffffffffffff0);
    if (*piVar8 == 0x4f434653) {
      uVar9 = *(ulong *)(piVar8 + 2);
      if ((int)uVar9 == 0) {
        *param_2 = *(undefined8 *)(piVar8 + 4);
        uVar1 = *(undefined8 *)(piVar8 + 6);
        uVar2 = *(undefined8 *)(piVar8 + 8);
        uVar3 = *(undefined8 *)(piVar8 + 0xc);
        param_2[3] = *(undefined8 *)(piVar8 + 10);
        param_2[4] = uVar3;
        param_2[1] = uVar1;
        param_2[2] = uVar2;
      }
      else {
        nn::sf::hipc::detail::HandleHipcErrorOnClient(uVar9 & 0xffffffff);
      }
    }
    else {
      uVar9 = 0x1a80a;
    }
  }
  else {
    uVar9 = (ulong)uVar6;
  }
  return uVar9 & 0xffffffff;
}


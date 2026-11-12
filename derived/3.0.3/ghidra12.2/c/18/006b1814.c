
void FUN_006b1814(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  uVar2 = nn::sf::impl::detail::ServiceObjectImplBase2::ReleaseImpl();
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x20);
  if (*(char *)(param_1 + 8) != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    puVar3 = (undefined8 *)nn::sf::hipc::GetMessageBufferOnTls();
    *puVar3 = 2;
    nn::sf::hipc::SendSyncRequest(uVar1,puVar3,0x100);
    nn::sf::hipc::CloseClientSessionHandle(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x006b188c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,param_1,0x28,8);
  return;
}



void FUN_006e0ea8(long param_1,undefined8 param_2)

{
  Uid aUStack_30 [16];
  
  nn::account::GetUserId(aUStack_30,(UserHandle *)(*(long *)(param_1 + 0x28) + 8));
  FUN_006989b0(param_2,aUStack_30,*(long *)(param_1 + 0x30) + 8,*(long *)(param_1 + 0x28) + 0x20);
  return;
}


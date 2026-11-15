
undefined8 FUN_01df31e0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  UserHandle aUStack_40 [24];
  undefined8 local_28;
  bool local_4 [4];
  
  lVar2 = *(long *)PTR_DAT_04bb4410;
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_007b3b6c(lVar2,aUStack_40,*(undefined8 *)(lVar2 + 0x140),
                       *(undefined8 *)(lVar2 + 0x148));
  if ((uVar3 & 1) != 0) {
    *param_1 = 0;
    local_4[0] = false;
    iVar1 = nn::account::IsNetworkServiceAccountAvailable(local_4,aUStack_40);
    if (iVar1 != 0) {
      return 0;
    }
    if (local_4[0] == false) {
      return 0;
    }
    iVar1 = nn::account::GetNetworkServiceAccountId((NetworkServiceAccountId *)&local_28,aUStack_40)
    ;
    if (iVar1 == 0) {
      *param_1 = local_28;
      return 1;
    }
  }
  return 0;
}


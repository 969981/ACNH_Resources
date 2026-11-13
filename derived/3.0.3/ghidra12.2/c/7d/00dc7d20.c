
void FUN_00dc7d20(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  UserHandle aUStack_38 [24];
  
  uVar1 = *(uint *)(param_1 + 0x128);
  if (((uVar1 & 0x1ff) == 0x7c) && ((uVar1 >> 9 & 0x1ffe) - 200 < 0x46)) {
    if (DAT_04ca9180 != 0) {
      FUN_007b3b6c(DAT_04ca9180,aUStack_38,*(undefined8 *)(DAT_04ca9180 + 0x140),
                   *(undefined8 *)(DAT_04ca9180 + 0x148));
    }
    uVar2 = nn::account::EnsureNetworkServiceAccountAvailable(aUStack_38);
    *(undefined4 *)(param_1 + 0x150) = uVar2;
  }
  else if ((uVar1 & 0x3fffff) == 0x14b3) {
    if (DAT_04ca9180 != 0) {
      FUN_007b3b6c(DAT_04ca9180,aUStack_38,*(undefined8 *)(DAT_04ca9180 + 0x140),
                   *(undefined8 *)(DAT_04ca9180 + 0x148));
    }
    uVar2 = nn::account::ShowLicenseRequirementsForNetworkService(aUStack_38);
    *(undefined4 *)(param_1 + 0x150) = uVar2;
  }
  else if (uVar1 != 0) {
    nn::err::ShowError();
    return;
  }
  return;
}


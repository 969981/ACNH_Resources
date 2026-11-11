
uint FUN_003b6da8(long param_1)

{
  VoiceType *pVVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  
  uVar7 = 2;
  if (*(int *)(param_1 + 0xb0) == 0) {
    uVar7 = 1;
  }
  bVar4 = *(int *)(param_1 + 0xb0) != 2;
  uVar2 = 6;
  if (bVar4) {
    uVar2 = uVar7;
  }
  iVar6 = *(int *)(param_1 + 0xa4);
  lVar9 = param_1;
  if (bVar4) {
    lVar9 = 0;
  }
  uVar3 = 0x20;
  if (bVar4) {
    uVar3 = 0;
  }
  lVar8 = FUN_03b38a74();
  pVVar1 = (VoiceType *)(param_1 + 0x20);
  uVar5 = nn::audio::AcquireVoiceSlot
                    (lVar8 + 0x18,pVVar1,*(undefined4 *)(param_1 + 0xac),1,uVar2,0xff - iVar6,lVar9,
                     uVar3);
  if ((uVar5 & 1) != 0) {
    lVar9 = FUN_03b38a74();
    if (*(char *)(lVar9 + 0x958) != '\0') {
      nn::audio::SetVoiceSrcQuality(pVVar1,1);
    }
    iVar6 = (**(code **)**(undefined8 **)(param_1 + 0xc0))();
    if (iVar6 == 1) {
      lVar9 = FUN_03b38a74();
      nn::audio::SetVoiceDestination
                ((AudioRendererConfig *)(lVar9 + 0x18),pVVar1,
                 (FinalMixType *)(*(long *)(param_1 + 0xc0) + 0x40));
    }
    else {
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::detail::UnexpectedDefaultImpl();
      }
      lVar9 = FUN_03b38a74();
      nn::audio::SetVoiceDestination
                ((AudioRendererConfig *)(lVar9 + 0x18),pVVar1,
                 (SubMixType *)(*(long *)(param_1 + 0xc0) + 0x50));
    }
    uVar7 = nn::audio::GetVoiceNodeId(pVVar1);
    *(undefined4 *)(param_1 + 0xe8) = uVar7;
  }
  return uVar5 & 1;
}


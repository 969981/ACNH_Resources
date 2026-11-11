
void FUN_003b6440(char *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int local_14;
  
  if (*param_1 != '\0') {
    FUN_003b7770(param_1 + 0x530);
    nn::audio::StopAudioRenderer(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if (param_1[0x950] != '\0') {
      if (param_1[0x951] != '\0') {
        plVar5 = (long *)(param_1 + 0x5a8);
        iVar2 = (**(code **)(*(long *)(param_1 + 0x5a8) + 0x10))(plVar5);
        if (0 < iVar2) {
          iVar2 = 0;
          do {
            FUN_003c50c0(plVar5,iVar2);
            iVar2 = iVar2 + 1;
            iVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
          } while (iVar2 < iVar3);
        }
        if (param_1[0x952] != '\0') {
          plVar5 = (long *)(param_1 + 0x6a0);
          iVar2 = (**(code **)(*(long *)(param_1 + 0x6a0) + 0x10))(plVar5);
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              FUN_003c50c0(plVar5,iVar2);
              iVar2 = iVar2 + 1;
              iVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
            } while (iVar2 < iVar3);
          }
        }
        if (param_1[0x953] != '\0') {
          FUN_003c50c0(param_1 + 0x798,0);
        }
        param_1[0x950] = '\0';
      }
      FUN_003c50c0(param_1 + 0x558,0);
    }
    FUN_003c366c(param_1 + 0x5a8);
    FUN_003c366c(param_1 + 0x6a0);
    FUN_003c366c(param_1 + 0x798);
    plVar5 = *(long **)(param_1 + 0x898);
    while (plVar5 != (long *)(param_1 + 0x890)) {
      plVar1 = (long *)plVar5[1];
      lVar6 = *plVar1;
      *(long **)(*plVar5 + 8) = plVar1;
      *plVar1 = *plVar5;
      *(long **)(lVar6 + 8) = plVar5;
      *plVar5 = lVar6;
      plVar5 = *(long **)(param_1 + 0x898);
    }
    local_14 = FUN_003b57e0(param_1);
    if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl((Result *)&local_14);
    }
    FUN_003cdd98(param_1 + 0x558,param_1 + 0x18);
    nn::audio::CloseAudioRenderer(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x90));
    if (*(int *)(param_1 + 0xa08) != 0) {
      param_1[0xa08] = '\0';
      param_1[0xa09] = '\0';
      param_1[0xa0a] = '\0';
      param_1[0xa0b] = '\0';
    }
    param_1[0x108] = '\0';
    param_1[0x109] = '\0';
    param_1[0x10a] = '\0';
    param_1[0x10b] = '\0';
    param_1[0x100] = '\0';
    param_1[0x101] = '\0';
    param_1[0x102] = -0x80;
    param_1[0x103] = '?';
    param_1[0x104] = '\0';
    param_1[0x105] = '\0';
    param_1[0x106] = '\0';
    param_1[0x107] = '\0';
    param_1[0xf0] = '\0';
    param_1[0xf1] = '\0';
    param_1[0xf2] = -0x80;
    param_1[0xf3] = '?';
    param_1[0xf4] = '\0';
    param_1[0xf5] = '\0';
    param_1[0xf6] = '\0';
    param_1[0xf7] = '\0';
    param_1[0xf8] = '\0';
    param_1[0xf9] = '\0';
    param_1[0xfa] = '\0';
    param_1[0xfb] = '\0';
    param_1[0xfc] = '\0';
    param_1[0xfd] = '\0';
    param_1[0xfe] = -0x80;
    param_1[0xff] = '?';
    param_1[0xe0] = '\x04';
    param_1[0xe1] = '\0';
    param_1[0xe2] = '\0';
    param_1[0xe3] = '\0';
    param_1[0xe4] = '\x04';
    param_1[0xe5] = '\0';
    param_1[0xe6] = '\0';
    param_1[0xe7] = '\0';
    param_1[0xe8] = '\x02';
    param_1[0xe9] = '\0';
    param_1[0xea] = '\0';
    param_1[0xeb] = '\0';
    param_1[0xec] = '\0';
    param_1[0xed] = '\0';
    param_1[0xee] = -0x80;
    param_1[0xef] = '?';
    nn::audio::InitializeAudioRendererParameter((AudioRendererParameter *)(param_1 + 0x8c0));
    param_1[0x8e0] = '\0';
    param_1[0x8c0] = -0x80;
    param_1[0x8c1] = -0x45;
    param_1[0x8c2] = '\0';
    param_1[0x8c3] = '\0';
    param_1[0x8c4] = -0x10;
    param_1[0x8c5] = '\0';
    param_1[0x8c6] = '\0';
    param_1[0x8c7] = '\0';
    param_1[0x8d0] = '`';
    param_1[0x8d1] = '\0';
    param_1[0x8d2] = '\0';
    param_1[0x8d3] = '\0';
    param_1[0x8d4] = '\x01';
    param_1[0x8d5] = '\0';
    param_1[0x8d6] = '\0';
    param_1[0x8d7] = '\0';
    param_1[0x8c8] = '\x1e';
    param_1[0x8c9] = '\0';
    param_1[0x8ca] = '\0';
    param_1[0x8cb] = '\0';
    param_1[0x8cc] = '\x01';
    param_1[0x8cd] = '\0';
    param_1[0x8ce] = '\0';
    param_1[0x8cf] = '\0';
    param_1[0x8d8] = '\x0e';
    param_1[0x8d9] = '\0';
    param_1[0x8da] = '\0';
    param_1[0x8db] = '\0';
    param_1[0x8dc] = '\0';
    param_1[0x8dd] = '\0';
    param_1[0x8de] = '\0';
    param_1[0x8df] = '\0';
    uVar4 = nn::audio::IsValidAudioRendererParameter((AudioRendererParameter *)(param_1 + 0x8c0));
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    param_1[0xa60] = '\0';
    param_1[0xa61] = '\0';
    param_1[0xa62] = '\0';
    param_1[0xa63] = '\0';
    param_1[0x955] = '\x01';
    *param_1 = '\0';
    param_1[0x951] = '\x01';
    param_1[0x952] = '\0';
    param_1[0x953] = '\0';
    param_1[0x954] = '\0';
    param_1[0x956] = '\0';
    param_1[0x957] = '\0';
    param_1[0xa64] = '\0';
    param_1[0xa65] = '\0';
    param_1[0xa66] = '\0';
  }
  return;
}


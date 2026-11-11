
undefined8
FUN_003b5bf0(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            long param_6,undefined8 param_7,int *param_8)

{
  AudioRendererParameter *pAVar1;
  AudioRendererConfig *pAVar2;
  char *pcVar3;
  DeviceSinkType *pDVar4;
  char *pcVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  int iVar16;
  ulong uVar17;
  char *pcVar18;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*param_1 == '\0') {
    pAVar1 = (AudioRendererParameter *)(param_1 + 0x8c0);
    param_1[0x950] = *(char *)((long)param_8 + 0x1b);
    param_1[0x951] = *(char *)((long)param_8 + 0x1e);
    param_1[0x952] = *(char *)((long)param_8 + 0x19);
    param_1[0x953] = *(char *)((long)param_8 + 0x1a);
    param_1[0x954] = *(char *)((long)param_8 + 0x1f);
    param_1[0x957] = *(char *)((long)param_8 + 0x29);
    nn::audio::InitializeAudioRendererParameter(pAVar1);
    *(int *)(param_1 + 0x8c0) = *param_8;
    *(uint *)(param_1 + 0x8c4) = (uint)(*param_8 * 5) / 1000;
    *(int *)(param_1 + 0x8c8) = param_8[5];
    *(int *)(param_1 + 0x8cc) = param_8[4];
    *(int *)(param_1 + 0x8d0) = param_8[2];
    param_1[0x8d4] = '\x01';
    param_1[0x8d5] = '\0';
    param_1[0x8d6] = '\0';
    param_1[0x8d7] = '\0';
    iVar10 = param_8[1];
    param_1[0x8dc] = '\0';
    param_1[0x8dd] = '\0';
    param_1[0x8de] = '\0';
    param_1[0x8df] = '\0';
    *(int *)(param_1 + 0x8d8) = iVar10 + 4;
    param_1[0x8e0] = *(char *)((long)param_8 + 0x21);
    if ((char)param_8[6] != '\0') {
      param_1[0x8dc] = '\x03';
      param_1[0x8dd] = '\0';
      param_1[0x8de] = '\0';
      param_1[0x8df] = '\0';
    }
    if (*(char *)((long)param_8 + 0x1b) == '\0') {
      param_1[0x8d8] = '\0';
      param_1[0x8d9] = '\0';
      param_1[0x8da] = '\0';
      param_1[0x8db] = '\0';
    }
    uVar15 = 2;
    if ((char)param_8[7] != '\0') {
      param_1[0x8d4] = '\x02';
      param_1[0x8d5] = '\0';
      param_1[0x8d6] = '\0';
      param_1[0x8d7] = '\0';
      uVar15 = 3;
    }
    if (*(char *)((long)param_8 + 0x1d) != '\0') {
      *(undefined4 *)(param_1 + 0x8d4) = uVar15;
    }
    if (*(char *)((long)param_8 + 0x27) != '\0') {
      param_1[0x8ec] = '\x01';
      param_1[0x8ed] = '\0';
      param_1[0x8ee] = '\0';
      param_1[0x8ef] = '\0';
      param_1[0x8f0] = '\x01';
      param_1[0x8f1] = '\0';
      param_1[0x8f2] = '\0';
      param_1[0x8f3] = '\0';
    }
    uVar12 = nn::audio::IsValidAudioRendererParameter(pAVar1);
    if ((uVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    uVar12 = nn::audio::GetAudioRendererWorkBufferSize(pAVar1);
    *(void **)(param_1 + 0xd0) = param_2;
    uVar11 = nn::audio::OpenAudioRenderer
                       (param_1 + 8,(SystemEvent *)(param_1 + 0x90),pAVar1,param_2,uVar12);
    if ((int)uVar11 == 0) {
      param_2 = (void *)((long)param_2 + uVar12);
      param_1[200] = '\0';
      param_1[0xc9] = '\0';
      param_1[0xca] = '\0';
      param_1[0xcb] = '\0';
      param_1[0xcc] = '\0';
      param_1[0xcd] = '\0';
      param_1[0xce] = '\0';
      param_1[0xcf] = '\0';
      uVar12 = nn::audio::GetAudioRendererConfigWorkBufferSize(pAVar1);
      pAVar2 = (AudioRendererConfig *)(param_1 + 0x18);
      *(void **)(param_1 + 0xd8) = param_2;
      nn::audio::InitializeAudioRendererConfig(pAVar2,pAVar1,param_2,uVar12);
      cVar7 = param_1[0x950];
      lVar13 = FUN_003cdcb0(cVar7);
      pcVar3 = param_1 + 0x558;
      uVar15 = 6;
      if (param_1[0x954] != '\0') {
        uVar15 = 2;
      }
      FUN_003cdcbc(pcVar3,pAVar2,uVar15,cVar7,(long)param_2 + uVar12,lVar13);
      if (*(char *)((long)param_8 + 0x27) == '\0') {
        pDVar4 = (DeviceSinkType *)(param_1 + 0x8f8);
        iVar10 = 6;
        if (param_1[0x954] != '\0') {
          iVar10 = 2;
        }
        nn::audio::AddDeviceSink
                  (pAVar2,pDVar4,(FinalMixType *)(param_1 + 0x598),(signed *)&DAT_041354b9,iVar10,
                   "MainAudioOut");
        bVar6 = *(char *)((long)param_8 + 0x22) != '\0';
        if (bVar6) {
          local_b0 = 0x3f800000;
          uStack_a8 = 0x3f80000000000000;
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_80 = 0;
          uStack_78 = 0;
          nn::audio::SetDownMixParameter(pDVar4,(DownMixParameter *)&local_b0);
        }
        nn::audio::SetDownMixParameterEnabled(pDVar4,bVar6);
      }
      lVar13 = (long)param_2 + uVar12 + lVar13;
      if ((char)param_8[7] != '\0') {
        uVar12 = lVar13 + 0xfffU & 0xfffffffffffff000;
        uVar15 = 6;
        if (param_1[0x954] != '\0') {
          uVar15 = 2;
        }
        lVar13 = nn::audio::GetRequiredBufferSizeForCircularBufferSink(pAVar1,uVar15,param_8[3],2);
        *(long *)(param_1 + 0xa30) = lVar13;
        uVar17 = lVar13 + 0xfffU & 0xfffffffffffff000;
        *(ulong *)(param_1 + 0xa18) = uVar12;
        FUN_003b56d0(param_1,param_1 + 0xa10,uVar12,uVar17,0);
        FUN_003b553c(param_1);
        lVar13 = uVar12 + uVar17;
        *(long *)(param_1 + 0xa28) = lVar13;
        lVar13 = lVar13 + *(long *)(param_1 + 0xa30);
      }
      if (*(char *)((long)param_8 + 0x1d) != '\0') {
        uVar12 = param_6 + 0xfffU & 0xfffffffffffff000;
        uVar15 = 6;
        if (param_1[0x954] != '\0') {
          uVar15 = 2;
        }
        lVar14 = nn::audio::GetRequiredBufferSizeForCircularBufferSink(pAVar1,uVar15,param_8[3],2);
        *(long *)(param_1 + 0xa58) = lVar14;
        *(ulong *)(param_1 + 0xa50) = uVar12;
        FUN_003b56d0(param_1,param_1 + 0xa48,uVar12,lVar14 + 0xfffU & 0xfffffffffffff000,0);
        FUN_003b55c0(param_1,1);
      }
      param_1[0x956] = *(char *)((long)param_8 + 0x23);
      param_1[0x955] = (char)param_8[8];
      param_1[0xa64] = *(char *)((long)param_8 + 0x25);
      param_1[0xa65] = *(char *)((long)param_8 + 0x26);
      param_1[0xa66] = *(char *)((long)param_8 + 0x27);
      param_1[0x958] = *(char *)((long)param_8 + 0x2a);
      iVar10 = FUN_003b57e0(param_1);
      local_b0 = CONCAT44(local_b0._4_4_,iVar10);
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl((Result *)&local_b0);
      }
      uVar11 = FUN_003b76b0(param_8[2]);
      FUN_003b76d0(param_1 + 0x530,param_8[2],param_4,uVar11);
      nn::audio::StartAudioRenderer(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
      param_1[0xc0] = '\0';
      param_1[0xc1] = '\0';
      param_1[0xc2] = '\0';
      param_1[0xc3] = '\0';
      memset(param_1 + 0x110,0,0x400);
      *(undefined ***)(param_1 + 0x118) = &PTR_PTR_04c11200;
      *(undefined ***)(param_1 + 0x120) = &PTR_PTR_04c11208;
      *(undefined ***)(param_1 + 0x128) = &PTR_PTR_04c11210;
      *(undefined ***)(param_1 + 0x130) = &PTR_PTR_04c11218;
      *(undefined ***)(param_1 + 0x138) = &PTR_PTR_04c11220;
      *(undefined ***)(param_1 + 0x140) = &PTR_PTR_04c11228;
      *(undefined ***)(param_1 + 0x148) = &PTR_PTR_04c11230;
      *(undefined ***)(param_1 + 0x150) = &PTR_PTR_04c11238;
      *(undefined ***)(param_1 + 0x158) = &PTR_PTR_04c11240;
      *(undefined ***)(param_1 + 0x160) = &PTR_PTR_04c11248;
      param_1[0xe4] = '\x02';
      param_1[0xe5] = '\0';
      param_1[0xe6] = '\0';
      param_1[0xe7] = '\0';
      if (*(int *)(param_1 + 0xe0) != 2) {
        param_1[0xe0] = '\x02';
        param_1[0xe1] = '\0';
        param_1[0xe2] = '\0';
        param_1[0xe3] = '\0';
        uVar11 = FUN_003c5b84();
        lVar14 = FUN_003cbb70(uVar11,0x20,1);
        *(undefined4 *)(lVar14 + 8) = 0x4d;
        *(undefined4 *)(lVar14 + 0x18) = 8;
        FUN_003cc15c(uVar11,lVar14);
        if (param_1[0x950] != '\0') {
          FUN_003b4ea8(&local_b0);
          for (pcVar18 = *(char **)(param_1 + 0x898); pcVar18 != param_1 + 0x890;
              pcVar18 = *(char **)(pcVar18 + 8)) {
            FUN_003c4b20(pcVar18 + -0x40);
          }
          FUN_003b4ec0(&local_b0);
          FUN_003c4b20(pcVar3);
        }
      }
      param_1[0x528] = '\0';
      param_1[0x529] = '\0';
      param_1[0x52a] = '\0';
      param_1[0x52b] = '\0';
      param_1[0x52c] = '\0';
      param_1[0x52d] = '\0';
      param_1[0x52e] = '\0';
      param_1[0x52f] = '\0';
      param_1[0x511] = '\0';
      param_1[0x512] = '\0';
      param_1[0x513] = '\0';
      param_1[0x514] = '\0';
      param_1[0x515] = '\0';
      param_1[0x516] = '\0';
      param_1[0x517] = '\0';
      param_1[0x518] = '\0';
      param_1[0x519] = '\0';
      param_1[0x51a] = '\0';
      param_1[0x51b] = '\0';
      param_1[0x51c] = '\0';
      param_1[0x51d] = '\0';
      param_1[0x51e] = '\0';
      param_1[0x51f] = '\0';
      param_1[0x520] = '\0';
      param_1[0x521] = '\0';
      param_1[0x522] = '\0';
      param_1[0x523] = '\0';
      param_1[0x524] = '\0';
      param_1[0x525] = '\0';
      param_1[0x526] = '\0';
      param_1[0x527] = '\0';
      param_1[0x528] = '\0';
      param_1[0x510] = '\x01';
      *param_1 = '\x01';
      if (param_1[0x951] != '\0') {
        cVar8 = (char)param_8[9];
        cVar9 = *(char *)((long)param_8 + 0x1a);
        pcVar18 = param_1 + 0x5a8;
        iVar10 = 4;
        if (*(char *)((long)param_8 + 0x1b) == '\0') {
          iVar10 = 1;
        }
        uVar15 = 6;
        if (param_1[0x954] != '\0') {
          uVar15 = 2;
        }
        lVar14 = FUN_003c30ac(iVar10,uVar15,1,uVar15,cVar7 != '\0',1);
        FUN_003c3180(pcVar18,iVar10,uVar15,1,uVar15,cVar7 != '\0',1,lVar13,lVar14);
        FUN_003c4118(pcVar18,cVar8);
        if (cVar9 == '\0') {
          FUN_003c3cb0(pcVar18,pcVar3);
          iVar16 = 0;
          do {
            FUN_003c3ec0(0x3f800000,pcVar18,iVar16,0);
            iVar16 = iVar16 + 1;
          } while (iVar10 != iVar16);
          lVar13 = lVar13 + lVar14;
          cVar9 = *(char *)((long)param_8 + 0x19);
        }
        else {
          uVar12 = lVar13 + lVar14 + 7U & 0xfffffffffffffff8;
          lVar13 = FUN_003c30ac(1,uVar15,1,uVar15,cVar7 != '\0',1);
          pcVar5 = param_1 + 0x798;
          FUN_003c3180(pcVar5,1,uVar15,1,uVar15,cVar7 != '\0',1,uVar12,lVar13);
          FUN_003c4118(pcVar5,cVar8 != '\0');
          FUN_003c3cb0(pcVar18,pcVar5);
          FUN_003c3cb0(pcVar5,pcVar3);
          iVar16 = 0;
          do {
            FUN_003c3ec0(0x3f800000,pcVar18,iVar16,0);
            iVar16 = iVar16 + 1;
          } while (iVar10 != iVar16);
          lVar13 = uVar12 + lVar13;
          FUN_003c3ec0(0x3f800000,pcVar5,0,0);
          cVar9 = *(char *)((long)param_8 + 0x19);
        }
        if (cVar9 != '\0') {
          uVar11 = FUN_003c30ac(3,2,1,uVar15,cVar7 != '\0',1);
          param_1 = param_1 + 0x6a0;
          FUN_003c3180(param_1,3,2,1,uVar15,cVar7 != '\0',1,lVar13 + 7U & 0xfffffffffffffff8,uVar11)
          ;
          FUN_003c4118(param_1,cVar8 != '\0');
          FUN_003c3cb0(param_1,pcVar3);
          FUN_003c3ec0(0x3f800000,param_1,0,0);
          FUN_003c3ec0(0x3f800000,param_1,1,0);
          FUN_003c3ec0(0x3f800000,param_1,2,0);
        }
      }
      uVar11 = 0;
    }
    else {
      param_1[0xd0] = '\0';
      param_1[0xd1] = '\0';
      param_1[0xd2] = '\0';
      param_1[0xd3] = '\0';
      param_1[0xd4] = '\0';
      param_1[0xd5] = '\0';
      param_1[0xd6] = '\0';
      param_1[0xd7] = '\0';
    }
  }
  else {
    uVar11 = 0x2d1;
  }
  return uVar11;
}


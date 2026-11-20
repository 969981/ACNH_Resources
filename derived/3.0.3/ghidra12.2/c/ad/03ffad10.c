
undefined8 FUN_03ffad10(void *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  AudioRendererConfig *pAVar2;
  FinalMixType *pFVar3;
  VoiceType *pVVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  DeviceSinkType aDStack_b0 [8];
  int local_a8;
  int iStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  int local_68;
  undefined2 local_64 [2];
  
  *(undefined8 *)((long)param_1 + 0x18) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x200007d00;
  *(undefined8 *)((long)param_1 + 0x30) = 4;
  *(undefined8 *)((long)param_1 + 0x38) = 0x3f80000000000200;
  *(undefined8 *)((long)param_1 + 0xb51d0) = param_3;
  *(undefined8 *)((long)param_1 + 0x40) = 0x3f80a3d73f81eb85;
  *(undefined8 *)((long)param_1 + 0x48) = 0x3f7c28f63f7eb852;
  *(undefined1 *)((long)param_1 + 0x20) = 0;
  *(undefined8 *)((long)param_1 + 0x50) = 0x100000000800;
  memset((void *)((long)param_1 + 0x58),0,0x1032);
  *(undefined1 *)((long)param_1 + 0x108a) = 0;
  *(undefined1 *)((long)param_1 + 0x108b) = 0;
  *(undefined1 *)((long)param_1 + 0x108c) = 0;
  *(undefined1 *)((long)param_1 + 0x108d) = 0;
  *(undefined8 *)((long)param_1 + 0x18) = param_2;
  iVar9 = (int)(*(float *)((long)param_1 + 0x14) * 2048.0);
  *(int *)((long)param_1 + 0x58) = iVar9;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  *(int *)((long)param_1 + 0x60) = iVar9;
  *(int *)((long)param_1 + 100) = iVar9;
  *(int *)((long)param_1 + 0x68) = iVar9;
  *(int *)((long)param_1 + 0x6c) = iVar9;
  *(int *)((long)param_1 + 0x70) = iVar9;
  *(int *)((long)param_1 + 0x74) = iVar9;
  *(int *)((long)param_1 + 0x78) = iVar9 * 6;
  *(int *)((long)param_1 + 0x7c) = iVar9;
  if (*(char *)((long)param_1 + 8) != '\0') {
    return 0;
  }
  pvVar8 = (void *)((long)param_1 + 0xb1000);
  nn::mem::StandardAllocator::Initialize(pvVar8,(long)param_1 + 0x2000);
  pvVar5 = (void *)((long)param_1 + 0x1090);
  nn::mem::StandardAllocator::Initialize(pvVar5,(ulong)((long)param_1 + 0x34000));
  nn::audio::InitializeAudioRendererParameter((AudioRendererParameter *)&local_a8);
  local_a8 = *(int *)((long)param_1 + 0x24);
  local_a0 = 2;
  local_98 = 8;
  local_94 = 1;
  local_8c = 0;
  iStack_a4 = local_a8 / 200;
  local_64[0] = 0x100;
  uVar6 = nn::audio::IsValidAudioRendererParameter((AudioRendererParameter *)&local_a8);
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)((long)param_1 + 0xb1048);
    uVar6 = nn::audio::GetAudioRendererWorkBufferSize((AudioRendererParameter *)&local_a8);
    uVar7 = nn::mem::StandardAllocator::Allocate((ulong)pvVar8,uVar6);
    *(ulong *)((long)param_1 + 0xb10e8) = uVar7;
    uVar7 = nn::diag::detail::NotNullImpl(uVar7);
    if (((uVar7 & 1) != 0) &&
       (iVar9 = nn::audio::OpenAudioRenderer
                          ((AudioRendererHandle *)puVar1,(SystemEvent *)((long)param_1 + 0xb10f8),
                           (AudioRendererParameter *)&local_a8,*(void **)((long)param_1 + 0xb10e8),
                           uVar6), iVar9 == 0)) {
      uVar6 = nn::audio::GetAudioRendererConfigWorkBufferSize((AudioRendererParameter *)&local_a8);
      uVar7 = nn::mem::StandardAllocator::Allocate((ulong)pvVar8,uVar6);
      *(ulong *)((long)param_1 + 0xb10e0) = uVar7;
      uVar7 = nn::diag::detail::NotNullImpl(uVar7);
      if ((uVar7 & 1) != 0) {
        pAVar2 = (AudioRendererConfig *)((long)param_1 + 0xb1058);
        nn::audio::InitializeAudioRendererConfig
                  (pAVar2,(AudioRendererParameter *)&local_a8,*(void **)((long)param_1 + 0xb10e0),
                   uVar6);
        pFVar3 = (FinalMixType *)((long)param_1 + 0xb10d0);
        uVar6 = nn::audio::AcquireFinalMix(pAVar2,pFVar3,2);
        if ((uVar6 & 1) != 0) {
          local_68 = nn::audio::AddDeviceSink
                               (pAVar2,aDStack_b0,pFVar3,(signed *)local_64,2,"MainAudioOut");
          if ((local_68 == 0) &&
             (local_68 = nn::audio::StartAudioRenderer
                                   (*puVar1,*(undefined8 *)((long)param_1 + 0xb1050)), local_68 == 0
             )) {
            uVar6 = nn::audio::AcquireMemoryPool
                              (pAVar2,(MemoryPoolType *)((long)param_1 + 0xb10d8),
                               (void *)((long)param_1 + 0x34000),0x7d000);
            if (((uVar6 & 1) == 0) ||
               (uVar6 = nn::audio::RequestAttachMemoryPool
                                  ((MemoryPoolType *)((long)param_1 + 0xb10d8)), (uVar6 & 1) == 0))
            goto LAB_03ffb1e8;
            pVVar4 = (VoiceType *)((long)param_1 + 0xb10f0);
            nn::audio::AcquireVoiceSlot(pAVar2,pVVar4,local_a8,2,2,0,0,0);
            nn::audio::SetVoiceDestination(pAVar2,pVVar4,pFVar3);
            iVar9 = *(int *)((long)param_1 + 0x38);
            uVar6 = (long)iVar9 * 2 * (long)*(int *)((long)param_1 + 0x28);
            *(ulong *)((long)param_1 + 0xb1130) = uVar6;
            pvVar8 = (void *)nn::mem::StandardAllocator::Allocate((ulong)pvVar5,uVar6);
            *(void **)((long)param_1 + 0xb1128) = pvVar8;
            *(undefined4 *)((long)param_1 + 0xb1138) = 0;
            *(int *)((long)param_1 + 0xb113c) = iVar9;
            *(undefined2 *)((long)param_1 + 0xb1140) = 0;
            *(undefined8 *)((long)param_1 + 0xb1148) = 0;
            *(undefined8 *)((long)param_1 + 0xb1150) = 0;
            memset(pvVar8,0,*(size_t *)((long)param_1 + 0xb1130));
            nn::audio::AppendWaveBuffer(pVVar4,(WaveBuffer *)((long)param_1 + 0xb1128));
            uVar6 = (long)iVar9 * 2 * (long)*(int *)((long)param_1 + 0x28);
            *(ulong *)((long)param_1 + 0xb1170) = uVar6;
            pvVar8 = (void *)nn::mem::StandardAllocator::Allocate((ulong)pvVar5,uVar6);
            *(void **)((long)param_1 + 0xb1168) = pvVar8;
            *(undefined4 *)((long)param_1 + 0xb1178) = 0;
            *(int *)((long)param_1 + 0xb117c) = iVar9;
            *(undefined2 *)((long)param_1 + 0xb1180) = 0;
            *(undefined8 *)((long)param_1 + 0xb1188) = 0;
            *(undefined8 *)((long)param_1 + 0xb1190) = 0;
            memset(pvVar8,0,*(size_t *)((long)param_1 + 0xb1170));
            nn::audio::AppendWaveBuffer(pVVar4,(WaveBuffer *)((long)param_1 + 0xb1168));
            uVar6 = nn::audio::IsVoiceValid(pVVar4);
            if ((uVar6 & 1) == 0) {
              return 0xffffffff;
            }
            nn::audio::SetVoiceMixVolume(pVVar4,pFVar3,1.0,0,0);
            nn::audio::SetVoiceMixVolume(pVVar4,pFVar3,1.0,1,1);
            iVar9 = *(int *)((long)param_1 + 0xc);
            if ((float)iVar9 / 100.0 == 0.0) {
              fVar11 = 0.0;
            }
            else {
              fVar10 = expf(((float)iVar9 / 100.0) * 4.65);
              fVar11 = 0.0;
              if (0.0 <= fVar10 * 0.0095616) {
                fVar11 = fVar10 * 0.0095616;
              }
              iVar9 = *(int *)((long)param_1 + 0xc);
              fVar11 = (float)NEON_fminnm(fVar11,0x44160000);
            }
            *(undefined4 *)((long)param_1 + 0xb51cc) = 0;
            *(int *)((long)param_1 + 0xb51c4) = iVar9;
            *(int *)((long)param_1 + 0xb51c8) = (int)(fVar11 * 100.0 + 0.5);
            nn::audio::SetVoicePlayState(pVVar4,0);
            local_68 = nn::audio::RequestUpdateAudioRenderer
                                 (*puVar1,*(undefined8 *)((long)param_1 + 0xb1050),pAVar2);
            if (local_68 == 0) {
              *(undefined1 *)((long)param_1 + 0xb51c0) = 1;
              *(undefined1 *)((long)param_1 + 0xb51d8) = 0;
              local_68 = nn::os::CreateThread
                                   ((ThreadType *)((long)param_1 + 0xb5000),
                                    (_func_void_void_ptr *)&LAB_03ffb200,param_1,
                                    (void *)((long)param_1 + 0xb2000),0x3000,10);
              if (local_68 == 0) {
                nn::os::StartThread((ThreadType *)((long)param_1 + 0xb5000));
                return 0;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl((Result *)&local_68);
        }
      }
    }
  }
LAB_03ffb1e8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


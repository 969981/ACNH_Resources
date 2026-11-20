
void FUN_03ffda80(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  AudioOut *pAVar4;
  ulong uVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  long lVar10;
  undefined *puVar11;
  void *pvVar12;
  AudioOutBuffer *pAVar13;
  short *psVar14;
  int iVar15;
  ulong uVar16;
  short *psVar17;
  ulong uVar18;
  short *psVar19;
  long lVar20;
  short sVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  size_t __n;
  
  puVar11 = PTR_DAT_04bdf328;
  uVar6 = *(uint *)(param_1 + 0x4bc);
  uVar24 = (ulong)uVar6;
  pAVar4 = (AudioOut *)(param_1 + 8);
  __n = uVar24 * 0x800;
  pvVar12 = (void *)(**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))
                              (*(long **)PTR_DAT_04bdf328,__n,0x1000);
  *(void **)(param_1 + 0x4a8) = pvVar12;
  memset(pvVar12,0,__n);
  nn::audio::SetAudioOutBufferInfo
            ((AudioOutBuffer *)(param_1 + 0x458),*(void **)(param_1 + 0x4a8),__n,__n);
  nn::audio::AppendAudioOutBuffer(pAVar4,(AudioOutBuffer *)(param_1 + 0x458));
  pvVar12 = (void *)(**(code **)(**(long **)puVar11 + 0x10))(*(long **)puVar11,__n,0x1000);
  *(void **)(param_1 + 0x4b0) = pvVar12;
  memset(pvVar12,0,__n);
  nn::audio::SetAudioOutBufferInfo
            ((AudioOutBuffer *)(param_1 + 0x480),*(void **)(param_1 + 0x4b0),__n,__n);
  nn::audio::AppendAudioOutBuffer(pAVar4,(AudioOutBuffer *)(param_1 + 0x480));
  if (*(int *)(param_1 + 0x450) == 0) {
    uVar16 = (uVar24 * 0x400) / 6;
    uVar25 = uVar24 * 0x200;
    uVar5 = uVar25;
    if (uVar24 == 0 || uVar25 == 1) {
      uVar5 = 1;
    }
    iVar15 = (int)uVar16;
    uVar9 = iVar15 - 1;
    do {
      nn::os::WaitSystemEvent((SystemEventType *)(param_1 + 0x170));
      pAVar13 = (AudioOutBuffer *)nn::audio::GetReleasedAudioOutBuffer(pAVar4);
      if (pAVar13 != (AudioOutBuffer *)0x0) {
        do {
          psVar14 = (short *)nn::audio::GetAudioOutBufferDataPointer(pAVar13);
          nn::os::LockMutex((MutexType *)(param_1 + 0x518));
          if (*(int *)(param_1 + 0x4b8) == 4) {
            FUN_03ffed60(param_1,psVar14,uVar16 << 2);
            if (-1 < (int)uVar9) {
              psVar17 = psVar14 + (ulong)uVar9 * 6 + 3;
              lVar20 = (ulong)(uVar9 * 3) << 0x21;
              lVar22 = (ulong)uVar9 + 1;
              iVar2 = iVar15 * 4;
              do {
                lVar10 = lVar22 + -1;
                sVar8 = psVar14[iVar2 + -3];
                sVar21 = psVar14[iVar2 + -2];
                sVar7 = psVar14[iVar2 + -1];
                psVar17[-3] = psVar14[iVar2 + -4];
                uVar18 = lVar20 >> 0x1f;
                lVar20 = lVar20 + -0x600000000;
                *(short *)((long)psVar14 + (uVar18 | 2)) = sVar8;
                psVar17[-1] = 0;
                psVar17[0] = 0;
                psVar17[1] = sVar21;
                psVar17[2] = sVar7;
                psVar17 = psVar17 + -6;
                bVar1 = 0 < lVar22;
                lVar22 = lVar10;
                iVar2 = iVar2 + -4;
              } while (lVar10 != 0 && bVar1);
            }
          }
          else if (*(int *)(param_1 + 0x4b8) == 1) {
            FUN_03ffed60(param_1,psVar14,uVar25);
            if ((uVar6 != 0) && (*(char *)(param_1 + 0x1a0) != '\0')) {
              psVar17 = psVar14;
              uVar18 = uVar5;
              do {
                lVar20 = *(long *)(param_1 + 0x1d8);
                sVar8 = *psVar17;
                if (*(long *)(param_1 + 0x1e0) == lVar20) {
                  sVar21 = 0;
                }
                else {
                  sVar21 = *(short *)(*(long *)(param_1 + 0x1c0) + lVar20 * 2);
                  uVar23 = 0;
                  if (*(ulong *)(param_1 + 0x1a8) <= lVar20 + 1U) {
                    uVar23 = *(ulong *)(param_1 + 0x1a8);
                  }
                  *(ulong *)(param_1 + 0x1d8) = (lVar20 + 1U) - uVar23;
                }
                iVar2 = (int)sVar8 + (int)sVar21;
                uVar3 = iVar2 + 2;
                if (-1 < iVar2 + 1) {
                  uVar3 = iVar2 + 1;
                }
                uVar18 = uVar18 - 1;
                *psVar17 = (short)(uVar3 >> 1);
                psVar17 = psVar17 + 1;
              } while (uVar18 != 0);
            }
            if (uVar6 != 0) {
              uVar18 = 0;
              psVar17 = psVar14 + uVar24 * 0x400 + -2;
              psVar19 = psVar14 + uVar24 * 0x200 + -1;
              do {
                sVar8 = *psVar19;
                uVar23 = uVar18 ^ 0x7ffffffffffffffe;
                uVar18 = uVar18 + 2;
                *psVar17 = sVar8;
                psVar17[1] = sVar8;
                sVar8 = psVar14[uVar25 + uVar23];
                psVar17[-2] = sVar8;
                psVar17[-1] = sVar8;
                psVar17 = psVar17 + -4;
                psVar19 = psVar19 + -2;
              } while (uVar5 != uVar18);
            }
          }
          else {
            FUN_03ffed60(param_1,psVar14,uVar24 * 0x400);
            if (*(char *)(param_1 + 0x1a0) != '\0') {
              FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
            }
          }
          nn::audio::AppendAudioOutBuffer(pAVar4,pAVar13);
          pAVar13 = (AudioOutBuffer *)nn::audio::GetReleasedAudioOutBuffer(pAVar4);
        } while (pAVar13 != (AudioOutBuffer *)0x0);
      }
    } while (*(int *)(param_1 + 0x450) == 0);
  }
  return;
}


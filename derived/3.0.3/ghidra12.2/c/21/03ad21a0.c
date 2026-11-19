
void FUN_03ad21a0(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  MutexType *pMVar5;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined *local_80;
  char *pcStack_78;
  undefined *local_70;
  char *pcStack_68;
  
  plVar2 = (long *)(param_1 + 8);
  lVar18 = *(long *)(*(long *)(param_3 + 0x10) + 0x20);
  FUN_003a24c0(plVar2);
  puVar4 = PTR_DAT_04bb2020;
  if (lVar18 != 0) {
    lVar13 = *plVar2;
    if (*(short *)(lVar18 + 0x46) != 0) {
      uVar14 = 0;
      puVar3 = PTR_DAT_04bb2020 + 0x10;
      do {
        if (*(long *)(lVar18 + 0x38) == 0) {
          lVar17 = *(long *)(lVar13 + 0x10);
          pcStack_68 = (char *)0x0;
          if (lVar17 != 0) {
            pcVar15 = (char *)0x0;
            sVar8 = 0;
            local_70 = puVar3;
            goto LAB_03ad2268;
          }
        }
        else {
          lVar17 = *(long *)(lVar13 + 0x10);
          pcVar15 = (char *)(*(long *)(*(long *)(lVar18 + 0x38) + uVar14 * 0x10 + 0x20) + 2);
          local_70 = puVar4 + 0x10;
          if (lVar17 != 0) {
            pcStack_68 = pcVar15;
            sVar8 = strlen(pcVar15);
LAB_03ad2268:
            uVar9 = (ulong)*(ushort *)(lVar17 + 0xc);
            puVar11 = (uint *)((int *)(lVar17 + 8) + uVar9 * 4);
            uVar6 = *puVar11;
            if (*(int *)(lVar17 + 8) < (int)*puVar11) {
              do {
                uVar16 = (long)((ulong)uVar6 << 0x20) >> 0x23;
                if (uVar16 < sVar8) {
                  uVar16 = (ulong)((byte)pcVar15[sVar8 + ~uVar16] >> ((ulong)uVar6 & 7)) & 1;
                }
                else {
                  uVar16 = 0;
                }
                uVar9 = (ulong)*(ushort *)(lVar17 + 8 + uVar9 * 0x10 + uVar16 * 2 + 4);
                puVar11 = (uint *)(lVar17 + 8 + uVar9 * 0x10);
                bVar1 = (int)uVar6 < (int)*puVar11;
                uVar6 = *puVar11;
              } while (bVar1);
            }
            if ((sVar8 == **(ushort **)(puVar11 + 2)) &&
               (iVar7 = memcmp(*(ushort **)(puVar11 + 2) + 1,pcVar15,sVar8), iVar7 == 0)) {
              uVar9 = (long)puVar11 + (-0x18 - lVar17);
              uVar16 = uVar9 >> 4;
              if ((int)uVar16 != -1) {
                lVar17 = *(long *)(lVar13 + 8);
                pcVar15 = (char *)(*(long *)(*(long *)(lVar18 + 0x30) + uVar14 * 8) + 2);
                if (param_4 != (undefined8 *)0x0) {
                  local_80 = puVar4 + 0x10;
                  pcStack_78 = pcVar15;
                  (**(code **)*param_4)(param_4,&local_70,&local_80,param_2,param_3,param_1);
                }
                lVar17 = *(long *)(lVar17 + (long)(int)(uVar9 * 0x10000000 >> 0x20) * 0x28 + 8);
                if (lVar17 != 0) {
                  sVar8 = strlen(pcVar15);
                  uVar9 = (ulong)*(ushort *)(lVar17 + 0xc);
                  puVar11 = (uint *)((int *)(lVar17 + 8) + uVar9 * 4);
                  uVar6 = *puVar11;
                  if (*(int *)(lVar17 + 8) < (int)*puVar11) {
                    do {
                      uVar10 = (long)((ulong)uVar6 << 0x20) >> 0x23;
                      if (uVar10 < sVar8) {
                        uVar10 = (ulong)((byte)pcVar15[sVar8 + ~uVar10] >> ((ulong)uVar6 & 7)) & 1;
                      }
                      else {
                        uVar10 = 0;
                      }
                      uVar9 = (ulong)*(ushort *)(lVar17 + 8 + uVar9 * 0x10 + uVar10 * 2 + 4);
                      puVar11 = (uint *)(lVar17 + 8 + uVar9 * 0x10);
                      bVar1 = (int)uVar6 < (int)*puVar11;
                      uVar6 = *puVar11;
                    } while (bVar1);
                  }
                  if ((sVar8 == **(ushort **)(puVar11 + 2)) &&
                     (iVar7 = memcmp(*(ushort **)(puVar11 + 2) + 1,pcVar15,sVar8), iVar7 == 0)) {
                    if ((int)((ulong)((long)puVar11 + (-0x18 - lVar17)) >> 4) != -1) {
                      FUN_003a2578(plVar2,uVar16 & 0xffffffff);
                    }
                  }
                }
              }
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(ushort *)(lVar18 + 0x46));
    }
    lVar18 = ((ulong)*(byte *)(param_3 + 0x71) & 7) - 1;
    if ((uint)lVar18 < 5) {
      lVar18 = *(long *)(&DAT_041e0118 + lVar18 * 8);
    }
    else {
      lVar18 = 0;
    }
    puVar4 = puVar4 + 0x10;
    uVar6 = *(byte *)(param_3 + 0xe2) - 2;
    lVar12 = *(long *)(&DAT_04058780 + ((ulong)*(byte *)(param_3 + 0x72) & 3) * 8);
    pcStack_68 = "gsys_renderstate";
    lVar17 = 0;
    if (uVar6 < 7) {
      lVar17 = ((ulong)uVar6 & 0xff) + 1;
    }
    local_70 = puVar4;
    FUN_03ad25a0(plVar2,&local_70,(&PTR_DAT_04b713e8)[lVar18],lVar13);
    pcStack_68 = "gsys_alpha_test_func";
    local_70 = puVar4;
    FUN_03ad25a0(plVar2,&local_70,(&PTR_DAT_04b713e8)[lVar17],lVar13);
    pcStack_68 = "gsys_alpha_test_enable";
    local_70 = puVar4;
    FUN_03ad25a0(plVar2,&local_70,(&PTR_DAT_04b713e8)[*(byte *)(param_3 + 0x7e)],lVar13);
    pcStack_68 = "gsys_pass";
    local_70 = puVar4;
    FUN_03ad25a0(plVar2,&local_70,(&PTR_DAT_04b713e8)[*(byte *)(param_3 + 0x75)],lVar13);
    pcStack_68 = "gsys_display_face_type";
    local_70 = puVar4;
    FUN_03ad25a0(plVar2,&local_70,(&PTR_DAT_04b713e8)[lVar12],lVar13);
    if (*(long *)(lVar13 + 200) == 0) {
      FUN_003a0160(*(undefined8 *)(param_1 + 8),param_1 + 0x28,*(undefined8 *)(param_1 + 0x18));
    }
    else {
      pMVar5 = (MutexType *)(*(long *)(lVar13 + 200) + 0x20);
      nn::os::LockMutex(pMVar5);
      FUN_003a0160(*(undefined8 *)(param_1 + 8),param_1 + 0x28,*(undefined8 *)(param_1 + 0x18));
      nn::os::UnlockMutex(pMVar5);
    }
    FUN_003a22a0(plVar2,0);
  }
  return;
}



long FUN_03bc7490(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x80));
  uVar6 = (ulong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    plVar8 = *(long **)(param_1 + 0x18);
    do {
      lVar10 = *plVar8;
      if (*(char *)(lVar10 + 0x79) == '\0') {
        (**(code **)(*(long *)(lVar10 + 8) + 0x10))((long *)(lVar10 + 8),param_2);
        puVar3 = PTR_DAT_04bc3ee8;
        uVar4 = FUN_03b3e4f0(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 8),param_3,param_2);
        *(undefined8 *)(lVar10 + 0xb0) = uVar4;
        FUN_03bc4ab0(lVar10);
        uVar7 = *(uint *)(lVar10 + 0x80);
        *(undefined1 *)(lVar10 + 0x79) = 1;
        if (0 < (int)uVar7) {
          fVar11 = *(float *)(param_1 + 0x54);
          uVar5 = 0;
          do {
            uVar2 = uVar5;
            if (uVar7 <= uVar5) {
              uVar2 = 0;
            }
            if (fVar11 == 0.0) {
              fVar12 = 3.4028235e+38;
            }
            else {
              fVar12 = fVar11 * *(float *)(*(long *)(*(long *)puVar3 + 0x10) + 0x20);
              fVar12 = fVar12 * fVar12;
            }
            uVar5 = uVar5 + 1;
            *(float *)(*(long *)(lVar10 + 0x88) + (ulong)uVar2 * 0x28 + 0x18) = fVar12;
            uVar7 = *(uint *)(lVar10 + 0x80);
          } while ((int)uVar5 < (int)uVar7);
        }
        plVar8 = (long *)(*(int *)(param_1 + 0x34) + lVar10);
        if (plVar8[1] == 0 && *plVar8 == 0) {
          plVar1 = (long *)(param_1 + 0x20);
          if (0 < (int)uVar7) {
            fVar11 = *(float *)(param_1 + 0x54);
            uVar5 = 0;
            do {
              uVar2 = uVar5;
              if (uVar7 <= uVar5) {
                uVar2 = 0;
              }
              if (fVar11 == 0.0) {
                fVar12 = 3.4028235e+38;
              }
              else {
                fVar12 = fVar11 * *(float *)(*(long *)(*(long *)puVar3 + 0x10) + 0x20);
                fVar12 = fVar12 * fVar12;
              }
              uVar5 = uVar5 + 1;
              *(float *)(*(long *)(lVar10 + 0x88) + (ulong)uVar2 * 0x28 + 0x18) = fVar12;
              uVar7 = *(uint *)(lVar10 + 0x80);
            } while ((int)uVar5 < (int)uVar7);
            plVar8 = (long *)(*(int *)(param_1 + 0x34) + lVar10);
          }
          lVar9 = *plVar1;
          *plVar1 = (long)plVar8;
          *plVar8 = lVar9;
          plVar8[1] = (long)plVar1;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 8) = plVar8;
          }
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        }
        goto LAB_03bc74ec;
      }
      plVar8 = plVar8 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  lVar10 = 0;
LAB_03bc74ec:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x80));
  return lVar10;
}


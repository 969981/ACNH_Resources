
void FUN_03c0a390(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined2 *puVar9;
  long *plVar10;
  long lVar11;
  undefined *local_90;
  undefined2 *local_88;
  undefined4 local_80;
  undefined2 local_7c [20];
  undefined2 local_54;
  
  lVar5 = *(long *)PTR_DAT_04bcb7d8;
  nn::os::LockMutex((MutexType *)(lVar5 + 0xd0));
  if (param_3 == 3) {
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 != 0) {
      puVar6 = *(undefined8 **)(param_1 + 0x20);
      lVar11 = (long)iVar4 << 3;
      iVar7 = 1;
      do {
        plVar10 = (long *)*puVar6;
        if ((*plVar10 == *param_2) && ((char)plVar10[1] == (char)param_2[1])) {
          if (iVar7 + -1 < iVar4) {
            uVar1 = iVar4 - iVar7;
            if (uVar1 != 0 && iVar7 <= iVar4) {
              memmove(puVar6,puVar6 + 1,
                      -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
              iVar4 = *(int *)(param_1 + 0x18);
            }
            *(int *)(param_1 + 0x18) = iVar4 + -1;
          }
          if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
            *(long **)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = plVar10;
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          }
          break;
        }
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
  }
  else if (param_3 == 2) {
    local_54 = 0;
    local_80 = 0x15;
    local_88 = local_7c;
    local_7c[0] = 0;
    local_90 = PTR_DAT_04bc13e0 + 0x10;
    uVar3 = FUN_038779a0(&local_90,param_2);
    if ((uVar3 & 1) != 0) {
      lVar11 = *param_2;
      if (*(int *)(param_1 + 0x18) != 0) {
        puVar6 = *(undefined8 **)(param_1 + 0x20);
        lVar8 = (long)*(int *)(param_1 + 0x18) << 3;
        do {
          plVar10 = (long *)*puVar6;
          if ((*plVar10 == lVar11) && ((char)plVar10[1] == (char)param_2[1])) {
            puVar9 = (undefined2 *)plVar10[3];
            (**(code **)(local_90 + 0x18))(&local_90);
            puVar2 = local_88;
            if (puVar9 == local_88) goto LAB_03c0a6d4;
            (**(code **)(local_90 + 0x18))(&local_90);
            lVar8 = 0;
            goto LAB_03c0a4a8;
          }
          puVar6 = puVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      if (0 < *(int *)(param_1 + 0x28)) {
        puVar6 = *(undefined8 **)(param_1 + 0x30);
        plVar10 = (long *)*puVar6;
        memmove(puVar6,puVar6 + 1,(long)(*(int *)(param_1 + 0x28) * 8 + -8));
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        if (plVar10 != (long *)0x0) {
          lVar8 = *param_2;
          *(short *)(plVar10 + 1) = (short)param_2[1];
          *plVar10 = lVar8;
          puVar9 = (undefined2 *)plVar10[3];
          (**(code **)(local_90 + 0x18))(&local_90);
          puVar2 = local_88;
          if (puVar9 != local_88) {
            (**(code **)(local_90 + 0x18))(&local_90);
            lVar8 = 0;
            do {
              if (local_88[lVar8] == 0) goto LAB_03c0a64c;
              if (local_88[lVar8 + 1] == 0) {
                lVar8 = lVar8 + 1;
                goto LAB_03c0a64c;
              }
              if (local_88[lVar8 + 2] == 0) {
                lVar8 = lVar8 + 2;
                goto LAB_03c0a64c;
              }
              lVar8 = lVar8 + 3;
            } while (lVar8 != 0x80001);
            lVar8 = 0;
LAB_03c0a64c:
            uVar1 = (uint)lVar8;
            if ((int)plVar10[4] <= (int)(uint)lVar8) {
              uVar1 = (int)plVar10[4] - 1;
            }
            uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
            memcpy(puVar9,puVar2,uVar3);
            *(undefined2 *)((long)puVar9 + uVar3) = 0;
          }
          plVar10[9] = lVar11;
          if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x1c)) {
            *(long **)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x18) * 8) = plVar10;
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          }
        }
      }
    }
  }
  goto LAB_03c0a6d8;
  while( true ) {
    if (local_88[lVar8 + 1] == 0) {
      lVar8 = lVar8 + 1;
      goto LAB_03c0a6ac;
    }
    if (local_88[lVar8 + 2] == 0) {
      lVar8 = lVar8 + 2;
      goto LAB_03c0a6ac;
    }
    lVar8 = lVar8 + 3;
    if (lVar8 == 0x80001) break;
LAB_03c0a4a8:
    if (local_88[lVar8] == 0) goto LAB_03c0a6ac;
  }
  lVar8 = 0;
LAB_03c0a6ac:
  uVar1 = (uint)lVar8;
  if ((int)plVar10[4] <= (int)(uint)lVar8) {
    uVar1 = (int)plVar10[4] - 1;
  }
  uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  memcpy(puVar9,puVar2,uVar3);
  *(undefined2 *)((long)puVar9 + uVar3) = 0;
LAB_03c0a6d4:
  plVar10[9] = lVar11;
LAB_03c0a6d8:
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0xd0));
  return;
}


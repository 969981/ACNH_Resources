
void FUN_03453920(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *__dest;
  uint uVar3;
  int iVar4;
  size_t __n;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_140;
  long local_130 [30];
  
  puVar1 = PTR_DAT_04bb2200;
  plVar6 = local_130;
  local_140 = 0x1e00000000;
  if (*(int *)(param_1 + 0x5b0) != 0) {
    plVar7 = *(long **)(param_1 + 0x5b8);
    lVar8 = (long)*(int *)(param_1 + 0x5b0) << 3;
    do {
      lVar5 = *plVar7;
      if ((*(ushort *)(lVar5 + 0x10) >> 1 & 1) == 0) {
LAB_034539a8:
        if ((int)local_140 < local_140._4_4_) {
          plVar6[(int)local_140] = lVar5;
          local_140 = CONCAT44(local_140._4_4_,(int)local_140 + 1);
        }
      }
      else {
        uVar2 = FUN_01596728(lVar5);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(*(long *)puVar1 + 0x100) != 0) {
            FUN_015a30c0(*(long *)(*(long *)puVar1 + 0x100),lVar5);
          }
          goto LAB_034539a8;
        }
      }
      plVar7 = plVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
    if ((int)local_140 != 0) {
      plVar7 = plVar6 + (int)local_140;
      do {
        lVar8 = *plVar6;
        if (*(int *)(param_1 + 0x4b0) < *(int *)(param_1 + 0x4b4)) {
          *(long *)(*(long *)(param_1 + 0x4b8) + (long)*(int *)(param_1 + 0x4b0) * 8) = lVar8;
          *(int *)(param_1 + 0x4b0) = *(int *)(param_1 + 0x4b0) + 1;
        }
        uVar3 = *(uint *)(param_1 + 0x5b0);
        if (0 < (int)uVar3) {
          __dest = *(long **)(param_1 + 0x5b8);
          uVar2 = 0;
          __n = (long)(int)uVar3 * 8;
          do {
            __n = __n - 8;
            if (*__dest == lVar8) {
              iVar4 = (int)uVar2;
              if ((-1 < iVar4) && (iVar4 < (int)uVar3)) {
                if (iVar4 + 1 < (int)uVar3) {
                  memmove(__dest,__dest + 1,__n);
                  uVar3 = *(uint *)(param_1 + 0x5b0);
                }
                *(uint *)(param_1 + 0x5b0) = uVar3 - 1;
              }
              break;
            }
            uVar2 = uVar2 + 1;
            __dest = __dest + 1;
          } while (uVar3 != uVar2);
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar7);
    }
  }
  return;
}


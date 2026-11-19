
void FUN_03bac100(float param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_04bc3ee8;
  if (0.0 < param_1) {
    lVar5 = *(long *)(param_2 + 0x10);
    if ((lVar5 != 0) && (uVar2 = *(uint *)(lVar5 + 8), 0 < (int)uVar2)) {
      uVar6 = 0;
      do {
        if ((uVar6 < uVar2) && (lVar4 = *(long *)(*(long *)(lVar5 + 0x10) + uVar6 * 8), lVar4 != 0))
        {
          lVar3 = *(long *)puVar1;
          *(float *)(lVar4 + 0x18) = param_1;
          if ((lVar3 != 0) && (*(long *)(lVar3 + 0x38) != 0)) {
            FUN_03bc7350();
          }
          uVar2 = *(uint *)(lVar5 + 8);
        }
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar2);
    }
    puVar1 = PTR_DAT_04bc3ee8;
    lVar5 = *(long *)(param_2 + 0x18);
    if ((lVar5 != 0) && (uVar2 = *(uint *)(lVar5 + 8), 0 < (int)uVar2)) {
      uVar6 = 0;
      do {
        if ((uVar6 < uVar2) && (lVar4 = *(long *)(*(long *)(lVar5 + 0x10) + uVar6 * 8), lVar4 != 0))
        {
          lVar3 = *(long *)puVar1;
          *(float *)(lVar4 + 0x18) = param_1;
          if ((lVar3 != 0) && (*(long *)(lVar3 + 0x38) != 0)) {
            FUN_03bc7350();
          }
          uVar2 = *(uint *)(lVar5 + 8);
        }
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar2);
    }
  }
  return;
}


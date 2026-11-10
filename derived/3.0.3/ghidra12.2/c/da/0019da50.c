
void FUN_0019da50(long param_1,void *param_2,ulong param_3)

{
  void *pvVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  void *__dest;
  void *pvVar8;
  void *pvVar9;
  
  if (param_3 != 0) {
    __dest = *(void **)(param_1 + 0x20);
    pvVar6 = *(void **)(param_1 + 0x28);
    uVar7 = 0;
    if (pvVar6 != __dest) {
      uVar7 = (long)((int)pvVar6 - (int)__dest);
    }
    while (uVar7 < param_3) {
      while( true ) {
        pvVar8 = *(void **)(param_1 + 0x10);
        lVar5 = 0;
        if (__dest != pvVar8) {
          lVar5 = (long)((int)__dest - (int)pvVar8);
        }
        uVar2 = 0;
        if (pvVar6 != pvVar8) {
          uVar2 = (int)pvVar6 - (int)pvVar8;
        }
        uVar7 = lVar5 + param_3;
        if (2 < uVar2 + 1) {
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 1;
          }
          uVar3 = (long)((ulong)uVar2 << 0x20) >> 0x21;
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar7 / uVar3;
          }
          uVar7 = uVar3 + uVar3 * uVar4;
        }
        pvVar9 = *(void **)(param_1 + 0x18);
        if (uVar7 < 0xb) {
          uVar7 = 10;
        }
        lVar5 = FUN_00187df4(uVar7);
        pvVar6 = (void *)(lVar5 + uVar7);
        pvVar1 = (void *)(lVar5 + *(long *)(param_1 + 0x30));
        *(void **)(param_1 + 0x20) = pvVar1;
        *(void **)(param_1 + 0x28) = pvVar6;
        *(long *)(param_1 + 0x10) = lVar5;
        *(void **)(param_1 + 0x18) = pvVar1;
        if (pvVar8 == (void *)0x0) break;
        lVar5 = 0;
        if (__dest != pvVar9) {
          lVar5 = (long)((int)__dest - (int)pvVar9);
        }
        FUN_0019da50(param_1,pvVar8,lVar5);
        FUN_00187e4c(pvVar8);
        __dest = *(void **)(param_1 + 0x20);
        pvVar6 = *(void **)(param_1 + 0x28);
        uVar7 = 0;
        if (pvVar6 != __dest) {
          uVar7 = (long)((int)pvVar6 - (int)__dest);
        }
        if (param_3 <= uVar7) goto LAB_0019db74;
      }
      __dest = pvVar1;
      uVar7 = 0;
      if (pvVar6 != pvVar1) {
        uVar7 = (long)((int)pvVar6 - (int)pvVar1);
      }
    }
LAB_0019db74:
    memcpy(__dest,param_2,param_3);
    *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + param_3;
  }
  return;
}


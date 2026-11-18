
/* WARNING: Removing unreachable block (ram,0x036dabf8) */

void FUN_036dab00(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  void *pvVar6;
  undefined2 uVar7;
  void *__dest;
  long lVar8;
  undefined *local_40;
  char *pcStack_38;
  
  if ((*(int *)(param_1 + 0x10) != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    if (*(int *)(param_1 + 0x14) == 2) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "SeqShareHouseOngoing";
      iVar3 = FUN_02758850(&local_40);
      if (iVar3 == 0) {
        if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
             ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
           (lVar8 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar8 == 0)) {
          uVar7 = *(undefined2 *)(param_1 + 0x2a);
        }
        else if ((*(long **)(lVar8 + 0x60) == (long *)0x0) ||
                (puVar4 = (undefined8 *)**(long **)(lVar8 + 0x60), puVar4 == (undefined8 *)0x0)) {
          uVar7 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
        }
        else {
          uVar5 = (**(code **)*puVar4)();
          uVar7 = *(undefined2 *)(*(long *)(lVar8 + 0x48) + *(long *)(lVar8 + 0x40) + 2);
          if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x60) != 0)) &&
             (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x60) + 8), puVar4 != (undefined8 *)0x0))
          {
            (**(code **)*puVar4)();
          }
        }
        FUN_03760540(uVar7);
      }
    }
    *(undefined2 *)(param_1 + 2) = 0;
    local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 8) = 0x500000000;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x2a) = 0xffffffffffffffff;
    puVar1 = PTR_DAT_04bb37e0;
    *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)puVar1;
    *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(puVar1 + 2);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(puVar1 + 4);
    if (0 < *(int *)(param_1 + 0x40)) {
      lVar8 = 0;
      do {
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x48) + lVar8 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar8 = lVar8 + 1;
        *puVar4 = *(undefined8 *)(param_1 + 0x50);
        *(undefined8 **)(param_1 + 0x50) = puVar4;
      } while (lVar8 < *(int *)(param_1 + 0x40));
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0x28) = 0;
    *(undefined2 *)(param_1 + 0xdc) = 0;
    *(undefined8 *)(param_1 + 0xd4) = 0x500000005;
    if (0 < *(int *)(param_1 + 0xe0)) {
      lVar8 = 0;
      do {
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + lVar8 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar8 = lVar8 + 1;
        *puVar4 = *(undefined8 *)(param_1 + 0xf0);
        *(undefined8 **)(param_1 + 0xf0) = puVar4;
      } while (lVar8 < *(int *)(param_1 + 0xe0));
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
    lVar8 = DAT_05ab5248;
    *(undefined2 *)(param_1 + 0xd0) = 0;
    __dest = *(void **)(param_1 + 0x1a98);
    (**(code **)(lVar8 + 0x18))(&DAT_05ab5248);
    pvVar6 = DAT_05ab5250;
    if (__dest != DAT_05ab5250) {
      (**(code **)(DAT_05ab5248 + 0x18))(&DAT_05ab5248);
      lVar8 = 0;
      do {
        if (*(char *)((long)DAT_05ab5250 + lVar8) == '\0') goto LAB_036dad60;
        if (*(char *)((long)DAT_05ab5250 + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_036dad60;
        }
        if (*(char *)((long)DAT_05ab5250 + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_036dad60;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_036dad60:
      iVar3 = (int)lVar8;
      if (*(int *)(param_1 + 0x1aa0) <= (int)lVar8) {
        iVar3 = *(int *)(param_1 + 0x1aa0) + -1;
      }
      memcpy(__dest,pvVar6,(long)iVar3);
      *(undefined1 *)((long)__dest + (long)iVar3) = 0;
    }
    *(undefined2 *)(param_1 + 0x398) = 0;
    uVar2 = DAT_05ab5280;
    *(undefined4 *)(param_1 + 0x39a) = 0x101;
    *(undefined1 *)(param_1 + 0x39e) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x3a5) = 0;
    *(undefined4 *)(param_1 + 0x1ac8) = uVar2;
    FUN_033d0c90();
    FUN_033d1c60();
    pvVar6 = (void *)(**(code **)(*(long *)(param_1 + 0x3b0) + 0x18))(param_1 + 0x3b0);
    memset(pvVar6,0,0x754);
    pvVar6 = (void *)(**(code **)(*(long *)(param_1 + 0xb20) + 0x18))(param_1 + 0xb20);
    memset(pvVar6,0,0x754);
    *(uint *)(param_1 + 0x1a70) = *(uint *)(param_1 + 0x1a70) & 0xfff07e4d;
  }
  return;
}


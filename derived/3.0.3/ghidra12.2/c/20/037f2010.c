
int FUN_037f2010(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  uint uVar9;
  ulong uVar10;
  
  iVar3 = FUN_037bd7b0();
  if (((DAT_05ad5830 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05ad5830), iVar4 != 0)) {
    FUN_03790f90(&DAT_05ad57c0,&DAT_04093ed9,0,100,0);
    __cxa_guard_release(&DAT_05ad5830);
  }
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
    *(undefined **)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = &DAT_05ad57c0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  if (((DAT_05ad58d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05ad58d0), iVar4 != 0)) {
    FUN_03790e60(&DAT_05ad5838,&DAT_0406459a,0);
    FUN_001001d0(PTR_LAB_04bcad60,&DAT_05ad5838,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05ad58d0);
  }
  if (DAT_05ad58a0 == 0) {
    *DAT_05ad58a8 = &DAT_04b55748;
    *(undefined4 *)(DAT_05ad58a8 + (long)(int)DAT_05ad58a0 * 2 + 1) = 0;
    puVar6 = DAT_05ad58a8;
    uVar9 = DAT_05ad58a0 + 1;
    bVar1 = -1 < (int)DAT_05ad58a0;
    DAT_05ad58a0 = uVar9;
    if (bVar1) {
      puVar7 = DAT_05ad58a8;
      uVar10 = (ulong)uVar9;
      do {
        iVar4 = strcmp((char *)*puVar7,&DAT_04b5574f);
        if (iVar4 == 0) goto LAB_037f212c;
        uVar10 = uVar10 - 1;
        puVar7 = puVar7 + 2;
      } while (uVar10 != 0);
    }
    *(undefined **)
     ((long)puVar6 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar9 << 4)) =
         &DAT_04b5574f;
    *(undefined4 *)(DAT_05ad58a8 + (long)(int)DAT_05ad58a0 * 2 + 1) = 1;
    DAT_05ad58a0 = DAT_05ad58a0 + 1;
  }
LAB_037f212c:
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
    *(undefined **)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = &DAT_05ad5838;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  if (((DAT_05ad5b20 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05ad5b20), iVar4 != 0)) {
    FUN_037ac1c0(&DAT_05ad58d8,&DAT_0407411d,0);
    FUN_001001d0(PTR_LAB_04bcaed8,&DAT_05ad58d8,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05ad5b20);
  }
  puVar2 = PTR_s_Invalid_04bcb0b8;
  if (DAT_05ad5940 == 0) {
    uVar10 = 0;
    uVar9 = 0;
    do {
      while (puVar6 = DAT_05ad5948, uVar9 < 0x1d) {
        pcVar8 = *(char **)(puVar2 + (ulong)uVar9 * 8 + 0x380);
        if (0 < (int)uVar10) {
          uVar5 = uVar10;
          puVar7 = DAT_05ad5948;
          do {
            iVar4 = strcmp((char *)*puVar7,pcVar8);
            if (iVar4 == 0) goto LAB_037f2294;
            uVar5 = uVar5 - 1;
            puVar7 = puVar7 + 2;
          } while (uVar5 != 0);
        }
        *(char **)((long)puVar6 + (-(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4)) = pcVar8;
        *(uint *)(DAT_05ad5948 + (long)(int)DAT_05ad5940 * 2 + 1) = uVar9;
        DAT_05ad5940 = DAT_05ad5940 + 1;
        uVar10 = (ulong)DAT_05ad5940;
LAB_037f2294:
        uVar9 = uVar9 + 1;
        if (uVar9 == 0x1d) goto LAB_037f2174;
      }
      if (0 < (int)uVar10) {
        uVar5 = uVar10;
        do {
          if (*(char *)*puVar6 == '\0') goto LAB_037f2304;
          uVar5 = uVar5 - 1;
          puVar6 = puVar6 + 2;
        } while (uVar5 != 0);
      }
      *(undefined8 **)((long)DAT_05ad5948 + (-(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4))
           = &DAT_0407ebb1;
      *(uint *)(DAT_05ad5948 + (long)(int)DAT_05ad5940 * 2 + 1) = uVar9;
      DAT_05ad5940 = DAT_05ad5940 + 1;
      uVar10 = (ulong)DAT_05ad5940;
LAB_037f2304:
      bVar1 = (int)uVar9 < 0x1c;
      uVar9 = uVar9 + 1;
    } while (bVar1);
  }
LAB_037f2174:
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
    *(undefined **)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = &DAT_05ad58d8;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  if (((DAT_05ad5b98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05ad5b98), iVar4 != 0)) {
    FUN_03790f90(&DAT_05ad5b28,&DAT_04083c77,0,2,0);
    __cxa_guard_release(&DAT_05ad5b98);
  }
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
    *(undefined **)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = &DAT_05ad5b28;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  if (((DAT_05ad5ca8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05ad5ca8), iVar4 != 0)) {
    FUN_037a5340(&DAT_05ad5ba0,&DAT_040645b3,0);
    FUN_001001d0(PTR_LAB_04bcaea8,&DAT_05ad5ba0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05ad5ca8);
  }
  if (DAT_05ad5c08 == 0) {
    uVar10 = 0;
    uVar9 = 0;
    do {
      while (puVar6 = DAT_05ad5c10, uVar9 < 9) {
        pcVar8 = (&PTR_DAT_04b55c50)[uVar9];
        if (0 < (int)uVar10) {
          uVar5 = uVar10;
          puVar7 = DAT_05ad5c10;
          do {
            iVar4 = strcmp((char *)*puVar7,pcVar8);
            if (iVar4 == 0) goto LAB_037f2394;
            uVar5 = uVar5 - 1;
            puVar7 = puVar7 + 2;
          } while (uVar5 != 0);
        }
        *(char **)((long)puVar6 + (-(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4)) = pcVar8;
        *(uint *)(DAT_05ad5c10 + (long)(int)DAT_05ad5c08 * 2 + 1) = uVar9;
        DAT_05ad5c08 = DAT_05ad5c08 + 1;
        uVar10 = (ulong)DAT_05ad5c08;
LAB_037f2394:
        uVar9 = uVar9 + 1;
        if (uVar9 == 9) goto LAB_037f21f8;
      }
      if (0 < (int)uVar10) {
        uVar5 = uVar10;
        do {
          if (*(char *)*puVar6 == '\0') goto LAB_037f2404;
          uVar5 = uVar5 - 1;
          puVar6 = puVar6 + 2;
        } while (uVar5 != 0);
      }
      *(undefined8 **)((long)DAT_05ad5c10 + (-(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4))
           = &DAT_0407ebb1;
      *(uint *)(DAT_05ad5c10 + (long)(int)DAT_05ad5c08 * 2 + 1) = uVar9;
      DAT_05ad5c08 = DAT_05ad5c08 + 1;
      uVar10 = (ulong)DAT_05ad5c08;
LAB_037f2404:
      bVar1 = (int)uVar9 < 8;
      uVar9 = uVar9 + 1;
    } while (bVar1);
  }
LAB_037f21f8:
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
    *(undefined **)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = &DAT_05ad5ba0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return iVar3 + 5;
}


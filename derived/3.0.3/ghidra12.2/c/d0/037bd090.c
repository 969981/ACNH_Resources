
void FUN_037bd090(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  
  if (((DAT_05ac1be0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05ac1be0), iVar3 != 0)) {
    FUN_0378fbb0(0,0x41200000,&DAT_05ac1b70,"ActorSpeed",0);
    __cxa_guard_release(&DAT_05ac1be0);
  }
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
    *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = &DAT_05ac1b70
    ;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  if (((DAT_05acd798 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05acd798), iVar3 != 0)) {
    FUN_03790e60(&DAT_05acd700,&DAT_040cc1d5,0);
    FUN_001001d0(PTR_LAB_04bcad60,&DAT_05acd700,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05acd798);
  }
  if (DAT_05acd768 == 0) {
    *DAT_05acd770 = &DAT_04b4e2f8;
    *(undefined4 *)(DAT_05acd770 + (long)(int)DAT_05acd768 * 2 + 1) = 0;
    puVar5 = DAT_05acd770;
    uVar1 = DAT_05acd768 + 1;
    bVar2 = -1 < (int)DAT_05acd768;
    DAT_05acd768 = uVar1;
    if (bVar2) {
      puVar6 = DAT_05acd770;
      uVar4 = (ulong)uVar1;
      do {
        iVar3 = strcmp((char *)*puVar6,&DAT_04b4e2ff);
        if (iVar3 == 0) goto LAB_037bd19c;
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 2;
      } while (uVar4 != 0);
    }
    *(undefined **)
     ((long)puVar5 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4)) =
         &DAT_04b4e2ff;
    *(undefined4 *)(DAT_05acd770 + (long)(int)DAT_05acd768 * 2 + 1) = 1;
    DAT_05acd768 = DAT_05acd768 + 1;
  }
LAB_037bd19c:
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
    *(undefined **)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = &DAT_05acd700;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  if (((DAT_05acd848 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05acd848), iVar3 != 0)) {
    FUN_037ac3e0(&DAT_05acd7a0,&DAT_040d6d0d,0);
    FUN_001001d0(PTR_LAB_04bcaee8,&DAT_05acd7a0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05acd848);
  }
  if (DAT_05acd808 == 0) {
    *DAT_05acd810 = &DAT_04b4e320;
    *(undefined4 *)(DAT_05acd810 + (long)(int)DAT_05acd808 * 2 + 1) = 0;
    puVar5 = DAT_05acd810;
    uVar1 = DAT_05acd808 + 1;
    uVar4 = (ulong)uVar1;
    bVar2 = -1 < (int)DAT_05acd808;
    DAT_05acd808 = uVar1;
    if (bVar2) {
      lVar7 = 0;
      do {
        iVar3 = strcmp(*(char **)((long)puVar5 + lVar7),&DAT_04b4e327);
        if (iVar3 == 0) goto LAB_037bd280;
        lVar7 = lVar7 + 0x10;
      } while (uVar4 * 0x10 != lVar7);
    }
    *(undefined **)((long)puVar5 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4)) =
         &DAT_04b4e327;
    *(undefined4 *)(DAT_05acd810 + (long)(int)DAT_05acd808 * 2 + 1) = 1;
    DAT_05acd808 = DAT_05acd808 + 1;
    uVar4 = (ulong)DAT_05acd808;
    puVar5 = DAT_05acd810;
LAB_037bd280:
    if (0 < (int)uVar4) {
      uVar8 = uVar4;
      puVar6 = puVar5;
      do {
        iVar3 = strcmp((char *)*puVar6,&DAT_04b4e349);
        if (iVar3 == 0) goto LAB_037bd2ec;
        uVar8 = uVar8 - 1;
        puVar6 = puVar6 + 2;
      } while (uVar8 != 0);
    }
    *(undefined **)((long)puVar5 + (-(uVar4 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4)) =
         &DAT_04b4e349;
    *(undefined4 *)(DAT_05acd810 + (long)(int)DAT_05acd808 * 2 + 1) = 2;
    DAT_05acd808 = DAT_05acd808 + 1;
  }
LAB_037bd2ec:
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) {
    *(undefined **)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x28) * 8) = &DAT_05acd7a0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}


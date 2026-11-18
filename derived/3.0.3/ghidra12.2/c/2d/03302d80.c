
void FUN_03302d80(long param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if (*(int *)(param_1 + 0x17e0) == 1) {
    if (param_2 != 0) goto LAB_03302e34;
LAB_03302dc8:
    lVar9 = 0x3c;
    *(undefined1 *)(param_1 + 0x16430) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x17e0) != 2) goto LAB_03302e34;
    if (param_2 == 1) goto LAB_03302dc8;
    if (param_2 != 0) goto LAB_03302e34;
    FUN_032fc524(*(undefined8 *)PTR_DAT_04bc1118);
    lVar9 = 0x3b;
  }
  lVar7 = *(long *)PTR_DAT_04bb4fb0;
  uVar4 = FUN_03368ef0(*(undefined8 *)PTR_DAT_04bc9358,0);
  lVar6 = *(long *)(lVar7 + 8);
  if (lVar6 != 0) {
    lVar1 = 0;
    if (*(char *)(lVar6 + 0x38) != '\0') {
      lVar1 = lVar6 + 8;
    }
    FUN_03366350(lVar7,lVar1,*(undefined8 *)(PTR_s_Decide_Erase_04bc9780 + lVar9 * 8 + 0x3f0),1,
                 uVar4,0);
  }
LAB_03302e34:
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_04bc90c0 + 0x10);
  if (*(undefined8 **)(*(long *)PTR_DAT_04bc90c0 + 0x18) != puVar2) {
    plVar8 = (long *)*puVar2;
    if (((*PTR_DAT_04bc9090 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc9090), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc9088 = PTR_DAT_04bc9098 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc9090);
    }
    if (((plVar8 != (long *)0x0) &&
        (uVar5 = (**(code **)*plVar8)(plVar8,PTR_DAT_04bc9088), (uVar5 & 1) != 0)) &&
       (*(int *)((long)plVar8 + 0x24) - 2U < 3)) {
      *(undefined4 *)((long)plVar8 + 0xaa4) = 2;
      *(undefined4 *)((long)plVar8 + 0x24) = 6;
                    /* WARNING: Could not recover jumptable at 0x03302eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x60))(plVar8);
      return;
    }
  }
  return;
}


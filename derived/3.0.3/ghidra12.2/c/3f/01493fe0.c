
void FUN_01493fe0(undefined2 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bbceb0;
  puVar1 = PTR_DAT_04bbcea8;
  if (*(long *)(param_2 + 0xb0) != param_2 + 0xa8) {
    lVar8 = (long)*(int *)(param_2 + 0xbc);
    plVar7 = (long *)(*(long *)(param_2 + 0xb0) - lVar8);
    do {
      if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar2), iVar3 != 0)) {
        *(undefined ***)puVar1 = &PTR_LAB_049a5a90;
        __cxa_guard_release(puVar2);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar1), (uVar4 & 1) != 0)) {
        bVar5 = false;
        iVar3 = *(int *)(param_3 + 8);
        if ((iVar3 < (int)plVar7[0x2daf]) || ((int)plVar7[0x2db1] < iVar3)) goto LAB_014940e8;
        iVar6 = *(int *)(param_3 + 0xc);
        if ((*(int *)((long)plVar7 + 0x16d7c) <= iVar6) &&
           (iVar6 <= *(int *)((long)plVar7 + 0x16d8c))) {
          if ((*(float *)(plVar7 + 0x2db2) == 0.0) ||
             (iVar6 = (int)(*(float *)(plVar7 + 0x2db2) *
                           (float)(iVar6 - *(int *)((long)plVar7 + 0x16d7c))), iVar6 < 1)) {
            bVar5 = true;
            goto LAB_014940e8;
          }
          if ((int)plVar7[0x2daf] + iVar6 <= iVar3) {
            bVar5 = iVar3 <= (int)plVar7[0x2db1] - iVar6;
            goto LAB_014940e8;
          }
        }
        bVar5 = false;
LAB_014940e8:
        *(bool *)param_1 = bVar5;
        *(undefined1 *)((long)param_1 + 1) = 1;
        return;
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
    } while (plVar7 != (long *)((param_2 + 0xa8) - lVar8));
  }
  *param_1 = 0;
  return;
}


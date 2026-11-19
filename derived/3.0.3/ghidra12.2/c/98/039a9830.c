
void FUN_039a9830(long param_1,long param_2,uint param_3,short *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x38) + (long)*param_4 * 8);
  if (((*PTR_DAT_04bb3490 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3488 = PTR_DAT_04bb3498 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3490);
  }
  if ((puVar9 != (undefined8 *)0x0) &&
     (uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb3488), (uVar5 & 1) != 0)) {
    uVar5 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3;
    lVar1 = puVar9[0x24] + (long)param_4[1] * 0x80;
    lVar2 = *(long *)(param_2 + 0x88);
    uVar3 = *(undefined8 *)(param_2 + 0x90);
    plVar7 = (long *)(lVar1 + 0x58);
    lVar6 = *plVar7;
    lVar8 = *(long *)(*(long *)(lVar1 + 0x50) + uVar5);
    *(long *)(*(long *)(lVar1 + 0x50) + uVar5) = lVar2;
    *(undefined8 *)(*plVar7 + uVar5) = uVar3;
    if ((*(code **)(lVar1 + 0x78) != (code *)0x0) &&
       ((lVar8 != lVar2 ||
        (*(long *)(lVar6 + (long)(int)param_3 * 8) != *(long *)(*plVar7 + (long)(int)param_3 * 8))))
       ) {
                    /* WARNING: Could not recover jumptable at 0x039a98f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x78))(lVar1,(ulong)param_3);
      return;
    }
  }
  return;
}


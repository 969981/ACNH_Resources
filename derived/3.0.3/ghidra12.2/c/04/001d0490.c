
void FUN_001d0490(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auStack_e8 [144];
  undefined1 local_58;
  
  (**(code **)(*param_1 + 0x88))();
  FUN_001e1500(auStack_e8);
  FUN_001e15a8(auStack_e8,param_2);
  plVar11 = param_1 + 0x14;
  plVar12 = (long *)*plVar11;
  local_58 = (char)param_4;
  if (plVar12 != (long *)0x0) {
    plVar10 = plVar11;
    do {
      uVar7 = FUN_001dc410(plVar12 + 4,auStack_e8);
      plVar4 = plVar12 + 1;
      if ((uVar7 & 1) == 0) {
        plVar10 = plVar12;
        plVar4 = plVar12;
      }
      plVar12 = (long *)*plVar4;
    } while (plVar12 != (long *)0x0);
    if ((plVar10 != plVar11) && (uVar7 = FUN_001dc410(auStack_e8,plVar10 + 4), (uVar7 & 1) == 0)) {
      plVar11 = (long *)plVar10[0x17];
      goto LAB_001d0530;
    }
  }
  plVar11 = (long *)0x0;
LAB_001d0530:
  FUN_001e1868(auStack_e8);
  (**(code **)(*param_1 + 0x90))(param_1);
  if (plVar11 == (long *)0x0) {
    lVar8 = 0;
    plVar11 = (long *)0x0;
  }
  else {
    lVar8 = (**(code **)(*plVar11 + 0x120))(plVar11);
    plVar11 = plVar11 + 0x31;
  }
  puVar5 = PTR_DAT_04bcb900;
  plVar12 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar9;
    if (uVar3 != 0) {
      lVar2 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar12 = (long *)(*(long *)(lVar2 + (ulong)uVar3 * 8) + 0x10);
    }
  }
  puVar1 = (undefined8 *)(*(long *)(*plVar12 + 0x10) + 0x1b0);
  if (1 < *(int *)(param_5 + 0x1e8) - 1U) {
    puVar1 = (undefined8 *)(*(long *)(*plVar12 + 0x10) + 0x1a8);
  }
  uVar6 = (**(code **)(*(long *)*puVar1 + 0x20))((long *)*puVar1,param_5,(int)param_1[1],lVar8 != 0)
  ;
  (**(code **)(*(long *)param_1[0x2d] + 0x48))
            ((long *)param_1[0x2d],*(undefined4 *)(param_5 + 0x1e8));
  (**(code **)(*(long *)param_1[0x2d] + 0x28))
            ((long *)param_1[0x2d],param_2,param_3,param_4,param_5,lVar8,param_1 + 0x1d,plVar11,
             uVar6);
  return;
}


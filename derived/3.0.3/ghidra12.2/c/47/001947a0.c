
void FUN_001947a0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_48 [24];
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      lVar8 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  plVar5 = (long *)(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18) + 0x50);
  plVar7 = (long *)*plVar5;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar5;
    do {
      plVar1 = plVar7;
      if (*(uint *)(plVar7 + 4) < *(uint *)(param_1 + 100)) {
        plVar1 = plVar6;
        plVar7 = plVar7 + 1;
      }
      plVar7 = (long *)*plVar7;
      plVar6 = plVar1;
    } while (plVar7 != (long *)0x0);
    if (((plVar1 != plVar5) && (*(uint *)(plVar1 + 4) <= *(uint *)(param_1 + 100))) &&
       (lVar8 = plVar1[5], lVar8 != 0)) {
      if (*(long *)(param_1 + 0xf0) != param_2) {
        FUN_001a2ac0(*(long *)(param_1 + 0xf0) + 0x10,*(long *)(param_2 + 0x10),
                     *(long *)(param_2 + 0x18),*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)
                    );
      }
      local_24 = 0x10001;
      FUN_0018aa70(auStack_48,&local_24);
      FUN_00197e40(lVar8,2,auStack_48,1);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 5;
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(param_1,param_1 + 0x30);
  }
  return;
}


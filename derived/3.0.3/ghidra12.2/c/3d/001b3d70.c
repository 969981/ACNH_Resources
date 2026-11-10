
bool FUN_001b3d70(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long local_28;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      lVar5 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) {
    plVar7 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  else {
    plVar7 = (long *)(*(long *)(lVar5 + 0x10) + 0x78);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    FUN_00187810(&local_28);
    uVar1 = *(uint *)PTR_DAT_04bcc480;
    uVar6 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      uVar6 = -(ulong)-uVar1;
    }
    *(ulong *)(param_1 + 0x90) = uVar6 + local_28;
    lVar4 = FUN_00185a6c(0x58);
    if (lVar4 != 0) {
      FUN_001b5528(lVar4,param_1,0);
    }
    *(long *)(param_1 + 0x20) = lVar4;
  }
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return lVar5 == 0;
}


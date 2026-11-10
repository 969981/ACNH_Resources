
undefined8 FUN_001a52f4(undefined8 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  int local_48 [6];
  undefined4 local_28 [2];
  
  puVar1 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      lVar5 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar5 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar4 = FUN_00194070(param_2);
  if ((uVar4 & 1) != 0) {
    local_28[0] = *(undefined4 *)(param_2 + 0x18);
    (**(code **)(*param_3 + 0xe8))
              (local_48,param_3,FUN_001a5440,local_28,*(undefined4 *)PTR_DAT_04bcc2a0);
    puVar1 = PTR_LAB_04bc0ee0;
    if (local_48[0] < 0) {
      puVar1 = (undefined *)0x0;
    }
    if (puVar1 != (undefined *)0x0) {
      uVar6 = 1;
      goto LAB_001a5418;
    }
    (**(code **)(*(long *)param_3[1] + 0x80))((long *)param_3[1],param_3);
  }
  uVar6 = 0;
LAB_001a5418:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar6;
}


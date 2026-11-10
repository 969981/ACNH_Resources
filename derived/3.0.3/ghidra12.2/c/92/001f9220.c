
bool FUN_001f9220(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auStack_98 [24];
  int local_80 [6];
  undefined1 auStack_68 [24];
  
  puVar4 = PTR_DAT_04bcb910;
  puVar3 = PTR_DAT_04bcb908;
  puVar1 = PTR_DAT_04bcb900;
  if (param_2 == 0) goto LAB_001f947c;
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_001f9018(param_1,param_2,param_3);
    goto LAB_001f947c;
  }
  plVar9 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      lVar8 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar9 == 0) || (lVar8 = *(long *)(*plVar9 + 0x10), lVar8 == 0)) {
    plVar9 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    lVar8 = *(long *)(param_2 + 0xb8);
    if (lVar8 == 0) goto LAB_001f9348;
LAB_001f9318:
    plVar10 = (long *)FUN_002052cc(lVar8,*(undefined2 *)(param_1 + 0x48));
    if (plVar10 != (long *)0x0) goto LAB_001f9350;
LAB_001f9328:
    local_80[0] = -0x7ffefffc;
    FUN_0018aa70(auStack_68,local_80);
    puVar7 = auStack_68;
LAB_001f9464:
    FUN_00197bcc(param_2,puVar7);
  }
  else {
    plVar9 = (long *)(*(long *)(lVar8 + 0x10) + 0x78);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar8 = *(long *)(param_2 + 0xb8);
    if (lVar8 != 0) goto LAB_001f9318;
LAB_001f9348:
    plVar10 = *(long **)(param_1 + 0x50);
    if (plVar10 == (long *)0x0) {
      lVar8 = *(long *)(param_1 + 0x88);
      if (lVar8 != 0) goto LAB_001f9318;
      goto LAB_001f9328;
    }
LAB_001f9350:
    uVar6 = FUN_001abe40(param_3);
    plVar11 = (long *)(puVar1 + 0x28);
    if (*puVar3 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)puVar4);
      uVar2 = *puVar5;
      if (uVar2 != 0) {
        lVar8 = **(long **)(puVar1 + 0xa0);
        if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar11 = (long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x10), lVar8 == 0)) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x10);
    }
    plVar11 = (long *)(lVar8 + 0x78);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar10 + 0xf0))(local_80,plVar10,uVar6,1,0,0,0);
    (**(code **)(*plVar11 + 0x20))(plVar11);
    puVar1 = PTR_LAB_04bc0ee0;
    if (local_80[0] < 0) {
      puVar1 = (undefined *)0x0;
    }
    if (puVar1 == (undefined *)0x0) {
      (**(code **)(*plVar10 + 200))(plVar10);
      FUN_001a70c4(auStack_98);
      puVar7 = auStack_98;
      goto LAB_001f9464;
    }
    FUN_00197bc0(param_2,plVar10,(int)plVar10[0x12]);
  }
  (**(code **)(*plVar9 + 0x20))(plVar9);
LAB_001f947c:
  return param_2 != 0;
}


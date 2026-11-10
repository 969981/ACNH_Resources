
bool FUN_001cd3d8(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  
  puVar2 = PTR_DAT_04bcb900;
  if (param_2 != 0) {
    plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        lVar6 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x10);
    }
    plVar7 = (long *)(lVar6 + 0x78);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    *(long *)(param_2 + 8) = param_1[0x68];
    memcpy((void *)(param_2 + 0x10),param_1 + 0x69,0x160);
    uVar3 = FUN_001b8fa0(param_1 + 2,&DAT_0410a683,0);
    lVar6 = param_1[0x12];
    *(undefined1 *)(param_2 + 0x14) = uVar3;
    *(int *)(param_2 + 0x10) = (int)lVar6;
    *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)((long)param_1 + 0x1e9);
    *(char *)(param_2 + 0x16) = (char)param_1[0x3d];
    uVar4 = (**(code **)(*param_1 + 0xd0))(param_1);
    lVar6 = *param_1;
    *(undefined4 *)(param_2 + 0x1c) = uVar4;
    uVar4 = (**(code **)(lVar6 + 0xd8))(param_1);
    lVar6 = *plVar7;
    *(undefined4 *)(param_2 + 0x20) = uVar4;
    (**(code **)(lVar6 + 0x20))(plVar7);
  }
  return param_2 != 0;
}


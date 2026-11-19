
void FUN_03874cac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  int local_118 [6];
  int local_100 [5];
  int local_ec;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  
  puVar1 = PTR_DAT_04bcb900;
  piVar5 = (int *)&local_130;
  lVar6 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
  local_100[0] = *(int *)(lVar6 + 0xe8);
  if (local_100[0] - 1U < 2) {
    plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar3 = *puVar4;
      if (uVar3 != 0) {
        lVar2 = **(long **)(puVar1 + 0xa0);
        if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("D:/home/Project/Park/App/Lib/NintendoSDK-NEX/Include\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar7 = (long *)(*(long *)(lVar2 + (ulong)uVar3 * 8) + 0x20);
      }
    }
    FUN_0019c39c(*(undefined8 *)(*plVar7 + 0x10),1);
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_001fb850(local_100,0);
  FUN_00215a50(local_118,*(undefined8 *)(param_1 + 0x20),local_100);
  puVar1 = PTR_LAB_04bc0ee0;
  if (local_118[0] < 0) {
    puVar1 = (undefined *)0x0;
  }
  if (puVar1 == (undefined *)0x0) {
    if (*(char *)(lVar6 + 0xb0) != '\0') goto LAB_03874df0;
    *(undefined1 *)(lVar6 + 0xb0) = 1;
    piVar5 = local_118;
  }
  else {
    FUN_00198c50(local_100,0xffffffff);
    if (local_ec == 2) goto LAB_03874df0;
    local_130 = local_a8;
    uStack_128 = uStack_a0;
    local_120 = local_98;
    if (*(char *)(lVar6 + 0xb0) != '\0') goto LAB_03874df0;
    *(undefined1 *)(lVar6 + 0xb0) = 1;
  }
  FUN_0018ab44(lVar6 + 0xb8,piVar5);
  *(undefined4 *)(lVar6 + 0xd0) = 0;
LAB_03874df0:
  FUN_001fbac0(local_100);
  return;
}


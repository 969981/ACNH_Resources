
uint FUN_001c0c30(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined1 auStack_e0 [144];
  char local_44 [4];
  
  lVar9 = *(long *)PTR_DAT_04bcc2e0;
  if (*(int *)(lVar9 + 8) == 1) {
    lVar5 = FUN_001e14d8(param_4);
    lVar6 = FUN_001e14d8(lVar9 + 0x130);
    if (lVar5 == lVar6 && *(int *)(param_4 + 0x88) == *(int *)(lVar9 + 0x1b8)) {
      uVar4 = 1;
      goto LAB_001c0e08;
    }
  }
  iVar10 = 0;
  local_44[0] = '\0';
  do {
    lVar9 = FUN_001da730(param_2,param_1 + 0xf0,param_4,param_3,local_44);
    if (lVar9 == 0) break;
    iVar10 = iVar10 + 1;
    FUN_001e5da8(param_2);
    uVar3 = FUN_001e14f8();
    *(undefined2 *)(lVar9 + 0xac) = uVar3;
    (**(code **)(*(long *)(param_1 + 0x2f8) + 0x18))((long *)(param_1 + 0x2f8),lVar9,1);
  } while (*(long *)(param_3 + 0x18) != 0);
  uVar4 = 1;
  if (((iVar10 == 0) && (local_44[0] == '\0')) && (*(long *)(param_3 + 0x18) != 0)) {
    FUN_001e1564(auStack_e0,param_4);
    uVar4 = FUN_001b7820(param_1,param_3,auStack_e0);
    puVar2 = PTR_DAT_04bcb900;
    uVar4 = uVar4 ^ 1;
    if (((uVar4 & 1) == 0) && (*(int *)(param_2 + 0x9c) != 0)) {
      plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
      if (*PTR_DAT_04bcb908 != '\0') {
        puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar1 = *puVar7;
        if (uVar1 != 0) {
          lVar9 = **(long **)(puVar2 + 0xa0);
          if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar8 = (long *)(*(long *)(lVar9 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      if ((*plVar8 == 0) || (lVar9 = *(long *)(*plVar8 + 0x10), lVar9 == 0)) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x10);
      }
      plVar8 = (long *)(lVar9 + 0x78);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_001e63bc(param_2,param_4);
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    FUN_001e1868(auStack_e0);
  }
LAB_001c0e08:
  return uVar4 & 1;
}


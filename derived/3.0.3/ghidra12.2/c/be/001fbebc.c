
void FUN_001fbebc(long *param_1,undefined8 param_2,long param_3,long param_4,undefined1 *param_5,
                 undefined8 param_6,long *param_7)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  if (param_7 == (long *)0x0) {
    uVar8 = FUN_001a0984();
    lVar13 = param_1[0xf];
    lVar11 = param_1[0x10];
    FUN_001a0984();
    uVar6 = FUN_001a1058();
    FUN_001a0984();
    uVar7 = FUN_001a1094();
    FUN_001a0a24(uVar8,lVar13,(int)lVar11,uVar6,uVar7);
    bVar1 = *(byte *)(param_1 + 0xc);
    puVar3 = PTR_DAT_04bcb900;
  }
  else {
    FUN_001a4fac(param_7 + 2);
    iVar4 = FUN_001e1884();
    FUN_001a4fac(param_7 + 2);
    uVar5 = FUN_001e14f8();
    if (iVar4 == 0) {
      FUN_001a0984();
      iVar4 = FUN_001a1058();
    }
    if ((uVar5 & 0xffff) == 0) {
      FUN_001a0984();
      uVar5 = FUN_001a1094();
    }
    uVar8 = FUN_001a0984();
    FUN_001a0a24(uVar8,param_7[0x13],(int)param_7[0x12],iVar4,uVar5);
    lVar11 = param_7[0x13];
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xd] = (long)param_7;
    param_1[0xf] = lVar11;
    *(int *)(param_1 + 0x10) = (int)param_7[0x12];
    uVar5 = (**(code **)(*param_7 + 0xf8))(param_7);
    if ((uVar5 >> 0x18 & 1) == 0) {
      *(undefined1 *)(param_3 + 0x69) = 1;
      *(undefined1 *)(param_4 + 0x69) = 1;
    }
    bVar1 = *(byte *)(param_1 + 0xc);
    puVar3 = PTR_DAT_04bcb900;
  }
  PTR_DAT_04bcb900 = puVar3;
  if ((bVar1 >> 1 & 1) == 0) {
    plVar12 = (long *)(puVar3 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar5 = *puVar9;
      if (uVar5 != 0) {
        lVar11 = **(long **)(puVar3 + 0xa0);
        if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar12 = (long *)(*(long *)(lVar11 + (ulong)uVar5 * 8) + 0x20);
      }
    }
    if ((*plVar12 == 0) || (lVar11 = *(long *)(*plVar12 + 0x10), lVar11 == 0)) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x10);
    }
    plVar12 = (long *)(lVar11 + 0x78);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar10 = (**(code **)(*param_1 + 0xb8))(param_1);
    if ((uVar10 & 1) == 0) {
      (**(code **)(*param_1 + 0xa8))(param_1,param_3,param_4,param_5,param_7);
      (**(code **)(*plVar12 + 0x20))(plVar12);
      cVar2 = (char)param_1[0xe];
    }
    else {
      (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      (**(code **)(*plVar12 + 0x20))(plVar12);
      cVar2 = (char)param_1[0xe];
    }
  }
  else {
    uVar10 = (**(code **)(*param_1 + 0xb8))(param_1);
    if ((uVar10 & 1) == 0) {
      (**(code **)(*param_1 + 0xa8))(param_1,param_3,param_4,param_5,param_7);
      cVar2 = (char)param_1[0xe];
    }
    else {
      (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      cVar2 = (char)param_1[0xe];
    }
  }
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xd] = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_001a0984();
  FUN_001a0c88();
  if ((*(byte *)(param_1 + 0xc) >> 3 & 1) != 0) {
    *param_5 = 0;
  }
  return;
}


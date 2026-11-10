
void FUN_00209998(long *param_1,long param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auStack_210 [296];
  undefined1 auStack_e8 [28];
  char local_cc [4];
  undefined2 local_c8 [2];
  int local_c4;
  undefined1 auStack_c0 [8];
  char local_b8;
  
  FUN_001abd58(auStack_c0,param_4);
  FUN_001f9178(auStack_c0,&local_c4,local_c8);
  uVar6 = *(undefined8 *)(param_4 + 0x18);
  lVar3 = FUN_00185fa0(param_1 + 1,local_c8[0]);
  FUN_00185d9c(lVar3 + 8,uVar6);
  puVar2 = PTR_DAT_04bcb900;
  if (local_c4 == 1) {
    FUN_001f8f1c(param_2);
    FUN_0019cf70(param_1 + 10,param_2);
    FUN_001abc3c(auStack_210);
    local_cc[0] = '\0';
    FUN_001fa060();
    (**(code **)(*param_1 + 0x18))(param_1,local_c8[0],auStack_c0,auStack_210,local_cc,param_3);
    FUN_001fa130(param_3);
    if ((*(char *)(param_2 + 0x28) == '\0') && (local_cc[0] != '\0')) {
      lVar3 = FUN_001abe40(auStack_210);
      puVar2 = PTR_DAT_04bcb900;
      plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
      if (*PTR_DAT_04bcb908 != '\0') {
        puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar1 = *puVar4;
        if (uVar1 != 0) {
          lVar5 = **(long **)(puVar2 + 0xa0);
          if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar7 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
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
      (**(code **)(*param_3 + 0xf0))(auStack_e8,param_3,lVar3,1,0,0,0);
      (**(code **)(*plVar7 + 0x20))(plVar7);
      uVar6 = *(undefined8 *)(lVar3 + 0x18);
      lVar3 = FUN_00185fa0(param_1 + 1,local_c8[0]);
      FUN_00185d9c(lVar3 + 0x68,uVar6);
    }
    FUN_001abdec(auStack_210);
    FUN_0019d000(param_1 + 10,param_2);
  }
  else {
    plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        lVar3 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar3 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar7 = (long *)(*(long *)(lVar3 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    if ((*plVar7 == 0) || (lVar3 = *(long *)(*plVar7 + 0x10), lVar3 == 0)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x10);
    }
    plVar7 = (long *)(lVar3 + 0x78);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*param_1 + 0x20))(param_1,local_c8[0],auStack_c0,param_3);
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (local_b8 != '\0') {
    FUN_0018c3a4(auStack_210);
    uVar6 = FUN_00186ea0(auStack_210,
                         "ClientProtocolRequestBroker: Error processing message. pBuffer=");
    uVar6 = FUN_0018c890(uVar6,param_4);
    uVar6 = FUN_00186ea0(uVar6," Protocol ID=");
    uVar6 = FUN_0018c740(uVar6,local_c8[0]);
    uVar6 = FUN_00186ea0(uVar6," CntSize=");
    uVar6 = FUN_00189cb0(uVar6,*(undefined8 *)(param_4 + 0x18));
    uVar6 = FUN_00186ea0(uVar6," Size=");
    FUN_00189cb0(uVar6,*(long *)(param_4 + 0x20) - *(long *)(param_4 + 0x28));
    if (param_3 == (long *)0x0) {
      FUN_00186ea0(auStack_210,"  <EndPoint is NULL>");
    }
    else {
      uVar6 = FUN_00186ea0(auStack_210,"  EndPoint: CID=");
      uVar6 = FUN_0018c5f0(uVar6,(int)param_3[0x12]);
      uVar6 = FUN_00186ea0(uVar6,&DAT_040a3bfd);
      uVar6 = FUN_00189cb0(uVar6,param_3[0x13]);
      uVar6 = FUN_00186ea0(uVar6," URL=");
      FUN_001b9a50(uVar6,param_3 + 2);
    }
    FUN_0018c3d4(auStack_210);
  }
  FUN_001abdec(auStack_c0);
  return;
}


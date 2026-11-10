
void FUN_002bf90c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  plVar7 = *(long **)(param_2 + 0x50);
  if ((((plVar7 != (long *)0x0 && *(int *)(param_2 + 8) != 0) &&
       ((*(uint *)PTR_DAT_04bcbb58 & 0xfffffffe) == 2)) &&
      (*(undefined4 *)(param_2 + 0x58) = 0, puVar3 = PTR_DAT_04bcb908, puVar2 = PTR_DAT_04bcb900,
      *(long *)(param_2 + 0x78) != 0)) && (*(long *)(param_2 + 0x60) != 0)) {
    plVar5 = (long *)(PTR_DAT_04bcb900 + 0x70);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        lVar6 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_11-S2050-20250306-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar5 = (long *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x68);
      }
    }
    if ((*plVar5 != 0) && (*(long *)(*plVar5 + 0x10) != 0)) {
      plVar5 = (long *)(puVar2 + 0x70);
      if (*puVar3 != '\0') {
        puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar1 = *puVar4;
        if (uVar1 != 0) {
          lVar6 = **(long **)(puVar2 + 0xa0);
          if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_11-S2050-20250306-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar5 = (long *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x68);
        }
      }
      if (*(long *)(*(long *)(*plVar5 + 0x10) + 0x10) != 0) {
        if (*(long *)(param_2 + 0x80) == 0) {
          uVar8 = *(undefined8 *)(param_2 + 0x78);
          FUN_0030d7e8(uVar8);
          *(undefined8 *)(param_2 + 0x80) = uVar8;
          FUN_0030d700(uVar8);
          plVar5 = (long *)(*(long *)(param_2 + 0x88) + 0x28);
          lVar6 = *plVar5;
          *(long **)(*(long *)(param_2 + 0x80) + 0x20) = plVar5;
          (**(code **)(lVar6 + 0x10))();
          plVar5 = *(long **)(param_2 + 0x80);
          uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
          (**(code **)(*plVar5 + 0x18))(plVar5,uVar8);
        }
        if (*(long *)(param_2 + 0x90) != 0) {
          FUN_002ce6f4(*(long *)(param_2 + 0x90),param_2);
          local_50 = 0;
          *(undefined1 *)(param_2 + 0x188) = 1;
          *(undefined1 *)(param_2 + 0xb0) = 1;
          goto LAB_002bfabc;
        }
      }
    }
  }
  local_50 = 0x10c08;
LAB_002bfabc:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}


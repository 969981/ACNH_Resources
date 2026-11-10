
undefined8
FUN_0019dcc0(ulong param_1,undefined4 param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint *puVar7;
  long *plVar8;
  byte local_b8 [24];
  undefined4 local_a0 [14];
  int local_68 [6];
  
  if ((param_1 & 1) != 0) {
    uVar5 = FUN_0019dba8();
    puVar1 = PTR_DAT_04bcb900;
    if ((uVar5 & 1) == 0) {
      plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
      if (*PTR_DAT_04bcb908 != '\0') {
        puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar4 = *puVar7;
        if (uVar4 != 0) {
          lVar3 = **(long **)(puVar1 + 0xa0);
          if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar3 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar8 = (long *)(*(long *)(lVar3 + (ulong)uVar4 * 8) + 0x20);
        }
      }
      uVar5 = (**(code **)(**(long **)(*(long *)(*(long *)(*plVar8 + 0x10) + 0x10) + 0x1b8) + 0x18))
                        ();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp",0x91,
                     0xe000001a,0);
      }
      local_a0[0] = 0x8001000b;
      FUN_0018aa70(local_68,local_a0);
      FUN_0018af38(local_a0,10,param_2);
      FUN_00189428(local_a0);
      puVar2 = PTR_LAB_04bc0ee0;
      puVar1 = puVar2;
      if (local_68[0] < 0) {
        puVar1 = (undefined *)0x0;
      }
      while (puVar1 == (undefined *)0x0) {
        local_b8[0] = (*param_3)(param_4,0);
        local_b8[0] = local_b8[0] & 1;
        FUN_0018aaf0(local_68,local_b8);
        uVar5 = FUN_00189434(local_a0,
                             "C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp",
                             0x9e,"PreventRegularBlockCall");
        if ((uVar5 & 1) == 0) break;
        FUN_0018aff4(local_a0);
        FUN_00198f30();
        puVar1 = puVar2;
        if (local_68[0] < 0) {
          puVar1 = (undefined *)0x0;
        }
      }
      if (local_68[0] < 0) {
        puVar2 = (undefined *)0x0;
      }
      if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp",0xa7,
                     0xe000000c,0);
      }
      FUN_0018ab44(param_5,local_68);
      FUN_0018afc4(local_a0);
      uVar6 = 1;
      goto LAB_0019dec4;
    }
  }
  uVar6 = 0;
LAB_0019dec4:
  return uVar6;
}


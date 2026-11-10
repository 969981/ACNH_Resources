
undefined8
FUN_00198d80(ulong param_1,undefined4 param_2,byte param_3,code *param_4,undefined8 param_5,
            byte *param_6)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auStack_88 [56];
  
  if (((param_1 & 1) == 0) || (uVar5 = FUN_0019dba8(), puVar3 = PTR_DAT_04bcb900, (uVar5 & 1) != 0))
  {
    return 0;
  }
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar1 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  uVar5 = (**(code **)(**(long **)(*(long *)(*(long *)(*plVar7 + 0x10) + 0x10) + 0x1b8) + 0x18))();
  if ((uVar5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp",0x6d,0xe000001a
                 ,0);
  }
  FUN_0018af38(auStack_88,10,param_2);
  FUN_00189428(auStack_88);
  do {
    bVar4 = (*param_4)(param_5,0);
    if (((bVar4 ^ param_3) & 1) != 0) {
      *param_6 = bVar4 & 1;
      FUN_0018afc4(auStack_88);
      return 1;
    }
    FUN_0018aff4(auStack_88);
    FUN_00198f30();
    uVar5 = FUN_00189434(auStack_88,
                         "C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp",0x79,
                         "(vResult = cbCallback(object, 0)) == bErrorValue");
  } while ((uVar5 & 1) != 0);
                    /* WARNING: Subroutine does not return */
  FUN_0018786c("C:/home/ws/Master/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp",0x7c,0xe000000c,0
              );
}


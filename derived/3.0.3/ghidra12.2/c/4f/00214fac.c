
void FUN_00214fac(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_68 [3];
  undefined4 local_44;
  
  FUN_00210efc();
  puVar1 = PTR_DAT_04bcce20;
  param_1[0x40] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0xc800000000;
  local_68[0] = (long *)CONCAT44(local_68[0]._4_4_,0x10001);
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0018aa70(param_1 + 0x43,local_68);
  *(undefined4 *)(param_1 + 0x46) = 0;
  puVar3 = PTR_DAT_04bc0ec8;
  *(undefined2 *)((long)param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4b] = (long)(param_1 + 0x49);
  *(undefined1 *)(param_1 + 0x49) = 0;
  puVar1 = puVar3 + 0x10;
  param_1[0x4c] = 0x10;
  param_1[0x48] = (long)puVar1;
  FUN_0018b070(param_1 + 0x48,&DAT_0407ebb1,0xffffffffffffffff);
  *(undefined2 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = (long)puVar1;
  param_1[0x51] = (long)(param_1 + 0x4f);
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x52] = 0x10;
  FUN_0018b070(param_1 + 0x4e,&DAT_0407ebb1,0xffffffffffffffff);
  puVar1 = PTR_DAT_04bcce28;
  param_1[0x54] = 0;
  param_1[0x53] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bcb900;
  plVar5 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      lVar7 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar5 = (long *)(*(long *)(lVar7 + (ulong)uVar2 * 8) + 0x10);
    }
  }
  FUN_001b7974(*(undefined8 *)(*(long *)(*plVar5 + 0x10) + 0xe8),0);
  local_68[0] = param_1;
  FUN_002091b0(param_1,PTR_LAB_04bcce30,local_68);
  plVar5 = (long *)FUN_00185a6c(0x48);
  if (plVar5 != (long *)0x0) {
    FUN_001f98c8(plVar5);
    *(undefined1 *)((long)plVar5 + 9) = 0;
    plVar5[2] = (long)(puVar3 + 0x10);
    *(undefined1 *)(plVar5 + 3) = 0;
    puVar1 = PTR_DAT_04bccdf0;
    plVar5[5] = (long)(plVar5 + 3);
    plVar5[6] = 0x10;
    *plVar5 = (long)(puVar1 + 0x10);
    FUN_0018a58c(plVar5 + 2,&DAT_0407ebb1);
    *(undefined4 *)(plVar5 + 8) = 0;
    *(undefined4 *)(plVar5 + 7) = 4;
    *(undefined1 *)((long)plVar5 + 0x3c) = 2;
  }
  if ((long *)param_1[0x54] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x54] + 8))();
  }
  param_1[0x54] = (long)plVar5;
  uVar6 = FUN_002178a8();
  FUN_0018a58c(param_1[0x54] + 0x10,uVar6);
  local_44 = 0x10001;
  FUN_0018aa70(local_68,&local_44);
  FUN_0018ab44(param_1 + 0x43,local_68);
  lVar7 = FUN_00185a6c(0x10);
  if (lVar7 != 0) {
    FUN_00215e70(lVar7,param_1);
  }
  param_1[0x41] = lVar7;
  return;
}


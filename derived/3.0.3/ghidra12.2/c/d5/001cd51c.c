
void FUN_001cd51c(long *param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  short local_38 [4];
  
  FUN_001a57fc();
  param_1[6] = 0;
  puVar1 = PTR_DAT_04bcc2a8;
  param_1[2] = 0;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  param_1[5] = (long)(param_1 + 6);
  *param_1 = (long)(puVar1 + 0x10);
  FUN_001a59a0();
  *param_1 = (long)(PTR_DAT_04bcc6b8 + 0x10);
  FUN_001d6698(param_1 + 8);
  param_1[0x14] = 0;
  param_1[0x13] = (long)(param_1 + 0x14);
  param_1[0x15] = 0;
  param_1[0x16] = (long)(param_1 + 0x16);
  param_1[0x1b] = 0;
  param_1[0x17] = (long)(param_1 + 0x16);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_001bac84(param_1 + 0x1d);
  param_1[0x21] = (long)(param_1 + 0x22);
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x1f] = (long)&DAT_0483c278;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = (long)(param_1 + 0x25);
  param_1[0x29] = 0;
  param_1[0x2a] = (long)(param_1 + 0x2b);
  FUN_00186460(param_1 + 0x2e,0x4000,1);
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  puVar2 = PTR_DAT_04bcb910;
  puVar1 = PTR_DAT_04bcb908;
  uVar6 = (uint)(byte)*PTR_DAT_04bcb908;
  if (*PTR_DAT_04bcb908 != 0) {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar6 = *puVar4;
  }
  *(uint *)((long)param_1 + 0xe4) = uVar6;
  param_1[3] = param_3;
  FUN_00187810(local_38);
  sVar3 = FUN_00189e50(0xffff);
  *(short *)(param_1 + 0x20) = sVar3 + local_38[0];
  plVar7 = &DAT_04c58bc8;
  if (*puVar1 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)puVar2);
    uVar6 = *puVar4;
    if (uVar6 != 0) {
      if ((ulong)(DAT_04c58c40[1] - *DAT_04c58c40 >> 3) <= (ulong)uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(*DAT_04c58c40 + (ulong)uVar6 * 8) + 0x20);
    }
  }
  FUN_0019c46c(*(undefined8 *)(*plVar7 + 0x10),&LAB_001cd6f0,param_1);
  lVar5 = FUN_00185a6c(0x40);
  if (lVar5 != 0) {
    FUN_001d5fc0(lVar5,param_2);
  }
  param_1[0x2d] = lVar5;
  return;
}


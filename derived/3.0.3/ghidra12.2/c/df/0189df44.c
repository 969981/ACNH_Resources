
void FUN_0189df44(long *param_1,uint param_2,uint param_3,byte param_4,undefined4 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  char *__dest;
  char *__dest_00;
  
  FUN_00705c50();
  *(byte *)((long)param_1 + 0x28c) = (byte)(param_3 >> 0x1f);
  *(undefined2 *)((long)param_1 + 0x294) = 0x101;
  puVar2 = PTR_DAT_04bb5da8;
  param_1[0x53] = 0x4020000000000000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(uint *)(param_1 + 0x51) = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  puVar3 = PTR_DAT_04bcb470;
  __dest_00 = (char *)param_1[0xc];
  *(uint *)((long)param_1 + 0x284) = param_3 & (int)param_3 >> 0x1f;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  *(float *)(param_1 + 0x58) = (float)param_2;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x59) = 0x7f7fffff;
  __dest = "CreatureFieldActor";
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  *(undefined8 *)((long)param_1 + 0x2d1) = 0;
  param_1[0x4f] = (long)(puVar3 + 0x10);
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((long)param_1 + 0x2e2) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
  *(float *)((long)param_1 + 0x2c4) = (float)param_3;
  if (__dest_00 != "CreatureFieldActor") {
    iVar1 = 0x12;
    if ((int)param_1[0xd] < 0x13) {
      iVar1 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest_00,"CreatureFieldActor",(long)iVar1);
    __dest_00[iVar1] = '\0';
    __dest = (char *)param_1[0xc];
  }
  puVar2 = PTR_DAT_04bb32e0;
  *param_1 = (long)&PTR_LAB_049d0180;
  *(undefined4 *)((long)param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x5e) = param_5;
  bVar4 = *puVar2;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *(byte *)((long)param_1 + 0x2ea) = bVar4;
  if (__dest != "InsectComponentFieldActor") {
    iVar1 = 0x19;
    if ((int)param_1[0xd] < 0x1a) {
      iVar1 = (int)param_1[0xd] + -1;
    }
    memcpy(__dest,"InsectComponentFieldActor",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  *(byte *)((long)param_1 + 0x2e9) = param_4 & 1;
  return;
}


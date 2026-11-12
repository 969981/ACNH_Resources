
void FUN_00938950(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  char *__dest;
  
  *param_3 = &PTR_LAB_04928d20;
  FUN_00705c50();
  param_3[0x4f] = param_3 + 0x52;
  *(undefined1 *)(param_3 + 0x50) = param_5;
  *(undefined2 *)(param_3 + 0x51) = 1;
  *(undefined4 *)((long)param_3 + 0x284) = 0;
  *param_3 = &PTR_LAB_04928d20;
  param_3[0x53] = 0;
  param_3[0x54] = 0;
  *(undefined1 *)(param_3 + 0x55) = 0;
  *(undefined8 *)((long)param_3 + 0x2ac) = 0;
  *(undefined8 *)((long)param_3 + 0x2b4) = 0;
  *(undefined8 *)((long)param_3 + 700) = 0;
  *(uint *)(param_3 + 0x4c) = *(uint *)(param_3 + 0x4c) & 0xfffffff0 | 0xd;
  param_3[0x52] = &PTR_FUN_0492ad40;
  *(undefined8 *)((long)param_3 + 0x2c4) = 0;
  *(undefined8 *)((long)param_3 + 0x2cc) = 0x8000000000;
  uVar4 = nn::os::GetSystemTick();
  *(undefined8 *)((long)param_3 + 0x2e4) = 0;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  *(undefined8 *)((long)param_3 + 0x2ec) = 0;
  param_3[0x6d] = 0;
  *(undefined8 *)((long)param_3 + 0x36d) = 0;
  *(undefined4 *)((long)param_3 + 0x2fc) = 0;
  param_3[0x6c] = param_3;
  uVar3 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_3 + 0x2d4) = uVar4;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  *(undefined8 *)((long)param_3 + 0x2f4) = 0x107f80100000001;
  param_3[0x60] = PTR_DAT_04bb5d60 + 0x10;
  param_3[0x6f] = 0;
  param_3[100] = &PTR_LAB_0492adf0;
  param_3[0x68] = &PTR_LAB_0492ae18;
  *(undefined4 *)(param_3 + 0x70) = 0;
  param_3[0x52] = &PTR_LAB_0492ae58;
  param_3[0x71] = &PTR_LAB_048fc1a8;
  *(uint *)(param_3 + 0x5b) = uVar3;
  __dest = (char *)param_3[0xc];
  *(uint *)((long)param_3 + 0x2dc) = uVar4;
  *(uint *)(param_3 + 0x5c) = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  uVar5 = *param_4;
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((long)param_3 + 0x39c) = param_1;
  *(undefined4 *)(param_3 + 0x74) = param_2;
  param_3[0x71] = &PTR_FUN_048fc1f8;
  *(undefined4 *)(param_3 + 0x73) = uVar2;
  param_3[0x72] = uVar5;
  if (__dest != "ColActorComponentObjCheckCylinder") {
    iVar1 = 0x21;
    if (*(int *)(param_3 + 0xd) < 0x22) {
      iVar1 = *(int *)(param_3 + 0xd) + -1;
    }
    memcpy(__dest,"ColActorComponentObjCheckCylinder",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  return;
}


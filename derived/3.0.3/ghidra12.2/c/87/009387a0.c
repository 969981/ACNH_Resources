
void FUN_009387a0(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  char *__dest;
  
  *param_1 = &PTR_LAB_04928d20;
  FUN_00705c50();
  param_1[0x4f] = param_1 + 0x52;
  *(undefined1 *)(param_1 + 0x50) = 0;
  puVar2 = PTR_DAT_04bb5d48;
  *(undefined2 *)(param_1 + 0x51) = 1;
  *(undefined4 *)((long)param_1 + 0x284) = 0;
  *param_1 = &PTR_LAB_04928d20;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0 | 0xd;
  param_1[0x52] = puVar2 + 0x10;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0x8000000000;
  uVar4 = nn::os::GetSystemTick();
  *(undefined8 *)((long)param_1 + 0x2e4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  param_1[0x6d] = 0;
  *(undefined8 *)((long)param_1 + 0x2f4) = 0x107f80100000001;
  puVar2 = PTR_DAT_04bb5d60;
  *(undefined8 *)((long)param_1 + 0x36d) = 0;
  puVar3 = PTR_DAT_04bb5d68;
  *(uint *)((long)param_1 + 0x2d4) = uVar4;
  param_1[0x60] = puVar2 + 0x10;
  param_1[100] = puVar3 + 0x10;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  param_1[0x68] = PTR_DAT_04bb5d70 + 0x10;
  puVar3 = PTR_DAT_04bb5d80;
  puVar2 = PTR_DAT_04bb2c98;
  *(uint *)(param_1 + 0x5b) = uVar4;
  __dest = (char *)param_1[0xc];
  *(undefined4 *)((long)param_1 + 0x2fc) = 0;
  param_1[0x6c] = param_1;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x52] = puVar3 + 0x10;
  param_1[0x71] = puVar2 + 0x10;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x2dc) = uVar4;
  *(uint *)(param_1 + 0x5c) = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  if (__dest != "ColActorComponentObjCheckCylinder") {
    iVar1 = 0x21;
    if (*(int *)(param_1 + 0xd) < 0x22) {
      iVar1 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"ColActorComponentObjCheckCylinder",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  return;
}


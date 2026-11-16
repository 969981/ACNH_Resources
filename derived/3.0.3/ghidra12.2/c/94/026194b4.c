
void FUN_026194b4(void *param_1,byte *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte local_34 [4];
  
  memset(param_1,0,0x200);
  *(undefined2 *)((long)param_1 + 0x200) = 0x4c7b;
  *(undefined2 *)((long)param_1 + 0x206) = 0x4c7b;
  *(undefined2 *)((long)param_1 + 0x20c) = 0x4c7b;
  *(undefined4 *)((long)param_1 + 0x202) = 0x101;
  *(undefined4 *)((long)param_1 + 0x208) = 0x101;
  *(undefined8 *)((long)param_1 + 0x20e) = 0x1014c7b00000101;
  memset((void *)((long)param_1 + 0x216),0,0x802);
  uVar2 = nn::os::GetSystemTick();
  *(undefined4 *)((long)param_1 + 0xa2c) = 0;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0xa18) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0xa1c) = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0xa20) = uVar2;
  *(uint *)((long)param_1 + 0xa24) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  uVar4 = FUN_02612f30(param_2,0x300000000,0);
  *(int *)((long)param_1 + 0x200) = (int)uVar4;
  *(short *)((long)param_1 + 0x204) = (short)((ulong)uVar4 >> 0x20);
  uVar4 = FUN_02612f30(param_2,0x300000000,1);
  *(int *)((long)param_1 + 0x206) = (int)uVar4;
  *(short *)((long)param_1 + 0x20a) = (short)((ulong)uVar4 >> 0x20);
  uVar4 = FUN_02612f30(param_2,0x300000000,2);
  *(int *)((long)param_1 + 0x20c) = (int)uVar4;
  *(short *)((long)param_1 + 0x210) = (short)((ulong)uVar4 >> 0x20);
  uVar4 = FUN_02612f30(param_2,0x300000000,3);
  *(int *)((long)param_1 + 0x212) = (int)uVar4;
  *(short *)((long)param_1 + 0x216) = (short)((ulong)uVar4 >> 0x20);
  puVar1 = PTR_DAT_04bb46f0;
  FUN_0262adc0(*(long *)PTR_DAT_04bb46f0,param_1,param_2,*(long *)PTR_DAT_04bb46f0 + 0xe98e0);
  FUN_0262adc0(*(long *)puVar1,(long)param_1 + 0x100,param_2,*(long *)puVar1 + 0xe99e0);
  local_34[0] = *param_2;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  uVar3 = FUN_02582fe0(local_34);
  *(undefined4 *)((long)param_1 + 0xa28) = uVar3;
  return;
}


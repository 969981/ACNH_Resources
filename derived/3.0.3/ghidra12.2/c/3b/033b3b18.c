
void FUN_033b3b18(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  void *__s;
  long *plVar4;
  
  puVar2 = PTR_DAT_04bb2718;
  *param_1 = (long)(PTR_DAT_04bcb5f0 + 0x10);
  uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  *(undefined1 *)((long)param_1 + 0xe) = 0xff;
  puVar2 = PTR_DAT_04bbfe60;
  *(undefined2 *)((long)param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 1) = uVar1;
  plVar4 = param_1 + 4;
  *plVar4 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  puVar2 = PTR_DAT_04bc6018;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  memset(param_1 + 5,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x77c) = uVar3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xf0) = uVar3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x784) = uVar3;
  *(uint *)(param_1 + 0xf1) = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(*plVar4 + 0x18))(plVar4);
  memset(__s,0,0x754);
  memset(param_1 + 0xf2,0,0x7d3);
  return;
}


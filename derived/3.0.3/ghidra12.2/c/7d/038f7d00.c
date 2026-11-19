
void FUN_038f7d00(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                 undefined8 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 auStack_90 [64];
  
  uVar7 = *param_4;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 & 0xffffff8 | 0x201;
  uVar6 = uVar3 | uVar6 & 0xf0000000;
  (*DAT_04c61f80)(auStack_90);
  (*DAT_04c61f78)(auStack_90,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30));
  (**(code **)PTR_DAT_04bcf620)(auStack_90,uVar3);
  (**(code **)PTR_DAT_04bcf618)(auStack_90,0,param_3);
  (**(code **)PTR_DAT_04bcf338)(param_1,auStack_90);
  uStack_b0 = 0;
  local_a8 = 0;
  local_b8 = param_5;
  uStack_a0 = param_3;
  local_98 = param_6;
  nn::os::GetSystemTick();
  nn::os::GetSystemTick();
  (**(code **)PTR_DAT_04bcf648)(param_1,1,&local_b8);
  *(ulong *)(param_1 + 0x100) = uVar7 & 0xffffffff00000000 | (ulong)uVar6;
  *(uint *)(param_1 + 0x100) = uVar6 | 0x80000000;
  piVar1 = (int *)(DAT_05ae78d0 + 100);
  do {
    iVar2 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(int *)(param_1 + 0x104) = iVar2;
  return;
}


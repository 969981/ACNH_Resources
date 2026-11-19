
void FUN_0390a9ec(undefined4 *param_1,uint param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  
  if (*(ushort *)((long)param_1 + 0x3a) - 5 < 2) {
    uVar4 = 1;
  }
  else {
    uVar5 = param_2;
    if ((int)(uint)*(byte *)((long)param_1 + 0x9a) <= (int)param_2) {
      uVar5 = (uint)*(byte *)((long)param_1 + 0x9a);
    }
    uVar4 = (undefined1)uVar5;
    if ((int)param_2 < 1) {
      uVar4 = 1;
    }
  }
  *(undefined1 *)((long)param_1 + 0x39) = uVar4;
  FUN_038f8f90(param_1 + 0xc,&local_a0);
  uVar1 = (**(code **)PTR_DAT_04bcf770)(&local_a0);
  *(undefined2 *)(param_1 + 0x12) = uVar1;
  uVar2 = (**(code **)PTR_DAT_04bcf740)(&local_a0);
  param_1[0x10] = uVar2;
  uVar2 = (**(code **)PTR_DAT_04bcf0b0)(&local_a0);
  param_1[0xf] = uVar2;
  if ((*(byte *)(DAT_05ae78f0 + 800) & 1) != 0) {
    (**(code **)PTR_DAT_04bcf780)(&local_a0);
  }
  if ((*(byte *)((long)param_1 + 0x4e) >> 1 & 1) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = 0x11 < *(ushort *)(param_1 + 0x26) && *(ushort *)(param_1 + 0x26) - 0x59 < 0xffffffd6;
  }
  local_a0 = *param_1;
  uStack_9c = param_1[1];
  local_98 = *(undefined8 *)(param_1 + 2);
  uStack_90 = *(undefined8 *)(param_1 + 4);
  FUN_038fd3e0(param_1 + 0x14,&local_a0,param_1 + 0xc,0,*(undefined8 *)(param_1 + 0x24),bVar3,0);
  return;
}


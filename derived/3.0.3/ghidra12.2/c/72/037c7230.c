
void FUN_037c7230(long param_1,undefined4 *param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined *local_a0;
  char *local_98;
  char *local_90;
  undefined8 local_88;
  char local_80 [64];
  
  builtin_strncpy(local_80,"Pl_Fall",8);
  local_90 = local_80;
  local_88 = 0x4000000007;
  iVar4 = *(int *)(param_1 + 0x30c);
  if (iVar4 == 0x32) {
    iVar4 = 1;
  }
  FUN_0384db40(&local_90,iVar4);
  pcVar2 = local_90;
  uVar3 = (uint)local_88;
  uVar1 = 3;
  if (local_88._4_4_ <= (int)((uint)local_88 + 3)) {
    uVar1 = local_88._4_4_ + ~(uint)local_88;
  }
  if (0 < (int)uVar1) {
    memcpy(local_90 + (int)(uint)local_88,&DAT_040a053d,(ulong)uVar1);
    pcVar2[(int)(uVar1 + uVar3)] = '\0';
    local_88 = CONCAT44(local_88._4_4_,uVar1 + uVar3);
  }
  uVar8 = *(undefined8 *)(param_2 + 2);
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  local_98 = local_90;
  puVar5 = (undefined8 *)FUN_03f2d7f0(param_1 + 0x5b0);
  if (((*PTR_DAT_04bc4000 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4000), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc3ff8 = PTR_DAT_04bb4448 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4000);
  }
  if ((((puVar5 == (undefined8 *)0x0) ||
       (uVar6 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc3ff8), (uVar6 & 1) == 0)) ||
      (*local_98 == '\0')) ||
     ((puVar5 = (undefined8 *)puVar5[5], puVar5 == (undefined8 *)0x0 ||
      (uVar6 = (**(code **)*puVar5)(puVar5,uVar8,&local_a0), (uVar6 & 1) == 0)))) {
    uVar7 = 2;
  }
  else {
    uVar7 = 1;
  }
  *param_2 = uVar7;
  return;
}


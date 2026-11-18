
void FUN_037c705c(long param_1,undefined4 *param_2)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *local_a0;
  char *local_98;
  char *local_90;
  uint local_88;
  int iStack_84;
  char local_80 [8];
  undefined2 local_78;
  undefined1 local_76;
  
  local_76 = 0;
  local_78 = 0x656c;
  local_90 = local_80;
  local_88 = 10;
  iStack_84 = 0x40;
  local_80 = (char  [8])s_Pl_Shuffle_04083b8f._0_8_;
  FUN_0384db40(&local_90,*(undefined4 *)(param_1 + 0x304));
  uVar3 = local_88;
  pcVar2 = local_90;
  uVar8 = iStack_84 + ~local_88;
  uVar1 = 3;
  if (iStack_84 <= (int)(local_88 + 3)) {
    uVar1 = uVar8;
  }
  if (0 < (int)uVar1) {
    memcpy(local_90 + (int)local_88,&DAT_040a053d,(ulong)uVar1);
    local_88 = uVar1 + uVar3;
    pcVar2[(int)local_88] = '\0';
    uVar8 = iStack_84 + ~local_88;
  }
  pcVar2 = local_90;
  uVar1 = 2;
  if (iStack_84 <= (int)(local_88 + 2)) {
    uVar1 = uVar8;
  }
  if (0 < (int)uVar1) {
    lVar10 = (long)(int)local_88;
    memcpy(local_90 + lVar10,&DAT_0405bff7,(ulong)uVar1);
    lVar10 = lVar10 + (int)uVar1;
    pcVar2[lVar10] = '\0';
    local_88 = (uint)lVar10;
  }
  uVar9 = *(undefined8 *)(param_2 + 2);
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  local_98 = local_90;
  puVar5 = (undefined8 *)FUN_03f2d7f0(param_1 + 0x578);
  if (((*PTR_DAT_04bc4000 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4000), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc3ff8 = PTR_DAT_04bb4448 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4000);
  }
  if ((((puVar5 == (undefined8 *)0x0) ||
       (uVar6 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc3ff8), (uVar6 & 1) == 0)) ||
      (*local_98 == '\0')) ||
     ((puVar5 = (undefined8 *)puVar5[5], puVar5 == (undefined8 *)0x0 ||
      (uVar6 = (**(code **)*puVar5)(puVar5,uVar9,&local_a0), (uVar6 & 1) == 0)))) {
    uVar7 = 2;
  }
  else {
    uVar7 = 1;
  }
  *param_2 = uVar7;
  return;
}


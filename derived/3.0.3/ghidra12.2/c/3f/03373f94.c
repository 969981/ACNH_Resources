
void FUN_03373f94(undefined8 param_1,long *param_2,uint param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *local_b0;
  long lStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 local_7c [63];
  undefined1 local_3d;
  undefined8 local_38;
  
  if ((param_2 != (long *)0x0) && (param_4 != 0)) {
    puVar3 = *(undefined8 **)param_2[0x7f];
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc4e58);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (*(uint *)(puVar3 + 0x42) <= param_3) {
      param_3 = 0;
    }
    local_38 = *(undefined8 *)(puVar3[0x43] + (long)(int)param_3 * 8);
    local_80 = 0x40;
    local_3d = 0;
    local_7c[0] = 0;
    puStack_88 = local_7c;
    local_90 = PTR_DAT_04bb2bc0 + 0x10;
    uStack_98 = (**(code **)(*param_2 + 0x170))(param_2);
    local_b0 = PTR_DAT_04bb2020 + 0x10;
    lStack_a8 = param_4;
    local_a0 = local_b0;
    FUN_03462c54(&local_90,&local_a0,&local_b0);
  }
  return;
}


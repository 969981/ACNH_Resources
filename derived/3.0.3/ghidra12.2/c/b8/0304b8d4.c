
void FUN_0304b8d4(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined *local_b0;
  char *pcStack_a8;
  undefined *local_a0;
  undefined1 *puStack_98;
  undefined4 local_90;
  undefined1 local_8c [63];
  undefined1 local_4d;
  long local_48;
  undefined *local_40 [4];
  
  puVar3 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc4e58);
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  local_48 = *(long *)(puVar3[0x43] + (ulong)(1 < *(uint *)(puVar3 + 0x42)) * 8);
  if (local_48 != 0) {
    local_4d = 0;
    local_8c[0] = 0;
    local_90 = 0x40;
    puStack_98 = local_8c;
    local_a0 = PTR_DAT_04bb2bc0 + 0x10;
    local_b0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_a8 = "MyDesignExchMenu";
    if (5 < param_2) {
      param_2 = 0;
    }
    local_40[0] = PTR_DAT_04bc5058 + 0x10;
    FUN_03462c84(&local_a0,&local_b0,&DAT_056dca38 + (ulong)param_2 * 2,local_40);
  }
  return;
}


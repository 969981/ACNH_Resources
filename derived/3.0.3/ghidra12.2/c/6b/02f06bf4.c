
/* WARNING: Removing unreachable block (ram,0x02f06c58) */

void FUN_02f06bf4(undefined8 param_1,byte *param_2,uint param_3,uint param_4,short *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 local_50;
  undefined4 uStack_4c;
  byte local_48 [4];
  undefined4 local_44;
  
  uVar2 = FUN_0277e158();
  if (((uVar2 & 1) != 0) || (*param_5 != -2)) {
    local_44 = 0xd;
    puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
    if (((*PTR_DAT_04bc73c8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc73c8);
    }
    if ((puVar3 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc73c0), (uVar2 & 1) != 0)) {
      local_48[0] = *param_2;
      local_50 = *(undefined4 *)param_5;
      uStack_4c = *(undefined4 *)(param_5 + 2);
      if (7 < local_48[0]) {
        local_48[0] = 0xff;
      }
      FUN_02edbacc(puVar3[0x43],param_1,local_48,param_3 & 1,param_4 & 1,&local_50);
    }
  }
  return;
}


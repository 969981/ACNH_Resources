
long FUN_003c30ac(int param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  uint uVar1;
  long lVar2;
  int local_78;
  int iStack_74;
  int local_70;
  int local_6c;
  long *local_68;
  undefined1 local_60;
  
  FUN_003c2fec(&local_78);
  local_78 = param_1;
  iStack_74 = param_2;
  local_70 = param_3;
  local_6c = param_4;
  local_60 = param_5;
  if (local_68 != (long *)0x0) {
    param_3 = (**(code **)(*local_68 + 0x10))();
    if (local_68 == (long *)0x0) {
      param_4 = local_6c;
    }
    else {
      param_4 = (**(code **)(*local_68 + 8))();
    }
  }
  lVar2 = FUN_003c4698(param_1,local_60);
  uVar1 = param_2 * param_1;
  return ((-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) + (long)param_1 * 0x15
          + (long)(int)(param_3 * uVar1 * param_4) * 4 + (lVar2 + 7U & 0xfffffffffffffff8) + 3 &
         0xfffffffffffffffc) + (long)param_2 * 0x14;
}


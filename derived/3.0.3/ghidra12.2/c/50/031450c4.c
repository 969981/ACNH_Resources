
undefined4 FUN_031450c4(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x578);
  if (((*PTR_DAT_04bc84e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc84e8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc84e0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc84e8);
  }
  if (((puVar4 == (undefined8 *)0x0) ||
      (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc84e0), (uVar2 & 1) == 0)) ||
     (*(long *)(puVar4[0x6d] + 0xa0) != 0 && *(long *)(puVar4[0x6d] + 0xa0) == param_2)) {
    uVar3 = 0;
  }
  else if ((*(long *)(puVar4[0x6e] + 0xa0) == 0) || (*(long *)(puVar4[0x6e] + 0xa0) != param_2)) {
    if ((*(long *)(puVar4[0x6f] + 0xa0) == 0) || (*(long *)(puVar4[0x6f] + 0xa0) != param_2)) {
      if ((*(long *)(puVar4[0x70] + 0xa0) == 0) || (*(long *)(puVar4[0x70] + 0xa0) != param_2)) {
        if ((*(long *)(puVar4[0x71] + 0xa0) == 0) || (*(long *)(puVar4[0x71] + 0xa0) != param_2)) {
          if ((*(long *)(puVar4[0x72] + 0xa0) == 0) || (*(long *)(puVar4[0x72] + 0xa0) != param_2))
          {
            if ((*(long *)(puVar4[0x73] + 0xa0) == 0) || (*(long *)(puVar4[0x73] + 0xa0) != param_2)
               ) {
              uVar3 = 7;
              if (*(long *)(puVar4[0x74] + 0xa0) != param_2 || *(long *)(puVar4[0x74] + 0xa0) == 0)
              {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 6;
            }
          }
          else {
            uVar3 = 5;
          }
        }
        else {
          uVar3 = 4;
        }
      }
      else {
        uVar3 = 3;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


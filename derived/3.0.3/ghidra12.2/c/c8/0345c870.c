
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0345c870(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05759200 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05759200);
    if (iVar2 != 0) {
      _DAT_057591d0 = 0x500000004;
      _DAT_057591d8 = 0x60000000d;
      DAT_057591e0 = 0x90000000e;
      DAT_057591e8 = 0x700000008;
      DAT_057591f0 = 0xa0000001c;
      DAT_057591f8 = 0xc;
      __cxa_guard_release(&DAT_05759200);
    }
  }
  if ((((((*param_1 == DAT_057591d0) || (*param_1 == DAT_057591d4)) || (*param_1 == DAT_057591d8))
       || ((*param_1 == _DAT_057591dc || (*param_1 == (int)DAT_057591e0)))) ||
      ((*param_1 == DAT_057591e0._4_4_ ||
       ((*param_1 == (int)DAT_057591e8 || (*param_1 == DAT_057591e8._4_4_)))))) ||
     ((*param_1 == (int)DAT_057591f0 || (*param_1 == DAT_057591f0._4_4_)))) {
    bVar1 = true;
  }
  else {
    bVar1 = *param_1 == DAT_057591f8;
  }
  return bVar1;
}


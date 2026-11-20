
void FUN_03f849d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  memset(param_1 + 3,0,0x10028);
  *(undefined2 *)((long)param_1 + 0x10042) = 0;
  *(undefined2 *)(param_1 + 0x2008) = 0;
  *(undefined2 *)((long)param_1 + 0x10044) = 0;
  plVar1 = param_1 + 0x2009;
  *(undefined4 *)(param_1 + 0x2013) = 0;
  *(undefined4 *)(param_1 + 0x2017) = 0;
  param_1[0x2011] = 0;
  param_1[0x2012] = 0;
  *(undefined4 *)((long)param_1 + 0x100bb) = 0;
  param_1[0x200f] = 0;
  param_1[0x2010] = 0;
  param_1[0x200d] = 0;
  param_1[0x200e] = 0;
  param_1[0x200b] = 0;
  param_1[0x200c] = 0;
  *plVar1 = 0;
  param_1[0x200a] = 0;
  memset(param_1 + 0x2019,0,0x522);
  *(undefined2 *)((long)param_1 + 0x1015a) = 0;
  *(undefined2 *)((long)param_1 + 0x1009a) = 4;
  *(undefined2 *)((long)param_1 + 0x105bc) = 0xffbf;
  lVar2 = *param_1 + 0xff00;
  *(undefined1 *)((long)param_1 + 0x105cc) = 0xff;
  *(undefined2 *)((long)param_1 + 0x101ea) = 0;
  *(undefined2 *)((long)param_1 + 0x1027a) = 0;
  *(undefined2 *)((long)param_1 + 0x1030a) = 0;
  *(undefined2 *)((long)param_1 + 0x1039a) = 0;
  *(undefined2 *)((long)param_1 + 0x1042a) = 0;
  param_1[0x2016] = *param_1 + 0xff04;
  *(undefined2 *)((long)param_1 + 0x104ba) = 0;
  param_1[0x204c] = 0x100000001;
  param_1[0x205e] = 0x100000001;
  param_1[0x2082] = 0x100000001;
  param_1[0x2094] = 0x100000001;
  param_1[0x20a6] = 0x100000001;
  param_1[0x2018] = 0x100000001;
  *(undefined2 *)((long)param_1 + 0x1054a) = 0;
  param_1[0x204d] = (long)plVar1;
  param_1[0x205f] = (long)plVar1;
  param_1[0x2071] = (long)plVar1;
  param_1[0x2083] = (long)plVar1;
  param_1[0x2095] = (long)plVar1;
  param_1[0x20a7] = (long)plVar1;
  param_1[0x2014] = lVar2;
  param_1[0x2015] = lVar2;
  *(undefined4 *)(param_1 + 0x2019) = 1;
  *(undefined1 *)(param_1 + 0x20bd) = 1;
  *(undefined4 *)((long)param_1 + 0x10384) = 1;
  *(undefined4 *)(param_1 + 0x2070) = 1;
  param_1[0x2028] = 0x100000001;
  param_1[0x2029] = (long)plVar1;
  param_1[0x203a] = 0x100000001;
  param_1[0x203b] = (long)plVar1;
  *(undefined1 *)((long)param_1 + 0x1055f) = 0x7f;
  *(undefined2 *)((long)param_1 + 0x10157) = 0xfe01;
  *(undefined2 *)((long)param_1 + 0x101e7) = 0xfd02;
  *(undefined2 *)((long)param_1 + 0x1012e) = 0x10;
  *(undefined2 *)((long)param_1 + 0x10277) = 0xfb04;
  *(undefined2 *)((long)param_1 + 0x101be) = 0x10;
  *(undefined2 *)((long)param_1 + 0x10307) = 0xf708;
  *(undefined2 *)((long)param_1 + 0x1024e) = 0x10;
  *(undefined2 *)((long)param_1 + 0x10397) = 0xef10;
  *(undefined2 *)((long)param_1 + 0x102de) = 0x10;
  *(undefined2 *)((long)param_1 + 0x10427) = 0xdf20;
  *(undefined2 *)((long)param_1 + 0x1036e) = 0x10;
  *(undefined2 *)((long)param_1 + 0x104b7) = 0xbf40;
  *(undefined2 *)((long)param_1 + 0x103fe) = 0x10;
  *(undefined2 *)((long)param_1 + 0x10547) = 0x7f80;
  *(undefined2 *)((long)param_1 + 0x1048e) = 0x10;
  *(undefined2 *)((long)param_1 + 0x1051e) = 0x10;
  DAT_04c56b90 = 0x20906;
  if (*(int *)(param_1[0x20be] + 0xc) != 0) {
    DAT_04c56b90 = 0x20d20;
  }
  return;
}


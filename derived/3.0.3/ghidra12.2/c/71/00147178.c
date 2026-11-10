
undefined1  [16] FUN_00147178(void)

{
  undefined1 auVar1 [16];
  timeval local_20;
  
  local_20.tv_sec = 0;
  local_20.tv_usec._0_4_ = 0;
  local_20.tv_usec._4_4_ = 0;
  gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  auVar1._8_4_ = (undefined4)local_20.tv_usec;
  auVar1._0_8_ = local_20.tv_sec;
  auVar1._12_4_ = 0;
  return auVar1;
}


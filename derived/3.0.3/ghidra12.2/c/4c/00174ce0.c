
uint FUN_00174ce0(long param_1)

{
  uint uVar1;
  ProxySetting local_cc [2];
  undefined2 local_ca;
  char acStack_c8 [100];
  char local_64;
  char acStack_63 [32];
  char acStack_43 [35];
  
  memset(local_cc,0,0xaa);
  uVar1 = nn::nifm::GetCurrentProxySetting(local_cc);
  if (uVar1 == 0) {
    *(ProxySetting *)(param_1 + 4) = local_cc[0];
    if (local_cc[0] != (ProxySetting)0x0) {
      *(undefined2 *)(param_1 + 6) = local_ca;
      strncpy((char *)(param_1 + 8),acStack_c8,99);
      *(undefined1 *)(param_1 + 0x6b) = 0;
      *(char *)(param_1 + 0x70) = local_64;
      if (local_64 != '\0') {
        strncpy((char *)(param_1 + 0x71),acStack_63,0x1f);
        *(undefined1 *)(param_1 + 0x90) = 0;
        strncpy((char *)(param_1 + 0x91),acStack_43,0x1f);
        *(undefined1 *)(param_1 + 0xb0) = 0;
        return 0;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 >> 9 & 0x1fff;
    FUN_00146338(*(undefined8 *)PTR_stderr_04bcb8f8,
                 "\nError: nn::nifm::GetCurrentProxySetting() failed. Err Desc: %d\n\n",uVar1);
  }
  return uVar1;
}



void FUN_03c5921c(long *param_1,long *param_2)

{
  char *__s;
  void *__dest;
  undefined *__src;
  size_t sVar1;
  
  __src = PTR_s_OnActivate_04bd2f38;
  sVar1 = strlen(PTR_s_OnActivate_04bd2f38);
  sVar1 = (size_t)(int)sVar1;
  memcpy((void *)*param_2,__src,sVar1);
  __s = __src + 0xb;
  *(undefined1 *)(*param_2 + sVar1) = 0;
  __dest = (void *)(*param_2 + sVar1 + 1);
  *param_2 = (long)__dest;
  sVar1 = strlen(__s);
  sVar1 = (size_t)(int)sVar1;
  memcpy(__dest,__s,sVar1);
  *(undefined1 *)(*param_2 + sVar1) = 0;
  *param_2 = *param_2 + sVar1 + 1;
                    /* WARNING: Could not recover jumptable at 0x03c592d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))(param_1,param_2);
  return;
}



void FUN_003cb07c(long param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = "";
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  nn::os::SetThreadNamePointer((ThreadType *)(param_1 + 8),pcVar1);
  return;
}


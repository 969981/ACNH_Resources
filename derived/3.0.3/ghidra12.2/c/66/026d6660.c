
char * FUN_026d6660(char *param_1)

{
  char *pcVar1;
  
  if (((*param_1 == '\0') || (*(int *)(param_1 + 0x200) == 0)) || (*(int *)(param_1 + 0x1e4) == 0))
  {
    return param_1;
  }
  pcVar1 = param_1 + 0x230;
  if (((param_1[0x230] != '\0') && (*(int *)(param_1 + 0x430) != 0)) &&
     (*(int *)(param_1 + 0x414) != 0)) {
    pcVar1 = param_1 + 0x460;
    if (((param_1[0x460] != '\0') && (*(int *)(param_1 + 0x660) != 0)) &&
       (*(int *)(param_1 + 0x644) != 0)) {
      pcVar1 = param_1 + 0x690;
      if (((param_1[0x690] != '\0') && (*(int *)(param_1 + 0x890) != 0)) &&
         (*(int *)(param_1 + 0x874) != 0)) {
        pcVar1 = param_1 + 0x8c0;
        if (((param_1[0x8c0] != '\0') && (*(int *)(param_1 + 0xac0) != 0)) &&
           (*(int *)(param_1 + 0xaa4) != 0)) {
          pcVar1 = param_1 + 0xaf0;
          if (((param_1[0xaf0] != '\0') && (*(int *)(param_1 + 0xcf0) != 0)) &&
             (*(int *)(param_1 + 0xcd4) != 0)) {
            pcVar1 = param_1 + 0xd20;
            if (((param_1[0xd20] != '\0') && (*(int *)(param_1 + 0xf20) != 0)) &&
               (*(int *)(param_1 + 0xf04) != 0)) {
              pcVar1 = param_1 + 0xf50;
              if ((param_1[0xf50] != '\0') &&
                 (pcVar1 = (char *)0x0,
                 *(int *)(param_1 + 0x1134) == 0 || *(int *)(param_1 + 0x1150) == 0)) {
                pcVar1 = param_1 + 0xf50;
              }
            }
          }
        }
      }
    }
  }
  return pcVar1;
}


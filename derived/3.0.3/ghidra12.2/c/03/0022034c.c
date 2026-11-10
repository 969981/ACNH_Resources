
void FUN_0022034c(int *param_1,long param_2,char *param_3)

{
  char *param3;
  int iVar1;
  char *pcVar2;
  undefined4 local_140;
  ErrorResultVariant aEStack_13c [12];
  char local_130 [4];
  ErrorResultVariant aEStack_12c [252];
  undefined4 local_24;
  
  pcVar2 = (char *)&local_140;
  if (*(char *)(param_2 + 0x599) == '\0') {
    param3 = "g2122d301";
    if (param_3 != (char *)0x0) {
      param3 = param_3;
    }
    iVar1 = snprintf(local_130,0x100,"%s.%%.p.srv.nintendo.net",param3);
    if ((DAT_04be2344 != '\0') && (iVar1 - 1U < 0xff)) {
      FUN_002215d4(param_1,param_2 + 0xb8,local_130,param_2 + 0x578,param_2);
      if (*param_1 != 0) {
        return;
      }
      FUN_002211bc(param_2 + 0xb8,1);
    }
    local_140 = 0;
    *(undefined1 *)(param_2 + 0x599) = 1;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_13c,(Result *)&local_24);
  }
  else {
    local_130[0] = '\0';
    local_130[1] = '\0';
    local_130[2] = '\0';
    local_130[3] = '\0';
    local_140 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_12c,(Result *)&local_140);
    pcVar2 = local_130;
  }
  FUN_002296c4(param_1,pcVar2);
  return;
}


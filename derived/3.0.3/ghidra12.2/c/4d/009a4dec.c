
bool FUN_009a4dec(long *param_1)

{
  bool bVar1;
  char *pcVar2;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  pcVar2 = (char *)param_1[1];
  if (pcVar2 == "cvrt") {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if (((*pcVar2 == 'c') && (bVar1 = false, pcVar2[1] == 'v')) && (bVar1 = false, pcVar2[2] == 'r')
       ) {
      bVar1 = pcVar2[3] == 't';
    }
  }
  return bVar1;
}


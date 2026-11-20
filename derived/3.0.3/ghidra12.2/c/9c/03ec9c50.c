
bool FUN_03ec9c50(long param_1,char *param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0xc);
  if ((int)uVar1 < 1) {
    return false;
  }
  uVar3 = 0;
  bVar2 = true;
  pcVar4 = (char *)(*(long *)(param_1 + 0x10) + 0x23);
  while (((((pcVar4[-0xf] != *param_2 || (pcVar4[-0xe] != param_2[1])) ||
           (pcVar4[-0xd] != param_2[2])) ||
          (((pcVar4[-0xc] != param_2[3] || (pcVar4[-0xb] != param_2[4])) ||
           ((pcVar4[-10] != param_2[5] || ((pcVar4[-9] != param_2[6] || (pcVar4[-8] != param_2[7])))
            ))))) ||
         ((pcVar4[-7] != param_2[8] ||
          (((((pcVar4[-6] != param_2[9] || (pcVar4[-5] != param_2[10])) ||
             (pcVar4[-4] != param_2[0xb])) ||
            ((pcVar4[-3] != param_2[0xc] || (pcVar4[-2] != param_2[0xd])))) ||
           ((pcVar4[-1] != param_2[0xe] || (*pcVar4 != param_2[0xf]))))))))) {
    uVar3 = uVar3 + 1;
    pcVar4 = pcVar4 + 0x28;
    bVar2 = uVar3 < uVar1;
    if (uVar1 == uVar3) {
      return bVar2;
    }
  }
  return bVar2;
}


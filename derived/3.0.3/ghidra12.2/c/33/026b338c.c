
long FUN_026b338c(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(int *)(param_1 + 0x20) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x24) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0x2c)) && param_2[5] == *(int *)(param_1 + 0x34)
     )) {
    return param_1 + 4;
  }
  if ((*(int *)(param_1 + 0x610) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x614) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0x61c)) &&
      param_2[5] == *(int *)(param_1 + 0x624))) {
    return param_1 + 0x5f4;
  }
  if ((*(int *)(param_1 + 0xc00) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0xc04) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0xc0c)) &&
      param_2[5] == *(int *)(param_1 + 0xc14))) {
    return param_1 + 0xbe4;
  }
  if ((*(int *)(param_1 + 0x11f0) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x11f4) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0x11fc)) &&
      param_2[5] == *(int *)(param_1 + 0x1204))) {
    return param_1 + 0x11d4;
  }
  if ((*(int *)(param_1 + 0x17e0) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x17e4) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0x17ec)) &&
      param_2[5] == *(int *)(param_1 + 0x17f4))) {
    return param_1 + 0x17c4;
  }
  if ((*(int *)(param_1 + 0x1dd0) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x1dd4) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0x1ddc)) &&
      param_2[5] == *(int *)(param_1 + 0x1de4))) {
    return param_1 + 0x1db4;
  }
  if ((*(int *)(param_1 + 0x23c0) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x23c4) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0x23cc)) &&
      param_2[5] == *(int *)(param_1 + 0x23d4))) {
    return param_1 + 0x23a4;
  }
  if ((*(int *)(param_1 + 0x29b0) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x29b4) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0x29bc)) &&
      param_2[5] == *(int *)(param_1 + 0x29c4))) {
    return param_1 + 0x2994;
  }
  return 0;
}


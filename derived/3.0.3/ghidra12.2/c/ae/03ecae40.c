
bool FUN_03ecae40(long param_1,int param_2,char *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18) + (long)param_2 * 0x24;
  if (((((*(char *)(lVar1 + 0x14) == *param_3) && (*(char *)(lVar1 + 0x15) == param_3[1])) &&
       (*(char *)(lVar1 + 0x16) == param_3[2])) &&
      (((*(char *)(lVar1 + 0x17) == param_3[3] && (*(char *)(lVar1 + 0x18) == param_3[4])) &&
       ((*(char *)(lVar1 + 0x19) == param_3[5] &&
        ((*(char *)(lVar1 + 0x1a) == param_3[6] && (*(char *)(lVar1 + 0x1b) == param_3[7])))))))) &&
     ((*(char *)(lVar1 + 0x1c) == param_3[8] &&
      (((((*(char *)(lVar1 + 0x1d) == param_3[9] && (*(char *)(lVar1 + 0x1e) == param_3[10])) &&
         (*(char *)(lVar1 + 0x1f) == param_3[0xb])) &&
        ((*(char *)(lVar1 + 0x20) == param_3[0xc] && (*(char *)(lVar1 + 0x21) == param_3[0xd])))) &&
       (*(char *)(lVar1 + 0x22) == param_3[0xe])))))) {
    return *(char *)(lVar1 + 0x23) == param_3[0xf];
  }
  return false;
}


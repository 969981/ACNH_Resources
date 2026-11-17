
bool FUN_02c42cb8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x238);
  if ((((((((*(long *)(lVar1 + 0x578) == 0 || *(long *)(lVar1 + 0x578) != param_2) &&
           (*(long *)(lVar1 + 0x580) == 0 || *(long *)(lVar1 + 0x580) != param_2)) &&
          (*(long *)(lVar1 + 0x588) == 0 || *(long *)(lVar1 + 0x588) != param_2)) &&
         ((*(long *)(lVar1 + 0x590) == 0 || (*(long *)(lVar1 + 0x590) != param_2)))) &&
        ((*(long *)(lVar1 + 0x598) == 0 || (*(long *)(lVar1 + 0x598) != param_2)))) &&
       ((*(long *)(lVar1 + 0x5a0) == 0 || (*(long *)(lVar1 + 0x5a0) != param_2)))) &&
      ((*(long *)(lVar1 + 0x5a8) == 0 || (*(long *)(lVar1 + 0x5a8) != param_2)))) &&
     (((((*(long *)(lVar1 + 0x5b0) == 0 || (*(long *)(lVar1 + 0x5b0) != param_2)) &&
        ((*(long *)(lVar1 + 0x5b8) == 0 || (*(long *)(lVar1 + 0x5b8) != param_2)))) &&
       ((*(long *)(lVar1 + 0x5c0) == 0 || (*(long *)(lVar1 + 0x5c0) != param_2)))) &&
      (((*(long *)(lVar1 + 0x5c8) == 0 || (*(long *)(lVar1 + 0x5c8) != param_2)) &&
       ((*(long *)(lVar1 + 0x5d0) == 0 || (*(long *)(lVar1 + 0x5d0) != param_2)))))))) {
    return *(long *)(lVar1 + 0x5d8) != 0 && *(long *)(lVar1 + 0x5d8) == param_2;
  }
  return true;
}


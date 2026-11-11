
undefined8 FUN_00479d20(int param_1,undefined4 param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_38;
  undefined4 local_34;
  
  local_34 = param_2;
  lVar2 = FUN_0047c1e0(param_4,&local_34);
  if ((lVar2 == 0) ||
     ((int)(*(uint *)(lVar2 + 4) | ((int)lVar2 - (int)*(undefined8 *)(param_4 + 0x10)) * 0x20000000)
      < 0)) {
    local_38 = 0;
    FUN_0047c130(param_4,&local_34,&local_38);
    lVar2 = FUN_0047c340(param_3,&local_34);
    if ((lVar2 != 0) &&
       (uVar3 = *(uint *)(lVar2 + 4) | ((int)lVar2 - (int)param_3[2]) * 0x20000000, -1 < (int)uVar3)
       ) {
      lVar2 = *param_3 + (long)(int)uVar3 * 0x18;
      iVar1 = *(int *)(lVar2 + 0x10);
      if (iVar1 != 0) {
        piVar4 = *(int **)(lVar2 + 8);
        lVar2 = (long)iVar1 << 2;
        do {
          if ((*piVar4 == param_1) ||
             (iVar1 = FUN_00479d20(param_1,*piVar4,param_3,param_4), iVar1 != 0)) {
            return 1;
          }
          piVar4 = piVar4 + 1;
          lVar2 = lVar2 + -4;
        } while (lVar2 != 0);
      }
    }
  }
  return 0;
}


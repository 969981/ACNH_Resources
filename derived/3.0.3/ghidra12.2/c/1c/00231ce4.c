
void FUN_00231ce4(undefined8 param_1,long param_2,int *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 local_48;
  undefined4 local_34;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    uVar3 = 0x10c07;
  }
  else {
    if (*(long *)(param_2 + 0x16d8) == 0) {
      FUN_0022d1f4();
      FUN_0022d308();
      uVar1 = FUN_0023d280();
      if ((uVar1 & 1) != 0) {
        *(int **)(param_2 + 0x16d8) = param_3;
        FUN_00220f78(param_3);
        plVar2 = (long *)FUN_00228380();
        lVar4 = *plVar2;
        local_48 = 0;
        FUN_002282f0(&local_48);
        uVar1 = local_48;
        local_48 = local_48 & 0xffffffff00000000;
        *(ulong *)(param_2 + 0x2008) = uVar1 + lVar4 * 10000;
        goto LAB_00231d8c;
      }
    }
    uVar3 = 0x10c08;
  }
  local_48 = CONCAT44(local_48._4_4_,uVar3);
LAB_00231d8c:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_34);
  FUN_002296c4(param_1,&local_48);
  return;
}



undefined8 FUN_00463650(long *param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *local_40;
  undefined8 *puStack_38;
  
  if (*(char *)(*param_1 + 4) == '\0') {
    uVar5 = *(undefined8 *)(param_2 + 8);
  }
  else {
    uVar5 = 0;
  }
  FUN_00427c30(&local_40,param_2,uVar5);
  bVar1 = *(byte *)(*param_1 + 1);
  cVar6 = *(char *)(*param_1 + 2);
  if (bVar1 == 0) {
    if (cVar6 == '\0') {
      do {
        if (local_40 + 1 < puStack_38) {
          local_40 = local_40 + 1;
          uVar4 = FUN_004290b0();
        }
        else {
          uVar4 = FUN_00427c40(&local_40);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          uVar4 = FUN_004290b0(local_40);
        }
      } while (((uVar4 & 0x30) == 0) || (iVar3 = FUN_00463a20(param_3,*local_40), -1 < iVar3));
      goto LAB_0046377c;
    }
    cVar6 = '\x01';
  }
  do {
    if (local_40 + 1 < puStack_38) {
      local_40 = local_40 + 1;
      uVar4 = FUN_004290b0();
    }
    else {
      uVar4 = FUN_00427c40(&local_40);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      uVar4 = FUN_004290b0(local_40);
    }
  } while ((((uVar4 & 0x30) == 0) ||
           (bVar2 = FUN_004290b0(local_40), ((bVar1 | (cVar6 != '\0') << 4) & bVar2) != 0)) ||
          (iVar3 = FUN_00463a20(param_3,*local_40), -1 < iVar3));
LAB_0046377c:
  return *local_40;
}


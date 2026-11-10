
undefined8
FUN_0026e390(long param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined **local_70;
  undefined1 auStack_68 [36];
  int local_44;
  
  if (param_2 != 0) {
    if ((param_5[1] == '\0') &&
       (lVar1 = FUN_002a9208(*(undefined8 *)(param_1 + 0x28),0), lVar1 != 0)) {
      iVar4 = 0;
      do {
        lVar1 = FUN_002a9208(*(undefined8 *)(param_1 + 0x28),iVar4);
        uVar2 = FUN_002aa1e0(param_1,lVar1,param_5[2],param_4,param_5[3],0);
        if (((uVar2 & 1) != 0) && (*(int *)(lVar1 + 0x5fc) == -1)) {
          if (lVar1 != 0) goto LAB_0026e4e4;
          break;
        }
        iVar4 = iVar4 + 1;
        lVar1 = FUN_002a9208(*(undefined8 *)(param_1 + 0x28),iVar4);
      } while (lVar1 != 0);
    }
    memset(&local_44,0,4);
    memset(&local_44,0xff,4);
    FUN_00227258(&local_70);
    lVar1 = FUN_002aa2a0(param_1,&local_70,0,param_5);
    if ((lVar1 == 0) || (local_44 == 0)) {
      local_70 = (undefined **)(PTR_DAT_04bcba18 + 0x10);
      FUN_0021f584(auStack_68);
      if (lVar1 == 0) {
        return 0;
      }
    }
    else {
      FUN_0022b904(lVar1,&local_44);
      local_70 = &PTR_LAB_04840580;
      FUN_0021f584(auStack_68);
    }
LAB_0026e4e4:
    uVar3 = FUN_002aa480(param_1,lVar1,param_3);
    FUN_002ac58c(param_1 + 0x30,lVar1,uVar3,param_2,*param_5,1,0,0);
  }
  return 1;
}


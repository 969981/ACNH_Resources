
void FUN_0336679c(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = FUN_03368ef0(*(undefined8 *)PTR_DAT_04bc9358,0);
  if (param_2 < 0x3d) {
    puVar3 = (undefined8 *)(&PTR_s_Decide_Erase_04b20ae8)[param_2];
    lVar4 = *(long *)(param_1 + 8);
  }
  else {
    puVar3 = &DAT_0407ebb1;
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 == 0) {
    return;
  }
  lVar1 = 0;
  if (*(char *)(lVar4 + 0x38) != '\0') {
    lVar1 = lVar4 + 8;
  }
  FUN_03366350(param_1,lVar1,puVar3,1,uVar2,param_3 & 1);
  return;
}



bool FUN_01486330(long param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined **local_50;
  undefined8 *puStack_48;
  
  plVar4 = *(long **)(*(long *)(param_1 + 0x48) + 0x60);
  if (plVar4 == (long *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = 0;
    if (param_4 != -1) {
      iVar1 = param_4;
    }
    if (param_2 < 0x15) {
      puStack_48 = (undefined8 *)(&PTR_DAT_0499b7e0)[param_2];
    }
    else {
      puStack_48 = &DAT_0407ebb1;
    }
    lVar3 = plVar4[0x227];
    bVar2 = lVar3 != 0;
    local_50 = &PTR_LAB_048f9770;
    if (lVar3 != 0) {
      FUN_038501b0((float)param_3,lVar3,iVar1);
      lVar3 = plVar4[0x227];
      if (*(char *)(lVar3 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar3 + 0x2c0) = 0;
        FUN_03855b20(lVar3 + 0xc0,0);
      }
      FUN_0384f8c0(lVar3,&local_50,iVar1,0);
      (**(code **)(*plVar4 + 0x120))(plVar4,&local_50,param_3,iVar1);
    }
  }
  return bVar2;
}


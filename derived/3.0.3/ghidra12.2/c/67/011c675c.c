
void FUN_011c675c(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_30;
  char *pcStack_28;
  
  if (param_2 == 1) {
    if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x78) != 0)) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "PltShareTexture";
      local_30 = puVar1;
      lVar2 = FUN_0074f690(*(long *)(param_1 + 0x78),&local_30);
      if ((lVar2 != 0) && (lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x1150), lVar3 != 0)) {
        FUN_01664990(*(undefined8 *)PTR_DAT_04bb2200,lVar3,lVar2,0);
      }
      pcStack_28 = "FenceShareTexture";
      local_30 = puVar1;
      lVar2 = FUN_0074f690(*(undefined8 *)(param_1 + 0x78),&local_30);
      if ((lVar2 != 0) && (lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x1150), lVar3 != 0)) {
        FUN_01664990(*(undefined8 *)PTR_DAT_04bb2200,lVar3,lVar2,0);
      }
    }
  }
  return;
}


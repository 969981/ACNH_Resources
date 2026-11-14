
uint FUN_01be96b0(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  puStack_160 = local_154;
  lVar3 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x408) + 8);
  local_55 = 0;
  local_158 = 0x100;
  local_154[0] = 0;
  local_168 = &PTR_LAB_048f9a70;
  (**(code **)(*param_1 + 0x18))();
  FUN_038d1270(&local_168,"%s.msbt",param_1[1]);
  if (*(long *)(lVar3 + 0x10) != lVar3 + 8) {
    lVar5 = (long)*(int *)(lVar3 + 0x1c);
    lVar4 = *(long *)(lVar3 + 0x10) - lVar5;
    do {
      if ((lVar4 != 0) && (lVar2 = FUN_03d54360(lVar4,&local_168), lVar2 != 0)) break;
      lVar4 = *(long *)(lVar4 + lVar5 + 8) - lVar5;
    } while (lVar4 != (lVar3 + 8) - lVar5);
  }
  uVar1 = FUN_03d52ee0(&local_168,param_1,param_2);
  return uVar1 & 1;
}



long FUN_03d53db0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  
  local_45 = 0;
  lVar3 = *(long *)(param_1 + 8);
  local_148 = 0x100;
  puStack_150 = local_144;
  local_144[0] = 0;
  local_158 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_158,"%s.msbt",param_2[1]);
  if (*(long *)(lVar3 + 0x10) != lVar3 + 8) {
    lVar4 = (long)*(int *)(lVar3 + 0x1c);
    lVar2 = *(long *)(lVar3 + 0x10) - lVar4;
    do {
      if ((lVar2 != 0) && (lVar1 = FUN_03d54360(lVar2,&local_158), lVar1 != 0)) {
        return lVar1;
      }
      lVar2 = *(long *)(lVar2 + lVar4 + 8) - lVar4;
    } while (lVar2 != (lVar3 + 8) - lVar4);
  }
  return 0;
}


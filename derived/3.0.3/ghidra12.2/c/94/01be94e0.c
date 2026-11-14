
uint FUN_01be94e0(long param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *__src;
  uint uVar2;
  long lVar3;
  undefined1 *__dest;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_181;
  undefined **local_180;
  undefined1 *local_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x408) + 8);
  local_170 = 0x100;
  local_6d = 0;
  local_16c[0] = 0;
  local_180 = &PTR_LAB_048f9a70;
  local_178 = local_16c;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_180,"%s.msbt",param_2[1]);
  if (*(long *)(lVar4 + 0x10) != lVar4 + 8) {
    lVar6 = (long)*(int *)(lVar4 + 0x1c);
    lVar5 = *(long *)(lVar4 + 0x10) - lVar6;
    do {
      if ((lVar5 != 0) && (lVar3 = FUN_03d54360(lVar5,&local_180), lVar3 != 0)) break;
      lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6;
    } while (lVar5 != (lVar4 + 8) - lVar6);
  }
  local_170 = 0x100;
  local_6d = 0;
  local_16c[0] = 0;
  local_180 = &PTR_LAB_048f9a70;
  local_178 = local_16c;
  uVar2 = FUN_03d53010(&uStack_181,&local_180,param_2,param_3);
  __dest = *(undefined1 **)(param_1 + 8);
  (*(code *)local_180[3])(&local_180);
  __src = local_178;
  if (__dest != local_178) {
    (*(code *)local_180[3])(&local_180);
    lVar4 = 0;
    do {
      if (local_178[lVar4] == '\0') goto LAB_01be965c;
      if (local_178[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01be965c;
      }
      if (local_178[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01be965c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01be965c:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 0x10) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    __dest[iVar1] = 0;
  }
  return uVar2 & 1;
}


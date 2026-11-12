
undefined8 FUN_008daf40(long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *__src;
  undefined **local_78;
  char *local_70;
  int local_68;
  char local_64 [31];
  undefined1 local_45;
  undefined4 local_24;
  
  local_68 = 0x20;
  local_45 = 0;
  local_78 = (undefined **)(PTR_DAT_04bb2a08 + 0x10);
  local_70 = local_64;
  local_24 = param_4;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (char *)param_2[1];
  if (local_64 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_008db00c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_008db00c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_008db00c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_008db00c:
    iVar2 = (int)lVar3;
    if (local_68 <= (int)lVar3) {
      iVar2 = local_68 + -1;
    }
    memcpy(local_64,__src,(long)iVar2);
    local_64[iVar2] = '\0';
  }
  local_78 = &PTR_LAB_048f9700;
  if (*local_70 == '\0') {
    FUN_008db0e0(param_1,&local_78);
    FUN_008c3200(param_1,&local_78,param_3,&local_24,0,0,0);
    *(undefined1 **)(param_1 + 0x37f48) = &LAB_008cd5bc;
    *(undefined8 *)(param_1 + 0x37f50) = 0;
    *(undefined ***)(param_1 + 0x37f38) = &PTR_LAB_04925b30;
    *(long *)(param_1 + 0x37f40) = param_1;
  }
  else {
    FUN_008c3200(param_1,&local_78,param_3,&local_24,0,0,0);
  }
  return 1;
}


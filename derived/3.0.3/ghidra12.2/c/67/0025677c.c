
void FUN_0025677c(undefined8 param_1,long param_2,long param_3,uint param_4,long param_5)

{
  long lVar1;
  undefined1 auStack_4c [3];
  undefined1 local_49;
  undefined4 local_48;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (param_4 < 0xc) {
    local_44 = 0x10c07;
    goto LAB_0025683c;
  }
  if (*(long *)(param_2 + 8) == 0) {
    FUN_00228480(param_3,0);
    lVar1 = *(long *)(param_2 + 8);
    if (lVar1 == 0) goto LAB_0025680c;
LAB_002567d8:
    local_48 = 0;
    FUN_0021f618(&local_44,lVar1 + 0x2a8,&local_48);
  }
  else {
    FUN_00228480(param_3,*(undefined4 *)(*(long *)(param_2 + 8) + 0x380));
    lVar1 = *(long *)(param_2 + 8);
    if (lVar1 != 0) goto LAB_002567d8;
LAB_0025680c:
    local_48 = 0;
  }
  FUN_00228480(auStack_4c,local_48);
  *(undefined1 *)(param_3 + 2) = local_49;
  *(char *)(param_3 + 3) = (char)*(undefined4 *)(param_5 + 0x14);
  memcpy((void *)(param_3 + 4),(void *)(param_5 + 0x1b),8);
  local_44 = 0;
LAB_0025683c:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}


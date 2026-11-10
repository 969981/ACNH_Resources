
void FUN_0023d6e0(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  long lVar2;
  Result *pRVar3;
  int local_5c;
  undefined1 local_58;
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  if (((*(int *)(param_2 + 0x13a4) == 0) || (*(char *)(param_2 + 0x13b8) != '\0')) ||
     (*(int *)((long)param_3 + 0xc) == 7)) {
    uVar1 = FUN_002aaa54();
    local_58 = 0;
    local_5c = ((CONCAT12(param_7,CONCAT11(param_6,param_5)) & 0xffff01) & 0x101ff) << 8;
    local_54 = 0x44000000;
    lVar2 = FUN_002a9fb0(uVar1,&local_54,param_4,*(undefined2 *)(param_3 + 1),&local_5c);
    if (lVar2 != 0) {
      FUN_002a9f34(param_1,uVar1,*param_3);
      return;
    }
    local_44 = 0;
    pRVar3 = (Result *)&local_44;
    local_54 = 0x4c0d;
  }
  else {
    local_5c = 0;
    pRVar3 = (Result *)&local_5c;
    local_54 = 0x2c27;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,pRVar3);
  FUN_002296c4(param_1,&local_54);
  return;
}



void FUN_00261010(undefined8 param_1,long param_2,undefined8 *param_3,char param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (param_3 == (undefined8 *)0x0) {
    local_24 = 0x10c07;
  }
  else {
    lVar2 = param_2;
    do {
      lVar2 = *(long *)(lVar2 + 8);
      if (lVar2 == param_2) {
        local_24 = 0x2c0a;
        goto LAB_0026106c;
      }
    } while (*(char *)(lVar2 + 0x18) != param_4);
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    local_24 = 0;
    *param_3 = *(undefined8 *)(lVar2 + 0x10);
    param_3[1] = uVar1;
  }
LAB_0026106c:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}


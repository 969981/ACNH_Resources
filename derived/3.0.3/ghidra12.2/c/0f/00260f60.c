
void FUN_00260f60(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  lVar2 = param_2;
  do {
    lVar2 = *(long *)(lVar2 + 8);
    if (lVar2 == param_2) {
      puVar1 = (undefined8 *)0x0;
      goto LAB_00260f8c;
    }
  } while (*(long *)(lVar2 + 0x10) != param_3);
  puVar1 = (undefined8 *)(lVar2 + 0x10);
LAB_00260f8c:
  if (puVar1 == (undefined8 *)0x0) {
    local_34 = 0x2c0a;
  }
  else {
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 1) = 0xfd;
    FUN_00223704(param_2,puVar1 + -2);
    FUN_002236e0(param_2 + 0x18,param_2 + 0x18,(long)(puVar1 + -2) + (long)*(int *)(param_2 + 0x2c))
    ;
    local_34 = 0;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}


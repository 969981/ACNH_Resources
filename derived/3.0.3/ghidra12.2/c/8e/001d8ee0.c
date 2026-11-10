
void FUN_001d8ee0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_20;
  long local_18;
  
  *param_1 = (long)(PTR_DAT_04bcc7c0 + 0x10);
  local_20 = param_1[2];
  if (param_1[2] == param_1[4]) {
    param_1[1] = (long)&PTR_LAB_0483c858;
  }
  else {
    do {
      (**(code **)(*param_1 + 0x28))(&local_18,param_1,&local_20);
      local_20 = local_18;
    } while (local_18 != param_1[4]);
    param_1[1] = (long)(PTR_DAT_04bcc7c8 + 0x10);
    if (param_1[2] != local_18) {
      lVar3 = param_1[5];
      lVar4 = param_1[2];
      do {
        lVar1 = *(long *)(lVar4 + 0x10);
        lVar2 = *(long *)(lVar4 + 0x18);
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar1;
        }
        *(undefined8 *)(lVar4 + 0x18) = 0;
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x18) = lVar2;
        }
        *(undefined8 *)(lVar4 + 0x10) = 0;
        if (param_1[2] == lVar4) {
          param_1[2] = lVar1;
          lVar5 = param_1[3];
        }
        else {
          lVar5 = param_1[3];
        }
        if (lVar5 == lVar4) {
          param_1[3] = lVar2;
        }
        lVar3 = lVar3 + -1;
        lVar4 = lVar1;
      } while (lVar1 != local_18);
      param_1[5] = lVar3;
      return;
    }
  }
  return;
}


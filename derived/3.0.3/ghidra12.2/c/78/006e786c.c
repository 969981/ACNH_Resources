
/* WARNING: Removing unreachable block (ram,0x006e7970) */

void FUN_006e786c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_048fbe28;
  memset(param_1 + 4,0,0xfa8);
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  puVar1 = PTR_DAT_04bb29b8 + 0x10;
  *(undefined4 *)(param_1 + 0x1fa) = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1f9] = puVar1;
  lVar3 = DAT_05ae7600;
  param_1[0x1ff] = 0;
  param_1[0x200] = 0;
  if (lVar3 == 0) {
    plVar5 = malloc(0x390);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar3 + 8);
      if (lVar4 != 0) {
        puVar2 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*puVar2;
      plVar5 = (long *)0x0;
      if (param_2 == (long *)0x0) goto LAB_006e793c;
    }
    plVar5 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x390,8);
  }
LAB_006e793c:
  *plVar5 = (long)(PTR_DAT_04bb29f0 + 0x10);
  *(undefined4 *)(plVar5 + 1) = 0xc3501;
  FUN_0069150c(plVar5 + 2);
  *(undefined1 *)(plVar5 + 0xb) = 0;
  *(undefined2 *)((long)plVar5 + 0x59) = 0;
  *plVar5 = (long)(PTR_DAT_04bb29d8 + 0x10);
  memset(plVar5 + 0xc,0,0x330);
  param_1[0x1fd] = plVar5;
  param_1[0x200] = plVar5;
  return;
}


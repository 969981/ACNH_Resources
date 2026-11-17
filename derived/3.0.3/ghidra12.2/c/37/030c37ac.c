
void FUN_030c37ac(long param_1,char *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *local_40;
  undefined4 local_38;
  
  *(undefined1 *)(param_1 + 0x4e4) = 0;
  FUN_030c38ec();
  FUN_030c3c2c(param_1,param_2);
  plVar2 = *(long **)(param_1 + 0x478);
  if (((plVar2 != (long *)0x0) && (plVar2[1] != 0)) &&
     ((*(long *)(param_1 + 0x228) == 0 || (*(long *)(*(long *)(param_1 + 0x228) + 8) == 0)))) {
    if (*param_2 == '\x1f') {
      local_40 = PTR_DAT_04bc4e68 + 0x10;
      local_38 = 7;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
      puVar1 = (undefined8 *)(plVar2[3] + 0x1c0);
    }
    else {
      local_40 = PTR_DAT_04bc4e68 + 0x10;
      local_38 = 6;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
      puVar1 = (undefined8 *)(plVar2[3] + 0x1b8);
    }
    (*(code *)*puVar1)(plVar2[1]);
  }
  *(undefined1 *)(param_1 + 0x4e4) = 1;
  *(char *)(param_1 + 0x4d8) = *param_2;
  *(char *)(param_1 + 0x4d9) = param_2[1];
  *(char *)(param_1 + 0x4da) = param_2[2];
  *(char *)(param_1 + 0x4db) = param_2[3];
  *(char *)(param_1 + 0x4dc) = param_2[4];
  *(char *)(param_1 + 0x4dd) = param_2[5];
  *(char *)(param_1 + 0x4de) = param_2[6];
  *(char *)(param_1 + 0x4df) = param_2[7];
  *(char *)(param_1 + 0x4e0) = param_2[8];
  *(undefined2 *)(param_1 + 0x4e2) = *(undefined2 *)(param_2 + 10);
  return;
}


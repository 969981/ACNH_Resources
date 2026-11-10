
void FUN_00297024(int *param_1,long *param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  long *local_60;
  undefined1 local_58;
  undefined1 local_57;
  long *local_50;
  long lStack_48;
  long local_40;
  undefined1 local_38;
  
  puVar1 = PTR_DAT_04bcd350;
  uVar5 = *(undefined8 *)PTR_DAT_04bcd350;
  uVar4 = FUN_0029c7d0(*(undefined8 *)PTR_DAT_04bcb8b8);
  FUN_0026c408(uVar5,uVar4);
  FUN_0026c088(*(undefined8 *)puVar1,PTR_FUN_04bcdf90);
  iVar3 = FUN_0026c204(*(undefined8 *)puVar1);
  if (iVar3 == 2) {
    FUN_0026c098(&local_70,*(undefined8 *)puVar1,PTR_LAB_04bcdf98);
  }
  FUN_0026c0fc(*(undefined8 *)puVar1,PTR_LAB_04bcdfa0);
  local_68 = *(undefined4 *)((long)param_2 + 0x234);
  local_57 = *(undefined1 *)((long)param_2 + 0x22a);
  local_64 = (undefined1)param_2[0x47];
  local_58 = (undefined1)param_2[0x45];
  local_70 = *(undefined8 *)((long)param_2 + 0x22c);
  bVar2 = *(char *)((long)param_2 + 0x229) != '\0';
  lStack_48 = (long)param_2 + 0x23c;
  local_50 = (long *)0x0;
  if (bVar2) {
    local_50 = param_2 + 0x4f;
  }
  local_60 = (long *)0x0;
  if (bVar2) {
    local_60 = param_2 + 1;
  }
  local_38 = *(undefined1 *)((long)param_2 + 0x274);
  local_40 = (long)param_2 + 0x254;
  FUN_0026a000(param_1,*(undefined8 *)puVar1,&local_70);
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  return;
}


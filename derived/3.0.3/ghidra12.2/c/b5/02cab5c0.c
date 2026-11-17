
void FUN_02cab5c0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined *local_40;
  undefined4 local_38;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(lVar3 + 0x2c) = 2;
    do {
      if (*(char *)(lVar3 + 0x20) == '\0') {
        FUN_03c83a50(lVar3,1);
      }
      FUN_03c835a0(lVar3);
    } while (*(int *)(lVar3 + 0x2c) != -0x80000000);
    plVar2 = *(long **)(param_1 + 0x48);
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    local_38 = 6;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    puVar1 = (undefined8 *)(plVar2[3] + 0x1b8);
  }
  else {
    *(undefined4 *)(lVar3 + 0x2c) = 0;
    do {
      if (*(char *)(lVar3 + 0x20) == '\0') {
        FUN_03c83a50(lVar3,1);
      }
      FUN_03c835a0(lVar3);
    } while (*(int *)(lVar3 + 0x2c) != -0x80000000);
    plVar2 = *(long **)(param_1 + 0x48);
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    local_38 = 7;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    puVar1 = (undefined8 *)(plVar2[3] + 0x1c0);
  }
  (*(code *)*puVar1)(plVar2[1]);
  return;
}


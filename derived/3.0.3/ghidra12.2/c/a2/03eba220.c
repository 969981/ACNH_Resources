
undefined8 FUN_03eba220(long *param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *__src;
  undefined8 uVar5;
  undefined8 local_1a8;
  undefined *puStack_1a0;
  undefined1 *local_198;
  int local_190;
  undefined1 local_18c [255];
  undefined1 local_8d;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ushort local_70;
  undefined8 local_6c;
  undefined2 local_64;
  
  puVar3 = PTR_DAT_04bb2660;
  local_190 = 0x100;
  local_8d = 0;
  local_18c[0] = 0;
  local_6c = 0xffffffff00000000;
  uVar5 = *(undefined8 *)(*(long *)PTR_DAT_04bb2660 + 0x330);
  local_80 = *(undefined8 *)(*(long *)PTR_DAT_04bb2660 + 0x338);
  local_70 = 1;
  local_64 = 0;
  local_88 = 0x1000;
  puStack_1a0 = PTR_DAT_04bb21f8 + 0x10;
  local_78 = 0;
  local_1a8 = 0;
  local_198 = local_18c;
  (**(code **)(*param_1 + 0x18))();
  __src = (undefined1 *)param_1[1];
  if (local_18c != __src) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar4 = 0;
    do {
      if (*(char *)(param_1[1] + lVar4) == '\0') goto LAB_03eba32c;
      lVar1 = param_1[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03eba32c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03eba32c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03eba32c:
    iVar2 = (int)lVar4;
    if (local_190 <= (int)lVar4) {
      iVar2 = local_190 + -1;
    }
    memcpy(local_18c,__src,(long)iVar2);
    local_18c[iVar2] = 0;
  }
  local_88 = CONCAT44(param_3,param_2);
  local_70 = (ushort)(param_4 & 1);
  local_78 = uVar5;
  lVar4 = FUN_03c29f30(*(undefined8 *)puVar3,&local_1a8);
  uVar5 = 0;
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x48);
  }
  return uVar5;
}



undefined8
FUN_03eba090(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined1 param_6)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *__src;
  undefined8 local_1a8;
  undefined **ppuStack_1a0;
  undefined1 *local_198;
  int local_190;
  undefined1 local_18c [255];
  undefined1 local_8d;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ushort local_70;
  undefined8 local_6c;
  undefined2 local_64;
  
  puVar3 = PTR_DAT_04bb2660;
  local_8d = 0;
  local_70 = 1;
  local_190 = 0x100;
  local_18c[0] = 0;
  local_6c = 0xffffffff00000000;
  uStack_80 = *(undefined8 *)(*(long *)PTR_DAT_04bb2660 + 0x338);
  local_88 = 0x1000;
  local_78 = 0;
  local_64 = 0;
  local_1a8 = 0;
  ppuStack_1a0 = &PTR_LAB_048f9a70;
  local_198 = local_18c;
  (**(code **)(*param_1 + 0x18))();
  __src = (undefined1 *)param_1[1];
  if (local_18c != __src) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar5 = 0;
    do {
      if (*(char *)(param_1[1] + lVar5) == '\0') goto LAB_03eba19c;
      lVar1 = param_1[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03eba19c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03eba19c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03eba19c:
    iVar2 = (int)lVar5;
    if (local_190 <= (int)lVar5) {
      iVar2 = local_190 + -1;
    }
    memcpy(local_18c,__src,(long)iVar2);
    local_18c[iVar2] = 0;
  }
  local_88 = CONCAT44(param_4,param_3);
  local_70 = CONCAT11(param_6,param_5) & 0x101;
  local_78 = param_2;
  lVar5 = FUN_03c29f30(*(undefined8 *)puVar3,&local_1a8);
  uVar4 = 0;
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x48);
  }
  return uVar4;
}


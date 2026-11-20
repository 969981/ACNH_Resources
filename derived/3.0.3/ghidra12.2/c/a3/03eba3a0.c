
bool FUN_03eba3a0(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *__src;
  undefined8 local_188;
  undefined *puStack_180;
  undefined1 *local_178;
  int local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined2 local_50;
  undefined8 local_4c;
  undefined2 local_44;
  
  puVar3 = PTR_DAT_04bb2660;
  local_6d = 0;
  local_170 = 0x100;
  local_16c[0] = 0;
  local_4c = 0xffffffff00000000;
  local_68 = 0x1000;
  local_50 = 1;
  puStack_180 = PTR_DAT_04bb21f8 + 0x10;
  local_44 = 0;
  local_188 = 0;
  local_60 = *(undefined8 *)(*(long *)PTR_DAT_04bb2660 + 0x338);
  uStack_58 = 0;
  local_178 = local_16c;
  (**(code **)(*param_1 + 0x18))();
  __src = (undefined1 *)param_1[1];
  if (local_16c != __src) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar4 = 0;
    do {
      if (*(char *)(param_1[1] + lVar4) == '\0') goto LAB_03eba490;
      lVar1 = param_1[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03eba490;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03eba490;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03eba490:
    iVar2 = (int)lVar4;
    if (local_170 <= (int)lVar4) {
      iVar2 = local_170 + -1;
    }
    memcpy(local_16c,__src,(long)iVar2);
    local_16c[iVar2] = 0;
  }
  local_68 = 0;
  local_50 = 0;
  local_188 = CONCAT44(1,(undefined4)local_188);
  lVar4 = FUN_03c29f30(*(undefined8 *)puVar3,&local_188);
  return lVar4 != 0;
}


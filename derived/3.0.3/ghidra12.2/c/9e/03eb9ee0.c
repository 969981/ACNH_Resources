
undefined8 FUN_03eb9ee0(long *param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *__src;
  undefined8 local_198;
  undefined *puStack_190;
  undefined1 *local_188;
  int local_180;
  undefined1 local_17c [255];
  undefined1 local_7d;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  ushort local_60;
  undefined8 local_5c;
  undefined2 local_54;
  
  puVar3 = PTR_DAT_04bb2660;
  local_7d = 0;
  local_60 = 1;
  local_180 = 0x100;
  local_17c[0] = 0;
  local_5c = 0xffffffff00000000;
  uStack_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb2660 + 0x338);
  local_78 = 0x1000;
  local_68 = 0;
  local_54 = 0;
  puStack_190 = PTR_DAT_04bb21f8 + 0x10;
  local_198 = 0;
  local_188 = local_17c;
  (**(code **)(*param_1 + 0x18))();
  __src = (undefined1 *)param_1[1];
  if (local_17c != __src) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar5 = 0;
    do {
      if (*(char *)(param_1[1] + lVar5) == '\0') goto LAB_03eb9fe0;
      lVar6 = param_1[1] + lVar5;
      if (*(char *)(lVar6 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03eb9fe0;
      }
      if (*(char *)(lVar6 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03eb9fe0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03eb9fe0:
    iVar1 = (int)lVar5;
    if (local_180 <= (int)lVar5) {
      iVar1 = local_180 + -1;
    }
    memcpy(local_17c,__src,(long)iVar1);
    local_17c[iVar1] = 0;
  }
  local_78 = CONCAT44(param_3,param_2);
  local_60 = (ushort)(param_4 & 1);
  lVar5 = DAT_05b04fb0;
  if (DAT_05b04fb0 == 0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar2 = (long *)(lVar6 + 8);
    if (lVar5 != 0) {
      plVar2 = (long *)(lVar5 + 0xa8);
    }
    lVar5 = *plVar2;
  }
  local_68 = lVar5;
  lVar5 = FUN_03c29f30(*(undefined8 *)puVar3,&local_198);
  uVar4 = 0;
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x48);
  }
  return uVar4;
}


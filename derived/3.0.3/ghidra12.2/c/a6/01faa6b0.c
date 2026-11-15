
undefined1 FUN_01faa6b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *__src;
  undefined8 local_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  int local_b0;
  undefined1 auStack_ac [63];
  undefined1 local_6d;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined2 local_58;
  
  puVar3 = PTR_PTR_04bb2238;
  local_6d = 0;
  local_b0 = 0x40;
  local_c0 = PTR_DAT_04bb2f70 + 0x10;
  local_c8 = 0;
  local_b8 = auStack_ac;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar3 + 8);
  if (auStack_ac != __src) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar4) == '\0') goto LAB_01faa78c;
      lVar1 = *(long *)(puVar3 + 8) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01faa78c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01faa78c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01faa78c:
    iVar2 = (int)lVar4;
    if (local_b0 <= (int)lVar4) {
      iVar2 = local_b0 + -1;
    }
    memcpy(auStack_ac,__src,(long)iVar2);
    auStack_ac[iVar2] = 0;
  }
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  local_58 = 0;
  uStack_64 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_60 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  uStack_5c = 0;
  local_68 = 0;
  FUN_02080ddc(param_1 + 0xafb8,&local_c8,param_2,param_3,param_4);
  return (undefined1)local_58;
}


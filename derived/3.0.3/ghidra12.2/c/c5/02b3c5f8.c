
uint FUN_02b3c5f8(long param_1,int param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined2 *puVar4;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  undefined4 local_5c;
  undefined *local_58;
  undefined8 uStack_50;
  short local_44 [2];
  
  if ((((param_2 == 0x6622bd46) && (uVar3 = FUN_013884a0(), (uVar3 & 1) != 0)) &&
      (*(char *)(param_1 + 0xdc20) == '\0')) &&
     (uVar3 = FUN_013871c0(local_44,0,0), (uVar3 & 1) != 0)) {
    puVar4 = &DAT_051565e8;
    if (((DAT_051565e8 != local_44[0]) && (puVar4 = &DAT_05156608, DAT_05156608 != local_44[0])) &&
       ((puVar4 = &DAT_05156628, DAT_05156628 != local_44[0] &&
        (puVar4 = &DAT_05156648, DAT_05156648 != local_44[0])))) {
      puVar4 = (undefined2 *)0x0;
    }
    puVar1 = (undefined2 *)PTR_PTR_04bb2238;
    if (puVar4 != (undefined2 *)0x0) {
      puVar1 = puVar4 + 4;
    }
    if (**(char **)(puVar1 + 4) != '\0') {
      local_58 = PTR_DAT_04bb2010 + 0x10;
      uStack_50 = 0;
      uVar2 = FUN_0125f5d4(&local_58,&local_5c);
      if ((uVar2 & 1) != 0) {
        FUN_011c96f0(&local_b8,puVar1);
        FUN_02b3a370(param_1 + 0xdb80,&local_b8);
        FUN_00939394(local_5c,param_1 + 0xdb80,&local_58,1,1);
        local_65 = 0;
        local_a8 = 0x40;
        puStack_b0 = local_a4;
        local_a4[0] = 0;
        local_b8 = PTR_DAT_04bb2bc0 + 0x10;
        FUN_008aa0a0(&local_b8,puVar1,0xffffffff);
        local_c8 = PTR_DAT_04bb2020 + 0x10;
        puStack_c0 = &DAT_040c3cf0;
        FUN_00958800(&local_b8,&local_c8,0xffffffff);
        FUN_02b3a370(param_1 + 0xdc28,&local_b8);
        FUN_00939394(local_5c,param_1 + 0xdc28,&local_58,1,0);
        if (*(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90) != 0) {
          FUN_00974a90(*(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90),param_1 + 0xdba0,0);
        }
      }
      goto LAB_02b3c7dc;
    }
  }
  uVar2 = 0;
LAB_02b3c7dc:
  return uVar2 & 1;
}


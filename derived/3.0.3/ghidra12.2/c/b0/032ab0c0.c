
void FUN_032ab0c0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  ushort uVar3;
  undefined1 auStack_c8 [8];
  undefined8 local_c0;
  undefined *local_b8;
  char *pcStack_b0;
  undefined4 local_a8;
  undefined2 local_a4 [31];
  undefined2 local_66;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_18;
  
  if ((*(uint *)((long)param_1 + 0x1c) < 0x11 &&
       (1 << (ulong)(*(uint *)((long)param_1 + 0x1c) & 0x1f) & 0x10106U) != 0) &&
     ((char)param_1[9] != '\0')) {
    local_40 = *(undefined8 *)(*(long *)(*param_1 + 0x20) + 0x18);
    puVar1 = PTR_DAT_04bc8e68 + 0x10;
    pcStack_b0 = "T_Key";
    local_b8 = puVar1;
    local_18 = FUN_0328b6d0(&local_40,&local_b8,0);
    FUN_032c8150(0,param_1[2],0,0);
    if ((param_2 & 1) == 0) {
      FUN_032ac7c0(auStack_c8);
      plVar2 = *(long **)PTR_DAT_04bc9198;
      if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
        plVar2 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
      }
      uStack_48 = local_c0;
      uStack_58 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
      local_60 = puVar1;
      local_50 = puVar1;
      (**(code **)(*plVar2 + 0x18))(&local_40,plVar2,&local_50,&local_60);
      local_b8 = PTR_DAT_04bb8610 + 0x10;
      pcStack_b0 = (char *)local_38;
    }
    else {
      uVar3 = 0;
      switch(*(undefined4 *)((long)param_1 + 0x1c)) {
      case 1:
        uVar3 = 0xe0ab;
        break;
      case 2:
        uVar3 = 0xe0ac;
        break;
      case 8:
        uVar3 = 0xe0ad;
        break;
      case 0x10:
        uVar3 = 0xe0ae;
      }
      local_40._0_4_ = (uint)uVar3;
      pcStack_b0 = (char *)local_a4;
      local_a8 = 0x20;
      local_66 = 0;
      local_a4[0] = 0;
      local_b8 = PTR_DAT_04bc0840 + 0x10;
      FUN_038d1340(&local_b8,&DAT_04169b80,&local_40);
    }
    FUN_032d67f0(&local_18,&local_b8);
  }
  return;
}


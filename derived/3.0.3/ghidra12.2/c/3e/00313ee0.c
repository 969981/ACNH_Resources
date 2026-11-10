
bool FUN_00313ee0(long param_1,uint param_2,long *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined4 *)*param_3;
  bVar1 = (undefined4 *)param_3[1] != puVar3 && (ulong)(param_3[1] - (long)puVar3) < 0x191;
  if (bVar1) {
    FUN_0018619c(*(long *)(param_1 + 0x10) + (ulong)param_2 * 0x28,&DAT_040d231a,*puVar3);
    if (puVar3 + 1 != (undefined4 *)param_3[1]) {
      puVar2 = PTR_DAT_04bc0ec8 + 0x10;
      puVar3 = puVar3 + 1;
      do {
        local_80[0] = 0;
        uStack_68 = 0x10;
        local_88 = puVar2;
        local_70 = local_80;
        FUN_0018b070(&local_88,&DAT_0407ebb1,0xffffffffffffffff);
        puVar4 = puVar3 + 1;
        FUN_0018619c(&local_88,&DAT_0407f33f,*puVar3);
        FUN_0018b50c(*(long *)(param_1 + 0x10) + (ulong)param_2 * 0x28,&local_88);
        local_88 = puVar2;
        FUN_0018b1a0(&local_88);
        puVar3 = puVar4;
      } while (puVar4 != (undefined4 *)param_3[1]);
    }
  }
  return bVar1;
}


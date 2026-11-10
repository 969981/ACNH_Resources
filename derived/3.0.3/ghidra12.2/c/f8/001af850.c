
void FUN_001af850(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  
  puVar3 = PTR_DAT_04bc0ec8;
  local_60[0] = 0;
  local_50 = local_60;
  uStack_48 = 0x10;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_68 = puVar1;
  FUN_0018b070(&local_68,&DAT_0410a6cf,0xffffffffffffffff);
  plVar6 = (long *)(param_2 + 0x38);
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar6;
    do {
      uVar4 = FUN_0018b4e0(plVar8 + 4,&local_68);
      plVar2 = plVar8 + 1;
      if ((uVar4 & 1) == 0) {
        plVar7 = plVar8;
        plVar2 = plVar8;
      }
      plVar8 = (long *)*plVar2;
    } while (plVar8 != (long *)0x0);
    if ((plVar7 != plVar6) && (uVar4 = FUN_0018b4e0(&local_68,plVar7 + 4), (uVar4 & 1) == 0)) {
      local_68 = puVar3 + 0x10;
      FUN_0018b1a0(&local_68);
      *param_1 = (long)(puVar3 + 0x10);
      *(undefined1 *)(param_1 + 1) = 0;
      param_1[3] = (long)(param_1 + 1);
      param_1[4] = 0x10;
      puVar5 = (undefined8 *)plVar7[0xc];
      goto LAB_001af940;
    }
  }
  local_68 = puVar1;
  FUN_0018b1a0(&local_68);
  *param_1 = (long)puVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  puVar5 = &DAT_0407ebb1;
  param_1[3] = (long)(param_1 + 1);
  param_1[4] = 0x10;
LAB_001af940:
  FUN_0018b070(param_1,puVar5,0xffffffffffffffff);
  return;
}


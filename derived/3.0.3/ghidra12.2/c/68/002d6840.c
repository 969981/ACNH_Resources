
int FUN_002d6840(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  FUN_0018d610(auStack_40);
  local_60[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_50 = local_60;
  uStack_48 = 0x10;
  local_68 = puVar1;
  FUN_0018b070(&local_68,*(undefined8 *)PTR_PTR_04bcea18,0xffffffffffffffff);
  plVar6 = (long *)(param_1 + 0x18);
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
      FUN_0018d620(auStack_40,plVar7 + 9);
      iVar5 = 1;
      local_68 = puVar1;
      FUN_0018b1a0(&local_68);
      goto joined_r0x002d68fc;
    }
  }
  iVar5 = 0;
  local_68 = puVar1;
  FUN_0018b1a0(&local_68);
joined_r0x002d68fc:
  if ((param_2 != (undefined4 *)0x0) && (iVar5 != 0)) {
    uVar3 = FUN_0018dafc(auStack_40);
    *param_2 = uVar3;
  }
  FUN_0018d854(auStack_40);
  return iVar5;
}


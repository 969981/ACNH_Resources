
undefined8 FUN_022af120(long param_1,int *param_2)

{
  undefined *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  short local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  short local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined *local_58;
  int local_50;
  int iStack_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  local_40 = 0;
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar4 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar8 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  local_48 = PTR_DAT_04bb6268 + 0x10;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_50 = *(int *)(param_1 + 8) + (int)(char)(&DAT_04102e30)[*param_2];
  iStack_4c = *(int *)(param_1 + 0xc) + (int)(char)(&DAT_04102e98)[*param_2];
  local_58 = puVar1;
  psVar5 = (short *)FUN_01a5190c(&local_48,0,&local_58,0);
  local_5e = (undefined1)psVar5[1];
  sVar2 = *psVar5;
  local_5d = *(undefined1 *)((long)psVar5 + 3);
  local_5c = *(undefined4 *)(psVar5 + 2);
  local_68 = *(int *)(param_1 + 8) + (int)(char)(&DAT_04102e94)[*param_2];
  iStack_64 = *(int *)(param_1 + 0xc) + (int)(char)(&DAT_04102eb4)[*param_2];
  local_70 = puVar1;
  local_60 = sVar2;
  psVar5 = (short *)FUN_01a5190c(&local_48,0,&local_70,0);
  sVar3 = *psVar5;
  local_76 = (undefined1)psVar5[1];
  local_75 = *(undefined1 *)((long)psVar5 + 3);
  local_74 = *(undefined4 *)(psVar5 + 2);
  local_78 = sVar3;
  if (((sVar2 == -2) || (iVar4 = FUN_0277ebd0(&local_60), iVar4 == 0)) &&
     ((sVar3 == -2 || (iVar4 = FUN_0277ebd0(&local_78), iVar4 == 0)))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}


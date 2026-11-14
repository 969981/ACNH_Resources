
void FUN_01dada20(void)

{
  undefined *puVar1;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb4770;
  if (*(int *)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10) + 0xaa0) == 3) {
    FUN_014b04a0(*(undefined8 *)PTR_DAT_04bb4770);
    FUN_014b0df0(*(undefined8 *)puVar1);
    FUN_02a8bc90(*(long *)PTR_DAT_04bb5008 + 0x26718);
    FUN_0205d018(*(undefined8 *)PTR_DAT_04bbcee0);
    FUN_007ebec8(*(undefined8 *)PTR_DAT_04bb4878);
    FUN_007cf4dc(*(undefined8 *)PTR_DAT_04bb4950);
    return;
  }
  FUN_01e2d5e0(*(long *)PTR_DAT_04bb3968 + 0xda0,0);
  DAT_054542d8 = 2;
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "SeasonEventIndoorSceneChangeUpdate";
  FUN_02743234(&local_30,1);
  return;
}


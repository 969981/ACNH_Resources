
void FUN_00822f90(int param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 uStack_321dc;
  undefined1 uStack_321db;
  int iStack_321d8;
  int iStack_321d4;
  undefined *puStack_321d0;
  undefined **ppuStack_321c8;
  undefined **ppuStack_321c0;
  
  iStack_321d4 = param_1;
  if (param_1 == 5) {
    FUN_01386940();
  }
  uStack_321db = param_1 == 6;
  iStack_321d8 = 0;
  uStack_321dc = 0;
  if (((iStack_321d4 != 7) && (iStack_321d4 != 8)) && (iStack_321d4 != 9)) {
    if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x3f5c743d) ||
       ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x2f1ac06c && (*(int *)(DAT_05351250 + 0xb0) != 0))))
    {
LAB_00823080:
      iStack_321d8 = 1;
    }
    else if (DAT_04c487d4 != -1) {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_00823080;
    }
  }
  ppuStack_321c8 = (undefined **)CONCAT44(ppuStack_321c8._4_4_,*(int *)(DAT_0519d040 + 0x200));
  if (iStack_321d8 != *(int *)(DAT_0519d040 + 0x200)) {
    *(undefined1 *)(DAT_052cc470 + 0x64c) = 0;
  }
  FUN_01384940(&uStack_321dc);
  if (iStack_321d8 == 0) {
    puStack_321d0 = PTR_DAT_04bbbab0 + 0x10;
    FUN_011b8490(&puStack_321d0);
    ppuStack_321c8 = &PTR_FUN_049863b0;
    ppuStack_321c0 = &puStack_321d0;
    FUN_011bc6f0(&ppuStack_321c8);
    ppuStack_321c8 = &PTR_LAB_049863d8;
    ppuStack_321c0 = &puStack_321d0;
    FUN_011bc6f0(&ppuStack_321c8);
    FUN_011b7d14(&puStack_321d0);
    FUN_011b7e44(&puStack_321d0);
  }
  if (iStack_321d4 == 5) {
    FUN_0167750c(&ppuStack_321c8);
    FUN_016884c0();
    FUN_02b1b5bc(8,1);
    FUN_0228ad68();
  }
  if (iStack_321d4 == 4) {
    return;
  }
  if (iStack_321d4 == 7) {
    return;
  }
  if (DAT_04c487d4 != -1) {
    ppuStack_321c8 = (undefined **)CONCAT44(ppuStack_321c8._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_008231f0;
  }
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x3f5c743d) &&
     ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x2f1ac06c || (*(int *)(DAT_05351250 + 0xb0) == 0)))) {
    FUN_015531d0(*(long *)PTR_DAT_04bb4c80 + 0x2540);
    return;
  }
LAB_008231f0:
  lVar2 = *(long *)PTR_DAT_04bb4c80;
  FUN_014b4dd0(lVar2 + 0x2868,0x32,0xffffffff,10,10);
  FUN_014b3e18(lVar2 + 0x2868);
  return;
}


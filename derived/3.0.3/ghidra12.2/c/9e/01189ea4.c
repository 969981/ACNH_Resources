
void FUN_01189ea4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0x5b8) != '\0') {
    *(byte *)(param_1 + 0x400) = *(byte *)(param_1 + 0x400) & 0xfd;
    FUN_03f45838(param_1 + 0x410);
    if (*(long *)(param_1 + 0x408) != 0) {
      *(byte *)(param_1 + 0x400) = *(byte *)(param_1 + 0x400) & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(param_1 + 0x408),0);
      *(undefined8 *)(param_1 + 0x408) = 0;
    }
    *(undefined1 *)(param_1 + 0x430) = 0;
  }
  *(undefined1 *)(param_1 + 0x5b8) = 0;
  *(undefined4 *)(param_1 + 0x5bc) = 0;
  if ((*(long *)(param_1 + 0x98) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x98) + 0x290), lVar2 != 0)) {
    plVar3 = (long *)(lVar2 + 0x88);
    uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((uVar1 & 1) != 0) {
      *plVar3 = (long)&PTR_LAB_04983a20;
    }
  }
  return;
}


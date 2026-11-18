
void FUN_033660d0(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x38) != '\0')) {
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) & 0xfd;
    FUN_03f45838(lVar1 + 0x18);
    if (*(long *)(lVar1 + 0x10) != 0) {
      *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(lVar1 + 0x10),param_2 & 1);
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    *(undefined1 *)(lVar1 + 0x38) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x38) != '\0')) {
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) & 0xfd;
    FUN_03f45838(lVar1 + 0x18);
    if (*(long *)(lVar1 + 0x10) != 0) {
      *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(lVar1 + 0x10),param_2 & 1);
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    *(undefined1 *)(lVar1 + 0x38) = 0;
  }
  return;
}


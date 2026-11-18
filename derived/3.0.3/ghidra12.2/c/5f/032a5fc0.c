
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032a5fc0(long param_1,byte param_2)

{
  long lVar1;
  byte bVar2;
  undefined **local_50;
  byte local_48;
  
  local_50 = &PTR_LAB_04b19b80;
  local_48 = param_2;
  FUN_032883c0(**(undefined8 **)(param_1 + 0x70),
               *(int *)(*(undefined8 **)(param_1 + 0x70) + 0xb) == 0 & param_2);
  (*(code *)local_50[4])(&local_50,*(undefined8 *)(param_1 + 0x78));
  (*(code *)local_50[4])(&local_50,*(undefined8 *)(param_1 + 0x80));
  (*(code *)local_50[4])(&local_50,*(undefined8 *)(param_1 + 0x88));
  (*(code *)local_50[4])(&local_50,*(undefined8 *)(param_1 + 0x90));
  (*(code *)local_50[4])(&local_50,*(undefined8 *)(param_1 + 0x98));
  (*(code *)local_50[4])(&local_50,*(undefined8 *)(param_1 + 0xa0));
  if (&local_50 != (undefined ***)0x0) {
    (*(code *)local_50[1])();
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if ((param_2 & 1) == 0) {
    *(ushort *)(lVar1 + 0x50) = *(ushort *)(lVar1 + 0x50) & 0xfffe;
    FUN_032c2100();
    lVar1 = *(long *)(param_1 + 0x38);
    bVar2 = *(byte *)(lVar1 + 0x1c8) & 0xfb;
  }
  else {
    *(ushort *)(lVar1 + 0x50) = *(ushort *)(lVar1 + 0x50) | 1;
    lVar1 = *(long *)(param_1 + 0x38);
    bVar2 = *(byte *)(lVar1 + 0x1c8) | 4;
  }
  *(byte *)(lVar1 + 0x1c8) = bVar2;
  return;
}


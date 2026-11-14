
void FUN_01d8042c(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    if ((char)param_1[2] == '\0') {
      return;
    }
  }
  else {
    uVar1 = *(undefined4 *)(lVar3 + 0x20);
    *(undefined1 *)(lVar3 + 0x28) = 0;
    *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar3 + 0x24);
    *(undefined4 *)(lVar3 + 0x24) = uVar1;
    if ((char)param_1[2] == '\0') {
      if (*(char *)((long)param_1 + 0x11) != '\0') {
        return;
      }
      if (**(long **)(DAT_053719b8 + 8) == 0 && (*(long **)(DAT_053719b8 + 8))[1] == 0) {
        return;
      }
      *(undefined1 *)((long)param_1 + 0x11) = 1;
      return;
    }
  }
  if (**(long **)(DAT_053719b8 + 8) != 0 || (*(long **)(DAT_053719b8 + 8))[1] != 0) {
    uVar2 = FUN_03bf8a30(DAT_05aec360);
    if ((uVar2 & 1) != 0) {
      return;
    }
    local_50 = *param_1;
    local_38 = 0x6400000000;
    local_48 = **(undefined8 **)(DAT_053719b8 + 8);
    uStack_40 = (*(undefined8 **)(DAT_053719b8 + 8))[1];
    FUN_03bf8770(DAT_05aec360,&local_50);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


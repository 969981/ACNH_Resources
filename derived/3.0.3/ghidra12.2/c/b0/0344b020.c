
void FUN_0344b020(undefined2 *param_1)

{
  byte bVar1;
  long lVar2;
  
  if (param_1 != (undefined2 *)0x0) {
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    }
    if (*(char *)(lVar2 + 0xdc8) == '\0') {
      bVar1 = 1;
    }
    else {
      bVar1 = (**(code **)(*(long *)(lVar2 + 0xdc0) + 0x18))(lVar2 + 0xdc0);
      *(undefined1 *)(lVar2 + 0xdc8) = 0;
    }
    *(byte *)(lVar2 + 0xdc9) = bVar1 & 1;
    *param_1 = *(undefined2 *)(lVar2 + 0x17e0);
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(lVar2 + 0x17e2);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)(lVar2 + 0x17e3);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar2 + 0x17e4);
  }
  return;
}


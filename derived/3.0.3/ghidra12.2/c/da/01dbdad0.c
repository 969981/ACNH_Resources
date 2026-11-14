
void FUN_01dbdad0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = DAT_0536c720;
  if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= DAT_0536c720) {
    uVar1 = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar1 * 0x38 + 0x30) = 1;
  if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x38) != 0 &&
      *(char *)(*(long *)PTR_DAT_04bb21d0 + 0xfd8) == '\0') {
    plVar4 = *(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x30);
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (((uVar2 & 1) == 0) && (uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4), (uVar2 & 1) == 0)) {
      FUN_0387de70(plVar4,&DAT_05b03f00,0xe,0x14,0x2d);
    }
  }
  if (*(long *)(DAT_0537d558 + 0x20) != 0) {
    lVar3 = *(long *)PTR_DAT_04bb49e8;
    *(undefined2 *)(*(long *)(lVar3 + 0x30) + 0xa8) = 0;
    *(undefined2 *)(*(long *)(lVar3 + 0x38) + 0xa8) = 0;
    *(undefined1 *)(lVar3 + 0x40) = 1;
  }
  *(undefined1 *)(param_1 + 0x61) = 1;
  return;
}



void FUN_00476310(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1 + 0x498;
  lVar3 = 0x40;
  do {
    if (*(int *)(lVar2 + 0x40) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x30))
                (*(long **)(param_1 + 8),lVar2,*(int *)(lVar2 + 0x40),
                 *(undefined4 *)(&DAT_04140f44 + lVar3));
      *(undefined4 *)(lVar2 + 0x40) = 0;
    }
    lVar2 = lVar2 + -0x48;
    bVar1 = lVar3 != 0;
    lVar3 = lVar3 + -4;
  } while (bVar1);
  return;
}


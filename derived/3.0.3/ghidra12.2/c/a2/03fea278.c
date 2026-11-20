
void FUN_03fea278(long *param_1)

{
  char cVar1;
  long lVar2;
  
  if (((0 < (int)param_1[0xf0]) && ((*(byte *)(param_1 + 0xc) >> 5 & 1) != 0)) &&
     (((*(byte *)((long)param_1 + 0x6a) ^ 0xff) & 0x18) == 0)) {
    (**(code **)(*(long *)param_1[3] + 0x80))
              ((long *)param_1[3],
               (ulong)CONCAT12(*(undefined1 *)((long)param_1 + 100),
                               *(undefined2 *)((long)param_1 + 0x4e)));
    FUN_03fea370(param_1);
    (**(code **)(*param_1 + 0x38))(param_1);
    if ((*(ushort *)(param_1 + 0xc) & 0x8020) == 0x8000) {
      lVar2 = param_1[0x126];
      (&LAB_0038a448)[lVar2] = (&LAB_0038a448)[lVar2] | 0x40;
      cVar1 = (&LAB_0038a458)[lVar2];
      if (cVar1 != '\0') {
        (&LAB_0038a458)[lVar2] = 0;
        *(int *)(lVar2 + 0x34e0b4) = *(int *)(lVar2 + 0x34e0b4) + 1;
      }
      *(uint *)(&LAB_0038a454 + lVar2) = (uint)(cVar1 == '\0');
    }
  }
  return;
}


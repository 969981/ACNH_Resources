
undefined8 FUN_00365390(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != param_1) {
    do {
      if (*param_2 == *(char *)(lVar4 + 0x10)) {
        uVar3 = 0;
        cVar2 = *param_2;
        do {
          uVar5 = uVar3;
          if (cVar2 == '\0') goto LAB_00365450;
          if (param_2[uVar5 + 1] != *(char *)(lVar4 + 0x11 + uVar5)) goto LAB_003653a8;
          if (param_2[uVar5 + 1] == '\0') goto LAB_00365450;
          lVar1 = lVar4 + 0x11 + uVar5;
          if (param_2[uVar5 + 2] != *(char *)(lVar1 + 1)) {
            uVar5 = uVar5 + 1;
            goto LAB_003653a8;
          }
          if (param_2[uVar5 + 2] == '\0') goto LAB_00365450;
          if (param_2[uVar5 + 3] != *(char *)(lVar1 + 2)) {
            uVar5 = uVar5 + 2;
            goto LAB_003653a8;
          }
          if ((param_2[uVar5 + 3] == '\0') || (uVar5 == 0x7c)) goto LAB_00365450;
          cVar2 = param_2[uVar5 + 4];
          uVar3 = uVar5 + 4;
        } while (cVar2 == *(char *)(lVar1 + 3));
        uVar5 = uVar5 + 3;
LAB_003653a8:
        if (0x7e < uVar5) {
LAB_00365450:
          return *(undefined8 *)(lVar4 + 0x90);
        }
      }
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != param_1);
  }
  return 0;
}


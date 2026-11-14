
void FUN_01dd18d0(long param_1,undefined8 *param_2,ulong *param_3,uint param_4)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[2] = 0;
  *param_2 = 0xffffffff00000000;
  param_2[3] = 0;
  param_2[4] = 0;
  iVar2 = *(int *)(*(long *)(param_1 + 0xe0) + 0x20);
  if (iVar2 != 0) {
    plVar4 = *(long **)(*(long *)(param_1 + 0xe0) + 0x28);
    lVar5 = (long)iVar2 * 8;
    do {
      lVar5 = lVar5 + -8;
      lVar6 = *plVar4;
      if (*param_3 == *(ulong *)(lVar6 + 0x20)) {
        if (((((int)param_4 < 0) || (*(int *)(lVar6 + 0x58) <= (int)param_4)) ||
            (plVar4 = *(long **)(*(long *)(lVar6 + 0x60) + (ulong)param_4 * 8),
            plVar4 == (long *)0x0)) || (*plVar4 == 0)) {
          if ((int)param_4 < *(int *)(lVar6 + 0x98)) {
            *(undefined4 *)param_2 = 6;
            uVar3 = *param_3;
            *(uint *)((long)param_2 + 4) = param_4;
            param_2[1] = uVar3;
            return;
          }
          return;
        }
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        *(undefined1 *)(param_2 + 5) = 0;
        *param_2 = 0xffffffff00000005;
        plVar1 = &DAT_04178a58;
        if ((char)plVar4[0xd8] != '\0') {
          plVar1 = plVar4 + 1;
        }
        lVar5 = *plVar1;
        *(uint *)((long)param_2 + 4) = param_4;
        param_2[1] = lVar5;
        param_2[2] = plVar4 + 1;
        FUN_01d6cda0(param_2);
        return;
      }
      plVar4 = plVar4 + 1;
    } while (*param_3 <= *(ulong *)(lVar6 + 0x20) && lVar5 != 0);
  }
  return;
}


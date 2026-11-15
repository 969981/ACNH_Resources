
void FUN_020b6bd0(int *param_1)

{
  char *__dest;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *__src;
  long lVar4;
  long *plVar5;
  undefined *local_50;
  char *local_48;
  
  if (*param_1 < param_1[1]) {
    plVar5 = *(long **)(param_1 + 4);
    if (plVar5 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar5;
    }
    puVar2 = PTR_DAT_04bb2020;
    __dest = (char *)((long)plVar5 + 0x14);
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "ChocolateDemoAirPort";
    *(undefined4 *)(plVar5 + 2) = 0x20;
    puVar3 = PTR_DAT_04bb2a08;
    *(undefined1 *)((long)plVar5 + 0x33) = 0;
    *plVar5 = (long)(puVar3 + 0x10);
    plVar5[1] = (long)__dest;
    (**(code **)(puVar2 + 0x28))(&local_50);
    __src = local_48;
    if (__dest != local_48) {
      (**(code **)(local_50 + 0x18))(&local_50);
      lVar4 = 0;
      do {
        if (local_48[lVar4] == '\0') goto LAB_020b6cbc;
        if (local_48[lVar4 + 1] == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_020b6cbc;
        }
        if (local_48[lVar4 + 2] == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_020b6cbc;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_020b6cbc:
      iVar1 = (int)lVar4;
      if ((int)plVar5[2] <= (int)lVar4) {
        iVar1 = (int)plVar5[2] + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      __dest[iVar1] = '\0';
    }
    *plVar5 = (long)(PTR_DAT_04bb2028 + 0x10);
    if (*param_1 < param_1[1]) {
      *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar5;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}


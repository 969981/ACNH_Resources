
undefined8 FUN_03b79f20(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *__src;
  undefined **local_158;
  undefined1 *puStack_150;
  int local_148;
  undefined1 auStack_144 [255];
  undefined1 local_45;
  
  if (*(char *)param_3[1] != '\0') {
    local_148 = 0x100;
    local_45 = 0;
    local_158 = &PTR_LAB_04914140;
    puStack_150 = auStack_144;
    (**(code **)(*param_3 + 0x18))(param_3);
    __src = (undefined1 *)param_3[1];
    if (auStack_144 != __src) {
      (**(code **)(*param_3 + 0x18))(param_3);
      lVar3 = 0;
      do {
        if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_03b79fec;
        lVar1 = param_3[1] + lVar3;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_03b79fec;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_03b79fec;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_03b79fec:
      iVar2 = (int)lVar3;
      if (local_148 <= (int)lVar3) {
        iVar2 = local_148 + -1;
      }
      memcpy(auStack_144,__src,(long)iVar2);
      auStack_144[iVar2] = 0;
    }
    local_158 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    FUN_038d13f0(&local_158,"\\%s.%s",param_2[1],&DAT_04094415);
  }
  return 0;
}


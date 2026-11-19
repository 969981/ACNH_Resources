
long FUN_03b0cd10(long param_1,long *param_2)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined **local_160;
  char *pcStack_158;
  char *local_150;
  uint local_148;
  int iStack_144;
  char acStack_140 [8];
  undefined2 local_138;
  undefined1 local_136;
  
  local_136 = 0;
  local_150 = acStack_140;
  local_138 = 0x2f67;
  local_148 = 10;
  iStack_144 = 0x100;
  acStack_140 = (char  [8])s_LayoutMsg__0406f382._0_8_;
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = local_148;
  pcVar3 = local_150;
  lVar6 = 0;
  do {
    pcVar1 = (char *)(param_2[1] + lVar6);
    lVar6 = lVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar2 = (int)lVar6 - 1;
  uVar5 = iStack_144 + ~local_148;
  if (iStack_144 <= (int)(uVar2 + local_148)) {
    uVar2 = uVar5;
  }
  if (0 < (int)uVar2) {
    memcpy(local_150 + (int)local_148,(void *)param_2[1],(ulong)uVar2);
    local_148 = uVar2 + uVar4;
    pcVar3[(int)local_148] = '\0';
    uVar5 = iStack_144 + ~local_148;
  }
  pcVar3 = local_150;
  uVar4 = 5;
  if (iStack_144 <= (int)(local_148 + 5)) {
    uVar4 = uVar5;
  }
  if (0 < (int)uVar4) {
    lVar6 = (long)(int)local_148;
    memcpy(local_150 + lVar6,&DAT_0408cbe7,(ulong)uVar4);
    lVar6 = lVar6 + (int)uVar4;
    pcVar3[lVar6] = '\0';
    local_148 = (uint)lVar6;
  }
  local_160 = &PTR_LAB_048f9770;
  if (*(long *)(param_1 + 0x10) != param_1 + 8) {
    lVar7 = (long)*(int *)(param_1 + 0x1c);
    lVar6 = *(long *)(param_1 + 0x10) - lVar7;
    pcStack_158 = local_150;
    do {
      uVar4 = (**(code **)(**(long **)(lVar6 + 0x30) + 0x40))(*(long **)(lVar6 + 0x30),&local_160);
      if ((-1 < (int)uVar4) && (*(long *)(lVar6 + 0x40) != 0)) {
        if (*(uint *)(lVar6 + 0x38) <= uVar4) {
          uVar4 = 0;
        }
        return *(long *)(lVar6 + 0x40) + (ulong)uVar4 * 0x10;
      }
      lVar6 = *(long *)(lVar6 + lVar7 + 8) - lVar7;
    } while (lVar6 != (param_1 + 8) - lVar7);
  }
  return 0;
}


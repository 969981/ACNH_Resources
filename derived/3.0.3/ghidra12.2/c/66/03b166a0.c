
void FUN_03b166a0(long *param_1,long param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long local_78 [4];
  long local_58;
  
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x90);
    local_78[0] = param_2;
    if (lVar4 == 0) {
      uVar8 = 1;
    }
    else {
      lVar6 = *(long *)(lVar4 + 0x90);
      local_78[1] = lVar4;
      if (lVar6 == 0) {
        uVar8 = 2;
      }
      else {
        lVar4 = *(long *)(lVar6 + 0x90);
        local_78[2] = lVar6;
        if (lVar4 == 0) {
          uVar8 = 3;
        }
        else {
          local_78[3] = lVar4;
          if (*(long *)(lVar4 + 0x90) == 0) {
            uVar8 = 4;
          }
          else {
            uVar8 = 5;
            local_58 = *(long *)(lVar4 + 0x90);
          }
        }
      }
    }
    uVar5 = 0;
    uVar7 = 0;
    uVar9 = 0;
    *(undefined1 *)*param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    do {
      lVar6 = *param_1;
      lVar4 = 0;
      do {
        pcVar1 = (char *)((long)*(void **)(local_78[uVar8 + ~uVar9] + 0x30) + lVar4);
        lVar4 = lVar4 + 1;
      } while (*pcVar1 != '\0');
      uVar2 = (int)lVar4 - 1;
      uVar3 = (uint)uVar7;
      if (*(int *)((long)param_1 + 0xc) <= (int)(uVar2 + uVar3)) {
        uVar2 = *(int *)((long)param_1 + 0xc) + ~uVar3;
      }
      if (0 < (int)uVar2) {
        memcpy((void *)(lVar6 + (int)uVar3),*(void **)(local_78[uVar8 + ~uVar9] + 0x30),(ulong)uVar2
              );
        uVar5 = (long)(int)uVar3 + (long)(int)uVar2;
        uVar7 = uVar5 & 0xffffffff;
        *(undefined1 *)(lVar6 + uVar5) = 0;
        *(int *)(param_1 + 1) = (int)uVar5;
      }
      uVar9 = uVar9 + 1;
      if (uVar9 < uVar8) {
        uVar3 = (uint)uVar5;
        uVar2 = *(int *)((long)param_1 + 0xc) + ~uVar3;
        if ((int)(uVar3 + 1) < *(int *)((long)param_1 + 0xc)) {
          uVar2 = 1;
        }
        if ((int)uVar2 < 1) {
          uVar7 = uVar5 & 0xffffffff;
        }
        else {
          lVar4 = *param_1;
          memcpy((void *)(lVar4 + (int)uVar3),&DAT_04079e84,(ulong)uVar2);
          uVar5 = (long)(int)uVar3 + (long)(int)uVar2;
          uVar7 = uVar5 & 0xffffffff;
          *(undefined1 *)(lVar4 + uVar5) = 0;
          *(int *)(param_1 + 1) = (int)uVar5;
        }
      }
    } while (uVar9 != uVar8);
  }
  return;
}


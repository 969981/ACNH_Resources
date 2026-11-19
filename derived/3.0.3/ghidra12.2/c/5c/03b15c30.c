
void FUN_03b15c30(long *param_1,void *param_2,long param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long local_88 [4];
  long local_68;
  
  *(undefined1 *)*param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_3 == 0) {
    uVar10 = 0;
  }
  else {
    lVar5 = *(long *)(param_3 + 0x90);
    uVar10 = 0;
    if (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0x90);
      local_88[0] = param_3;
      if (lVar7 == 0) {
        uVar11 = 1;
      }
      else {
        local_88[1] = lVar5;
        lVar5 = *(long *)(lVar7 + 0x90);
        if (lVar5 == 0) {
          uVar11 = 2;
        }
        else {
          local_88[2] = lVar7;
          lVar7 = *(long *)(lVar5 + 0x90);
          if (lVar7 == 0) {
            uVar11 = 3;
          }
          else {
            local_88[3] = lVar5;
            if (*(long *)(lVar7 + 0x90) == 0) {
              uVar11 = 4;
            }
            else {
              uVar11 = 5;
              local_68 = lVar7;
            }
          }
        }
      }
      lVar5 = 0;
      uVar12 = 0;
      do {
        lVar7 = *param_1;
        uVar10 = 0xffffffff;
        pcVar1 = (char *)(*(long *)(local_88[uVar11 + ~uVar12] + 0x18) + 0xb0);
        iVar6 = *(int *)((long)param_1 + 0xc);
        pcVar9 = pcVar1;
        do {
          cVar2 = *pcVar9;
          uVar10 = uVar10 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        uVar3 = (uint)lVar5;
        uVar8 = iVar6 + ~uVar3;
        if (iVar6 <= (int)(uVar3 + uVar10)) {
          uVar10 = uVar8;
        }
        if (0 < (int)uVar10) {
          memcpy((void *)(lVar7 + (int)uVar3),pcVar1,(ulong)uVar10);
          lVar5 = (long)(int)uVar3 + (long)(int)uVar10;
          *(undefined1 *)(lVar7 + lVar5) = 0;
          *(uint *)(param_1 + 1) = (uint)lVar5;
          iVar6 = *(int *)((long)param_1 + 0xc);
          lVar7 = *param_1;
          uVar8 = iVar6 + ~(uint)lVar5;
        }
        iVar4 = (int)lVar5;
        if (iVar4 + 1 < iVar6) {
          uVar8 = 1;
        }
        if (0 < (int)uVar8) {
          memcpy((void *)(lVar7 + iVar4),&DAT_040d759c,(ulong)uVar8);
          lVar5 = (long)iVar4 + (long)(int)uVar8;
          *(undefined1 *)(lVar7 + lVar5) = 0;
          *(int *)(param_1 + 1) = (int)lVar5;
        }
        uVar10 = (uint)lVar5;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar11);
    }
  }
  lVar7 = *param_1;
  lVar5 = 0;
  do {
    pcVar1 = (char *)((long)param_2 + lVar5);
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  uVar8 = (int)lVar5 - 1;
  if (*(int *)((long)param_1 + 0xc) <= (int)(uVar8 + uVar10)) {
    uVar8 = *(int *)((long)param_1 + 0xc) + ~uVar10;
  }
  if (0 < (int)uVar8) {
    memcpy((void *)(lVar7 + (int)uVar10),param_2,(ulong)uVar8);
    lVar5 = (long)(int)uVar10 + (long)(int)uVar8;
    *(undefined1 *)(lVar7 + lVar5) = 0;
    *(int *)(param_1 + 1) = (int)lVar5;
  }
  return;
}



uint FUN_0171cd20(long *param_1,uint param_2)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_48 [8];
  char *local_40;
  uint local_34;
  
  local_34 = param_2;
  if (((DAT_05248f18 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05248f18), iVar3 != 0)) {
    DAT_05248f10 = 0xffffffff;
    __cxa_guard_release(&DAT_05248f18);
  }
  if (local_34 < 8) {
    uVar5 = (ulong)local_34;
    psVar1 = (short *)((long)param_1 + 0x7c);
    psVar2 = psVar1 + uVar5 * 2;
    if (7 < local_34) {
      uVar5 = 0;
      psVar2 = psVar1;
    }
    if (*psVar2 != -1 && psVar2[1] != -1) {
      return *(uint *)(psVar1 + uVar5 * 2);
    }
    (**(code **)(*param_1 + 0x20))(auStack_48,param_1);
    if (*local_40 != '\0') {
      if ((param_1[1] == 0) || (lVar6 = param_1[2], lVar6 == 0)) {
        uVar8 = 0xffff;
        uVar7 = 0xffff0000;
      }
      else {
        if (*(int *)(lVar6 + 0x30) == 0) {
          uVar8 = 0xffffffff;
        }
        else {
          lVar10 = *(long *)(lVar6 + 0x38);
          lVar9 = 0;
          lVar6 = (long)*(int *)(lVar6 + 0x30) << 3;
          uVar8 = 0xffffffff;
          do {
            plVar4 = (long *)**(undefined8 **)(lVar10 + lVar9 * 8);
            iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,auStack_48);
            if (iVar3 != -1) {
              uVar8 = (uint)lVar9 & 0xffff | iVar3 << 0x10;
              break;
            }
            lVar9 = lVar9 + 1;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
        uVar7 = uVar8 & 0xffff0000;
        uVar8 = uVar8 & 0xffff;
      }
      return uVar8 | uVar7;
    }
  }
  return DAT_05248f10;
}



undefined1 FUN_03894040(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  byte local_34 [4];
  
  if (*(char *)(param_1 + 0x5a0) != '\0') {
    if (*(int *)(param_1 + 0x568) == 0) {
      local_34[0] = (**(code **)(**(long **)(DAT_05ae6a60 + 0x68) + 0x80))();
      if (local_34[0] == 0xff) {
        return 0;
      }
      plVar4 = *(long **)(DAT_05ae6a60 + 0x68);
      if (*(byte *)(plVar4 + 4) == local_34[0]) {
        uVar5 = *(ulong *)(param_1 + 0x4d8);
      }
      else {
        cVar3 = (**(code **)(*plVar4 + 0x158))(plVar4,local_34);
        uVar2 = (uint)cVar3;
        if (*(uint *)(param_1 + 0x4a8) <= uVar2) {
          uVar2 = 0;
        }
        uVar5 = *(ulong *)(*(long *)(param_1 + 0x4b0) + (long)(int)uVar2 * 0x70 + 0x10);
      }
      if (uVar5 != 0) {
        lVar6 = *(long *)(*(long *)(DAT_05ae6a60 + 0x68) + 0xf8);
        iVar1 = *(int *)(lVar6 + 0x28);
        if (iVar1 != 0) {
          plVar4 = *(long **)(lVar6 + 0x30);
          lVar6 = (long)iVar1 << 3;
          do {
            lVar8 = *plVar4;
            if (((((uVar5 >> ((long)*(char *)(lVar8 + 0x21) & 0x3fU) & 1) != 0) &&
                 (*(long *)(lVar8 + 0x10) == *param_2)) &&
                (*(char *)(lVar8 + 0x18) == (char)param_2[1])) &&
               (*(char *)(lVar8 + 0x19) == *(char *)((long)param_2 + 9))) {
              return 1;
            }
            plVar4 = plVar4 + 1;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x570);
      lVar6 = (long)*(int *)(param_1 + 0x568) << 3;
      do {
        plVar7 = (long *)*plVar4;
        if (((*plVar7 == *param_2) && ((char)plVar7[1] == (char)param_2[1])) &&
           (*(char *)((long)plVar7 + 9) == *(char *)((long)param_2 + 9))) {
          return 1;
        }
        plVar4 = plVar4 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
  }
  return 0;
}


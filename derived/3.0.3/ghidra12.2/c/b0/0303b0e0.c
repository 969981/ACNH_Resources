
undefined4 FUN_0303b0e0(undefined8 param_1,char *param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_28;
  
  if (*param_2 == '\0') {
    local_28 = *(undefined8 *)(param_2 + 8);
    uVar2 = FUN_0344ea50(&local_28,param_1);
    iVar1 = *param_3;
    if ((uVar2 & 1) == 0) {
      if (iVar1 == 1) {
        uVar2 = *(ulong *)(param_2 + 8);
        if (*param_2 != '\0') {
          uVar2 = 0;
        }
        if (**(long **)PTR_DAT_04bb36f8 != 0) {
          iVar1 = *(int *)(*(long *)(DAT_053807b0 + 0xe0) + 0x20);
          if (iVar1 != 0) {
            plVar3 = *(long **)(*(long *)(DAT_053807b0 + 0xe0) + 0x28);
            lVar4 = (long)iVar1 * 8;
            do {
              lVar4 = lVar4 + -8;
              uVar5 = *(ulong *)(*plVar3 + 0x20);
              if (uVar2 == uVar5) {
                return *(undefined4 *)(*plVar3 + 0x9c);
              }
              plVar3 = plVar3 + 1;
            } while (uVar2 <= uVar5 && lVar4 != 0);
            return 0;
          }
        }
      }
      else if (iVar1 == 0) {
        uVar2 = *(ulong *)(param_2 + 8);
        if (*param_2 != '\0') {
          uVar2 = 0;
        }
        if (**(long **)PTR_DAT_04bb36f8 != 0) {
          iVar1 = *(int *)(*(long *)(DAT_053807b0 + 0xe0) + 0x20);
          if (iVar1 != 0) {
            plVar3 = *(long **)(*(long *)(DAT_053807b0 + 0xe0) + 0x28);
            lVar4 = (long)iVar1 * 8;
            do {
              lVar4 = lVar4 + -8;
              uVar5 = *(ulong *)(*plVar3 + 0x20);
              if (uVar2 == uVar5) {
                return *(undefined4 *)(*plVar3 + 0x98);
              }
              plVar3 = plVar3 + 1;
            } while (uVar2 <= uVar5 && lVar4 != 0);
            return 0;
          }
        }
      }
    }
    else if (iVar1 == 1) {
      if (*DAT_04cb54f0 != 0) {
        return *(undefined4 *)(*(long *)(DAT_053807b0 + 0xd8) + 0x9c);
      }
    }
    else if ((iVar1 == 0) && (*DAT_04cb54f0 != 0)) {
      return *(undefined4 *)(*(long *)(DAT_053807b0 + 0xd8) + 0x98);
    }
  }
  else if (*param_3 == 1) {
    if ((*DAT_04cb54f0 != 0) && (*(long *)(DAT_053807b0 + 0xf0) != 0)) {
      return *(undefined4 *)(*(long *)(DAT_053807b0 + 0xf0) + 0x9c);
    }
  }
  else if (((*param_3 == 0) && (*DAT_04cb54f0 != 0)) && (*(long *)(DAT_053807b0 + 0xf0) != 0)) {
    return *(undefined4 *)(*(long *)(DAT_053807b0 + 0xf0) + 0x98);
  }
  return 0;
}


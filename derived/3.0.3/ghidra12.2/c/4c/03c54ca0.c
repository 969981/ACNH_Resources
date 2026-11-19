
void FUN_03c54ca0(long param_1,long *param_2,long param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 != param_1 + 0x30) {
    lVar7 = lVar8 + -0x160;
    do {
      plVar5 = (long *)(lVar7 + 0x20);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      pcVar6 = *(char **)(lVar7 + 0x28);
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar3 = (char *)param_2[1];
      if (pcVar6 == pcVar3) {
LAB_03c54db0:
        nn::os::LockMutex((MutexType *)(lVar7 + 0x140));
        iVar2 = *(int *)(lVar7 + 0x108);
        if (*(int *)(lVar7 + 0x10c) <= iVar2) goto LAB_03c54e24;
        if ((param_4 & 1) == 0) {
          plVar5 = (long *)(*(long *)(lVar7 + 0x110) + (long)iVar2 * 8);
LAB_03c54e10:
          *plVar5 = param_3;
          *(int *)(lVar7 + 0x108) = *(int *)(lVar7 + 0x108) + 1;
        }
        else if (-1 < iVar2) {
          if (iVar2 != 0) {
            memmove((void *)((long)*(void **)(lVar7 + 0x110) + 8),*(void **)(lVar7 + 0x110),
                    (long)iVar2 << 3);
          }
          plVar5 = *(long **)(lVar7 + 0x110);
          goto LAB_03c54e10;
        }
        *(undefined1 *)(param_3 + 8) = 0;
LAB_03c54e24:
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x140));
        return;
      }
      cVar1 = **(char **)(lVar7 + 0x28);
      if (cVar1 == *pcVar3) {
        if (cVar1 != '\0') {
          lVar4 = 0x7fffe;
          pcVar6 = *(char **)(lVar7 + 0x28);
LAB_03c54d60:
          if (pcVar6[1] == pcVar3[1]) {
            if (pcVar6[1] == '\0') goto LAB_03c54dac;
            if (pcVar6[2] == pcVar3[2]) {
              if (pcVar6[2] == '\0') goto LAB_03c54dac;
              if ((lVar4 != 0) && (cVar1 = pcVar6[3], cVar1 == pcVar3[3])) goto code_r0x03c54d9c;
            }
          }
          goto LAB_03c54ce0;
        }
        goto LAB_03c54db0;
      }
LAB_03c54ce0:
      lVar8 = *(long *)(lVar8 + 8);
      lVar7 = lVar8 + -0x160;
    } while (lVar7 != param_1 + -0x130);
  }
  return;
code_r0x03c54d9c:
  lVar4 = lVar4 + -3;
  pcVar3 = pcVar3 + 3;
  pcVar6 = pcVar6 + 3;
  if (cVar1 == '\0') {
LAB_03c54dac:
    if (lVar7 == 0) {
      return;
    }
    goto LAB_03c54db0;
  }
  goto LAB_03c54d60;
}


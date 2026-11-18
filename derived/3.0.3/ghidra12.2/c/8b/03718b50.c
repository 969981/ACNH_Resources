
void FUN_03718b50(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  long lVar6;
  ulong uVar7;
  void *__dest;
  void *__src;
  undefined4 local_48;
  undefined4 local_44;
  
  __dest = *(void **)(param_1 + 0x18);
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_03718bf0;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03718bf0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03718bf0;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03718bf0:
    iVar2 = (int)lVar6;
    if (*(int *)(param_1 + 0x20) <= (int)lVar6) {
      iVar2 = *(int *)(param_1 + 0x20) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  uVar5 = FUN_0376baa0(param_2);
  *(undefined2 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = 3;
  lVar6 = DAT_053e67f0;
  if (DAT_053e67f0 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    local_48 = FUN_006bd550(param_2[1],0);
    lVar6 = FUN_0079e770(lVar6,&local_48);
    if (lVar6 != 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return;
    }
  }
  lVar6 = DAT_053f9928;
  if (DAT_053f9928 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    local_44 = FUN_006bd550(param_2[1],0);
    lVar6 = FUN_0079e4d0(lVar6,&local_44);
    if (lVar6 != 0) {
      *(undefined4 *)(param_1 + 0x3c) = 1;
      return;
    }
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((char *)param_2[1] == "NpcPlayer") {
LAB_03718d34:
    *(undefined4 *)(param_1 + 0x3c) = 2;
    if ((param_3 & 1) == 0) {
      *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 1;
    }
  }
  else {
    uVar7 = 0;
    bVar4 = true;
    do {
      cVar3 = ((char *)param_2[1])[uVar7];
      if (cVar3 != "NpcPlayer"[uVar7]) {
        return;
      }
      if (cVar3 == '\0') {
        if (!bVar4) {
          return;
        }
        goto LAB_03718d34;
      }
      bVar4 = uVar7 < 0x80000;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x80001);
  }
  return;
}


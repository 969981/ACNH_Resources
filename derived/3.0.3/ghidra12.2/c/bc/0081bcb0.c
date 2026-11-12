
void FUN_0081bcb0(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  void *__dest;
  void *__src;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined4 local_9c;
  ulong local_98;
  undefined *local_90;
  long local_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined8 local_60;
  undefined2 local_58;
  undefined4 local_54;
  
  __dest = (void *)param_1[0x27];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_0081bd5c;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0081bd5c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0081bd5c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0081bd5c:
    iVar4 = (int)lVar6;
    if ((int)param_1[0x28] <= (int)lVar6) {
      iVar4 = (int)param_1[0x28] + -1;
    }
    memcpy(__dest,__src,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  local_a0 = 1;
  local_68 = 1;
  local_66 = 1;
  local_9c = 8;
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_9e = 0;
  local_58 = 0x100;
  iVar4 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar5 = (**(code **)(*param_1 + 0x20))(param_1);
  local_88 = param_1[0x27];
  local_98 = (ulong)(iVar5 * iVar4 + 0x400);
  local_54 = 0x40a00000;
  local_70 = param_3;
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((char *)param_2[1] == "ResUnitMgr") {
LAB_0081be70:
    uStack_78 = 0xa00000;
    local_80 = &LAB_01400000;
  }
  else {
    uVar7 = 0;
    bVar3 = true;
    do {
      cVar2 = ((char *)param_2[1])[uVar7];
      if (cVar2 != "ResUnitMgr"[uVar7]) break;
      if (cVar2 == '\0') {
        if (bVar3) goto LAB_0081be70;
        break;
      }
      bVar3 = uVar7 < 0x80000;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((char *)param_2[1] == "UIIconResMgr") {
LAB_0081bef0:
      uStack_78 = 1;
      local_80 = (undefined1 *)0x13d6f0;
    }
    else {
      uVar7 = 0;
      bVar3 = true;
      do {
        cVar2 = ((char *)param_2[1])[uVar7];
        if (cVar2 != "UIIconResMgr"[uVar7]) break;
        if (cVar2 == '\0') {
          if (bVar3) goto LAB_0081bef0;
          break;
        }
        bVar3 = uVar7 < 0x80000;
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x80001);
      local_80 = (undefined1 *)0x1;
      uStack_78 = 1;
    }
  }
  local_60 = DAT_04ccea60;
  FUN_03f2ab60(param_1 + 4,&local_a0);
  return;
}


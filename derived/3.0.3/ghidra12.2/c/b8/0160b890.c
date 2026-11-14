
void FUN_0160b890(long param_1,long *param_2)

{
  long lVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  void *__dest;
  long *plVar7;
  long lVar8;
  void *__src;
  int local_44;
  int local_28;
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_0160b940:
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  else {
    plVar7 = (long *)(param_1 + 8);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar8 = *(long *)(param_1 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar8 != param_2[1]) {
      uVar6 = 0;
      bVar4 = true;
      do {
        cVar3 = *(char *)(*(long *)(param_1 + 0x10) + uVar6);
        if (cVar3 != *(char *)(param_2[1] + uVar6)) break;
        if (cVar3 == '\0') {
          if (bVar4) goto LAB_0160b948;
          break;
        }
        bVar4 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      goto LAB_0160b940;
    }
  }
LAB_0160b948:
  lVar8 = FUN_0160cc10(*(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0x1d8),
                       *(undefined4 *)(param_1 + 4),param_2,(undefined4 *)(param_1 + 4));
  *(long *)(param_1 + 0x68) = lVar8;
  if (lVar8 != 0) {
    plVar7 = (long *)(**(code **)(*(long *)(lVar8 + 0x158) + 0xf0))(lVar8 + 0x158);
    __dest = *(void **)(param_1 + 0x10);
    (**(code **)(*plVar7 + 0x18))();
    __src = (void *)plVar7[1];
    if (__dest != __src) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar8 = 0;
      do {
        if (*(char *)(plVar7[1] + lVar8) == '\0') goto LAB_0160ba0c;
        lVar1 = plVar7[1] + lVar8;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_0160ba0c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_0160ba0c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_0160ba0c:
      iVar5 = (int)lVar8;
      if (*(int *)(param_1 + 0x18) <= (int)lVar8) {
        iVar5 = *(int *)(param_1 + 0x18) + -1;
      }
      memcpy(__dest,__src,(long)iVar5);
      *(undefined1 *)((long)__dest + (long)iVar5) = 0;
    }
  }
  local_28 = 0;
  local_44 = 0;
  if (DAT_04c487d4 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0xf & 1) != 0) goto LAB_0160babc;
  }
  local_28 = FUN_00a86724(DAT_04da7238);
  local_44 = FUN_00a867c8(DAT_04da7238);
LAB_0160babc:
  iVar5 = *(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x60) != local_28) {
    *(int *)(param_1 + 0x60) = local_28;
    iVar5 = local_28;
  }
  if (*(int *)(param_1 + 100) != local_44) {
    *(int *)(param_1 + 100) = local_44;
  }
  FUN_0160b250(param_1,param_1 + 0x1c98,iVar5);
  FUN_0160b250(param_1,param_1 + 0x38c0,*(undefined4 *)(param_1 + 100));
  return;
}


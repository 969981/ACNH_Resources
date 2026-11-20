
undefined8 FUN_03ef3440(long param_1,long *param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *local_60;
  long local_58;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x2e0);
  if (*(int *)(*(long *)(param_1 + 0x20) + 0x2d8) != 0 && lVar4 != 0) {
    uVar7 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar4 = lVar4 + uVar7 * 0x758;
      plVar6 = (long *)(lVar4 + 0x90);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      local_58 = *(long *)(lVar4 + 0x98);
      local_60 = puVar1;
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = param_2[1];
      (**(code **)(local_60 + 0x18))(&local_60);
      if (lVar4 == local_58) {
LAB_03ef358c:
        if ((int)uVar7 < *(int *)(param_1 + 0x30)) {
          *(int *)(param_1 + 0x2c) = (int)uVar7;
          return 1;
        }
        return 0;
      }
      uVar5 = 0;
      bVar3 = true;
      do {
        lVar4 = param_2[1] + 2 + uVar5;
        cVar2 = *(char *)(lVar4 + -2);
        if (cVar2 != *(char *)(local_58 + uVar5)) break;
        if (cVar2 == '\0') {
          if (bVar3) goto LAB_03ef358c;
          break;
        }
        cVar2 = *(char *)(lVar4 + -1);
        if (cVar2 != *(char *)(local_58 + uVar5 + 1)) break;
        if (cVar2 == '\0') goto LAB_03ef358c;
        cVar2 = *(char *)(param_2[1] + 2 + uVar5);
        if (cVar2 != *(char *)(local_58 + uVar5 + 2)) break;
        if (cVar2 == '\0') goto LAB_03ef358c;
        bVar3 = uVar5 < 0x7fffe;
        uVar5 = uVar5 + 3;
      } while (uVar5 != 0x80001);
      uVar7 = uVar7 + 1;
      lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x2e0);
    } while (uVar7 < *(uint *)(*(long *)(param_1 + 0x20) + 0x2d8) && lVar4 != 0);
  }
  return 0;
}


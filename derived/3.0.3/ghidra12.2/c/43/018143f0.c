
long * FUN_018143f0(long *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  
  local_65 = 0;
  local_88 = 0x20;
  local_90 = local_84;
  local_84[0] = 0;
  local_98 = PTR_DAT_04bb2028 + 0x10;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&local_98);
  plVar10 = (long *)param_1[5];
  if (((*PTR_DAT_04bbe618 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbe618), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bbe610 = PTR_DAT_04bb5e78 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbe618);
  }
  if (((plVar10 == (long *)0x0) ||
      (uVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,PTR_DAT_04bbe610), (uVar7 & 1) == 0)) ||
     (uVar2 = *(uint *)(plVar10 + 0x87), uVar2 == 0)) {
    plVar11 = (long *)FUN_01818790(param_1);
  }
  else {
    uVar7 = 0;
    bVar4 = true;
    while( true ) {
      if (uVar7 < *(uint *)(plVar10 + 0x83)) {
        plVar11 = *(long **)(plVar10[0x84] + uVar7 * 8);
      }
      else {
        plVar11 = (long *)0x0;
      }
      plVar8 = (long *)(**(code **)(plVar11[6] + 0xf0))();
      (**(code **)(*plVar8 + 0x18))();
      (**(code **)(*plVar8 + 0x18))(plVar8);
      puVar12 = (undefined1 *)plVar8[1];
      (**(code **)(local_98 + 0x18))(&local_98);
      if (puVar12 == local_90) break;
      uVar9 = 0;
      bVar5 = true;
      do {
        lVar1 = plVar8[1] + 2 + uVar9;
        cVar3 = *(char *)(lVar1 + -2);
        if (cVar3 != local_90[uVar9]) break;
        if (cVar3 == '\0') {
          if (bVar5) goto LAB_018145bc;
          break;
        }
        cVar3 = *(char *)(lVar1 + -1);
        if (cVar3 != local_90[uVar9 + 1]) break;
        if (cVar3 == '\0') goto LAB_018145bc;
        cVar3 = *(char *)(plVar8[1] + 2 + uVar9);
        if (cVar3 != local_90[uVar9 + 2]) break;
        if (cVar3 == '\0') goto LAB_018145bc;
        bVar5 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      uVar7 = uVar7 + 1;
      bVar4 = uVar7 < uVar2;
      if (uVar7 == uVar2) break;
    }
LAB_018145bc:
    if (!bVar4) {
      plVar11 = plVar10 + 0xe8;
    }
  }
  return plVar11;
}

